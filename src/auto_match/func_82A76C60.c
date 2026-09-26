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
extern int fn_82A3FF60();
extern int fn_82A4F4E0();


ulonglong fn_82A76C60(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar3 = *(uint *)(param_1 + 0x58);
  iVar5 = 0;
  lVar6 = ((ulonglong)uVar2 & 0x1fffffff) << 3;
  if (0x1fffffff < uVar2) {
    lVar6 = -1;
  }
  iVar4 = fn_82A3FF60(0xffffffff83219d50,lVar6,0x20970006,0);
  if (iVar4 == 0) {
    uVar11 = 0xffffffff8007000e;
  }
  else {
    lVar6 = ((ulonglong)uVar3 & 0x1fffffff) << 3;
    if (0x1fffffff < uVar3) {
      lVar6 = -1;
    }
    iVar5 = fn_82A3FF60(0xffffffff83219d50,lVar6,0x20970006,0);
    uVar11 = -(ulonglong)(iVar5 == 0) & 0xffffffff8007000e;
  }
  piVar7 = *(int **)(param_1 + 0x28);
  uVar9 = 0;
  iVar12 = (int)uVar11;
  if (uVar2 != 0) {
    puVar8 = (uint *)(iVar4 + -4);
    do {
      if (iVar12 < 0) break;
      if (piVar7 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *piVar7;
        piVar7 = (int *)piVar7[1];
      }
      uVar9 = uVar9 + 1;
      puVar8[1] = *(uint *)(iVar10 + 0x2c);
      uVar1 = *(ushort *)(*(int *)(iVar10 + 0x2c) + 0xc);
      trapWord(6,(ulonglong)uVar1,0);
      puVar8 = puVar8 + 2;
      *puVar8 = *(uint *)(iVar10 + 0x34) / (uint)uVar1;
    } while (uVar9 < uVar2);
  }
  piVar7 = *(int **)(param_1 + 0x50);
  uVar9 = 0;
  if (uVar3 != 0) {
    puVar8 = (uint *)(iVar5 + -4);
    do {
      if (iVar12 < 0) goto LAB_82a76dfc;
      if (piVar7 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *piVar7;
        piVar7 = (int *)piVar7[1];
      }
      uVar9 = uVar9 + 1;
      puVar8[1] = *(uint *)(iVar10 + 0x2c);
      uVar1 = *(ushort *)(*(int *)(iVar10 + 0x2c) + 0xc);
      trapWord(6,(ulonglong)uVar1,0);
      puVar8 = puVar8 + 2;
      *puVar8 = *(uint *)(iVar10 + 0x34) / (uint)uVar1;
    } while (uVar9 < uVar3);
  }
  if (-1 < iVar12) {
    uVar11 = (**(code **)(**(int **)(param_1 + 8) + 0x20))
                       (*(int **)(param_1 + 8),uVar2,iVar4,uVar3,iVar5);
  }
LAB_82a76dfc:
  if (iVar4 != 0) {
    fn_82A4F4E0(iVar4);
  }
  if (iVar5 != 0) {
    fn_82A4F4E0(iVar5);
  }
  return uVar11;
}

