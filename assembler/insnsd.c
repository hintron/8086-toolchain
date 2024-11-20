/* This file auto-generated from insns.dat by insns.pl - don't edit it */

#include "nasm.h"
#include "insns.h"

static struct itemplate instrux[] = {
    {I_AAA, 0, {0,0,0}, "\1\x37", IF_8086},
    {I_AAD, 0, {0,0,0}, "\2\xD5\x0A", IF_8086},
    {I_AAD, 1, {IMMEDIATE,0,0}, "\1\xD5\24", IF_8086|IF_SB},
    {I_AAM, 0, {0,0,0}, "\2\xD4\x0A", IF_8086},
    {I_AAM, 1, {IMMEDIATE,0,0}, "\1\xD4\24", IF_8086|IF_SB},
    {I_AAS, 0, {0,0,0}, "\1\x3F", IF_8086},
    {I_ADC, 2, {MEMORY,REG8,0}, "\300\1\x10\101", IF_8086|IF_SM},
    {I_ADC, 2, {REG8,REG8,0}, "\1\x10\101", IF_8086},
    {I_ADC, 2, {MEMORY,REG16,0}, "\320\300\1\x11\101", IF_8086|IF_SM},
    {I_ADC, 2, {REG16,REG16,0}, "\320\1\x11\101", IF_8086},
    {I_ADC, 2, {REG8,MEMORY,0}, "\301\1\x12\110", IF_8086|IF_SM},
    {I_ADC, 2, {REG8,REG8,0}, "\1\x12\110", IF_8086},
    {I_ADC, 2, {REG16,MEMORY,0}, "\320\301\1\x13\110", IF_8086|IF_SM},
    {I_ADC, 2, {REG16,REG16,0}, "\320\1\x13\110", IF_8086},
    {I_ADC, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\202\15", IF_8086},
    {I_ADC, 2, {REG_AL,IMMEDIATE,0}, "\1\x14\21", IF_8086|IF_SM},
    {I_ADC, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x15\31", IF_8086|IF_SM},
    {I_ADC, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\202\21", IF_8086|IF_SM},
    {I_ADC, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\202\131", IF_8086|IF_SM},
    {I_ADC, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\202\21", IF_8086|IF_SM},
    {I_ADC, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\202\131", IF_8086|IF_SM},
    {I_ADD, 2, {MEMORY,REG8,0}, "\300\17\101", IF_8086|IF_SM},
    {I_ADD, 2, {REG8,REG8,0}, "\17\101", IF_8086},
    {I_ADD, 2, {MEMORY,REG16,0}, "\320\300\1\x01\101", IF_8086|IF_SM},
    {I_ADD, 2, {REG16,REG16,0}, "\320\1\x01\101", IF_8086},
    {I_ADD, 2, {REG8,MEMORY,0}, "\301\1\x02\110", IF_8086|IF_SM},
    {I_ADD, 2, {REG8,REG8,0}, "\1\x02\110", IF_8086},
    {I_ADD, 2, {REG16,MEMORY,0}, "\320\301\1\x03\110", IF_8086|IF_SM},
    {I_ADD, 2, {REG16,REG16,0}, "\320\1\x03\110", IF_8086},
    {I_ADD, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\200\15", IF_8086},
    {I_ADD, 2, {REG_AL,IMMEDIATE,0}, "\1\x04\21", IF_8086|IF_SM},
    {I_ADD, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x05\31", IF_8086|IF_SM},
    {I_ADD, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\200\21", IF_8086|IF_SM},
    {I_ADD, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\200\131", IF_8086|IF_SM},
    {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\200\21", IF_8086|IF_SM},
    {I_ADD, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\200\131", IF_8086|IF_SM},
    {I_AND, 2, {MEMORY,REG8,0}, "\300\1\x20\101", IF_8086|IF_SM},
    {I_AND, 2, {REG8,REG8,0}, "\1\x20\101", IF_8086},
    {I_AND, 2, {MEMORY,REG16,0}, "\320\300\1\x21\101", IF_8086|IF_SM},
    {I_AND, 2, {REG16,REG16,0}, "\320\1\x21\101", IF_8086},
    {I_AND, 2, {REG8,MEMORY,0}, "\301\1\x22\110", IF_8086|IF_SM},
    {I_AND, 2, {REG8,REG8,0}, "\1\x22\110", IF_8086},
    {I_AND, 2, {REG16,MEMORY,0}, "\320\301\1\x23\110", IF_8086|IF_SM},
    {I_AND, 2, {REG16,REG16,0}, "\320\1\x23\110", IF_8086},
    {I_AND, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\204\15", IF_8086},
    {I_AND, 2, {REG_AL,IMMEDIATE,0}, "\1\x24\21", IF_8086|IF_SM},
    {I_AND, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x25\31", IF_8086|IF_SM},
    {I_AND, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\204\21", IF_8086|IF_SM},
    {I_AND, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\204\131", IF_8086|IF_SM},
    {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\204\21", IF_8086|IF_SM},
    {I_AND, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\204\131", IF_8086|IF_SM},
    {I_CALL, 1, {IMMEDIATE,0,0}, "\322\1\xE8\64", IF_8086},
    {I_CALL, 1, {IMMEDIATE|NEAR,0,0}, "\322\1\xE8\64", IF_8086},
    {I_CALL, 1, {IMMEDIATE|BITS16,0,0}, "\320\1\xE8\64", IF_8086},
    {I_CALL, 1, {IMMEDIATE|BITS16|NEAR,0,0}, "\320\1\xE8\64", IF_8086},
    {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE,0}, "\322\1\x9A\35\30", IF_8086},
    {I_CALL, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0}, "\320\1\x9A\31\30", IF_8086},
    {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0}, "\320\1\x9A\31\30", IF_8086},
    {I_CALL, 1, {MEMORY|FAR,0,0}, "\322\300\1\xFF\203", IF_8086},
    {I_CALL, 1, {MEMORY|BITS16|FAR,0,0}, "\320\300\1\xFF\203", IF_8086},
    {I_CALL, 1, {MEMORY|NEAR,0,0}, "\322\300\1\xFF\202", IF_8086},
    {I_CALL, 1, {MEMORY|BITS16|NEAR,0,0}, "\320\300\1\xFF\202", IF_8086},
    {I_CALL, 1, {REG16,0,0}, "\320\300\1\xFF\202", IF_8086},
    {I_CALL, 1, {MEMORY,0,0}, "\322\300\1\xFF\202", IF_8086},
    {I_CALL, 1, {MEMORY|BITS16,0,0}, "\320\300\1\xFF\202", IF_8086},
    {I_CBW, 0, {0,0,0}, "\320\1\x98", IF_8086},
    {I_CLC, 0, {0,0,0}, "\1\xF8", IF_8086},
    {I_CLD, 0, {0,0,0}, "\1\xFC", IF_8086},
    {I_CLI, 0, {0,0,0}, "\1\xFA", IF_8086},
    {I_CMC, 0, {0,0,0}, "\1\xF5", IF_8086},
    {I_CMP, 2, {MEMORY,REG8,0}, "\300\1\x38\101", IF_8086|IF_SM},
    {I_CMP, 2, {REG8,REG8,0}, "\1\x38\101", IF_8086},
    {I_CMP, 2, {MEMORY,REG16,0}, "\320\300\1\x39\101", IF_8086|IF_SM},
    {I_CMP, 2, {REG16,REG16,0}, "\320\1\x39\101", IF_8086},
    {I_CMP, 2, {REG8,MEMORY,0}, "\301\1\x3A\110", IF_8086|IF_SM},
    {I_CMP, 2, {REG8,REG8,0}, "\1\x3A\110", IF_8086},
    {I_CMP, 2, {REG16,MEMORY,0}, "\320\301\1\x3B\110", IF_8086|IF_SM},
    {I_CMP, 2, {REG16,REG16,0}, "\320\1\x3B\110", IF_8086},
    {I_CMP, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\207\15", IF_8086},
    {I_CMP, 2, {REG_AL,IMMEDIATE,0}, "\1\x3C\21", IF_8086|IF_SM},
    {I_CMP, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x3D\31", IF_8086|IF_SM},
    {I_CMP, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\207\21", IF_8086|IF_SM},
    {I_CMP, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\207\131", IF_8086|IF_SM},
    {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\207\21", IF_8086|IF_SM},
    {I_CMP, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\207\131", IF_8086|IF_SM},
    {I_CMPSB, 0, {0,0,0}, "\332\1\xA6", IF_8086},
    {I_CMPSW, 0, {0,0,0}, "\332\320\1\xA7", IF_8086},
    {I_CWD, 0, {0,0,0}, "\320\1\x99", IF_8086},
    {I_DAA, 0, {0,0,0}, "\1\x27", IF_8086},
    {I_DAS, 0, {0,0,0}, "\1\x2F", IF_8086},
    {I_DEC, 1, {REG16,0,0}, "\320\10\x48", IF_8086},
    {I_DEC, 1, {REGMEM|BITS8,0,0}, "\300\1\xFE\201", IF_8086},
    {I_DEC, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xFF\201", IF_8086},
    {I_DIV, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\206", IF_8086},
    {I_DIV, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\206", IF_8086},
    {I_EQU, 1, {IMMEDIATE,0,0}, "\0", IF_8086},
    {I_EQU, 2, {IMMEDIATE|COLON,IMMEDIATE,0}, "\0", IF_8086},
    {I_F2XM1, 0, {0,0,0}, "\2\xD9\xF0", IF_8086|IF_FPU},
    {I_FABS, 0, {0,0,0}, "\2\xD9\xE1", IF_8086|IF_FPU},
    {I_FADD, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\200", IF_8086|IF_FPU},
    {I_FADD, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\200", IF_8086|IF_FPU},
    {I_FADD, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xC0", IF_8086|IF_FPU},
    {I_FADD, 1, {FPUREG,0,0}, "\1\xD8\10\xC0", IF_8086|IF_FPU},
    {I_FADD, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xC0", IF_8086|IF_FPU},
    {I_FADD, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xC0", IF_8086|IF_FPU},
    {I_FADDP, 1, {FPUREG,0,0}, "\1\xDE\10\xC0", IF_8086|IF_FPU},
    {I_FADDP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xC0", IF_8086|IF_FPU},
    {I_FBLD, 1, {MEMORY|BITS80,0,0}, "\300\1\xDF\204", IF_8086|IF_FPU},
    {I_FBLD, 1, {MEMORY,0,0}, "\300\1\xDF\204", IF_8086|IF_FPU},
    {I_FBSTP, 1, {MEMORY|BITS80,0,0}, "\300\1\xDF\206", IF_8086|IF_FPU},
    {I_FBSTP, 1, {MEMORY,0,0}, "\300\1\xDF\206", IF_8086|IF_FPU},
    {I_FCHS, 0, {0,0,0}, "\2\xD9\xE0", IF_8086|IF_FPU},
    {I_FCLEX, 0, {0,0,0}, "\3\x9B\xDB\xE2", IF_8086|IF_FPU},
    {I_FCOM, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\202", IF_8086|IF_FPU},
    {I_FCOM, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\202", IF_8086|IF_FPU},
    {I_FCOM, 1, {FPUREG,0,0}, "\1\xD8\10\xD0", IF_8086|IF_FPU},
    {I_FCOM, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xD0", IF_8086|IF_FPU},
    {I_FCOMP, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\203", IF_8086|IF_FPU},
    {I_FCOMP, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\203", IF_8086|IF_FPU},
    {I_FCOMP, 1, {FPUREG,0,0}, "\1\xD8\10\xD8", IF_8086|IF_FPU},
    {I_FCOMP, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xD8", IF_8086|IF_FPU},
    {I_FCOMPP, 0, {0,0,0}, "\2\xDE\xD9", IF_8086|IF_FPU},
    {I_FDECSTP, 0, {0,0,0}, "\2\xD9\xF6", IF_8086|IF_FPU},
    {I_FDISI, 0, {0,0,0}, "\3\x9B\xDB\xE1", IF_8086|IF_FPU},
    {I_FDIV, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\206", IF_8086|IF_FPU},
    {I_FDIV, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\206", IF_8086|IF_FPU},
    {I_FDIV, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xF8", IF_8086|IF_FPU},
    {I_FDIV, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xF8", IF_8086|IF_FPU},
    {I_FDIV, 1, {FPUREG,0,0}, "\1\xD8\10\xF0", IF_8086|IF_FPU},
    {I_FDIV, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xF0", IF_8086|IF_FPU},
    {I_FDIVP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xF8", IF_8086|IF_FPU},
    {I_FDIVP, 1, {FPUREG,0,0}, "\1\xDE\10\xF8", IF_8086|IF_FPU},
    {I_FDIVR, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\207", IF_8086|IF_FPU},
    {I_FDIVR, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\207", IF_8086|IF_FPU},
    {I_FDIVR, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xF0", IF_8086|IF_FPU},
    {I_FDIVR, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xF0", IF_8086|IF_FPU},
    {I_FDIVR, 1, {FPUREG,0,0}, "\1\xD8\10\xF8", IF_8086|IF_FPU},
    {I_FDIVR, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xF8", IF_8086|IF_FPU},
    {I_FDIVRP, 1, {FPUREG,0,0}, "\1\xDE\10\xF0", IF_8086|IF_FPU},
    {I_FDIVRP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xF0", IF_8086|IF_FPU},
    {I_FENI, 0, {0,0,0}, "\3\x9B\xDB\xE0", IF_8086|IF_FPU},
    {I_FFREE, 1, {FPUREG,0,0}, "\1\xDD\10\xC0", IF_8086|IF_FPU},
    {I_FIADD, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\200", IF_8086|IF_FPU},
    {I_FIADD, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\200", IF_8086|IF_FPU},
    {I_FICOM, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\202", IF_8086|IF_FPU},
    {I_FICOM, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\202", IF_8086|IF_FPU},
    {I_FICOMP, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\203", IF_8086|IF_FPU},
    {I_FICOMP, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\203", IF_8086|IF_FPU},
    {I_FIDIV, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\206", IF_8086|IF_FPU},
    {I_FIDIV, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\206", IF_8086|IF_FPU},
    {I_FIDIVR, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\207", IF_8086|IF_FPU},
    {I_FIDIVR, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\207", IF_8086|IF_FPU},
    {I_FILD, 1, {MEMORY|BITS32,0,0}, "\300\1\xDB\200", IF_8086|IF_FPU},
    {I_FILD, 1, {MEMORY|BITS16,0,0}, "\300\1\xDF\200", IF_8086|IF_FPU},
    {I_FILD, 1, {MEMORY|BITS64,0,0}, "\300\1\xDF\205", IF_8086|IF_FPU},
    {I_FIMUL, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\201", IF_8086|IF_FPU},
    {I_FIMUL, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\201", IF_8086|IF_FPU},
    {I_FINCSTP, 0, {0,0,0}, "\2\xD9\xF7", IF_8086|IF_FPU},
    {I_FINIT, 0, {0,0,0}, "\3\x9B\xDB\xE3", IF_8086|IF_FPU},
    {I_FIST, 1, {MEMORY|BITS32,0,0}, "\300\1\xDB\202", IF_8086|IF_FPU},
    {I_FIST, 1, {MEMORY|BITS16,0,0}, "\300\1\xDF\202", IF_8086|IF_FPU},
    {I_FISTP, 1, {MEMORY|BITS32,0,0}, "\300\1\xDB\203", IF_8086|IF_FPU},
    {I_FISTP, 1, {MEMORY|BITS16,0,0}, "\300\1\xDF\203", IF_8086|IF_FPU},
    {I_FISTP, 1, {MEMORY|BITS64,0,0}, "\300\1\xDF\207", IF_8086|IF_FPU},
    {I_FISUB, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\204", IF_8086|IF_FPU},
    {I_FISUB, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\204", IF_8086|IF_FPU},
    {I_FISUBR, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\205", IF_8086|IF_FPU},
    {I_FISUBR, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\205", IF_8086|IF_FPU},
    {I_FLD, 1, {MEMORY|BITS32,0,0}, "\300\1\xD9\200", IF_8086|IF_FPU},
    {I_FLD, 1, {MEMORY|BITS64,0,0}, "\300\1\xDD\200", IF_8086|IF_FPU},
    {I_FLD, 1, {MEMORY|BITS80,0,0}, "\300\1\xDB\205", IF_8086|IF_FPU},
    {I_FLD, 1, {FPUREG,0,0}, "\1\xD9\10\xC0", IF_8086|IF_FPU},
    {I_FLD1, 0, {0,0,0}, "\2\xD9\xE8", IF_8086|IF_FPU},
    {I_FLDCW, 1, {MEMORY,0,0}, "\300\1\xD9\205", IF_8086|IF_FPU|IF_SW},
    {I_FLDENV, 1, {MEMORY,0,0}, "\300\1\xD9\204", IF_8086|IF_FPU},
    {I_FLDL2E, 0, {0,0,0}, "\2\xD9\xEA", IF_8086|IF_FPU},
    {I_FLDL2T, 0, {0,0,0}, "\2\xD9\xE9", IF_8086|IF_FPU},
    {I_FLDLG2, 0, {0,0,0}, "\2\xD9\xEC", IF_8086|IF_FPU},
    {I_FLDLN2, 0, {0,0,0}, "\2\xD9\xED", IF_8086|IF_FPU},
    {I_FLDPI, 0, {0,0,0}, "\2\xD9\xEB", IF_8086|IF_FPU},
    {I_FLDZ, 0, {0,0,0}, "\2\xD9\xEE", IF_8086|IF_FPU},
    {I_FMUL, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\201", IF_8086|IF_FPU},
    {I_FMUL, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\201", IF_8086|IF_FPU},
    {I_FMUL, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xC8", IF_8086|IF_FPU},
    {I_FMUL, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xC8", IF_8086|IF_FPU},
    {I_FMUL, 1, {FPUREG,0,0}, "\1\xD8\10\xC8", IF_8086|IF_FPU},
    {I_FMUL, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xC8", IF_8086|IF_FPU},
    {I_FMULP, 1, {FPUREG,0,0}, "\1\xDE\10\xC8", IF_8086|IF_FPU},
    {I_FMULP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xC8", IF_8086|IF_FPU},
    {I_FNCLEX, 0, {0,0,0}, "\2\xDB\xE2", IF_8086|IF_FPU},
    {I_FNDISI, 0, {0,0,0}, "\2\xDB\xE1", IF_8086|IF_FPU},
    {I_FNENI, 0, {0,0,0}, "\2\xDB\xE0", IF_8086|IF_FPU},
    {I_FNINIT, 0, {0,0,0}, "\2\xDB\xE3", IF_8086|IF_FPU},
    {I_FNOP, 0, {0,0,0}, "\2\xD9\xD0", IF_8086|IF_FPU},
    {I_FNSAVE, 1, {MEMORY,0,0}, "\300\1\xDD\206", IF_8086|IF_FPU},
    {I_FNSTCW, 1, {MEMORY,0,0}, "\300\1\xD9\207", IF_8086|IF_FPU|IF_SW},
    {I_FNSTENV, 1, {MEMORY,0,0}, "\300\1\xD9\206", IF_8086|IF_FPU},
    {I_FNSTSW, 1, {MEMORY,0,0}, "\300\1\xDD\207", IF_8086|IF_FPU|IF_SW},
    {I_FPATAN, 0, {0,0,0}, "\2\xD9\xF3", IF_8086|IF_FPU},
    {I_FPREM, 0, {0,0,0}, "\2\xD9\xF8", IF_8086|IF_FPU},
    {I_FPTAN, 0, {0,0,0}, "\2\xD9\xF2", IF_8086|IF_FPU},
    {I_FRNDINT, 0, {0,0,0}, "\2\xD9\xFC", IF_8086|IF_FPU},
    {I_FRSTOR, 1, {MEMORY,0,0}, "\300\1\xDD\204", IF_8086|IF_FPU},
    {I_FSAVE, 1, {MEMORY,0,0}, "\300\2\x9B\xDD\206", IF_8086|IF_FPU},
    {I_FSCALE, 0, {0,0,0}, "\2\xD9\xFD", IF_8086|IF_FPU},
    {I_FSQRT, 0, {0,0,0}, "\2\xD9\xFA", IF_8086|IF_FPU},
    {I_FST, 1, {MEMORY|BITS32,0,0}, "\300\1\xD9\202", IF_8086|IF_FPU},
    {I_FST, 1, {MEMORY|BITS64,0,0}, "\300\1\xDD\202", IF_8086|IF_FPU},
    {I_FST, 1, {FPUREG,0,0}, "\1\xDD\10\xD0", IF_8086|IF_FPU},
    {I_FSTCW, 1, {MEMORY,0,0}, "\300\2\x9B\xD9\207", IF_8086|IF_FPU|IF_SW},
    {I_FSTENV, 1, {MEMORY,0,0}, "\300\2\x9B\xD9\206", IF_8086|IF_FPU},
    {I_FSTP, 1, {MEMORY|BITS32,0,0}, "\300\1\xD9\203", IF_8086|IF_FPU},
    {I_FSTP, 1, {MEMORY|BITS64,0,0}, "\300\1\xDD\203", IF_8086|IF_FPU},
    {I_FSTP, 1, {MEMORY|BITS80,0,0}, "\300\1\xDB\207", IF_8086|IF_FPU},
    {I_FSTP, 1, {FPUREG,0,0}, "\1\xDD\10\xD8", IF_8086|IF_FPU},
    {I_FSTSW, 1, {MEMORY,0,0}, "\300\2\x9B\xDD\207", IF_8086|IF_FPU|IF_SW},
    {I_FSUB, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\204", IF_8086|IF_FPU},
    {I_FSUB, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\204", IF_8086|IF_FPU},
    {I_FSUB, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xE8", IF_8086|IF_FPU},
    {I_FSUB, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xE8", IF_8086|IF_FPU},
    {I_FSUB, 1, {FPUREG,0,0}, "\1\xD8\10\xE0", IF_8086|IF_FPU},
    {I_FSUB, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xE0", IF_8086|IF_FPU},
    {I_FSUBP, 1, {FPUREG,0,0}, "\1\xDE\10\xE8", IF_8086|IF_FPU},
    {I_FSUBP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xE8", IF_8086|IF_FPU},
    {I_FSUBR, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\205", IF_8086|IF_FPU},
    {I_FSUBR, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\205", IF_8086|IF_FPU},
    {I_FSUBR, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xE0", IF_8086|IF_FPU},
    {I_FSUBR, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xE0", IF_8086|IF_FPU},
    {I_FSUBR, 1, {FPUREG,0,0}, "\1\xD8\10\xE8", IF_8086|IF_FPU},
    {I_FSUBR, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xE8", IF_8086|IF_FPU},
    {I_FSUBRP, 1, {FPUREG,0,0}, "\1\xDE\10\xE0", IF_8086|IF_FPU},
    {I_FSUBRP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xE0", IF_8086|IF_FPU},
    {I_FTST, 0, {0,0,0}, "\2\xD9\xE4", IF_8086|IF_FPU},
    {I_FXAM, 0, {0,0,0}, "\2\xD9\xE5", IF_8086|IF_FPU},
    {I_FXCH, 0, {0,0,0}, "\2\xD9\xC9", IF_8086|IF_FPU},
    {I_FXCH, 1, {FPUREG,0,0}, "\1\xD9\10\xC8", IF_8086|IF_FPU},
    {I_FXCH, 2, {FPUREG,FPU0,0}, "\1\xD9\10\xC8", IF_8086|IF_FPU},
    {I_FXCH, 2, {FPU0,FPUREG,0}, "\1\xD9\11\xC8", IF_8086|IF_FPU},
    {I_FXTRACT, 0, {0,0,0}, "\2\xD9\xF4", IF_8086|IF_FPU},
    {I_FYL2X, 0, {0,0,0}, "\2\xD9\xF1", IF_8086|IF_FPU},
    {I_FYL2XP1, 0, {0,0,0}, "\2\xD9\xF9", IF_8086|IF_FPU},
    {I_HLT, 0, {0,0,0}, "\1\xF4", IF_8086|IF_PRIV},
    {I_IDIV, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\207", IF_8086},
    {I_IDIV, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\207", IF_8086},
    {I_IMUL, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\205", IF_8086},
    {I_IMUL, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\205", IF_8086},
    {I_IN, 2, {REG_AL,IMMEDIATE,0}, "\1\xE4\25", IF_8086|IF_SB},
    {I_IN, 2, {REG_AX,IMMEDIATE,0}, "\320\1\xE5\25", IF_8086|IF_SB},
    {I_IN, 2, {REG_AL,REG_DX,0}, "\1\xEC", IF_8086},
    {I_IN, 2, {REG_AX,REG_DX,0}, "\320\1\xED", IF_8086},
    {I_INC, 1, {REG16,0,0}, "\320\10\x40", IF_8086},
    {I_INC, 1, {REGMEM|BITS8,0,0}, "\300\1\xFE\200", IF_8086},
    {I_INC, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xFF\200", IF_8086},
    {I_INT, 1, {IMMEDIATE,0,0}, "\1\xCD\24", IF_8086|IF_SB},
    {I_INT3, 0, {0,0,0}, "\1\xCC", IF_8086},
    {I_INTO, 0, {0,0,0}, "\1\xCE", IF_8086},
    {I_IRET, 0, {0,0,0}, "\322\1\xCF", IF_8086},
    {I_IRETW, 0, {0,0,0}, "\320\1\xCF", IF_8086},
    {I_JCXZ, 1, {IMMEDIATE,0,0}, "\310\1\xE3\50", IF_8086},
    {I_JMP, 1, {IMMEDIATE|SHORT,0,0}, "\1\xEB\50", IF_8086},
    {I_JMP, 1, {IMMEDIATE,0,0}, "\322\1\xE9\64", IF_8086},
    {I_JMP, 1, {IMMEDIATE|BITS16,0,0}, "\320\1\xE9\64", IF_8086},
    {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE,0}, "\322\1\xEA\35\30", IF_8086},
    {I_JMP, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0}, "\320\1\xEA\31\30", IF_8086},
    {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0}, "\320\1\xEA\31\30", IF_8086},
    {I_JMP, 1, {MEMORY|FAR,0,0}, "\322\300\1\xFF\205", IF_8086},
    {I_JMP, 1, {MEMORY|BITS16|FAR,0,0}, "\320\300\1\xFF\205", IF_8086},
    {I_JMP, 1, {MEMORY|NEAR,0,0}, "\322\300\1\xFF\204", IF_8086},
    {I_JMP, 1, {MEMORY|BITS16|NEAR,0,0}, "\320\300\1\xFF\204", IF_8086},
    {I_JMP, 1, {REG16,0,0}, "\320\300\1\xFF\204", IF_8086},
    {I_JMP, 1, {MEMORY,0,0}, "\322\300\1\xFF\204", IF_8086},
    {I_JMP, 1, {MEMORY|BITS16,0,0}, "\320\300\1\xFF\204", IF_8086},
    {I_LAHF, 0, {0,0,0}, "\1\x9F", IF_8086},
    {I_LDS, 2, {REG16,MEMORY,0}, "\320\301\1\xC5\110", IF_8086},
    {I_LEA, 2, {REG16,MEMORY,0}, "\320\301\1\x8D\110", IF_8086},
    {I_LES, 2, {REG16,MEMORY,0}, "\320\301\1\xC4\110", IF_8086},
    {I_LODSB, 0, {0,0,0}, "\1\xAC", IF_8086},
    {I_LODSW, 0, {0,0,0}, "\320\1\xAD", IF_8086},
    {I_LOOP, 1, {IMMEDIATE,0,0}, "\312\1\xE2\50", IF_8086},
    {I_LOOP, 2, {IMMEDIATE,REG_CX,0}, "\310\1\xE2\50", IF_8086},
    {I_LOOPE, 1, {IMMEDIATE,0,0}, "\312\1\xE1\50", IF_8086},
    {I_LOOPE, 2, {IMMEDIATE,REG_CX,0}, "\310\1\xE1\50", IF_8086},
    {I_LOOPNE, 1, {IMMEDIATE,0,0}, "\312\1\xE0\50", IF_8086},
    {I_LOOPNE, 2, {IMMEDIATE,REG_CX,0}, "\310\1\xE0\50", IF_8086},
    {I_LOOPNZ, 1, {IMMEDIATE,0,0}, "\312\1\xE0\50", IF_8086},
    {I_LOOPNZ, 2, {IMMEDIATE,REG_CX,0}, "\310\1\xE0\50", IF_8086},
    {I_LOOPZ, 1, {IMMEDIATE,0,0}, "\312\1\xE1\50", IF_8086},
    {I_LOOPZ, 2, {IMMEDIATE,REG_CX,0}, "\310\1\xE1\50", IF_8086},
    {I_MOV, 2, {MEMORY,REG_SREG,0}, "\300\1\x8C\101", IF_8086|IF_SM},
    {I_MOV, 2, {REG16,REG_SREG,0}, "\320\1\x8C\101", IF_8086},
    {I_MOV, 2, {REG_SREG,MEMORY,0}, "\301\1\x8E\110", IF_8086|IF_SM},
    {I_MOV, 2, {REG_SREG,REG16,0}, "\1\x8E\110", IF_8086},
    {I_MOV, 2, {REG_AL,MEM_OFFS,0}, "\301\1\xA0\45", IF_8086|IF_SM},
    {I_MOV, 2, {REG_AX,MEM_OFFS,0}, "\301\320\1\xA1\45", IF_8086|IF_SM},
    {I_MOV, 2, {MEM_OFFS,REG_AL,0}, "\300\1\xA2\44", IF_8086|IF_SM},
    {I_MOV, 2, {MEM_OFFS,REG_AX,0}, "\300\320\1\xA3\44", IF_8086|IF_SM},
    {I_MOV, 2, {MEMORY,REG8,0}, "\300\1\x88\101", IF_8086|IF_SM},
    {I_MOV, 2, {REG8,REG8,0}, "\1\x88\101", IF_8086},
    {I_MOV, 2, {MEMORY,REG16,0}, "\320\300\1\x89\101", IF_8086|IF_SM},
    {I_MOV, 2, {REG16,REG16,0}, "\320\1\x89\101", IF_8086},
    {I_MOV, 2, {REG8,MEMORY,0}, "\301\1\x8A\110", IF_8086|IF_SM},
    {I_MOV, 2, {REG8,REG8,0}, "\1\x8A\110", IF_8086},
    {I_MOV, 2, {REG16,MEMORY,0}, "\320\301\1\x8B\110", IF_8086|IF_SM},
    {I_MOV, 2, {REG16,REG16,0}, "\320\1\x8B\110", IF_8086},
    {I_MOV, 2, {REG8,IMMEDIATE,0}, "\10\xB0\21", IF_8086|IF_SM},
    {I_MOV, 2, {REG16,IMMEDIATE,0}, "\320\10\xB8\31", IF_8086|IF_SM},
    {I_MOV, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\xC6\200\21", IF_8086|IF_SM},
    {I_MOV, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\1\xC7\200\31", IF_8086|IF_SM},
    {I_MOV, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\xC6\200\21", IF_8086|IF_SM},
    {I_MOV, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\1\xC7\200\31", IF_8086|IF_SM},
    {I_MOVSB, 0, {0,0,0}, "\1\xA4", IF_8086},
    {I_MOVSW, 0, {0,0,0}, "\320\1\xA5", IF_8086},
    {I_MUL, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\204", IF_8086},
    {I_MUL, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\204", IF_8086},
    {I_NEG, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\203", IF_8086},
    {I_NEG, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\203", IF_8086},
    {I_NOP, 0, {0,0,0}, "\1\x90", IF_8086},
    {I_NOT, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\202", IF_8086},
    {I_NOT, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\202", IF_8086},
    {I_OR, 2, {MEMORY,REG8,0}, "\300\1\x08\101", IF_8086|IF_SM},
    {I_OR, 2, {REG8,REG8,0}, "\1\x08\101", IF_8086},
    {I_OR, 2, {MEMORY,REG16,0}, "\320\300\1\x09\101", IF_8086|IF_SM},
    {I_OR, 2, {REG16,REG16,0}, "\320\1\x09\101", IF_8086},
    {I_OR, 2, {REG8,MEMORY,0}, "\301\1\x0A\110", IF_8086|IF_SM},
    {I_OR, 2, {REG8,REG8,0}, "\1\x0A\110", IF_8086},
    {I_OR, 2, {REG16,MEMORY,0}, "\320\301\1\x0B\110", IF_8086|IF_SM},
    {I_OR, 2, {REG16,REG16,0}, "\320\1\x0B\110", IF_8086},
    {I_OR, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\201\15", IF_8086},
    {I_OR, 2, {REG_AL,IMMEDIATE,0}, "\1\x0C\21", IF_8086|IF_SM},
    {I_OR, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x0D\31", IF_8086|IF_SM},
    {I_OR, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\201\21", IF_8086|IF_SM},
    {I_OR, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\201\131", IF_8086|IF_SM},
    {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\201\21", IF_8086|IF_SM},
    {I_OR, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\201\131", IF_8086|IF_SM},
    {I_OUT, 2, {IMMEDIATE,REG_AL,0}, "\1\xE6\24", IF_8086|IF_SB},
    {I_OUT, 2, {IMMEDIATE,REG_AX,0}, "\320\1\xE7\24", IF_8086|IF_SB},
    {I_OUT, 2, {REG_DX,REG_AL,0}, "\1\xEE", IF_8086},
    {I_OUT, 2, {REG_DX,REG_AX,0}, "\320\1\xEF", IF_8086},
    {I_POP, 1, {REG16,0,0}, "\320\10\x58", IF_8086},
    {I_POP, 1, {REGMEM|BITS16,0,0}, "\320\300\1\x8F\200", IF_8086},
    {I_POP, 1, {REG_DESS,0,0}, "\4", IF_8086},
    {I_POPF, 0, {0,0,0}, "\322\1\x9D", IF_8086},
    {I_POPFW, 0, {0,0,0}, "\320\1\x9D", IF_8086},
    {I_PUSH, 1, {REG16,0,0}, "\320\10\x50", IF_8086},
    {I_PUSH, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xFF\206", IF_8086},
    {I_PUSH, 1, {REG_CS,0,0}, "\6", IF_8086},
    {I_PUSH, 1, {REG_DESS,0,0}, "\6", IF_8086},
    {I_PUSHF, 0, {0,0,0}, "\322\1\x9C", IF_8086},
    {I_PUSHFW, 0, {0,0,0}, "\320\1\x9C", IF_8086},
    {I_RCL, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\202", IF_8086},
    {I_RCL, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\202", IF_8086},
    {I_RCL, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\202", IF_8086},
    {I_RCL, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\202", IF_8086},
    {I_RCR, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\203", IF_8086},
    {I_RCR, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\203", IF_8086},
    {I_RCR, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\203", IF_8086},
    {I_RCR, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\203", IF_8086},
    {I_RESB, 1, {IMMEDIATE,0,0}, "\340", IF_8086},
    {I_RET, 0, {0,0,0}, "\1\xC3", IF_8086},
    {I_RET, 1, {IMMEDIATE,0,0}, "\1\xC2\30", IF_8086|IF_SW},
    {I_RETF, 0, {0,0,0}, "\1\xCB", IF_8086},
    {I_RETF, 1, {IMMEDIATE,0,0}, "\1\xCA\30", IF_8086|IF_SW},
    {I_RETN, 0, {0,0,0}, "\1\xC3", IF_8086},
    {I_RETN, 1, {IMMEDIATE,0,0}, "\1\xC2\30", IF_8086|IF_SW},
    {I_ROL, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\200", IF_8086},
    {I_ROL, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\200", IF_8086},
    {I_ROL, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\200", IF_8086},
    {I_ROL, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\200", IF_8086},
    {I_ROR, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\201", IF_8086},
    {I_ROR, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\201", IF_8086},
    {I_ROR, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\201", IF_8086},
    {I_ROR, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\201", IF_8086},
    {I_SAHF, 0, {0,0,0}, "\1\x9E", IF_8086},
    {I_SALC, 0, {0,0,0}, "\1\xD6", IF_8086|IF_UNDOC},
    {I_SAR, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\207", IF_8086},
    {I_SAR, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\207", IF_8086},
    {I_SAR, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\207", IF_8086},
    {I_SAR, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\207", IF_8086},
    {I_SBB, 2, {MEMORY,REG8,0}, "\300\1\x18\101", IF_8086|IF_SM},
    {I_SBB, 2, {REG8,REG8,0}, "\1\x18\101", IF_8086},
    {I_SBB, 2, {MEMORY,REG16,0}, "\320\300\1\x19\101", IF_8086|IF_SM},
    {I_SBB, 2, {REG16,REG16,0}, "\320\1\x19\101", IF_8086},
    {I_SBB, 2, {REG8,MEMORY,0}, "\301\1\x1A\110", IF_8086|IF_SM},
    {I_SBB, 2, {REG8,REG8,0}, "\1\x1A\110", IF_8086},
    {I_SBB, 2, {REG16,MEMORY,0}, "\320\301\1\x1B\110", IF_8086|IF_SM},
    {I_SBB, 2, {REG16,REG16,0}, "\320\1\x1B\110", IF_8086},
    {I_SBB, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\203\15", IF_8086},
    {I_SBB, 2, {REG_AL,IMMEDIATE,0}, "\1\x1C\21", IF_8086|IF_SM},
    {I_SBB, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x1D\31", IF_8086|IF_SM},
    {I_SBB, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\203\21", IF_8086|IF_SM},
    {I_SBB, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\203\131", IF_8086|IF_SM},
    {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\203\21", IF_8086|IF_SM},
    {I_SBB, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\203\131", IF_8086|IF_SM},
    {I_SCASB, 0, {0,0,0}, "\332\1\xAE", IF_8086},
    {I_SCASW, 0, {0,0,0}, "\332\320\1\xAF", IF_8086},
    {I_SHL, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\204", IF_8086},
    {I_SHL, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\204", IF_8086},
    {I_SHL, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\204", IF_8086},
    {I_SHL, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\204", IF_8086},
    {I_SHR, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\205", IF_8086},
    {I_SHR, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\205", IF_8086},
    {I_SHR, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\205", IF_8086},
    {I_SHR, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\205", IF_8086},
    {I_STC, 0, {0,0,0}, "\1\xF9", IF_8086},
    {I_STD, 0, {0,0,0}, "\1\xFD", IF_8086},
    {I_STI, 0, {0,0,0}, "\1\xFB", IF_8086},
    {I_STOSB, 0, {0,0,0}, "\1\xAA", IF_8086},
    {I_STOSW, 0, {0,0,0}, "\320\1\xAB", IF_8086},
    {I_SUB, 2, {MEMORY,REG8,0}, "\300\1\x28\101", IF_8086|IF_SM},
    {I_SUB, 2, {REG8,REG8,0}, "\1\x28\101", IF_8086},
    {I_SUB, 2, {MEMORY,REG16,0}, "\320\300\1\x29\101", IF_8086|IF_SM},
    {I_SUB, 2, {REG16,REG16,0}, "\320\1\x29\101", IF_8086},
    {I_SUB, 2, {REG8,MEMORY,0}, "\301\1\x2A\110", IF_8086|IF_SM},
    {I_SUB, 2, {REG8,REG8,0}, "\1\x2A\110", IF_8086},
    {I_SUB, 2, {REG16,MEMORY,0}, "\320\301\1\x2B\110", IF_8086|IF_SM},
    {I_SUB, 2, {REG16,REG16,0}, "\320\1\x2B\110", IF_8086},
    {I_SUB, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\205\15", IF_8086},
    {I_SUB, 2, {REG_AL,IMMEDIATE,0}, "\1\x2C\21", IF_8086|IF_SM},
    {I_SUB, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x2D\31", IF_8086|IF_SM},
    {I_SUB, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\205\21", IF_8086|IF_SM},
    {I_SUB, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\205\131", IF_8086|IF_SM},
    {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\205\21", IF_8086|IF_SM},
    {I_SUB, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\205\131", IF_8086|IF_SM},
    {I_TEST, 2, {MEMORY,REG8,0}, "\300\1\x84\101", IF_8086|IF_SM},
    {I_TEST, 2, {REG8,REG8,0}, "\1\x84\101", IF_8086},
    {I_TEST, 2, {MEMORY,REG16,0}, "\320\300\1\x85\101", IF_8086|IF_SM},
    {I_TEST, 2, {REG16,REG16,0}, "\320\1\x85\101", IF_8086},
    {I_TEST, 2, {REG8,MEMORY,0}, "\301\1\x84\110", IF_8086|IF_SM},
    {I_TEST, 2, {REG16,MEMORY,0}, "\320\301\1\x85\110", IF_8086|IF_SM},
    {I_TEST, 2, {REG_AL,IMMEDIATE,0}, "\1\xA8\21", IF_8086|IF_SM},
    {I_TEST, 2, {REG_AX,IMMEDIATE,0}, "\320\1\xA9\31", IF_8086|IF_SM},
    {I_TEST, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\xF6\200\21", IF_8086|IF_SM},
    {I_TEST, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\1\xF7\200\31", IF_8086|IF_SM},
    {I_TEST, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\xF6\200\21", IF_8086|IF_SM},
    {I_TEST, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\1\xF7\200\31", IF_8086|IF_SM},
    {I_WAIT, 0, {0,0,0}, "\1\x9B", IF_8086},
    {I_FWAIT, 0, {0,0,0}, "\1\x9B", IF_8086},
    {I_XCHG, 2, {REG_AX,REG16,0}, "\320\11\x90", IF_8086},
    {I_XCHG, 2, {REG16,REG_AX,0}, "\320\10\x90", IF_8086},
    {I_XCHG, 2, {REG8,MEMORY,0}, "\301\1\x86\110", IF_8086|IF_SM},
    {I_XCHG, 2, {REG8,REG8,0}, "\1\x86\110", IF_8086},
    {I_XCHG, 2, {REG16,MEMORY,0}, "\320\301\1\x87\110", IF_8086|IF_SM},
    {I_XCHG, 2, {REG16,REG16,0}, "\320\1\x87\110", IF_8086},
    {I_XCHG, 2, {MEMORY,REG8,0}, "\300\1\x86\101", IF_8086|IF_SM},
    {I_XCHG, 2, {REG8,REG8,0}, "\1\x86\101", IF_8086},
    {I_XCHG, 2, {MEMORY,REG16,0}, "\320\300\1\x87\101", IF_8086|IF_SM},
    {I_XCHG, 2, {REG16,REG16,0}, "\320\1\x87\101", IF_8086},
    {I_XLATB, 0, {0,0,0}, "\1\xD7", IF_8086},
    {I_XLAT, 0, {0,0,0}, "\1\xD7", IF_8086},
    {I_XOR, 2, {MEMORY,REG8,0}, "\300\1\x30\101", IF_8086|IF_SM},
    {I_XOR, 2, {REG8,REG8,0}, "\1\x30\101", IF_8086},
    {I_XOR, 2, {MEMORY,REG16,0}, "\320\300\1\x31\101", IF_8086|IF_SM},
    {I_XOR, 2, {REG16,REG16,0}, "\320\1\x31\101", IF_8086},
    {I_XOR, 2, {REG8,MEMORY,0}, "\301\1\x32\110", IF_8086|IF_SM},
    {I_XOR, 2, {REG8,REG8,0}, "\1\x32\110", IF_8086},
    {I_XOR, 2, {REG16,MEMORY,0}, "\320\301\1\x33\110", IF_8086|IF_SM},
    {I_XOR, 2, {REG16,REG16,0}, "\320\1\x33\110", IF_8086},
    {I_XOR, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\206\15", IF_8086},
    {I_XOR, 2, {REG_AL,IMMEDIATE,0}, "\1\x34\21", IF_8086|IF_SM},
    {I_XOR, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x35\31", IF_8086|IF_SM},
    {I_XOR, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\206\21", IF_8086|IF_SM},
    {I_XOR, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\206\131", IF_8086|IF_SM},
    {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\206\21", IF_8086|IF_SM},
    {I_XOR, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\206\131", IF_8086|IF_SM},
    {I_Jcc, 1, {IMMEDIATE,0,0}, "\330\x70\50", IF_8086},
    ITEMPLATE_END
};

static struct itemplate *itable_00[] = {
    instrux + 29,
    instrux + 30,
    NULL
};

static struct itemplate *itable_01[] = {
    instrux + 31,
    instrux + 32,
    instrux + 33,
    instrux + 34,
    NULL
};

static struct itemplate *itable_02[] = {
    instrux + 35,
    instrux + 36,
    NULL
};

static struct itemplate *itable_03[] = {
    instrux + 37,
    instrux + 38,
    instrux + 39,
    instrux + 40,
    NULL
};

static struct itemplate *itable_04[] = {
    instrux + 43,
    NULL
};

static struct itemplate *itable_05[] = {
    instrux + 44,
    instrux + 45,
    NULL
};

static struct itemplate *itable_06[] = {
    instrux + 773,
    instrux + 774,
    NULL
};

static struct itemplate *itable_07[] = {
    instrux + 705,
    NULL
};

static struct itemplate *itable_08[] = {
    instrux + 573,
    instrux + 574,
    NULL
};

static struct itemplate *itable_09[] = {
    instrux + 575,
    instrux + 576,
    instrux + 577,
    instrux + 578,
    NULL
};

static struct itemplate *itable_0A[] = {
    instrux + 579,
    instrux + 580,
    NULL
};

static struct itemplate *itable_0B[] = {
    instrux + 581,
    instrux + 582,
    instrux + 583,
    instrux + 584,
    NULL
};

static struct itemplate *itable_0C[] = {
    instrux + 587,
    NULL
};

static struct itemplate *itable_0D[] = {
    instrux + 588,
    instrux + 589,
    NULL
};

static struct itemplate *itable_0E[] = {
    instrux + 773,
    instrux + 774,
    NULL
};

static struct itemplate *itable_0F[] = {
    instrux + 79,
    instrux + 80,
    instrux + 81,
    instrux + 82,
    instrux + 83,
    instrux + 84,
    instrux + 85,
    instrux + 86,
    instrux + 87,
    instrux + 88,
    instrux + 89,
    instrux + 90,
    instrux + 91,
    instrux + 92,
    instrux + 93,
    instrux + 94,
    instrux + 95,
    instrux + 96,
    instrux + 97,
    instrux + 98,
    instrux + 99,
    instrux + 100,
    instrux + 101,
    instrux + 102,
    instrux + 103,
    instrux + 104,
    instrux + 105,
    instrux + 106,
    instrux + 107,
    instrux + 108,
    instrux + 109,
    instrux + 110,
    instrux + 111,
    instrux + 139,
    instrux + 167,
    instrux + 168,
    instrux + 169,
    instrux + 170,
    instrux + 171,
    instrux + 172,
    instrux + 173,
    instrux + 174,
    instrux + 175,
    instrux + 176,
    instrux + 177,
    instrux + 178,
    instrux + 179,
    instrux + 180,
    instrux + 193,
    instrux + 261,
    instrux + 386,
    instrux + 387,
    instrux + 388,
    instrux + 389,
    instrux + 420,
    instrux + 421,
    instrux + 447,
    instrux + 448,
    instrux + 449,
    instrux + 450,
    instrux + 451,
    instrux + 453,
    instrux + 454,
    instrux + 455,
    instrux + 456,
    instrux + 464,
    instrux + 465,
    instrux + 466,
    instrux + 467,
    instrux + 468,
    instrux + 469,
    instrux + 470,
    instrux + 471,
    instrux + 472,
    instrux + 473,
    instrux + 474,
    instrux + 475,
    instrux + 476,
    instrux + 477,
    instrux + 496,
    instrux + 497,
    instrux + 498,
    instrux + 499,
    instrux + 500,
    instrux + 501,
    instrux + 502,
    instrux + 503,
    instrux + 504,
    instrux + 517,
    instrux + 518,
    instrux + 519,
    instrux + 520,
    instrux + 521,
    instrux + 522,
    instrux + 544,
    instrux + 545,
    instrux + 546,
    instrux + 547,
    instrux + 548,
    instrux + 549,
    instrux + 550,
    instrux + 551,
    instrux + 555,
    instrux + 556,
    instrux + 557,
    instrux + 558,
    instrux + 559,
    instrux + 560,
    instrux + 561,
    instrux + 562,
    instrux + 605,
    instrux + 606,
    instrux + 607,
    instrux + 608,
    instrux + 609,
    instrux + 610,
    instrux + 611,
    instrux + 612,
    instrux + 613,
    instrux + 614,
    instrux + 615,
    instrux + 616,
    instrux + 617,
    instrux + 618,
    instrux + 619,
    instrux + 620,
    instrux + 621,
    instrux + 622,
    instrux + 623,
    instrux + 624,
    instrux + 625,
    instrux + 626,
    instrux + 627,
    instrux + 628,
    instrux + 629,
    instrux + 630,
    instrux + 631,
    instrux + 632,
    instrux + 633,
    instrux + 634,
    instrux + 635,
    instrux + 636,
    instrux + 637,
    instrux + 638,
    instrux + 639,
    instrux + 640,
    instrux + 641,
    instrux + 642,
    instrux + 643,
    instrux + 644,
    instrux + 645,
    instrux + 646,
    instrux + 647,
    instrux + 648,
    instrux + 649,
    instrux + 650,
    instrux + 651,
    instrux + 652,
    instrux + 653,
    instrux + 654,
    instrux + 655,
    instrux + 656,
    instrux + 657,
    instrux + 658,
    instrux + 659,
    instrux + 660,
    instrux + 661,
    instrux + 662,
    instrux + 663,
    instrux + 664,
    instrux + 665,
    instrux + 666,
    instrux + 667,
    instrux + 668,
    instrux + 669,
    instrux + 670,
    instrux + 671,
    instrux + 672,
    instrux + 673,
    instrux + 674,
    instrux + 675,
    instrux + 676,
    instrux + 677,
    instrux + 678,
    instrux + 679,
    instrux + 680,
    instrux + 681,
    instrux + 682,
    instrux + 683,
    instrux + 684,
    instrux + 685,
    instrux + 686,
    instrux + 687,
    instrux + 688,
    instrux + 689,
    instrux + 690,
    instrux + 691,
    instrux + 692,
    instrux + 693,
    instrux + 694,
    instrux + 695,
    instrux + 696,
    instrux + 697,
    instrux + 698,
    instrux + 699,
    instrux + 700,
    instrux + 706,
    instrux + 713,
    instrux + 714,
    instrux + 715,
    instrux + 716,
    instrux + 717,
    instrux + 718,
    instrux + 719,
    instrux + 720,
    instrux + 721,
    instrux + 722,
    instrux + 723,
    instrux + 724,
    instrux + 725,
    instrux + 726,
    instrux + 727,
    instrux + 728,
    instrux + 729,
    instrux + 730,
    instrux + 731,
    instrux + 732,
    instrux + 733,
    instrux + 734,
    instrux + 735,
    instrux + 736,
    instrux + 737,
    instrux + 738,
    instrux + 739,
    instrux + 740,
    instrux + 741,
    instrux + 742,
    instrux + 743,
    instrux + 744,
    instrux + 745,
    instrux + 746,
    instrux + 747,
    instrux + 748,
    instrux + 749,
    instrux + 750,
    instrux + 751,
    instrux + 752,
    instrux + 753,
    instrux + 754,
    instrux + 755,
    instrux + 756,
    instrux + 757,
    instrux + 758,
    instrux + 759,
    instrux + 760,
    instrux + 761,
    instrux + 762,
    instrux + 763,
    instrux + 764,
    instrux + 765,
    instrux + 766,
    instrux + 767,
    instrux + 768,
    instrux + 775,
    instrux + 786,
    instrux + 787,
    instrux + 806,
    instrux + 807,
    instrux + 808,
    instrux + 809,
    instrux + 835,
    instrux + 836,
    instrux + 837,
    instrux + 838,
    instrux + 876,
    instrux + 886,
    instrux + 887,
    instrux + 888,
    instrux + 889,
    instrux + 890,
    instrux + 891,
    instrux + 892,
    instrux + 893,
    instrux + 903,
    instrux + 904,
    instrux + 905,
    instrux + 906,
    instrux + 907,
    instrux + 908,
    instrux + 909,
    instrux + 910,
    instrux + 911,
    instrux + 912,
    instrux + 913,
    instrux + 914,
    instrux + 916,
    instrux + 917,
    instrux + 918,
    instrux + 919,
    instrux + 926,
    instrux + 927,
    instrux + 928,
    instrux + 952,
    instrux + 953,
    instrux + 954,
    instrux + 955,
    instrux + 956,
    instrux + 957,
    instrux + 958,
    instrux + 977,
    instrux + 978,
    instrux + 979,
    instrux + 980,
    instrux + 981,
    instrux + 982,
    instrux + 983,
    instrux + 984,
    instrux + 985,
    instrux + 986,
    instrux + 987,
    instrux + 988,
    instrux + 989,
    instrux + 990,
    instrux + 991,
    instrux + 992,
    instrux + 993,
    instrux + 994,
    instrux + 995,
    instrux + 996,
    instrux + 997,
    instrux + 1000,
    instrux + 1001,
    instrux + 1002,
    instrux + 1003,
    instrux + 1004,
    instrux + 1005,
    instrux + 1006,
    instrux + 1007,
    instrux + 1008,
    instrux + 1050,
    instrux + 1051,
    instrux + 1052,
    instrux + 1053,
    instrux + 1054,
    instrux + 1055,
    instrux + 1056,
    instrux + 1058,
    instrux + 1059,
    instrux + 1060,
    instrux + 1061,
    instrux + 1062,
    instrux + 1063,
    instrux + 1064,
    instrux + 1065,
    instrux + 1066,
    instrux + 1067,
    instrux + 1068,
    instrux + 1069,
    instrux + 1070,
    instrux + 1071,
    instrux + 1072,
    instrux + 1073,
    instrux + 1074,
    instrux + 1075,
    instrux + 1076,
    instrux + 1077,
    instrux + 1078,
    instrux + 1079,
    instrux + 1080,
    instrux + 1081,
    instrux + 1082,
    instrux + 1083,
    instrux + 1084,
    instrux + 1085,
    instrux + 1086,
    instrux + 1087,
    instrux + 1088,
    instrux + 1089,
    instrux + 1090,
    instrux + 1091,
    instrux + 1092,
    instrux + 1093,
    instrux + 1094,
    instrux + 1095,
    instrux + 1096,
    instrux + 1097,
    instrux + 1098,
    instrux + 1099,
    instrux + 1100,
    instrux + 1101,
    instrux + 1102,
    instrux + 1103,
    instrux + 1104,
    instrux + 1105,
    instrux + 1106,
    instrux + 1107,
    instrux + 1108,
    instrux + 1109,
    instrux + 1110,
    instrux + 1111,
    instrux + 1112,
    instrux + 1113,
    instrux + 1114,
    instrux + 1115,
    instrux + 1116,
    instrux + 1117,
    instrux + 1118,
    instrux + 1119,
    instrux + 1120,
    instrux + 1121,
    instrux + 1122,
    instrux + 1123,
    instrux + 1124,
    instrux + 1125,
    instrux + 1126,
    instrux + 1127,
    instrux + 1128,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
    instrux + 1132,
    instrux + 1133,
    instrux + 1134,
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
    instrux + 1138,
    instrux + 1139,
    instrux + 1140,
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
    instrux + 1147,
    instrux + 1148,
    instrux + 1149,
    instrux + 1150,
    instrux + 1151,
    instrux + 1152,
    instrux + 1153,
    instrux + 1154,
    instrux + 1155,
    instrux + 1156,
    instrux + 1157,
    instrux + 1158,
    instrux + 1159,
    instrux + 1160,
    instrux + 1161,
    instrux + 1162,
    instrux + 1163,
    instrux + 1164,
    instrux + 1165,
    instrux + 1166,
    instrux + 1167,
    instrux + 1168,
    instrux + 1169,
    instrux + 1170,
    instrux + 1171,
    instrux + 1172,
    instrux + 1173,
    instrux + 1174,
    instrux + 1175,
    instrux + 1176,
    instrux + 1177,
    instrux + 1178,
    instrux + 1179,
    instrux + 1180,
    instrux + 1181,
    instrux + 1182,
    instrux + 1183,
    instrux + 1184,
    instrux + 1185,
    instrux + 1186,
    instrux + 1187,
    instrux + 1188,
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
    instrux + 1213,
    instrux + 1214,
    instrux + 1215,
    instrux + 1216,
    instrux + 1217,
    instrux + 1218,
    instrux + 1219,
    instrux + 1220,
    instrux + 1221,
    instrux + 1222,
    instrux + 1223,
    instrux + 1224,
    instrux + 1226,
    instrux + 1228,
    instrux + 1231,
    instrux + 1232,
    instrux + 1241,
    instrux + 1242,
    instrux + 1243,
    instrux + 1244,
    instrux + 1246,
    instrux + 1249,
    instrux + 1250,
    instrux + 1263,
    instrux + 1264,
    instrux + 1315,
    instrux + 1316,
    instrux + 1325,
    instrux + 1326,
    instrux + 1361,
    instrux + 1362,
    instrux + 1437,
    instrux + 1438,
    instrux + 1439,
    instrux + 1440,
    instrux + 1451,
    instrux + 1452,
    instrux + 1459,
    instrux + 1460,
    instrux + 1465,
    instrux + 1466,
    NULL
};

static struct itemplate *itable_10[] = {
    instrux + 6,
    instrux + 7,
    NULL
};

static struct itemplate *itable_11[] = {
    instrux + 8,
    instrux + 9,
    instrux + 10,
    instrux + 11,
    NULL
};

static struct itemplate *itable_12[] = {
    instrux + 12,
    instrux + 13,
    NULL
};

static struct itemplate *itable_13[] = {
    instrux + 14,
    instrux + 15,
    instrux + 16,
    instrux + 17,
    NULL
};

static struct itemplate *itable_14[] = {
    instrux + 20,
    NULL
};

static struct itemplate *itable_15[] = {
    instrux + 21,
    instrux + 22,
    NULL
};

static struct itemplate *itable_16[] = {
    instrux + 773,
    instrux + 774,
    NULL
};

static struct itemplate *itable_17[] = {
    instrux + 705,
    NULL
};

static struct itemplate *itable_18[] = {
    instrux + 850,
    instrux + 851,
    NULL
};

static struct itemplate *itable_19[] = {
    instrux + 852,
    instrux + 853,
    instrux + 854,
    instrux + 855,
    NULL
};

static struct itemplate *itable_1A[] = {
    instrux + 856,
    instrux + 857,
    NULL
};

static struct itemplate *itable_1B[] = {
    instrux + 858,
    instrux + 859,
    instrux + 860,
    instrux + 861,
    NULL
};

static struct itemplate *itable_1C[] = {
    instrux + 864,
    NULL
};

static struct itemplate *itable_1D[] = {
    instrux + 865,
    instrux + 866,
    NULL
};

static struct itemplate *itable_1E[] = {
    instrux + 773,
    instrux + 774,
    NULL
};

static struct itemplate *itable_1F[] = {
    instrux + 705,
    NULL
};

static struct itemplate *itable_20[] = {
    instrux + 52,
    instrux + 53,
    NULL
};

static struct itemplate *itable_21[] = {
    instrux + 54,
    instrux + 55,
    instrux + 56,
    instrux + 57,
    NULL
};

static struct itemplate *itable_22[] = {
    instrux + 58,
    instrux + 59,
    NULL
};

static struct itemplate *itable_23[] = {
    instrux + 60,
    instrux + 61,
    instrux + 62,
    instrux + 63,
    NULL
};

static struct itemplate *itable_24[] = {
    instrux + 66,
    NULL
};

static struct itemplate *itable_25[] = {
    instrux + 67,
    instrux + 68,
    NULL
};

static struct itemplate *itable_26[] = {
    NULL
};

static struct itemplate *itable_27[] = {
    instrux + 183,
    NULL
};

static struct itemplate *itable_28[] = {
    instrux + 929,
    instrux + 930,
    NULL
};

static struct itemplate *itable_29[] = {
    instrux + 931,
    instrux + 932,
    instrux + 933,
    instrux + 934,
    NULL
};

static struct itemplate *itable_2A[] = {
    instrux + 935,
    instrux + 936,
    NULL
};

static struct itemplate *itable_2B[] = {
    instrux + 937,
    instrux + 938,
    instrux + 939,
    instrux + 940,
    NULL
};

static struct itemplate *itable_2C[] = {
    instrux + 943,
    NULL
};

static struct itemplate *itable_2D[] = {
    instrux + 944,
    instrux + 945,
    NULL
};

static struct itemplate *itable_2E[] = {
    NULL
};

static struct itemplate *itable_2F[] = {
    instrux + 184,
    NULL
};

static struct itemplate *itable_30[] = {
    instrux + 1027,
    instrux + 1028,
    NULL
};

static struct itemplate *itable_31[] = {
    instrux + 1029,
    instrux + 1030,
    instrux + 1031,
    instrux + 1032,
    NULL
};

static struct itemplate *itable_32[] = {
    instrux + 1033,
    instrux + 1034,
    NULL
};

static struct itemplate *itable_33[] = {
    instrux + 1035,
    instrux + 1036,
    instrux + 1037,
    instrux + 1038,
    NULL
};

static struct itemplate *itable_34[] = {
    instrux + 1041,
    NULL
};

static struct itemplate *itable_35[] = {
    instrux + 1042,
    instrux + 1043,
    NULL
};

static struct itemplate *itable_36[] = {
    NULL
};

static struct itemplate *itable_37[] = {
    instrux + 0,
    NULL
};

static struct itemplate *itable_38[] = {
    instrux + 141,
    instrux + 142,
    NULL
};

static struct itemplate *itable_39[] = {
    instrux + 143,
    instrux + 144,
    instrux + 145,
    instrux + 146,
    NULL
};

static struct itemplate *itable_3A[] = {
    instrux + 147,
    instrux + 148,
    NULL
};

static struct itemplate *itable_3B[] = {
    instrux + 149,
    instrux + 150,
    instrux + 151,
    instrux + 152,
    NULL
};

static struct itemplate *itable_3C[] = {
    instrux + 155,
    NULL
};

static struct itemplate *itable_3D[] = {
    instrux + 156,
    instrux + 157,
    NULL
};

static struct itemplate *itable_3E[] = {
    NULL
};

static struct itemplate *itable_3F[] = {
    instrux + 5,
    NULL
};

static struct itemplate *itable_40[] = {
    instrux + 408,
    instrux + 409,
    NULL
};

static struct itemplate *itable_41[] = {
    instrux + 408,
    instrux + 409,
    NULL
};

static struct itemplate *itable_42[] = {
    instrux + 408,
    instrux + 409,
    NULL
};

static struct itemplate *itable_43[] = {
    instrux + 408,
    instrux + 409,
    NULL
};

static struct itemplate *itable_44[] = {
    instrux + 408,
    instrux + 409,
    NULL
};

static struct itemplate *itable_45[] = {
    instrux + 408,
    instrux + 409,
    NULL
};

static struct itemplate *itable_46[] = {
    instrux + 408,
    instrux + 409,
    NULL
};

static struct itemplate *itable_47[] = {
    instrux + 408,
    instrux + 409,
    NULL
};

static struct itemplate *itable_48[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_49[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4A[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4B[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4C[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4D[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4E[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4F[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_50[] = {
    instrux + 769,
    instrux + 770,
    NULL
};

static struct itemplate *itable_51[] = {
    instrux + 769,
    instrux + 770,
    NULL
};

static struct itemplate *itable_52[] = {
    instrux + 769,
    instrux + 770,
    NULL
};

static struct itemplate *itable_53[] = {
    instrux + 769,
    instrux + 770,
    NULL
};

static struct itemplate *itable_54[] = {
    instrux + 769,
    instrux + 770,
    NULL
};

static struct itemplate *itable_55[] = {
    instrux + 769,
    instrux + 770,
    NULL
};

static struct itemplate *itable_56[] = {
    instrux + 769,
    instrux + 770,
    NULL
};

static struct itemplate *itable_57[] = {
    instrux + 769,
    instrux + 770,
    NULL
};

static struct itemplate *itable_58[] = {
    instrux + 701,
    instrux + 702,
    NULL
};

static struct itemplate *itable_59[] = {
    instrux + 701,
    instrux + 702,
    NULL
};

static struct itemplate *itable_5A[] = {
    instrux + 701,
    instrux + 702,
    NULL
};

static struct itemplate *itable_5B[] = {
    instrux + 701,
    instrux + 702,
    NULL
};

static struct itemplate *itable_5C[] = {
    instrux + 701,
    instrux + 702,
    NULL
};

static struct itemplate *itable_5D[] = {
    instrux + 701,
    instrux + 702,
    NULL
};

static struct itemplate *itable_5E[] = {
    instrux + 701,
    instrux + 702,
    NULL
};

static struct itemplate *itable_5F[] = {
    instrux + 701,
    instrux + 702,
    NULL
};

static struct itemplate *itable_60[] = {
    instrux + 780,
    instrux + 781,
    instrux + 782,
    NULL
};

static struct itemplate *itable_61[] = {
    instrux + 707,
    instrux + 708,
    instrux + 709,
    NULL
};

static struct itemplate *itable_62[] = {
    instrux + 77,
    instrux + 78,
    NULL
};

static struct itemplate *itable_63[] = {
    instrux + 75,
    instrux + 76,
    NULL
};

static struct itemplate *itable_64[] = {
    NULL
};

static struct itemplate *itable_65[] = {
    NULL
};

static struct itemplate *itable_66[] = {
    instrux + 1225,
    instrux + 1227,
    instrux + 1229,
    instrux + 1233,
    instrux + 1234,
    instrux + 1235,
    instrux + 1236,
    instrux + 1237,
    instrux + 1238,
    instrux + 1239,
    instrux + 1240,
    instrux + 1247,
    instrux + 1248,
    instrux + 1251,
    instrux + 1252,
    instrux + 1253,
    instrux + 1254,
    instrux + 1255,
    instrux + 1256,
    instrux + 1257,
    instrux + 1258,
    instrux + 1259,
    instrux + 1260,
    instrux + 1261,
    instrux + 1262,
    instrux + 1265,
    instrux + 1266,
    instrux + 1267,
    instrux + 1268,
    instrux + 1269,
    instrux + 1270,
    instrux + 1271,
    instrux + 1272,
    instrux + 1273,
    instrux + 1274,
    instrux + 1275,
    instrux + 1276,
    instrux + 1277,
    instrux + 1278,
    instrux + 1279,
    instrux + 1280,
    instrux + 1281,
    instrux + 1282,
    instrux + 1283,
    instrux + 1284,
    instrux + 1285,
    instrux + 1286,
    instrux + 1287,
    instrux + 1288,
    instrux + 1289,
    instrux + 1290,
    instrux + 1291,
    instrux + 1292,
    instrux + 1293,
    instrux + 1294,
    instrux + 1295,
    instrux + 1296,
    instrux + 1297,
    instrux + 1298,
    instrux + 1299,
    instrux + 1300,
    instrux + 1301,
    instrux + 1302,
    instrux + 1303,
    instrux + 1304,
    instrux + 1305,
    instrux + 1306,
    instrux + 1307,
    instrux + 1308,
    instrux + 1309,
    instrux + 1310,
    instrux + 1311,
    instrux + 1312,
    instrux + 1313,
    instrux + 1314,
    instrux + 1317,
    instrux + 1318,
    instrux + 1319,
    instrux + 1320,
    instrux + 1321,
    instrux + 1322,
    instrux + 1323,
    instrux + 1324,
    instrux + 1329,
    instrux + 1330,
    instrux + 1331,
    instrux + 1332,
    instrux + 1333,
    instrux + 1334,
    instrux + 1335,
    instrux + 1336,
    instrux + 1337,
    instrux + 1338,
    instrux + 1339,
    instrux + 1340,
    instrux + 1341,
    instrux + 1342,
    instrux + 1343,
    instrux + 1344,
    instrux + 1345,
    instrux + 1346,
    instrux + 1347,
    instrux + 1348,
    instrux + 1349,
    instrux + 1350,
    instrux + 1351,
    instrux + 1352,
    instrux + 1353,
    instrux + 1354,
    instrux + 1355,
    instrux + 1356,
    instrux + 1357,
    instrux + 1358,
    instrux + 1359,
    instrux + 1360,
    instrux + 1363,
    instrux + 1364,
    instrux + 1365,
    instrux + 1366,
    instrux + 1367,
    instrux + 1368,
    instrux + 1369,
    instrux + 1370,
    instrux + 1371,
    instrux + 1372,
    instrux + 1373,
    instrux + 1374,
    instrux + 1375,
    instrux + 1376,
    instrux + 1377,
    instrux + 1378,
    instrux + 1379,
    instrux + 1380,
    instrux + 1381,
    instrux + 1382,
    instrux + 1383,
    instrux + 1384,
    instrux + 1385,
    instrux + 1386,
    instrux + 1387,
    instrux + 1388,
    instrux + 1389,
    instrux + 1390,
    instrux + 1391,
    instrux + 1392,
    instrux + 1395,
    instrux + 1396,
    instrux + 1397,
    instrux + 1398,
    instrux + 1399,
    instrux + 1400,
    instrux + 1403,
    instrux + 1404,
    instrux + 1407,
    instrux + 1408,
    instrux + 1411,
    instrux + 1412,
    instrux + 1415,
    instrux + 1416,
    instrux + 1419,
    instrux + 1420,
    instrux + 1423,
    instrux + 1424,
    instrux + 1427,
    instrux + 1428,
    instrux + 1431,
    instrux + 1432,
    instrux + 1435,
    instrux + 1436,
    instrux + 1443,
    instrux + 1444,
    instrux + 1445,
    instrux + 1446,
    instrux + 1447,
    instrux + 1448,
    instrux + 1449,
    instrux + 1450,
    instrux + 1461,
    instrux + 1462,
    instrux + 1463,
    instrux + 1464,
    instrux + 1469,
    instrux + 1470,
    instrux + 1473,
    instrux + 1474,
    instrux + 1477,
    instrux + 1478,
    instrux + 1481,
    instrux + 1482,
    instrux + 1483,
    instrux + 1484,
    instrux + 1485,
    instrux + 1486,
    instrux + 1487,
    instrux + 1488,
    instrux + 1489,
    instrux + 1494,
    instrux + 1495,
    instrux + 1496,
    instrux + 1497,
    instrux + 1498,
    instrux + 1499,
    instrux + 1502,
    instrux + 1503,
    instrux + 1504,
    instrux + 1505,
    instrux + 1506,
    instrux + 1507,
    instrux + 1510,
    instrux + 1511,
    instrux + 1514,
    instrux + 1515,
    instrux + 1516,
    instrux + 1517,
    instrux + 1518,
    instrux + 1519,
    instrux + 1520,
    instrux + 1521,
    NULL
};

static struct itemplate *itable_67[] = {
    NULL
};

static struct itemplate *itable_68[] = {
    instrux + 777,
    instrux + 778,
    instrux + 779,
    NULL
};

static struct itemplate *itable_69[] = {
    instrux + 391,
    instrux + 393,
    instrux + 395,
    instrux + 397,
    instrux + 399,
    instrux + 401,
    NULL
};

static struct itemplate *itable_6A[] = {
    instrux + 776,
    NULL
};

static struct itemplate *itable_6B[] = {
    instrux + 390,
    instrux + 392,
    instrux + 394,
    instrux + 396,
    instrux + 398,
    instrux + 400,
    NULL
};

static struct itemplate *itable_6C[] = {
    instrux + 413,
    NULL
};

static struct itemplate *itable_6D[] = {
    instrux + 414,
    instrux + 415,
    NULL
};

static struct itemplate *itable_6E[] = {
    instrux + 602,
    NULL
};

static struct itemplate *itable_6F[] = {
    instrux + 603,
    instrux + 604,
    NULL
};

static struct itemplate *itable_70[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_71[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_72[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_73[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_74[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_75[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_76[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_77[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_78[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_79[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_7A[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_7B[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_7C[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_7D[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_7E[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_7F[] = {
    instrux + 1057,
    NULL
};

static struct itemplate *itable_80[] = {
    instrux + 23,
    instrux + 26,
    instrux + 46,
    instrux + 49,
    instrux + 69,
    instrux + 72,
    instrux + 158,
    instrux + 161,
    instrux + 590,
    instrux + 593,
    instrux + 867,
    instrux + 870,
    instrux + 946,
    instrux + 949,
    instrux + 1044,
    instrux + 1047,
    NULL
};

static struct itemplate *itable_81[] = {
    instrux + 24,
    instrux + 25,
    instrux + 27,
    instrux + 28,
    instrux + 47,
    instrux + 48,
    instrux + 50,
    instrux + 51,
    instrux + 70,
    instrux + 71,
    instrux + 73,
    instrux + 74,
    instrux + 159,
    instrux + 160,
    instrux + 162,
    instrux + 163,
    instrux + 591,
    instrux + 592,
    instrux + 594,
    instrux + 595,
    instrux + 868,
    instrux + 869,
    instrux + 871,
    instrux + 872,
    instrux + 947,
    instrux + 948,
    instrux + 950,
    instrux + 951,
    instrux + 1045,
    instrux + 1046,
    instrux + 1048,
    instrux + 1049,
    NULL
};

static struct itemplate *itable_82[] = {
    NULL
};

static struct itemplate *itable_83[] = {
    instrux + 18,
    instrux + 19,
    instrux + 41,
    instrux + 42,
    instrux + 64,
    instrux + 65,
    instrux + 153,
    instrux + 154,
    instrux + 585,
    instrux + 586,
    instrux + 862,
    instrux + 863,
    instrux + 941,
    instrux + 942,
    instrux + 1039,
    instrux + 1040,
    NULL
};

static struct itemplate *itable_84[] = {
    instrux + 959,
    instrux + 960,
    instrux + 965,
    NULL
};

static struct itemplate *itable_85[] = {
    instrux + 961,
    instrux + 962,
    instrux + 963,
    instrux + 964,
    instrux + 966,
    instrux + 967,
    NULL
};

static struct itemplate *itable_86[] = {
    instrux + 1013,
    instrux + 1014,
    instrux + 1019,
    instrux + 1020,
    NULL
};

static struct itemplate *itable_87[] = {
    instrux + 1015,
    instrux + 1016,
    instrux + 1017,
    instrux + 1018,
    instrux + 1021,
    instrux + 1022,
    instrux + 1023,
    instrux + 1024,
    NULL
};

static struct itemplate *itable_88[] = {
    instrux + 523,
    instrux + 524,
    NULL
};

static struct itemplate *itable_89[] = {
    instrux + 525,
    instrux + 526,
    instrux + 527,
    instrux + 528,
    NULL
};

static struct itemplate *itable_8A[] = {
    instrux + 529,
    instrux + 530,
    NULL
};

static struct itemplate *itable_8B[] = {
    instrux + 531,
    instrux + 532,
    instrux + 533,
    instrux + 534,
    NULL
};

static struct itemplate *itable_8C[] = {
    instrux + 505,
    instrux + 506,
    instrux + 507,
    NULL
};

static struct itemplate *itable_8D[] = {
    instrux + 459,
    instrux + 460,
    NULL
};

static struct itemplate *itable_8E[] = {
    instrux + 508,
    instrux + 509,
    instrux + 510,
    NULL
};

static struct itemplate *itable_8F[] = {
    instrux + 703,
    instrux + 704,
    NULL
};

static struct itemplate *itable_90[] = {
    instrux + 569,
    instrux + 1009,
    instrux + 1010,
    instrux + 1011,
    instrux + 1012,
    instrux + 1230,
    NULL
};

static struct itemplate *itable_91[] = {
    instrux + 1009,
    instrux + 1010,
    instrux + 1011,
    instrux + 1012,
    NULL
};

static struct itemplate *itable_92[] = {
    instrux + 1009,
    instrux + 1010,
    instrux + 1011,
    instrux + 1012,
    NULL
};

static struct itemplate *itable_93[] = {
    instrux + 1009,
    instrux + 1010,
    instrux + 1011,
    instrux + 1012,
    NULL
};

static struct itemplate *itable_94[] = {
    instrux + 1009,
    instrux + 1010,
    instrux + 1011,
    instrux + 1012,
    NULL
};

static struct itemplate *itable_95[] = {
    instrux + 1009,
    instrux + 1010,
    instrux + 1011,
    instrux + 1012,
    NULL
};

static struct itemplate *itable_96[] = {
    instrux + 1009,
    instrux + 1010,
    instrux + 1011,
    instrux + 1012,
    NULL
};

static struct itemplate *itable_97[] = {
    instrux + 1009,
    instrux + 1010,
    instrux + 1011,
    instrux + 1012,
    NULL
};

static struct itemplate *itable_98[] = {
    instrux + 134,
    instrux + 182,
    NULL
};

static struct itemplate *itable_99[] = {
    instrux + 135,
    instrux + 181,
    NULL
};

static struct itemplate *itable_9A[] = {
    instrux + 118,
    instrux + 119,
    instrux + 120,
    instrux + 121,
    instrux + 122,
    NULL
};

static struct itemplate *itable_9B[] = {
    instrux + 212,
    instrux + 244,
    instrux + 262,
    instrux + 281,
    instrux + 328,
    instrux + 337,
    instrux + 338,
    instrux + 343,
    instrux + 344,
    instrux + 998,
    instrux + 999,
    NULL
};

static struct itemplate *itable_9C[] = {
    instrux + 783,
    instrux + 784,
    instrux + 785,
    NULL
};

static struct itemplate *itable_9D[] = {
    instrux + 710,
    instrux + 711,
    instrux + 712,
    NULL
};

static struct itemplate *itable_9E[] = {
    instrux + 839,
    NULL
};

static struct itemplate *itable_9F[] = {
    instrux + 452,
    NULL
};

static struct itemplate *itable_A0[] = {
    instrux + 511,
    NULL
};

static struct itemplate *itable_A1[] = {
    instrux + 512,
    instrux + 513,
    NULL
};

static struct itemplate *itable_A2[] = {
    instrux + 514,
    NULL
};

static struct itemplate *itable_A3[] = {
    instrux + 515,
    instrux + 516,
    NULL
};

static struct itemplate *itable_A4[] = {
    instrux + 552,
    NULL
};

static struct itemplate *itable_A5[] = {
    instrux + 553,
    instrux + 554,
    NULL
};

static struct itemplate *itable_A6[] = {
    instrux + 164,
    NULL
};

static struct itemplate *itable_A7[] = {
    instrux + 165,
    instrux + 166,
    NULL
};

static struct itemplate *itable_A8[] = {
    instrux + 968,
    NULL
};

static struct itemplate *itable_A9[] = {
    instrux + 969,
    instrux + 970,
    NULL
};

static struct itemplate *itable_AA[] = {
    instrux + 923,
    NULL
};

static struct itemplate *itable_AB[] = {
    instrux + 924,
    instrux + 925,
    NULL
};

static struct itemplate *itable_AC[] = {
    instrux + 478,
    NULL
};

static struct itemplate *itable_AD[] = {
    instrux + 479,
    instrux + 480,
    NULL
};

static struct itemplate *itable_AE[] = {
    instrux + 873,
    NULL
};

static struct itemplate *itable_AF[] = {
    instrux + 874,
    instrux + 875,
    NULL
};

static struct itemplate *itable_B0[] = {
    instrux + 535,
    NULL
};

static struct itemplate *itable_B1[] = {
    instrux + 535,
    NULL
};

static struct itemplate *itable_B2[] = {
    instrux + 535,
    NULL
};

static struct itemplate *itable_B3[] = {
    instrux + 535,
    NULL
};

static struct itemplate *itable_B4[] = {
    instrux + 535,
    NULL
};

static struct itemplate *itable_B5[] = {
    instrux + 535,
    NULL
};

static struct itemplate *itable_B6[] = {
    instrux + 535,
    NULL
};

static struct itemplate *itable_B7[] = {
    instrux + 535,
    NULL
};

static struct itemplate *itable_B8[] = {
    instrux + 536,
    instrux + 537,
    NULL
};

static struct itemplate *itable_B9[] = {
    instrux + 536,
    instrux + 537,
    NULL
};

static struct itemplate *itable_BA[] = {
    instrux + 536,
    instrux + 537,
    NULL
};

static struct itemplate *itable_BB[] = {
    instrux + 536,
    instrux + 537,
    NULL
};

static struct itemplate *itable_BC[] = {
    instrux + 536,
    instrux + 537,
    NULL
};

static struct itemplate *itable_BD[] = {
    instrux + 536,
    instrux + 537,
    NULL
};

static struct itemplate *itable_BE[] = {
    instrux + 536,
    instrux + 537,
    NULL
};

static struct itemplate *itable_BF[] = {
    instrux + 536,
    instrux + 537,
    NULL
};

static struct itemplate *itable_C0[] = {
    instrux + 790,
    instrux + 799,
    instrux + 819,
    instrux + 828,
    instrux + 843,
    instrux + 879,
    instrux + 896,
    NULL
};

static struct itemplate *itable_C1[] = {
    instrux + 793,
    instrux + 796,
    instrux + 802,
    instrux + 805,
    instrux + 822,
    instrux + 825,
    instrux + 831,
    instrux + 834,
    instrux + 846,
    instrux + 849,
    instrux + 882,
    instrux + 885,
    instrux + 899,
    instrux + 902,
    NULL
};

static struct itemplate *itable_C2[] = {
    instrux + 812,
    instrux + 816,
    NULL
};

static struct itemplate *itable_C3[] = {
    instrux + 811,
    instrux + 815,
    NULL
};

static struct itemplate *itable_C4[] = {
    instrux + 462,
    instrux + 463,
    NULL
};

static struct itemplate *itable_C5[] = {
    instrux + 457,
    instrux + 458,
    NULL
};

static struct itemplate *itable_C6[] = {
    instrux + 538,
    instrux + 541,
    NULL
};

static struct itemplate *itable_C7[] = {
    instrux + 539,
    instrux + 540,
    instrux + 542,
    instrux + 543,
    NULL
};

static struct itemplate *itable_C8[] = {
    instrux + 194,
    NULL
};

static struct itemplate *itable_C9[] = {
    instrux + 461,
    NULL
};

static struct itemplate *itable_CA[] = {
    instrux + 814,
    NULL
};

static struct itemplate *itable_CB[] = {
    instrux + 813,
    NULL
};

static struct itemplate *itable_CC[] = {
    instrux + 418,
    NULL
};

static struct itemplate *itable_CD[] = {
    instrux + 416,
    NULL
};

static struct itemplate *itable_CE[] = {
    instrux + 419,
    NULL
};

static struct itemplate *itable_CF[] = {
    instrux + 422,
    instrux + 423,
    instrux + 424,
    NULL
};

static struct itemplate *itable_D0[] = {
    instrux + 788,
    instrux + 797,
    instrux + 817,
    instrux + 826,
    instrux + 841,
    instrux + 877,
    instrux + 894,
    NULL
};

static struct itemplate *itable_D1[] = {
    instrux + 791,
    instrux + 794,
    instrux + 800,
    instrux + 803,
    instrux + 820,
    instrux + 823,
    instrux + 829,
    instrux + 832,
    instrux + 844,
    instrux + 847,
    instrux + 880,
    instrux + 883,
    instrux + 897,
    instrux + 900,
    NULL
};

static struct itemplate *itable_D2[] = {
    instrux + 789,
    instrux + 798,
    instrux + 818,
    instrux + 827,
    instrux + 842,
    instrux + 878,
    instrux + 895,
    NULL
};

static struct itemplate *itable_D3[] = {
    instrux + 792,
    instrux + 795,
    instrux + 801,
    instrux + 804,
    instrux + 821,
    instrux + 824,
    instrux + 830,
    instrux + 833,
    instrux + 845,
    instrux + 848,
    instrux + 881,
    instrux + 884,
    instrux + 898,
    instrux + 901,
    NULL
};

static struct itemplate *itable_D4[] = {
    instrux + 3,
    instrux + 4,
    NULL
};

static struct itemplate *itable_D5[] = {
    instrux + 1,
    instrux + 2,
    NULL
};

static struct itemplate *itable_D6[] = {
    instrux + 840,
    NULL
};

static struct itemplate *itable_D7[] = {
    instrux + 1025,
    instrux + 1026,
    NULL
};

static struct itemplate *itable_D8[] = {
    instrux + 199,
    instrux + 202,
    instrux + 204,
    instrux + 229,
    instrux + 231,
    instrux + 232,
    instrux + 237,
    instrux + 239,
    instrux + 240,
    instrux + 245,
    instrux + 249,
    instrux + 250,
    instrux + 253,
    instrux + 257,
    instrux + 258,
    instrux + 304,
    instrux + 308,
    instrux + 309,
    instrux + 345,
    instrux + 349,
    instrux + 350,
    instrux + 353,
    instrux + 357,
    instrux + 358,
    NULL
};

static struct itemplate *itable_D9[] = {
    instrux + 197,
    instrux + 198,
    instrux + 211,
    instrux + 242,
    instrux + 243,
    instrux + 280,
    instrux + 291,
    instrux + 294,
    instrux + 295,
    instrux + 296,
    instrux + 297,
    instrux + 298,
    instrux + 299,
    instrux + 300,
    instrux + 301,
    instrux + 302,
    instrux + 303,
    instrux + 316,
    instrux + 318,
    instrux + 319,
    instrux + 322,
    instrux + 323,
    instrux + 324,
    instrux + 325,
    instrux + 326,
    instrux + 329,
    instrux + 331,
    instrux + 332,
    instrux + 333,
    instrux + 334,
    instrux + 339,
    instrux + 361,
    instrux + 371,
    instrux + 372,
    instrux + 373,
    instrux + 374,
    instrux + 375,
    instrux + 376,
    instrux + 377,
    instrux + 378,
    NULL
};

static struct itemplate *itable_DA[] = {
    instrux + 213,
    instrux + 214,
    instrux + 215,
    instrux + 216,
    instrux + 217,
    instrux + 218,
    instrux + 227,
    instrux + 228,
    instrux + 265,
    instrux + 267,
    instrux + 269,
    instrux + 271,
    instrux + 273,
    instrux + 278,
    instrux + 287,
    instrux + 289,
    instrux + 370,
    NULL
};

static struct itemplate *itable_DB[] = {
    instrux + 219,
    instrux + 220,
    instrux + 221,
    instrux + 222,
    instrux + 223,
    instrux + 224,
    instrux + 225,
    instrux + 226,
    instrux + 233,
    instrux + 234,
    instrux + 275,
    instrux + 282,
    instrux + 284,
    instrux + 293,
    instrux + 312,
    instrux + 313,
    instrux + 314,
    instrux + 315,
    instrux + 330,
    instrux + 341,
    instrux + 364,
    instrux + 365,
    NULL
};

static struct itemplate *itable_DC[] = {
    instrux + 200,
    instrux + 201,
    instrux + 203,
    instrux + 230,
    instrux + 238,
    instrux + 246,
    instrux + 247,
    instrux + 248,
    instrux + 254,
    instrux + 255,
    instrux + 256,
    instrux + 305,
    instrux + 306,
    instrux + 307,
    instrux + 346,
    instrux + 347,
    instrux + 348,
    instrux + 354,
    instrux + 355,
    instrux + 356,
    NULL
};

static struct itemplate *itable_DD[] = {
    instrux + 263,
    instrux + 292,
    instrux + 317,
    instrux + 320,
    instrux + 327,
    instrux + 335,
    instrux + 336,
    instrux + 340,
    instrux + 342,
    instrux + 362,
    instrux + 363,
    instrux + 368,
    instrux + 369,
    NULL
};

static struct itemplate *itable_DE[] = {
    instrux + 205,
    instrux + 206,
    instrux + 241,
    instrux + 251,
    instrux + 252,
    instrux + 259,
    instrux + 260,
    instrux + 266,
    instrux + 268,
    instrux + 270,
    instrux + 272,
    instrux + 274,
    instrux + 279,
    instrux + 288,
    instrux + 290,
    instrux + 310,
    instrux + 311,
    instrux + 351,
    instrux + 352,
    instrux + 359,
    instrux + 360,
    NULL
};

static struct itemplate *itable_DF[] = {
    instrux + 207,
    instrux + 208,
    instrux + 209,
    instrux + 210,
    instrux + 235,
    instrux + 236,
    instrux + 264,
    instrux + 276,
    instrux + 277,
    instrux + 283,
    instrux + 285,
    instrux + 286,
    instrux + 321,
    instrux + 366,
    instrux + 367,
    NULL
};

static struct itemplate *itable_E0[] = {
    instrux + 487,
    instrux + 488,
    instrux + 489,
    instrux + 490,
    instrux + 491,
    instrux + 492,
    NULL
};

static struct itemplate *itable_E1[] = {
    instrux + 484,
    instrux + 485,
    instrux + 486,
    instrux + 493,
    instrux + 494,
    instrux + 495,
    NULL
};

static struct itemplate *itable_E2[] = {
    instrux + 481,
    instrux + 482,
    instrux + 483,
    NULL
};

static struct itemplate *itable_E3[] = {
    instrux + 425,
    instrux + 426,
    NULL
};

static struct itemplate *itable_E4[] = {
    instrux + 402,
    NULL
};

static struct itemplate *itable_E5[] = {
    instrux + 403,
    instrux + 404,
    NULL
};

static struct itemplate *itable_E6[] = {
    instrux + 596,
    NULL
};

static struct itemplate *itable_E7[] = {
    instrux + 597,
    instrux + 598,
    NULL
};

static struct itemplate *itable_E8[] = {
    instrux + 112,
    instrux + 113,
    instrux + 114,
    instrux + 115,
    instrux + 116,
    instrux + 117,
    NULL
};

static struct itemplate *itable_E9[] = {
    instrux + 428,
    instrux + 429,
    instrux + 430,
    NULL
};

static struct itemplate *itable_EA[] = {
    instrux + 431,
    instrux + 432,
    instrux + 433,
    instrux + 434,
    instrux + 435,
    NULL
};

static struct itemplate *itable_EB[] = {
    instrux + 427,
    NULL
};

static struct itemplate *itable_EC[] = {
    instrux + 405,
    NULL
};

static struct itemplate *itable_ED[] = {
    instrux + 406,
    instrux + 407,
    NULL
};

static struct itemplate *itable_EE[] = {
    instrux + 599,
    NULL
};

static struct itemplate *itable_EF[] = {
    instrux + 600,
    instrux + 601,
    NULL
};

static struct itemplate *itable_F0[] = {
    NULL
};

static struct itemplate *itable_F1[] = {
    instrux + 417,
    instrux + 915,
    NULL
};

static struct itemplate *itable_F2[] = {
    instrux + 1245,
    instrux + 1327,
    instrux + 1328,
    instrux + 1393,
    instrux + 1394,
    instrux + 1401,
    instrux + 1402,
    instrux + 1405,
    instrux + 1406,
    instrux + 1409,
    instrux + 1410,
    instrux + 1413,
    instrux + 1414,
    instrux + 1417,
    instrux + 1418,
    instrux + 1421,
    instrux + 1422,
    instrux + 1425,
    instrux + 1426,
    instrux + 1429,
    instrux + 1430,
    instrux + 1433,
    instrux + 1434,
    instrux + 1441,
    instrux + 1442,
    instrux + 1453,
    instrux + 1454,
    instrux + 1455,
    instrux + 1456,
    instrux + 1457,
    instrux + 1458,
    instrux + 1467,
    instrux + 1468,
    instrux + 1471,
    instrux + 1472,
    instrux + 1475,
    instrux + 1476,
    instrux + 1479,
    instrux + 1480,
    instrux + 1490,
    instrux + 1491,
    instrux + 1492,
    instrux + 1493,
    instrux + 1500,
    instrux + 1501,
    instrux + 1508,
    instrux + 1509,
    instrux + 1512,
    instrux + 1513,
    NULL
};

static struct itemplate *itable_F3[] = {
    NULL
};

static struct itemplate *itable_F4[] = {
    instrux + 379,
    NULL
};

static struct itemplate *itable_F5[] = {
    instrux + 140,
    NULL
};

static struct itemplate *itable_F6[] = {
    instrux + 190,
    instrux + 380,
    instrux + 383,
    instrux + 563,
    instrux + 566,
    instrux + 570,
    instrux + 971,
    instrux + 974,
    NULL
};

static struct itemplate *itable_F7[] = {
    instrux + 191,
    instrux + 192,
    instrux + 381,
    instrux + 382,
    instrux + 384,
    instrux + 385,
    instrux + 564,
    instrux + 565,
    instrux + 567,
    instrux + 568,
    instrux + 571,
    instrux + 572,
    instrux + 972,
    instrux + 973,
    instrux + 975,
    instrux + 976,
    NULL
};

static struct itemplate *itable_F8[] = {
    instrux + 136,
    NULL
};

static struct itemplate *itable_F9[] = {
    instrux + 920,
    NULL
};

static struct itemplate *itable_FA[] = {
    instrux + 138,
    NULL
};

static struct itemplate *itable_FB[] = {
    instrux + 922,
    NULL
};

static struct itemplate *itable_FC[] = {
    instrux + 137,
    NULL
};

static struct itemplate *itable_FD[] = {
    instrux + 921,
    NULL
};

static struct itemplate *itable_FE[] = {
    instrux + 187,
    instrux + 410,
    NULL
};

static struct itemplate *itable_FF[] = {
    instrux + 123,
    instrux + 124,
    instrux + 125,
    instrux + 126,
    instrux + 127,
    instrux + 128,
    instrux + 129,
    instrux + 130,
    instrux + 131,
    instrux + 132,
    instrux + 133,
    instrux + 188,
    instrux + 189,
    instrux + 411,
    instrux + 412,
    instrux + 436,
    instrux + 437,
    instrux + 438,
    instrux + 439,
    instrux + 440,
    instrux + 441,
    instrux + 442,
    instrux + 443,
    instrux + 444,
    instrux + 445,
    instrux + 446,
    instrux + 771,
    instrux + 772,
    NULL
};

struct itemplate **itable[] = {
    itable_00,
    itable_01,
    itable_02,
    itable_03,
    itable_04,
    itable_05,
    itable_06,
    itable_07,
    itable_08,
    itable_09,
    itable_0A,
    itable_0B,
    itable_0C,
    itable_0D,
    itable_0E,
    itable_0F,
    itable_10,
    itable_11,
    itable_12,
    itable_13,
    itable_14,
    itable_15,
    itable_16,
    itable_17,
    itable_18,
    itable_19,
    itable_1A,
    itable_1B,
    itable_1C,
    itable_1D,
    itable_1E,
    itable_1F,
    itable_20,
    itable_21,
    itable_22,
    itable_23,
    itable_24,
    itable_25,
    itable_26,
    itable_27,
    itable_28,
    itable_29,
    itable_2A,
    itable_2B,
    itable_2C,
    itable_2D,
    itable_2E,
    itable_2F,
    itable_30,
    itable_31,
    itable_32,
    itable_33,
    itable_34,
    itable_35,
    itable_36,
    itable_37,
    itable_38,
    itable_39,
    itable_3A,
    itable_3B,
    itable_3C,
    itable_3D,
    itable_3E,
    itable_3F,
    itable_40,
    itable_41,
    itable_42,
    itable_43,
    itable_44,
    itable_45,
    itable_46,
    itable_47,
    itable_48,
    itable_49,
    itable_4A,
    itable_4B,
    itable_4C,
    itable_4D,
    itable_4E,
    itable_4F,
    itable_50,
    itable_51,
    itable_52,
    itable_53,
    itable_54,
    itable_55,
    itable_56,
    itable_57,
    itable_58,
    itable_59,
    itable_5A,
    itable_5B,
    itable_5C,
    itable_5D,
    itable_5E,
    itable_5F,
    itable_60,
    itable_61,
    itable_62,
    itable_63,
    itable_64,
    itable_65,
    itable_66,
    itable_67,
    itable_68,
    itable_69,
    itable_6A,
    itable_6B,
    itable_6C,
    itable_6D,
    itable_6E,
    itable_6F,
    itable_70,
    itable_71,
    itable_72,
    itable_73,
    itable_74,
    itable_75,
    itable_76,
    itable_77,
    itable_78,
    itable_79,
    itable_7A,
    itable_7B,
    itable_7C,
    itable_7D,
    itable_7E,
    itable_7F,
    itable_80,
    itable_81,
    itable_82,
    itable_83,
    itable_84,
    itable_85,
    itable_86,
    itable_87,
    itable_88,
    itable_89,
    itable_8A,
    itable_8B,
    itable_8C,
    itable_8D,
    itable_8E,
    itable_8F,
    itable_90,
    itable_91,
    itable_92,
    itable_93,
    itable_94,
    itable_95,
    itable_96,
    itable_97,
    itable_98,
    itable_99,
    itable_9A,
    itable_9B,
    itable_9C,
    itable_9D,
    itable_9E,
    itable_9F,
    itable_A0,
    itable_A1,
    itable_A2,
    itable_A3,
    itable_A4,
    itable_A5,
    itable_A6,
    itable_A7,
    itable_A8,
    itable_A9,
    itable_AA,
    itable_AB,
    itable_AC,
    itable_AD,
    itable_AE,
    itable_AF,
    itable_B0,
    itable_B1,
    itable_B2,
    itable_B3,
    itable_B4,
    itable_B5,
    itable_B6,
    itable_B7,
    itable_B8,
    itable_B9,
    itable_BA,
    itable_BB,
    itable_BC,
    itable_BD,
    itable_BE,
    itable_BF,
    itable_C0,
    itable_C1,
    itable_C2,
    itable_C3,
    itable_C4,
    itable_C5,
    itable_C6,
    itable_C7,
    itable_C8,
    itable_C9,
    itable_CA,
    itable_CB,
    itable_CC,
    itable_CD,
    itable_CE,
    itable_CF,
    itable_D0,
    itable_D1,
    itable_D2,
    itable_D3,
    itable_D4,
    itable_D5,
    itable_D6,
    itable_D7,
    itable_D8,
    itable_D9,
    itable_DA,
    itable_DB,
    itable_DC,
    itable_DD,
    itable_DE,
    itable_DF,
    itable_E0,
    itable_E1,
    itable_E2,
    itable_E3,
    itable_E4,
    itable_E5,
    itable_E6,
    itable_E7,
    itable_E8,
    itable_E9,
    itable_EA,
    itable_EB,
    itable_EC,
    itable_ED,
    itable_EE,
    itable_EF,
    itable_F0,
    itable_F1,
    itable_F2,
    itable_F3,
    itable_F4,
    itable_F5,
    itable_F6,
    itable_F7,
    itable_F8,
    itable_F9,
    itable_FA,
    itable_FB,
    itable_FC,
    itable_FD,
    itable_FE,
    itable_FF,
};
