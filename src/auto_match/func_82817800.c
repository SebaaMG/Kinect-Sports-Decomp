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


void fn_82817800(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  if (param_1[3] == 0) {
    return;
  }
  iVar2 = 0;
  do {
    uVar1 = uVar1 + 1;
    piVar3 = (int *)(iVar2 + param_1[2]);
    iVar2 = iVar2 + 0x10;
    *(int *)(*(int *)(*(int *)(*piVar3 * 8 + *param_1) + 0x14) + piVar3[1]) =
         *(int *)(*(int *)(piVar3[2] * 8 + *param_1) + 0x14) + piVar3[3];
  } while (uVar1 < (uint)param_1[3]);
  return;
}

