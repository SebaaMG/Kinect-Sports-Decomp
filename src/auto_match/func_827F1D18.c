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
extern int fn_827F03F0();


void fn_827F1D18(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  
  iVar1 = fn_827F03F0(param_1 + 6,0x34,4);
  piVar3 = (int *)(iVar1 + 4);
  *(int *)(iVar1 + 0x30) = *param_1;
  *param_1 = iVar1;
  lVar4 = 4;
  piVar2 = piVar3;
  do {
    *piVar2 = (int)(piVar2 + -4);
    piVar2[1] = (int)(piVar2 + 2);
    piVar2 = piVar2 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *piVar3 = *(int *)(param_1[5] + 4);
  *(int *)(iVar1 + 0x2c) = param_1[5];
  *(int *)(*piVar3 + 8) = iVar1;
  *(int *)(*(int *)(iVar1 + 0x2c) + 4) = iVar1 + 0x24;
  param_1[5] = iVar1;
  return;
}

