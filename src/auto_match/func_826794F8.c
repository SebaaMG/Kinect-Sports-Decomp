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
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_82637A98();
extern int fn_82637AF8();
extern int fn_82637B30();
extern int fn_826381E0();
extern int fn_82638220();
extern int fn_82638250();
extern int fn_82638560();
extern int fn_826385B8();
extern int fn_82639208();
extern int fn_82639228();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_826398E8();
extern int fn_82639EA8();
extern int fn_8263CBB0();
extern int fn_826776A0();
extern int fn_826791A0();
extern int fn_826792B0();
extern int fn_8268CC00();
extern int fn_8268CEC0();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200533C;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;


void fn_826794F8(undefined8 param_1,double param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double extraout_f1;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int iStack_d0;
  int iStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  iVar4 = fn_82F6A530();
  fStack_c0 = lbl_82002AE0;
  if (*(char *)(iVar4 + 0x10) == '\0') {
    fn_82F6A57C();
    return;
  }
  dVar10 = (double)(float)(param_2 - extraout_f1);
  dVar14 = (double)(float)(param_4 - param_3);
  dVar16 = (double)lbl_82002AE0;
  *(uint *)(iVar4 + 0x14) = param_7[0xc] & 2;
  *(float *)(iVar4 + 0xe4) = (float)ABS(dVar10);
  *(float *)(iVar4 + 0xe8) = (float)ABS(dVar14);
  if (dVar10 < dVar16) {
    dVar10 = dVar16;
  }
  if (dVar14 < dVar16) {
    dVar14 = dVar16;
  }
  iVar7 = param_7[2];
  iVar6 = param_7[3];
  uVar9 = param_7[4];
  uVar8 = param_7[5];
  iVar1 = param_7[6];
  iVar2 = param_7[7];
  dVar17 = extraout_f1;
  iStack_d0 = iVar7;
  uStack_c8 = uVar9;
  if (iVar7 < 0) {
    dVar17 = (double)(float)((double)((float)((double)(longlong)-iVar7 * dVar10) /
                                     (float)(longlong)(int)uVar9) + extraout_f1);
    if (-iVar7 < (int)uVar9) {
      uStack_c8 = uVar9 + iVar7;
    }
    else {
      uStack_c8 = 0;
    }
    iStack_d0 = 0;
  }
  iVar3 = *param_7;
  if (iVar3 < (int)(uVar9 + iVar7)) {
    uStack_c8 = iVar3 - iStack_d0;
    param_2 = (double)(float)((double)((float)((double)(longlong)(iVar3 - iVar7) * dVar10) /
                                      (float)(longlong)(int)uVar9) + extraout_f1);
  }
  dVar10 = param_3;
  uStack_c4 = uVar8;
  iStack_cc = iVar6;
  if (iVar6 < 0) {
    dVar10 = (double)(float)((double)((float)((double)(longlong)-iVar6 * dVar14) /
                                     (float)(longlong)(int)uVar8) + param_3);
    if (-iVar6 < (int)uVar8) {
      uStack_c4 = uVar8 + iVar6;
    }
    else {
      uStack_c4 = 0;
    }
    iStack_cc = 0;
  }
  iVar7 = param_7[1];
  if (iVar7 < (int)(uVar8 + iVar6)) {
    uStack_c4 = iVar7 - iStack_cc;
    param_4 = (double)(float)((double)((float)((double)(longlong)(iVar7 - iVar6) * dVar14) /
                                      (float)(longlong)(int)uVar8) + param_3);
  }
  dVar19 = (double)(float)(param_2 - dVar17);
  dVar14 = (double)lbl_821AAD20;
  dVar18 = (double)(float)(param_4 - dVar10);
  fStack_bc = lbl_821AAD20;
  if ((param_7[0xc] & 4U) != 0) {
    iVar7 = iVar1;
    if (iVar1 < iStack_d0) {
      iVar7 = iStack_d0;
    }
    iVar6 = iVar2;
    if (iVar2 < iStack_cc) {
      iVar6 = iStack_cc;
    }
    uVar9 = (param_7[8] - iVar7) + iVar1;
    uVar8 = (param_7[9] - iVar6) + iVar2;
    if ((int)(uStack_c8 + iStack_d0) < (int)(uVar9 + iVar7)) {
      uVar9 = (uStack_c8 - iVar7) + iStack_d0;
    }
    if ((int)(uStack_c4 + iStack_cc) < (int)(uVar8 + iVar6)) {
      uVar8 = (uStack_c4 - iVar6) + iStack_cc;
    }
    dVar10 = (double)(float)((double)(longlong)(iVar6 - iStack_cc) *
                             (double)(float)(dVar18 / (double)(longlong)(int)uStack_c4) + dVar10);
    dVar18 = (double)(float)((double)(longlong)(int)uVar8 *
                            (double)(float)(dVar18 / (double)(longlong)(int)uStack_c4));
    dVar17 = (double)(float)((double)(longlong)(iVar7 - iStack_d0) *
                             (double)(float)(dVar19 / (double)(longlong)(int)uStack_c8) + dVar17);
    dVar19 = (double)(float)((double)(longlong)(int)uVar9 *
                            (double)(float)(dVar19 / (double)(longlong)(int)uStack_c8));
    iStack_d0 = iVar7;
    iStack_cc = iVar6;
    uStack_c8 = uVar9;
    uStack_c4 = uVar8;
  }
  fn_82639EA8(*(undefined4 *)(iVar4 + 0xd8),&iStack_d0);
  fn_8268CC00(iVar4 + 0x104);
  dVar11 = (double)lbl_82005344;
  dVar15 = (double)lbl_82005340;
  *(float *)(iVar4 + 0x104) = (float)(dVar11 / dVar19);
  *(float *)(iVar4 + 0x114) = (float)(dVar15 / dVar18);
  dVar13 = dVar14;
  if (uStack_c8 != 0) {
    dVar13 = (double)(float)(dVar16 / (double)uStack_c8);
  }
  if (uStack_c4 != 0) {
    dVar14 = (double)(float)(dVar16 / (double)uStack_c4);
  }
  dVar12 = (double)lbl_8200133C;
  *(float *)(iVar4 + 0x118) =
       (float)(-(double)(float)((double)(float)(dVar15 / dVar18) * dVar10 - dVar16) + dVar14);
  *(float *)(iVar4 + 0x10c) =
       (float)(-(double)(float)((double)(float)(dVar11 / dVar19) * dVar17 - dVar12) - dVar13);
  fn_8268CEC0(iVar4 + 0x104,iVar4 + 0xec);
  iVar7 = iVar4 + 0x1d4;
  fn_826792B0(iVar7,0);
  if (*(uint *)(iVar4 + 0x1dc) < 0x10) {
    fn_826791A0(iVar7,iVar7,0x10);
  }
  *(undefined4 *)(iVar4 + 0x1d0) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x20) = 0xf;
  fn_82637B30(*(undefined4 *)(iVar4 + 0xd8),1);
  *(undefined4 *)(iVar4 + 0x1c) = 1;
  fn_826776A0(iVar4,*(undefined4 *)(iVar4 + 0x1d0));
  fn_82637AF8(*(undefined4 *)(iVar4 + 0xd8),0);
  uVar5 = lbl_8200533C;
  fn_82639380(*(undefined4 *)(iVar4 + 0xd8),0,1);
  fn_82639528(*(undefined4 *)(iVar4 + 0xd8),0,1);
  iVar7 = *(int *)(iVar4 + 0xd8);
  *(uint *)(iVar7 + 0x48c) = *(uint *)(iVar7 + 0x48c) & 0xfe7fffff | 0x800000;
  *(ulonglong *)(iVar7 + 0x18) = *(ulonglong *)(iVar7 + 0x18) | 0x80000000;
  fn_82639380(*(undefined4 *)(iVar4 + 0xd8),1,1);
  fn_82639528(*(undefined4 *)(iVar4 + 0xd8),1,1);
  iVar7 = *(int *)(iVar4 + 0xd8);
  *(uint *)(iVar7 + 0x4a4) = *(uint *)(iVar7 + 0x4a4) & 0xfe7fffff | 0x800000;
  *(ulonglong *)(iVar7 + 0x18) = *(ulonglong *)(iVar7 + 0x18) | 0x40000000;
  *(undefined4 *)(iVar4 + 0x1cc) = 1;
  fn_826398E8(*(undefined4 *)(iVar4 + 0xd8),0,uVar5);
  fn_82638220(*(undefined4 *)(iVar4 + 0xd8),0);
  fn_826381E0(*(undefined4 *)(iVar4 + 0xd8),0);
  fn_82638250(*(undefined4 *)(iVar4 + 0xd8),7);
  uVar5 = fn_82639228(*(undefined4 *)(iVar4 + 0xd8));
  *(undefined4 *)(iVar4 + 0xd4) = uVar5;
  fn_82639208(*(undefined4 *)(iVar4 + 0xd8),0);
  fn_82638560(*(undefined4 *)(iVar4 + 0xd8),0);
  fn_826385B8(*(undefined4 *)(iVar4 + 0xd8),0);
  fn_82637A98(*(undefined4 *)(iVar4 + 0xd8),0);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*(undefined4 *)(iVar4 + 0xd8),0,0,0x80000000);
}

