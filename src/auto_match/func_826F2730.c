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
extern int fn_826F1BA8();


void fn_826F2730(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((uint)(*piVar1 * 5) <= (uint)((piVar1[1] + 1) * 4)) goto LAB_826f278c;
    lVar5 = ((ulonglong)(uint)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  fn_826F1BA8(param_1,param_2,lVar5);
LAB_826f278c:
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  iVar11 = param_4 * 0x14 + iVar2;
  puVar12 = (uint *)(iVar11 + 8);
  uVar3 = *puVar12;
  uVar6 = param_4;
  if (uVar3 == 0xfffffffe) {
    *puVar12 = 0xffffffff;
    *(undefined4 *)(iVar11 + 0x10) = *param_3;
    *(undefined4 *)(iVar11 + 0x14) = param_3[1];
    *(undefined4 *)(iVar11 + 0x18) = param_3[2];
  }
  else {
    do {
      uVar6 = *(uint *)(iVar2 + 4) & uVar6 + 1;
      iVar9 = uVar6 * 0x14 + iVar2;
      puVar10 = (uint *)(iVar9 + 8);
    } while (*puVar10 != 0xfffffffe);
    uVar7 = *(uint *)(iVar11 + 0xc);
    if (uVar7 == param_4) {
      if (puVar10 != (uint *)0x0) {
        *puVar10 = uVar3;
        *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar11 + 0xc);
        *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar11 + 0x10);
        *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar11 + 0x14);
        *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar11 + 0x18);
      }
      *(undefined4 *)(iVar11 + 0x10) = *param_3;
      *(undefined4 *)(iVar11 + 0x14) = param_3[1];
      uVar4 = param_3[2];
      *puVar12 = uVar6;
      *(undefined4 *)(iVar11 + 0x18) = uVar4;
    }
    else {
      while (puVar8 = (uint *)(uVar7 * 0x14 + iVar2 + 8), *puVar8 != param_4) {
        uVar7 = *puVar8;
      }
      if (puVar10 != (uint *)0x0) {
        *puVar10 = uVar3;
        *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar11 + 0xc);
        *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar11 + 0x10);
        *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar11 + 0x14);
        *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar11 + 0x18);
      }
      *puVar8 = uVar6;
      *(undefined4 *)(iVar11 + 0x10) = *param_3;
      *(undefined4 *)(iVar11 + 0x14) = param_3[1];
      uVar4 = param_3[2];
      *puVar12 = 0xffffffff;
      *(undefined4 *)(iVar11 + 0x18) = uVar4;
    }
  }
  *(uint *)(iVar11 + 0xc) = param_4;
  return;
}

