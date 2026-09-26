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
extern int fn_82687100();


void fn_82686900(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar5 = 8;
LAB_82686954:
    fn_82687100(param_1,param_2,lVar5);
  }
  else if ((uint)((piVar1[1] + 1) * 4) < (uint)(*piVar1 * 5)) {
    lVar5 = ((ulonglong)(uint)piVar1[1] + 1 & 0x7fffffff) << 1;
    goto LAB_82686954;
  }
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  iVar4 = param_4 * 0x10 + iVar2;
  puVar12 = (uint *)(iVar4 + 8);
  uVar3 = *puVar12;
  uVar6 = param_4;
  if (uVar3 == 0xfffffffe) {
    *puVar12 = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x10) = *param_3;
    uVar11 = param_3[1];
  }
  else {
    do {
      uVar6 = *(uint *)(iVar2 + 4) & uVar6 + 1;
      iVar8 = uVar6 * 0x10 + iVar2;
      puVar7 = (uint *)(iVar8 + 8);
    } while (*(int *)(iVar8 + 8) != -2);
    uVar9 = *(uint *)(iVar4 + 0xc);
    if (uVar9 != param_4) {
      while (puVar10 = (uint *)(uVar9 * 0x10 + iVar2 + 8), *puVar10 != param_4) {
        uVar9 = *puVar10;
      }
      if (puVar7 != (uint *)0x0) {
        *puVar7 = uVar3;
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
      }
      *puVar10 = uVar6;
      *(undefined4 *)(iVar4 + 0x10) = *param_3;
      uVar11 = param_3[1];
      *puVar12 = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x14) = uVar11;
      goto LAB_82686a74;
    }
    if (puVar7 != (uint *)0x0) {
      *puVar7 = uVar3;
      *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
      *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
    }
    *(undefined4 *)(iVar4 + 0x10) = *param_3;
    uVar11 = param_3[1];
    *puVar12 = uVar6;
  }
  *(undefined4 *)(iVar4 + 0x14) = uVar11;
LAB_82686a74:
  *(uint *)(iVar4 + 0xc) = param_4;
  return;
}

