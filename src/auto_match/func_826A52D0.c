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
extern int fn_826A4FF8();
extern int fn_826AB4D0();


void fn_826A52D0(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  
  piVar6 = (int *)*param_1;
  if (piVar6 == (int *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((uint)(*piVar6 * 5) <= (uint)((piVar6[1] + 1) * 4)) goto LAB_826a532c;
    lVar5 = ((ulonglong)(uint)piVar6[1] + 1 & 0x7fffffff) << 1;
  }
  fn_826A4FF8(param_1,param_2,lVar5);
LAB_826a532c:
  piVar6 = (int *)*param_1;
  param_4 = piVar6[1] & param_4;
  *piVar6 = *piVar6 + 1;
  iVar1 = *param_1;
  iVar8 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar8 + 8);
  puVar13 = (uint *)(iVar8 + 8);
  uVar12 = param_4;
  if (iVar2 == -2) {
    *puVar13 = 0xffffffff;
    *(undefined4 *)(iVar8 + 0xc) = *param_3;
    iVar1 = param_3[1];
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
    }
    *(undefined4 *)(iVar8 + 0x10) = param_3[1];
  }
  else {
    do {
      uVar3 = *(uint *)(iVar1 + 4);
      uVar12 = uVar12 + 1 & uVar3;
      iVar9 = uVar12 * 0xc + iVar1;
      piVar6 = (int *)(iVar9 + 8);
    } while (*(int *)(iVar9 + 8) != -2);
    puVar4 = (undefined4 *)(iVar8 + 0xc);
    iVar10 = 4;
    lVar5 = 4;
    uVar7 = 0x1505;
    do {
      iVar10 = iVar10 + -1;
      uVar7 = (uint)*(byte *)((int)puVar4 + iVar10) + uVar7 * 0x1003f;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if ((uVar7 & uVar3) == param_4) {
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar2;
        *(undefined4 *)(iVar9 + 0xc) = *puVar4;
        iVar1 = *(int *)(iVar8 + 0x10);
        if (iVar1 != 0) {
          *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
        }
        *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar8 + 0x10);
      }
      fn_826AB4D0(puVar4,param_3);
      *puVar13 = uVar12;
    }
    else {
      iVar10 = 4;
      uVar7 = 0x1505;
      lVar5 = 4;
      do {
        iVar10 = iVar10 + -1;
        uVar7 = (uint)*(byte *)((int)puVar4 + iVar10) + uVar7 * 0x1003f;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar7 = uVar7 & uVar3;
      while (puVar11 = (uint *)(uVar7 * 0xc + iVar1 + 8), *puVar11 != param_4) {
        uVar7 = *puVar11;
      }
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar2;
        *(undefined4 *)(iVar9 + 0xc) = *puVar4;
        iVar1 = *(int *)(iVar8 + 0x10);
        if (iVar1 != 0) {
          *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
        }
        *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar8 + 0x10);
      }
      *puVar11 = uVar12;
      fn_826AB4D0(puVar4,param_3);
      *puVar13 = 0xffffffff;
    }
  }
  return;
}

