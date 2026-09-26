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


void fn_8275EB90(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(int *)(param_1 + 8) - (uint)*(ushort *)(param_1 + 0x14));
  if ((*(int *)(param_1 + 4) - (int)piVar3) + -8 < piVar3[1]) {
    return;
  }
  iVar1 = *piVar3;
  iVar2 = iVar1 + 8;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 4) = iVar2;
  if (iVar1 == 0) {
    return;
  }
  *(int *)(param_1 + 8) = iVar2;
  *(short *)(param_1 + 0x14) = (short)iVar2 - (short)iVar1;
  return;
}

