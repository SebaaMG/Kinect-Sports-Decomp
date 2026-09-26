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
extern int fn_82F68CC0();


void fn_827757C8(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
    lVar3 = 8;
  }
  else {
    if ((uint)(*piVar8 * 5) <= (uint)((piVar8[1] + 1) * 4)) goto LAB_82775824;
    lVar3 = ((ulonglong)(uint)piVar8[1] + 1 & 0x7fffffff) << 1;
  }
  fn_82775240(param_1,param_2,lVar3);
LAB_82775824:
  piVar8 = (int *)*param_1;
  param_4 = piVar8[1] & param_4;
  *piVar8 = *piVar8 + 1;
  iVar1 = *param_1;
  iVar6 = param_4 * 0x20 + iVar1;
  iVar2 = *(int *)(iVar6 + 8);
  puVar10 = (uint *)(iVar6 + 8);
  uVar9 = param_4;
  if (iVar2 == -2) {
    *puVar10 = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x10) = *param_3;
    *(undefined4 *)(iVar6 + 0x14) = param_3[1];
    *(undefined4 *)(iVar6 + 0x18) = param_3[2];
    *(undefined4 *)(iVar6 + 0x1c) = param_3[3];
    *(undefined4 *)(iVar6 + 0x20) = param_3[4];
    *(undefined4 *)(iVar6 + 0x24) = param_3[5];
  }
  else {
    do {
      uVar9 = *(uint *)(iVar1 + 4) & uVar9 + 1;
      iVar7 = uVar9 * 0x20 + iVar1;
      piVar8 = (int *)(iVar7 + 8);
    } while (*piVar8 != -2);
    uVar4 = *(uint *)(iVar6 + 0xc);
    if (uVar4 == param_4) {
      if (piVar8 != (int *)0x0) {
        *piVar8 = iVar2;
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
        *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
        *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
        *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar6 + 0x18);
        *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar6 + 0x1c);
        *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar6 + 0x20);
        *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(iVar6 + 0x24);
      }
      fn_82F68CC0(iVar6 + 0x10,param_3,0x18);
      *puVar10 = uVar9;
    }
    else {
      while (puVar5 = (uint *)(uVar4 * 0x20 + iVar1 + 8), *puVar5 != param_4) {
        uVar4 = *puVar5;
      }
      if (piVar8 != (int *)0x0) {
        *piVar8 = iVar2;
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
        *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
        *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
        *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar6 + 0x18);
        *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar6 + 0x1c);
        *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar6 + 0x20);
        *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(iVar6 + 0x24);
      }
      *puVar5 = uVar9;
      fn_82F68CC0(iVar6 + 0x10,param_3,0x18);
      *puVar10 = 0xffffffff;
    }
  }
  *(uint *)(iVar6 + 0xc) = param_4;
  return;
}

