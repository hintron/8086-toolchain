//
// main.cpp: Starting point for Emu86 simulator.
//
//////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdarg.h>

#include <stdlib.h>

#include "SimControl.h"
#include "Help.h"

#include "x86emu/x86emui.h"

// Simulator class
CSimControl SimControl;

// The following is a peice of error output code for the SciTech simulator (it was copied from validate.c)
// The code has been modified so that it is only called when the SciTech code is in debug mode. - WSF
void printk(const char *fmt, ...)
{
    va_list argptr;
    va_start(argptr, fmt);
    vfprintf(stdout, fmt, argptr);
    fflush(stdout);
    va_end(argptr);
}


#ifdef TERMIOS_CONSOLE
void closeConio(void);
#endif

static const char *usage =
"Usage: emu86 [OPTIONS]\n";

static const char *help = 
"\n"
"Welcome to the BYU ECEn 425 8086 emulator.\n"
"\n"
"OPTIONS:\n"
"  <file> : The file to run on the emulator. Equivalent to the 'l <file>'\n"
"           command once inside the emulator.\n"
"  -c <commands> : A ;-delimited string of commands to run on startup.\n"
"  -s <script_file> : A text file of newline-delimited emulator commands to\n"
"                     run on startup. Supports # and // comments at the\n"
"                     beginning of the line.\n"
"  -l : List emu86 commands. Equivalent to `h` or `?` in the emulator.\n"
"  -r : List x86 register descriptions. Equivalent to `regs` in the emulator.\n"
"  -h|--help : Print this help message.\n"
;

static void _print_usage() {
	printf("%s", usage);
}

static void _print_help() {
	printf("%s%s", usage, help);
}

int main(int argc, char *argv[])
{	
	bool status;
	int rc;
	int arg_index = 1;
	char *loadBin = NULL;
	char *scriptFile = NULL;
	char *inlineCmdStr = NULL;

	while (arg_index < argc) {
		if ((!strcmp(argv[arg_index], "-h")) ||
		    (!strcmp(argv[arg_index], "--help"))) {
			_print_help();
			return 0;
		} else if (!strcmp(argv[arg_index], "-l")) {
			printf(HelpMessage);
			return 0;
		} else if (!strcmp(argv[arg_index], "-r")) {
			printf(RegisterDescription);
			return 0;
		} else if (!strcmp(argv[arg_index], "-s")) {
			arg_index++;
			if (scriptFile) {
				printf("ERROR: Script file was already specified once\n\n");
				_print_usage();
				return 1;
			}
			scriptFile = argv[arg_index];
		} else if (!strcmp(argv[arg_index], "-c")) {
			arg_index++;
			inlineCmdStr = argv[arg_index];
		} else if (!loadBin) {
			// Assume bare arg is a binary file for emu86 to load
			loadBin = argv[arg_index];
		} else {
			printf("ERROR: Unknown argument '%s'; "
				   "<file> already specified as '%s'\n\n",
				   argv[arg_index], loadBin);
			_print_usage();
			return 1;
		}

		arg_index++;
	}

	// Initialize simulator
	status = SimControl.InitSim(argv[0]);
	if(!status) return 1;

	// Begin main execution loop
	rc = SimControl.ExecLoop(loadBin, scriptFile, inlineCmdStr);

#ifdef TERMIOS_CONSOLE
	/*
		The following is a bit of a hack. This call is in the destructor for SimControl, but for some reason, isn't
		getting called on the UNIX version. This is a quick fix. Neglecting this call causes keyboard echo to be
		turned off when using bash after exiting.
	*/
	closeConio();
#endif

	return rc;
}

