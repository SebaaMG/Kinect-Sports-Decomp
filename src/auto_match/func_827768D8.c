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
extern int fn_82775240();


void fn_827768D8(int *param_1,undefined8 param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  
  piVar11 = (int *)*param_1;
  if (piVar11 == (int *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((uint)(*piVar11 * 5) <= (uint)((piVar11[1] + 1) * 4)) goto LAB_82776934;
    lVar5 = ((ulonglong)(uint)piVar11[1] + 1 & 0x7fffffff) << 1;
  }
  fn_82775240(param_1,param_2,lVar5);
LAB_82776934:
  piVar11 = (int *)*param_1;
  param_4 = piVar11[1] & param_4;
  *piVar11 = *piVar11 + 1;
  iVar1 = *param_1;
  iVar4 = param_4 * 0x20 + iVar1;
  iVar2 = *(int *)(iVar4 + 8);
  puVar9 = (uint *)(iVar4 + 8);
  uVar6 = param_4;
  if (iVar2 == -2) {
    *puVar9 = 0xffffffff;
    puVar3 = (undefined4 *)*param_3;
    *(undefined4 *)(iVar4 + 0x10) = *puVar3;
    *(undefined4 *)(iVar4 + 0x14) = puVar3[1];
    puVar3 = (undefined4 *)param_3[1];
    *(undefined4 *)(iVar4 + 0x18) = *puVar3;
    *(undefined4 *)(iVar4 + 0x1c) = puVar3[1];
    *(undefined4 *)(iVar4 + 0x20) = puVar3[2];
    *(undefined4 *)(iVar4 + 0x24) = puVar3[3];
  }
  else {
    do {
      uVar6 = *(uint *)(iVar1 + 4) & uVar6 + 1;
      iVar10 = uVar6 * 0x20 + iVar1;
      piVar11 = (int *)(iVar10 + 8);
    } while (*piVar11 != -2);
    uVar7 = *(uint *)(iVar4 + 0xc);
    if (uVar7 == param_4) {
      if (piVar11 != (int *)0x0) {
        *piVar11 = iVar2;
        *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
        *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar4 + 0x18);
        *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
        *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
      }
      puVar3 = (undefined4 *)*param_3;
      *(undefined4 *)(iVar4 + 0x10) = *puVar3;
      *(undefined4 *)(iVar4 + 0x14) = puVar3[1];
      puVar3 = (undefined4 *)param_3[1];
      *(undefined4 *)(iVar4 + 0x18) = *puVar3;
      *(undefined4 *)(iVar4 + 0x1c) = puVar3[1];
      *(undefined4 *)(iVar4 + 0x20) = puVar3[2];
      *(undefined4 *)(iVar4 + 0x24) = puVar3[3];
      *puVar9 = uVar6;
    }
    else {
      while (puVar8 = (uint *)(uVar7 * 0x20 + iVar1 + 8), *puVar8 != param_4) {
        uVar7 = *puVar8;
      }
      if (piVar11 != (int *)0x0) {
        *piVar11 = iVar2;
        *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
        *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar4 + 0x18);
        *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
        *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
      }
      *puVar8 = uVar6;
      puVar3 = (undefined4 *)*param_3;
      *(undefined4 *)(iVar4 + 0x10) = *puVar3;
      *(undefined4 *)(iVar4 + 0x14) = puVar3[1];
      puVar3 = (undefined4 *)param_3[1];
      *(undefined4 *)(iVar4 + 0x18) = *puVar3;
      *(undefined4 *)(iVar4 + 0x1c) = puVar3[1];
      *(undefined4 *)(iVar4 + 0x20) = puVar3[2];
      *(undefined4 *)(iVar4 + 0x24) = puVar3[3];
      *puVar9 = 0xffffffff;
    }
  }
  *(uint *)(iVar4 + 0xc) = param_4;
  return;
}

