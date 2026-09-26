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
extern int fn_825A24C0();


void fn_82598C60(int param_1,int param_2)

{
  int iVar1;
  int iVar3;
  int *piVar4;
  longlong lVar2;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x8cc);
  iVar3 = 0;
  if (*(int *)(param_1 + 0x8d0) != 0) {
    iVar3 = *(int *)(*(int *)((ushort *)*piVar5 + 4) - (uint)*(ushort *)*piVar5);
  }
  iVar1 = *piVar5;
  for (piVar4 = *(int **)(iVar1 + 4); piVar4 < *(int **)(iVar1 + 8); piVar4 = piVar4 + 0xd) {
    if (*piVar4 == param_2) goto LAB_82598cd4;
  }
  piVar4 = (int *)0x0;
LAB_82598cd4:
  fn_825A24C0(iVar1,piVar4);
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x8d0) - 1;
  *(int *)(param_1 + 0x8d0) = (int)lVar2;
  if ((lVar2 != 0) && ((uint)LZCOUNT(iVar3 - param_2) >> 5 != 0)) {
    piVar5 = (int *)(*(int *)((ushort *)*piVar5 + 4) - (uint)*(ushort *)*piVar5);
    iVar3 = *piVar5;
    piVar5[9] = 1;
    for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      (**(code **)(iVar3 + 0x180))(iVar3);
    }
    piVar5[10] = -1;
  }
  return;
}

