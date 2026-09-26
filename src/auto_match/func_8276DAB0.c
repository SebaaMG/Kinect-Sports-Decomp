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
extern int fn_8276B628();


void fn_8276DAB0(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((uint)(*piVar1 * 5) <= (uint)((piVar1[1] + 1) * 4)) goto LAB_8276db0c;
    lVar6 = ((ulonglong)(uint)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8276B628(param_1,param_2,lVar6);
LAB_8276db0c:
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  iVar5 = param_4 * 0x10 + iVar2;
  puVar12 = (uint *)(iVar5 + 8);
  uVar3 = *puVar12;
  uVar7 = param_4;
  if (uVar3 == 0xfffffffe) {
    *puVar12 = 0xffffffff;
    puVar4 = (undefined2 *)*param_3;
    *(undefined2 *)(iVar5 + 0x10) = *puVar4;
    *(undefined2 *)(iVar5 + 0x12) = puVar4[1];
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)param_3[1];
  }
  else {
    do {
      uVar7 = *(uint *)(iVar2 + 4) & uVar7 + 1;
      iVar10 = uVar7 * 0x10 + iVar2;
      puVar11 = (uint *)(iVar10 + 8);
    } while (*puVar11 != 0xfffffffe);
    uVar8 = *(uint *)(iVar5 + 0xc);
    if (uVar8 == param_4) {
      if (puVar11 != (uint *)0x0) {
        *puVar11 = uVar3;
        *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
        *(undefined2 *)(iVar10 + 0x10) = *(undefined2 *)(iVar5 + 0x10);
        *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar5 + 0x12);
        *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
      }
      puVar4 = (undefined2 *)*param_3;
      *(undefined2 *)(iVar5 + 0x10) = *puVar4;
      *(undefined2 *)(iVar5 + 0x12) = puVar4[1];
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)param_3[1];
      *puVar12 = uVar7;
    }
    else {
      while (puVar9 = (uint *)(uVar8 * 0x10 + iVar2 + 8), *puVar9 != param_4) {
        uVar8 = *puVar9;
      }
      if (puVar11 != (uint *)0x0) {
        *puVar11 = uVar3;
        *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
        *(undefined2 *)(iVar10 + 0x10) = *(undefined2 *)(iVar5 + 0x10);
        *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar5 + 0x12);
        *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
      }
      *puVar9 = uVar7;
      puVar4 = (undefined2 *)*param_3;
      *(undefined2 *)(iVar5 + 0x10) = *puVar4;
      *(undefined2 *)(iVar5 + 0x12) = puVar4[1];
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)param_3[1];
      *puVar12 = 0xffffffff;
    }
  }
  *(uint *)(iVar5 + 0xc) = param_4;
  return;
}

