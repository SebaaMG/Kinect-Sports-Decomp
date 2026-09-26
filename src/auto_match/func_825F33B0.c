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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_120;
extern unsigned int *auStack_1d8;
extern unsigned int *auStack_e0;
extern unsigned int fStack_118;
extern unsigned int fStack_178;
extern unsigned int fStack_17c;
extern unsigned int fStack_180;
extern unsigned int fStack_184;
extern unsigned int fStack_188;
extern unsigned int fStack_18c;
extern unsigned int fStack_190;
extern unsigned int fStack_1e0;
extern unsigned int fStack_f8;
extern int fn_8253FDC8();
extern int fn_826310E0();
extern int fn_826312F0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637D70();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();
extern int fn_82637FF0();
extern int fn_82639F78();
extern int fn_8263CBB0();
extern int fn_82640680();
extern int fn_828095F8();
extern int fn_82837D98();
extern int fn_828F1160();
extern int fn_82F65E20();
extern int fn_82F68CC0();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int iStack_164;
extern unsigned int iStack_168;
extern unsigned int iStack_16c;
extern unsigned int iStack_170;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D0;
extern unsigned int lbl_82195644;
extern unsigned int lbl_82195830;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326C250;
extern unsigned int lbl_83296C80;
extern unsigned int uRam8326c254;
extern unsigned int uRam8326c258;
extern unsigned int uRam8326c25c;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_174;
extern unsigned int uStack_194;
extern unsigned int uStack_198;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1c4;
extern unsigned int uStack_1c8;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1f0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825F33B0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int in_r0;
  int *piVar12;
  undefined8 uVar11;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  double dVar16;
  double extraout_f1;
  double dVar17;
  double extraout_f1_00;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined4 auStack_1d8 [2];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [8];
  float fStack_118;
  float fStack_f8;
  undefined1 auStack_e0 [224];
  
  piVar12 = (int *)fn_82F6A540();
  iVar7 = lbl_8320A898;
  if ((double)(float)piVar12[0x1f] < extraout_f1) goto LAB_825f39ec;
  param_3 = param_3 * 0xb0;
  lVar15 = -0x7cd69770;
  iVar14 = *(int *)((int)&lbl_83296C80 + (int)param_3);
  if (iVar14 != 0) {
    lVar15 = param_3 + -0x7cd693e0;
  }
  dVar16 = extraout_f1;
  fn_82F68CC0(auStack_120,lVar15,0x40);
  param_3 = param_3 + -0x7cd69420;
  if (iVar14 == 0) {
    param_3 = -0x7cd69730;
  }
  fn_82F68CC0(auStack_e0,param_3,0x40);
  fn_828F1160(&uStack_160,auStack_120,auStack_e0);
  dVar17 = (double)fn_82F65E20((double)(float)piVar12[0x14]);
  dVar19 = (double)(float)dVar17;
  uVar11 = fn_828095F8((double)(fStack_f8 / SQRT(fStack_118 * fStack_118 + fStack_f8 * fStack_f8)))
  ;
  dVar20 = (double)lbl_8218E8E8;
  fn_8253FDC8((double)(float)(extraout_f1_00 * dVar20),uVar11,&fStack_1e0,&uStack_1f0);
  fStack_18c = (float)dVar16;
  fStack_188 = (float)((double)lbl_821CA460 / dVar19);
  uStack_1d0 = uStack_160;
  uStack_1cc = uStack_150;
  uStack_1c8 = uStack_140;
  fStack_190 = -(float)piVar12[0x15];
  uStack_1c4 = uStack_130;
  uStack_1c0 = uStack_15c;
  uStack_1bc = uStack_14c;
  uStack_1b8 = uStack_13c;
  uStack_1b4 = uStack_12c;
  uStack_1b0 = uStack_158;
  uStack_1ac = uStack_148;
  uStack_1a8 = uStack_138;
  uStack_1a4 = uStack_128;
  uStack_1a0 = uStack_154;
  uStack_19c = uStack_144;
  uStack_198 = uStack_134;
  uStack_194 = uStack_124;
  dVar17 = (double)fn_82F65E20(lbl_82195830);
  dVar16 = (double)lbl_821CC160;
  fStack_180 = lbl_821CC160;
  fStack_184 = (float)(dVar19 / (double)(float)dVar17);
  if ((double)fStack_118 <= dVar16) {
    fStack_1e0 = -fStack_1e0;
  }
  iStack_170 = piVar12[0x16];
  iStack_16c = piVar12[0x18];
  iStack_168 = piVar12[0x19];
  iStack_164 = piVar12[0x1a];
  fStack_178 = lbl_821CC160;
  uStack_174 = (((U64)(uStack_1f0) >> 0) & 0xFFFFFFFF);
  fStack_17c = fStack_1e0;
  uVar11 = fn_826310E0(iVar7,0xc0,&uStack_1d0,7,0xc000);
  uVar10 = uRam8326c25c;
  uVar9 = uRam8326c258;
  uVar8 = uRam8326c254;
  puVar6 = (undefined4 *)((int)&uStack_1f0 + in_r0 & 0xfffffff0);
  *puVar6 = lbl_8326C250;
  puVar6[1] = uVar8;
  puVar6[2] = uVar9;
  puVar6[3] = uVar10;
  *(int *)(iVar7 + 0x2380) = piVar12[0x10];
  *(int *)(iVar7 + 0x2384) = piVar12[0x11];
  *(int *)(iVar7 + 0x2388) = piVar12[0x12];
  *(int *)(iVar7 + 0x238c) = piVar12[0x13];
  *(ulonglong *)(iVar7 + 8) = *(ulonglong *)(iVar7 + 8) | 0x8000;
  *(undefined4 *)(iVar7 + 0x2390) = (((U64)(uStack_1f0) >> 0) & 0xFFFFFFFF);
  *(undefined4 *)(iVar7 + 0x2394) = (((U64)(uStack_1f0) >> 32) & 0xFFFFFFFF);
  *(undefined4 *)(iVar7 + 0x2398) = uStack_1e8;
  *(undefined4 *)(iVar7 + 0x239c) = uStack_1e4;
  *(ulonglong *)(iVar7 + 8) = *(ulonglong *)(iVar7 + 8) | 0x8000;
  uVar11 = fn_826312F0(uVar11,0,piVar12 + 0x20,1);
  dVar17 = (double)lbl_82195644;
  uVar1 = *(uint *)(iVar7 + 0x2efc);
  uVar2 = *(uint *)(iVar7 + 0x2ef8);
  uVar3 = *(uint *)(iVar7 + 0x2948);
  dVar19 = (double)lbl_821954D0;
  uVar4 = *(uint *)(iVar7 + 0x2f04);
  uVar5 = *(uint *)(iVar7 + 0x293c);
  uVar18 = (ulonglong)((double)*(float *)(iVar7 + 0x2904) * dVar17 + dVar20);
  *(float *)(iVar7 + 0x2904) = (float)((double)(uint)piVar12[0x1b] * dVar19);
  *(ulonglong *)(iVar7 + 0x10) = *(ulonglong *)(iVar7 + 0x10) | 0x8000000;
  *(uint *)(iVar7 + 0x293c) = *(uint *)(iVar7 + 0x293c) | 8;
  *(ulonglong *)(iVar7 + 0x10) = *(ulonglong *)(iVar7 + 0x10) | 0x40200;
  uStack_1f0 = uVar18;
  uVar11 = fn_82637C50(uVar11,6);
  uVar11 = fn_82637CE0(uVar11,7);
  uVar11 = fn_82637B30(uVar11,1);
  *(uint *)(iVar7 + 0x2948) = *(uint *)(iVar7 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(iVar7 + 0x10) = *(ulonglong *)(iVar7 + 0x10) | 0x40;
  *(undefined4 *)(iVar7 + 0x2f04) = 0xf;
  *(uint *)(iVar7 + 0x28dc) =
       *(uint *)(iVar7 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(iVar7 + 0x3148) != 0) & 0xf;
  *(ulonglong *)(iVar7 + 0x10) = *(ulonglong *)(iVar7 + 0x10) | 0x2000000000;
  if (piVar12[0xe] == 1) {
    uVar13 = 0;
LAB_825f3764:
    fn_82637BC0(uVar11,uVar13);
    fn_82637C50(iVar7,6);
    uVar11 = 1;
  }
  else {
    if (piVar12[0xe] == 2) {
      uVar13 = 4;
      goto LAB_825f3764;
    }
    uVar11 = fn_82637BC0(uVar11,0);
    fn_82637C50(uVar11,6);
    uVar11 = 7;
  }
  uVar11 = fn_82637CE0(iVar7,uVar11);
  if ((double)(float)piVar12[0xf] <= dVar16) {
    fn_82637EC0(uVar11,1);
    uVar11 = fn_82637D70(iVar7,4);
    fn_82637DE0(uVar11,1);
    fn_82637E50();
  }
  else {
    uVar11 = fn_82637EC0(uVar11,1);
    uVar11 = fn_82637D70(uVar11,0);
    uVar11 = fn_82637DE0(uVar11,0xc);
    uVar11 = fn_82637E50(uVar11,7);
    uStack_1f0 = (ulonglong)((double)(float)piVar12[0xf] * dVar17);
    fn_82637FF0(uVar11,(uStack_1f0 & 0xff) << 0x18 | 0xffffff);
  }
  *(undefined4 *)(iVar7 + 0x2ed8) = 0;
  *(ulonglong *)(iVar7 + 0x10) = *(ulonglong *)(iVar7 + 0x10) | 0x80000;
  fn_82631920(iVar7,piVar12[0x1d]);
  fn_82631578(iVar7,piVar12[0x1e]);
  fn_82639F78(iVar7,0,piVar12[0xd],0,0,1);
  if (*piVar12 == 0) {
    auStack_1d8[0] = 0;
  }
  else {
    fn_82837D98(*(undefined4 *)(*piVar12 + 0x14),0,auStack_1d8);
  }
  fn_8263CBB0(iVar7,0,auStack_1d8[0],0x80000000);
  if (piVar12[1] == 0) {
    uStack_1dc = 0;
  }
  else {
    fn_82837D98(*(undefined4 *)(piVar12[1] + 0x14),0,&uStack_1dc);
  }
  fn_8263CBB0(iVar7,1,uStack_1dc,0x40000000);
  lVar15 = ((ulonglong)(uint)piVar12[7] - (ulonglong)(uint)piVar12[6]) + (ulonglong)(uint)piVar12[5]
  ;
  iVar14 = (int)lVar15;
  if (lVar15 < 0) {
    piVar12[8] = 0;
    piVar12[9] = piVar12[5];
    piVar12[10] = piVar12[6] + iVar14;
    piVar12[0xb] = -iVar14;
  }
  else {
    piVar12[8] = iVar14;
    piVar12[9] = piVar12[5] - iVar14;
    piVar12[0xb] = 0;
  }
  if (piVar12[9] != 0) {
    fn_82640680(iVar7,0xd,piVar12[8] << 2,piVar12[9] << 2);
  }
  if (piVar12[0xb] != 0) {
    fn_82640680(iVar7,0xd,piVar12[10] << 2,piVar12[0xb] << 2);
  }
  *(uint *)(iVar7 + 0x2f04) = uVar4;
  *(uint *)(iVar7 + 0x28dc) =
       *(uint *)(iVar7 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(iVar7 + 0x3148) != 0) & uVar4 & 0xf
  ;
  *(ulonglong *)(iVar7 + 0x10) = *(ulonglong *)(iVar7 + 0x10) | 0x2000000000;
  *(uint *)(iVar7 + 0x2948) = uVar3 & 7 | *(uint *)(iVar7 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(iVar7 + 0x10) = *(ulonglong *)(iVar7 + 0x10) | 0x40;
  uVar11 = fn_82637EC0(iVar7,uVar1 >> 0x1e & 1);
  uVar11 = fn_82637B30(uVar11,uVar1 >> 0x1f);
  *(uint *)(iVar7 + 0x293c) = (uVar5 >> 3 & 1) << 3 | *(uint *)(iVar7 + 0x293c) & 0xfffffff7;
  *(ulonglong *)(iVar7 + 0x10) = *(ulonglong *)(iVar7 + 0x10) | 0x40200;
  fn_82637BC0(uVar11,uVar2 >> 5 & 7);
  uStack_1f0 = uVar18 & 0xffffffff;
  *(float *)(iVar7 + 0x2904) = (float)((double)uStack_1f0 * dVar19);
  *(ulonglong *)(iVar7 + 0x10) = *(ulonglong *)(iVar7 + 0x10) | 0x8000000;
LAB_825f39ec:
  fn_82F6A58C();
  return;
}

