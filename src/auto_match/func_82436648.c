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
extern unsigned int *auStack_ac;
extern int fn_822ABA88();
extern int fn_82340BD8();
extern int fn_82436130();
extern int fn_82436CB8();
extern int fn_8243E150();
extern int fn_82F64988();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_b0;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8328D41C;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;


undefined4
fn_82436648(int param_1,int param_2,undefined8 param_3,int param_4,int param_5,undefined4 param_6,
             uint *param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong alStack_c0 [2];
  int iStack_b0;
  undefined2 auStack_ac [32];
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  
  uVar7 = 0;
  uStack_6c = 0;
  iStack_b0 = -1;
  iStack_68 = 0;
  iStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  auStack_ac[0] = 0;
  piVar2 = *(int **)(**(int **)(**(int **)(param_1 + 0x40) + 8) + param_2 * 4);
  iVar4 = param_4;
  iVar3 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),0);
  iStack_b0 = param_2;
  iStack_64 = iVar4;
  uStack_58 = param_6;
  fn_82F64988(auStack_ac,0x20);
  if (param_5 == lbl_8328D41C) {
code_r0x82436724:
    uStack_6c = 0;
  }
  else {
    alStack_c0[0] = (longlong)param_5;
    if ((float)alStack_c0[0] * lbl_82193AF0 <= lbl_821CC160) goto code_r0x82436724;
    iVar1 = *(int *)(param_1 + 0x40);
    iVar4 = (int)(((float)alStack_c0[0] * lbl_82193AF0 - *(float *)(iVar1 + 0x108)) /
                 *(float *)(iVar1 + 0x10c));
    alStack_c0[0] = (longlong)iVar4;
    lVar6 = (longlong)(int)(iVar4 * ((-(uint)(*(int *)(iVar1 + 0xf8) != 0) & 0xfffffffe) + 1)) *
            (longlong)*(int *)(iVar1 + 0x110) + 100;
    uStack_6c = (uint)lVar6;
    uStack_6c = -((int)uStack_6c >> 0x1f) - (uint)(lVar6 != 0) & uStack_6c;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = 0;
  }
  iStack_68 = param_5;
  if (param_4 != 1) goto code_r0x82436950;
  piVar2 = *(int **)(param_1 + 0x40);
  if ((*(int *)(*piVar2 + 0xa0) == 0) || (*(int *)(*(int *)(*piVar2 + 0xa0) + 0x40) != 1)) {
    if (piVar2[0x3e] == 0) {
code_r0x824367e8:
      if (param_5 <= piVar2[0x46]) goto code_r0x82436894;
    }
    else if (piVar2[0x46] <= param_5) {
      if (piVar2[0x3e] != 0) goto code_r0x82436894;
      goto code_r0x824367e8;
    }
    piVar2[0x46] = param_5;
    uStack_60 = 1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x148) * 0x18 +
            *(int *)(*(int *)(param_1 + 0x40) + 0x138);
    iVar1 = *(int *)(iVar4 + 8);
    for (iVar4 = *(int *)(iVar4 + 4); iVar4 != iVar1; iVar4 = iVar4 + 0x5c) {
      *(undefined4 *)(iVar4 + 0x50) = 0;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x128);
    for (iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x124); iVar4 != iVar1; iVar4 = iVar4 + 0x5c) {
      *(undefined4 *)(iVar4 + 0x50) = 0;
    }
    piVar2 = *(int **)(**(int **)(**(int **)(param_1 + 0x40) + 8) + iStack_b0 * 4);
    iVar4 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),0);
    if (*(int *)(iVar4 + 0x24) != 0) {
      fn_82436CB8(param_1);
    }
  }
code_r0x82436894:
  piVar2 = *(int **)(**(int **)(**(int **)(param_1 + 0x40) + 8) + iStack_b0 * 4);
  iVar5 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),0);
  fn_82436130(alStack_c0,param_1,iVar5);
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0xf8);
  iVar1 = ((uint)((ulonglong)(alStack_c0[0]) >> 32));
  if (iVar4 == 0) {
code_r0x82436910:
    if (((uint)((ulonglong)(alStack_c0[0]) >> 32)) < iStack_68) {
code_r0x82436918:
      iVar4 = fn_82340BD8((ulonglong)*(uint *)(iVar5 + 0x1a0) + 0x194,
                                *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x208));
      if (iVar4 != 0) {
        uVar7 = (uint)(lbl_8328D41C != iVar1);
      }
    }
  }
  else if ((iStack_68 < ((uint)((ulonglong)(alStack_c0[0]) >> 32))) || (((uint)((ulonglong)(alStack_c0[0]) >> 32)) <= lbl_8328D41C)) {
    if (iVar4 == 0) goto code_r0x82436910;
    goto code_r0x82436918;
  }
  uStack_5c = uVar7;
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar7;
  }
code_r0x82436950:
  if ((*(int *)(iVar3 + 0x24) != 0) && (uStack_5c != 0)) {
    piVar2 = *(int **)(**(int **)(**(int **)(param_1 + 0x40) + 8) + param_2 * 4);
    *(undefined4 *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x1c) = 1;
  }
  fn_8243E150((ulonglong)*(uint *)(*(int *)(param_1 + 0x40) + 0x148) * 0x18 +
               (ulonglong)*(uint *)(*(int *)(param_1 + 0x40) + 0x138),&iStack_b0,1);
  return uStack_60;
}

