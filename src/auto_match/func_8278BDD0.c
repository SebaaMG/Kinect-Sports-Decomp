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


ulonglong fn_8278BDD0(undefined8 param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_2 + 0x16);
  uVar4 = 0;
  if (((uVar1 >> 6 & 1) != 0) && (piVar2 = *(int **)(param_2 + 8), piVar2 != (int *)0x0)) {
    uVar4 = 0x1505;
    iVar5 = (*piVar2 + 1) * 4;
    for (iVar6 = iVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
      iVar5 = iVar5 + -1;
      uVar4 = (ulonglong)*(byte *)((int)piVar2 + iVar5) + (longlong)(int)uVar4 * 0x1003f;
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar4 = *(ushort *)(param_2 + 0xc) ^ uVar4;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar4 = ((longlong)*(short *)(param_2 + 0xe) & 0xffffffU) << 8 ^ uVar4;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar4 = ((longlong)*(short *)(param_2 + 0x10) & 0xfffffU) << 0xc ^ uVar4;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar4 = (ulonglong)*(ushort *)(param_2 + 0x12) << 0x10 ^ uVar4;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    uVar4 = ((ulonglong)*(ushort *)(param_2 + 0x14) & 0x3fff) << 0x12 ^ uVar4;
  }
  if (((uVar1 >> 7 & 1) == 0) || (uVar3 = 1, (uVar1 & 0x8000) == 0)) {
    uVar3 = 0;
  }
  uVar1 = *(ushort *)(param_2 + 0x16);
  return ((ulonglong)(uVar1 >> 8) & 6 | (ulonglong)uVar1 << 9 | uVar3) ^
         (ulonglong)(uVar1 >> 1) & 0xc00 ^ uVar4;
}

