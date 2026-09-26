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
extern unsigned int *auStack_6c;
extern int fn_82AB15D0();
extern int fn_82B7BE58();
extern int fn_82B9CF38();
extern int fn_82BA8E88();
extern int fn_82BAD768();
extern int fn_82BD09F0();
extern unsigned int lbl_820DF0C0;
extern unsigned int lbl_820E2FB8;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


void fn_82BAEA38(int param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uStack_70;
  uint auStack_6c [3];
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  
  piVar5 = (int *)((((int)param_3 - *(int *)(param_2 + 4)) / 0xc) * 8 + *(int *)(param_2 + 0x34));
  if (*piVar5 == 0) {
    *piVar5 = param_1;
  }
  else {
    piVar5[1] = param_1;
  }
  fn_82B9CF38(*(undefined4 *)(param_4 + 0x600),*(undefined4 *)(param_1 + 0xac),&uStack_60,
                    *(undefined4 *)(param_4 + 0x568),0xffffffff82b7c800,param_4);
  fn_82BAD768(param_2,*(undefined4 *)(param_1 + 0xac),param_3,*(undefined4 *)(param_1 + 0xa8));
  fn_82B7BE58(param_4,*(undefined4 *)(param_1 + 0xac),&uStack_70,auStack_6c);
  uVar2 = *param_3;
  uVar6 = (((auStack_6c[0] & 3) << 5 | uStack_70 & 0x1f) << 1 | uStack_60 & 1) << 0x13;
  *param_3 = uVar6 | uVar2 & 0xf807ffff;
  uVar4 = *(uint *)(param_1 + 0x84);
  *(char *)((int)param_3 + 0xb) =
       (char)((int)uStack_44 >> 2) + ((int)uStack_44 < 0 && (uStack_44 & 3) != 0);
  param_3[1] = ((((((uStack_48 & 0x3f) << 8 | uStack_4c & 0x3f) << 1 | uStack_50 & 1) << 1 |
                 uStack_54 & 1) << 1 | uStack_58 & 1) << 1 | uStack_5c & 1) << 0xc |
               param_3[1] & 0xc0c00fff;
  uVar4 = (uVar4 >> 0x18) << 0x1e;
  *param_3 = uVar4 | uVar6 | uVar2 & 0x3807ffff;
  param_3[2] = (((int)uStack_40 >> 2) + (uint)((int)uStack_40 < 0 && (uStack_40 & 3) != 0) +
               *(int *)(param_1 + 0xa8)) * 0x100 & 0x7fffff00 | param_3[2] & 0x800000ff;
  *param_3 = uVar4 | uVar6 | uVar2 & 0x3807ffe0 |
             *(uint *)(&lbl_820E2FB8 + *(int *)(param_1 + 0x18) * 4) & 0x1f;
  uVar2 = fn_82BD09F0(*(undefined4 *)(param_4 + 0xab0),*(undefined4 *)(param_1 + 0xec));
  *param_3 = (uVar2 & 0x3f) << 5 | *param_3 & 0xfffff01f;
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xb0) != '\0') {
      param_3[1] = param_3[1] | 0x40000000;
    }
  }
  else {
    uVar3 = lbl_820DF0C0;
    if ((*(uint *)(iVar1 + 0xe4) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
      if ((*(uint *)(param_1 + 0xe4) >> 7 & 1) != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df958,0xffffffff820df268,0xb80);
      }
      uVar3 = fn_82BD09F0(*(undefined4 *)(param_4 + 0xab0),iVar1);
      *(undefined4 *)(param_1 + 0x38) = uVar3;
      uVar3 = *(undefined4 *)(iVar1 + 0x80);
    }
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    param_3[1] = param_3[1] & 0xbfffffff;
    *param_3 = (*(int *)(param_1 + 0xb8) + -1) * 0x8000000 & 0x38000000U | *param_3 & 0xc7ffffff;
  }
  uVar2 = fn_82BD09F0(*(undefined4 *)(param_4 + 0xab0),param_1);
  *param_3 = (uVar2 & 0x3f) << 0xc | *param_3 & 0xfffc0fff;
  uVar2 = fn_82BA8E88(*(undefined1 *)(param_1 + 0x80));
  param_3[1] = param_3[1] & 0xfffffff8 | uVar2 & 7;
  uVar2 = fn_82BA8E88(*(undefined1 *)(param_1 + 0x81));
  param_3[1] = (uVar2 & 7) << 3 | param_3[1] & 0xffffffc7;
  uVar2 = fn_82BA8E88(*(undefined1 *)(param_1 + 0x82));
  param_3[1] = (uVar2 & 7) << 6 | param_3[1] & 0xfffffe3f;
  uVar4 = fn_82BA8E88(*(undefined1 *)(param_1 + 0x83));
  uVar2 = param_3[1];
  uVar4 = (uVar4 & 7) << 9;
  uVar6 = uVar4 | uVar2 & 0xfffff1ff;
  param_3[1] = uVar6;
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    uVar6 = uVar4 | uVar2 & 0x7ffff1ff;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0xba7);
        return;
      }
      uVar6 = uVar6 | 0x80000000;
      uVar2 = param_3[2] | 0x80000000;
      goto LAB_82baed48;
    }
    uVar6 = uVar6 | 0x80000000;
  }
  uVar2 = param_3[2] & 0x7fffffff;
LAB_82baed48:
  param_3[1] = uVar6;
  param_3[2] = uVar2;
  return;
}

