// Reproducer of blocking to non-blocking bug in emu86
//
// The problem is that Conio.cpp -> extendedKeyPress() will try to temporarily
// set getchar() to non-blocking in order to handle parsing escape sequences.
// Conio will first initialize the terminal into a raw/non-canonical mode in
// order to process things character by character. VMIN will be set to 1 and
// VTIME will be set to 0. Then, after the escape key is detected,
// extendedKeyPress() will set VMIN to 0. VMIN==0 and VTIME==0 mean that all
// OS reads will be non-blocking, returning 0. This translates into libc's
// getchar() being non-blocking and always returning EOF (-1).
// 
// The problem/bug is that when VMIN is set back to 1, this non-blocking
// behavior remains. It appears to be a glibc problem where glibc is
// smart enough to change stdin reads from blocking to non-blocking when VMIN is
// set to 0, but when it is set back to 1, it doesn't know how to set it back to
// blocking. The Linux API's read() command respects when VMIN is set back to 1,
// but glibc doesn't.

// Build command:
//     gcc -m32 emulator/reproducer.cpp 

// To reproduce:
//    ./a.out
//    Type 20 characters to trigger setting from blocking to non-blocking.

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <sys/select.h>


static struct termios stored_settings;
static void _restore() {
	// Set terminal to raw mode
	tcsetattr(STDIN_FILENO, TCSANOW, &stored_settings);
	printf("Restored terminal\n");
}

// #define USE_LIBC false
#define USE_LIBC true

// Use getchar() from libc or do an equivalent read using the Linux API.
// Let's see if we get similar behavior. If so, then we can't blame libc.
static int _getchar_wrapper() {
	if (USE_LIBC) {
		// Use getchar() from libc
		return getchar();
	} else {
		// Use a getchar() equivalent using the Linux API directly (thanks,
		// ChatGPT!)
		char c;
		if (read(0, &c, 1) == 1)
			return (int)c;
		else
			return EOF;
	}
}

int main() {
	int count = 0;
	bool non_blocking = false;
	struct termios new_settings;
	fd_set stdin_wait_set;

	// Restore the terminal to the original state, even on ctrl-C
	atexit(_restore);

	FD_ZERO(&stdin_wait_set);
	FD_SET(STDIN_FILENO, &stdin_wait_set);
	tcgetattr(STDIN_FILENO, &stored_settings);

	// Set terminal to raw mode
	tcgetattr(STDIN_FILENO, &new_settings);
	new_settings.c_lflag &= (~ECHO);
	new_settings.c_lflag &= (~ICANON);
	new_settings.c_cc[VTIME] = 0;
	new_settings.c_cc[VMIN] = 1;
	tcsetattr(STDIN_FILENO, TCSANOW, &new_settings);

	int a = 0;
	*(int *)a;

	while(true) {
		int c = _getchar_wrapper();
		count++;

		printf("char = %x\n", c);
		if (c == EOF) {
			// printf("%d: getchar returned EOF (-1)\n", count);
			// if (count > 100000000) {
			if (count > 50) {
				printf("Turning getchar back to blocking\n");

				new_settings.c_cc[VMIN] = 1;
				tcsetattr(STDIN_FILENO, TCSANOW, &new_settings);
				// Alternatively, restore to original terminal settings.
				// getchar() is still non-blocking, even in canonical mode!
				// _restore();

				non_blocking = false;
				count = 0;
				
				// Closing stdin doesn't seem to "reset" it
				// close(STDIN_FILENO);

				// BUG/ERROR: Even after resetting VMIN back to 1, getchar is
				// still non-blocking!
			}
			continue;
		}
		
		if (c == 'q') {
			break;
		}

		if (non_blocking == false && count >= 20) {
			non_blocking = true;
			printf("Turning getchar to non-blocking\n");
			new_settings.c_cc[VMIN] = 0;
			tcsetattr(STDIN_FILENO, TCSANOW, &new_settings);
		}
	}
}
