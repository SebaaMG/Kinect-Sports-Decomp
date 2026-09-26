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
extern int fn_82753970();


void fn_82753BC0(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar4 = 8;
LAB_82753c14:
    fn_82753970(param_1,param_2,lVar4);
  }
  else if ((uint)((piVar1[1] + 1) * 4) < (uint)(*piVar1 * 5)) {
    lVar4 = ((ulonglong)(uint)piVar1[1] + 1 & 0x7fffffff) << 1;
    goto LAB_82753c14;
  }
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  iVar10 = param_4 * 0xc + iVar2;
  puVar11 = (uint *)(iVar10 + 8);
  uVar3 = *puVar11;
  uVar5 = param_4;
  if (uVar3 == 0xfffffffe) {
    *puVar11 = 0xffffffff;
    uVar12 = *param_3;
  }
  else {
    do {
      uVar5 = *(uint *)(iVar2 + 4) & uVar5 + 1;
      iVar7 = uVar5 * 0xc + iVar2;
      puVar6 = (uint *)(iVar7 + 8);
    } while (*(int *)(iVar7 + 8) != -2);
    uVar8 = *(uint *)(iVar10 + 0xc);
    if (uVar8 != param_4) {
      while (puVar9 = (uint *)(uVar8 * 0xc + iVar2 + 8), *puVar9 != param_4) {
        uVar8 = *puVar9;
      }
      if (puVar6 != (uint *)0x0) {
        *puVar6 = uVar3;
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar10 + 0xc);
        *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar10 + 0x10);
      }
      *puVar9 = uVar5;
      uVar12 = *param_3;
      *puVar11 = 0xffffffff;
      *(undefined4 *)(iVar10 + 0x10) = uVar12;
      goto LAB_82753d0c;
    }
    if (puVar6 != (uint *)0x0) {
      *puVar6 = uVar3;
      *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar10 + 0x10);
    }
    uVar12 = *param_3;
    *puVar11 = uVar5;
  }
  *(undefined4 *)(iVar10 + 0x10) = uVar12;
LAB_82753d0c:
  *(uint *)(iVar10 + 0xc) = param_4;
  return;
}

