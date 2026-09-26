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


void fn_8268DA20(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  iVar1 = ((*(uint *)(param_2 + 4) >> 3) + 2) * 2;
  uVar3 = (uint)*(ushort *)(iVar1 + (int)param_1);
  if (uVar3 == 0) {
    if (0x400 < *param_1 + 8U) {
      return;
    }
    uVar4 = *param_1 + 1;
    uVar3 = uVar4 & 0xffff;
    *(short *)(iVar1 + (int)param_1) = (short)uVar4;
    lVar5 = 8;
    piVar2 = param_1 + *param_1 + 0x100;
    do {
      piVar2 = piVar2 + 1;
      *piVar2 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *param_1 = *param_1 + 8;
  }
  param_1[(*(uint *)(param_2 + 4) & 7) + uVar3 + 0x100] = param_2;
  return;
}

