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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_827F1148();
extern int fn_82811438();
extern int fn_82A1EFC0();
extern unsigned int lbl_821C4CB8;
extern unsigned int *lbl_832823E0;


void fn_82554260(undefined4 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 auStack_90 [4];
  undefined1 auStack_80 [128];
  
  fn_827F1148(param_1,param_2,0);
  uVar2 = (param_3 & 0xffffffff) << 2;
  uVar8 = uVar2 & 0xfffffffc;
  iVar5 = (int)param_3;
  param_1[99] = iVar5;
  *param_1 = &lbl_821C4CB8;
  lVar6 = uVar8 + ((longlong)((int)uVar8 >> 4) + (ulonglong)((int)uVar8 < 0 && (uVar2 & 0xc) != 0) &
                  0xfffffff) * -0x10;
  iVar7 = (int)lVar6;
  if (lVar6 < 1) {
    uVar2 = uVar8;
    if (iVar7 < 0) {
      uVar2 = uVar8 - lVar6;
    }
  }
  else {
    uVar2 = (uVar8 - lVar6) + 0x10;
  }
  if (iVar7 < 1) {
    uVar3 = uVar8;
    if (iVar7 < 0) {
      uVar3 = uVar8 - lVar6;
    }
  }
  else {
    uVar3 = (uVar8 - lVar6) + 0x10;
  }
  uVar8 = uVar8 - 4;
  lVar6 = uVar8 + ((longlong)((int)uVar8 >> 4) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 0xf) != 0) &
                  0xfffffff) * -0x10;
  if (lVar6 < 1) {
    if ((int)lVar6 < 0) {
      uVar8 = uVar8 - lVar6;
    }
  }
  else {
    uVar8 = (uVar8 - lVar6) + 0x10;
  }
  lVar6 = param_3 + ((longlong)(iVar5 >> 4) + (ulonglong)(iVar5 < 0 && (param_3 & 0xf) != 0) &
                    0xfffffff) * -0x10;
  if (lVar6 < 1) {
    uVar4 = param_3;
    if ((int)lVar6 < 0) {
      uVar4 = param_3 - lVar6;
    }
  }
  else {
    uVar4 = (param_3 - lVar6) + 0x10;
  }
  auStack_90[0] = 0;
  lVar6 = param_3 * 0x3b0 + -0xf0 + uVar4 + uVar8 + uVar3 + uVar2;
  fn_82811438(auStack_80,auStack_90,0x10);
  uVar1 = (**(code **)(*lbl_832823E0 + 0xc))(lbl_832823E0,lVar6,auStack_80);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(uVar1,0,lVar6);
}

