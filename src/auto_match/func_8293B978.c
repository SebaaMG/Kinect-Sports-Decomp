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
extern int fn_82937A60();
extern int fn_8293B8F8();
extern unsigned int lbl_82032E0C;


void fn_8293B978(undefined8 param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)*param_2;
  uVar8 = param_2[1];
  uVar7 = param_2[2];
  if (*(int *)(param_3 + 0x5c) != 0) {
    uVar10 = 0xffffffff;
    if (*(int *)(*(int *)(param_3 + 0x5c) + 0x14) != 0xd000000) {
      uVar10 = 1;
    }
    uVar8 = uVar8 | 0x80000000;
    uVar7 = -uVar10 & ~uVar10 & 0x80000000 | uVar7 & 0x7fffffff;
  }
  if ((*param_2 & 0x1f) < 0x14) {
    iVar1 = *(int *)(param_3 + 0x54);
    iVar5 = fn_8293B8F8(param_1,iVar1,0xffffffff82032ec8);
    if (iVar5 != 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      uVar6 = 0xffffffff82032e8c;
      goto LAB_8293ba18;
    }
    uVar9 = ((ulonglong)*(uint *)(iVar1 + 0x18) & 0x3f) << 0xc | uVar9 & 0xfffffffffffc0fff;
    if (*(int *)(iVar1 + 0x28) != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x28) + 0x10) != 0xf) {
        uVar6 = 0xffffffff82032e30;
        goto LAB_8293ba18;
      }
      uVar9 = uVar9 | 0x40000;
    }
    uVar10 = *(uint *)(iVar1 + 0x20);
    uVar8 = (((*(uint *)(&lbl_82032E0C + (uVar10 >> 7 & 0x1c)) & 7) << 3 |
             *(uint *)(&lbl_82032E0C + (uVar10 >> 4 & 0x1c)) & 7) << 3 |
            *(uint *)(&lbl_82032E0C + (uVar10 >> 1 & 0x1c)) & 7) << 3 |
            *(uint *)(&lbl_82032E0C + (uVar10 & 7) * 4) & 7 | uVar8 & 0xfffff000;
  }
  else {
    uVar8 = uVar8 | 0xfff;
  }
  uVar10 = (uint)uVar9;
  if (param_4 != 1) {
    iVar1 = *(int *)(param_3 + 0x60);
    if (*(int *)(iVar1 + 0x10) != 0) {
      uVar6 = 0xffffffff82032dc8;
LAB_8293ba18:
      fn_82937A60(param_1,uVar6);
      return;
    }
    if (*(int *)(iVar1 + 0x28) != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x28) + 0x10) != 0xf) {
        uVar6 = 0xffffffff82032d70;
        goto LAB_8293ba18;
      }
      uVar9 = uVar9 | 0x800;
    }
    iVar5 = fn_8293B8F8(param_1,iVar1,0xffffffff82032d64);
    if (iVar5 != 0) {
      return;
    }
    uVar2 = *(uint *)(iVar1 + 0x24);
    uVar3 = ((ulonglong)*(uint *)(iVar1 + 0x18) & 0x3f) << 5;
    uVar4 = uVar9 & 0x1f;
    if (uVar4 == 0) {
      uVar10 = uVar2 << 0x1e | (uint)uVar3 | (uint)uVar9 & 0x3ffff81f;
    }
    else {
      uVar9 = ((ulonglong)uVar2 & 0x3f) << 0x1a | uVar3 | uVar9 & 0xffffffff03fff81f;
      uVar10 = (uint)uVar9;
      if (uVar4 == 0x12) {
        uVar9 = ((ulonglong)uVar2 & 0x3f) >> 2 & 3;
        if ((uVar9 == ((ulonglong)uVar2 & 0x3f) >> 4) && (uVar9 == ((ulonglong)(uVar2 >> 6) & 3)))
        goto LAB_8293bbc0;
        uVar6 = 0xffffffff82032c9c;
      }
      else if (uVar4 == 0x18) {
        uVar9 = (ulonglong)uVar2 & 3;
        if (((uVar9 == (((ulonglong)uVar2 & 0x3f) >> 2 & 3)) &&
            (uVar9 == ((ulonglong)uVar2 & 0x3f) >> 4)) && (uVar9 == ((ulonglong)(uVar2 >> 6) & 3)))
        goto LAB_8293bbc0;
        uVar6 = 0xffffffff82032ce0;
      }
      else {
        if (((uVar9 >> 0x18 ^ (ulonglong)uVar2) & 0xc0) == 0) goto LAB_8293bbc0;
        uVar6 = 0xffffffff82032d20;
      }
      fn_82937A60(param_1,uVar6);
    }
  }
LAB_8293bbc0:
  *param_2 = uVar10;
  param_2[1] = uVar8;
  param_2[2] = uVar7;
  return;
}

