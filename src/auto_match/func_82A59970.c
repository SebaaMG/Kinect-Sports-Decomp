typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;


void fn_82A59970(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  *param_1 = param_2;
  piVar3 = param_1 + 2;
  param_1[1] = param_3;
  lVar2 = 0xc;
  do {
    *piVar3 = 0;
    piVar3[6] = 0;
    piVar3[1] = (int)(piVar3 + 2);
    lVar2 = lVar2 + -1;
    piVar3[9] = 1;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[2] = 0;
    iVar1 = piVar3[1];
    *(int *)(iVar1 + 8) = *piVar3;
    *piVar3 = iVar1 + 4;
    piVar3 = piVar3 + 10;
  } while (-1 < lVar2);
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  return;
}

