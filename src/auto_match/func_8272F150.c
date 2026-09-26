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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT24(h,l) ((U64)((((U16)(h)) << 32) | ((U32)(l))))
#define CONCAT26(h,l) ((U64)((((U16)(h)) << 48) | ((U64)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define CONCAT62(h,l) ((U64)((((U64)(h)) << 16) | ((U16)(l))))
extern unsigned int *auStack_d0;
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_15c;
extern unsigned int fStack_160;
extern unsigned int fStack_164;
extern unsigned int fStack_168;
extern unsigned int fStack_16c;
extern unsigned int fStack_170;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern unsigned int fStack_f4;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_8268CEC0();
extern int fn_8268D280();
extern int fn_8268D5D8();
extern int fn_8269D300();
extern int fn_82799B68();
extern int fn_8279A588();
extern int fn_827A0C20();
extern int fn_827A2128();
extern int fn_827A3BE8();
extern int fn_827A8A28();
extern int fn_82F68CC0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82006848;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_132;
extern unsigned int uStack_134;
extern unsigned int uStack_136;
extern unsigned int uStack_138;
extern unsigned int uStack_140;
extern unsigned int uStack_150;
extern unsigned int uStack_158;


void fn_8272F150(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  int *piVar8;
  int iVar9;
  undefined8 uVar7;
  char cVar10;
  int *piVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined2 uStack_134;
  undefined2 uStack_132;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d0 [24];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  piVar8 = (int *)fn_82F6A53C();
  piVar11 = (int *)param_2;
  piVar4 = *(int **)(*piVar11 + 0xc);
  if (piVar4 == (int *)0x0) goto LAB_8272f7bc;
  pfVar12 = (float *)piVar11[0x10];
  fStack_170 = *pfVar12;
  fStack_16c = pfVar12[1];
  fStack_168 = pfVar12[2];
  fStack_164 = pfVar12[3];
  fStack_160 = pfVar12[4];
  fStack_15c = pfVar12[5];
  fn_8268CEC0(&fStack_170,piVar8 + 0x11);
  fn_82F68CC0(auStack_d0,piVar11[0x11],0x20);
  fn_8268D5D8(auStack_d0,piVar8 + 9);
  iVar9 = (**(code **)(*piVar8 + 0x40))(piVar8);
  if (iVar9 == 0) goto LAB_8272f7bc;
  uVar7 = fn_827A0C20(piVar8[0x28]);
  dVar23 = (double)lbl_821AAD20;
  fStack_110 = lbl_821AAD20;
  fStack_10c = lbl_821AAD20;
  fStack_108 = lbl_821AAD20;
  fStack_104 = lbl_821AAD20;
  fn_8268D280(&fStack_170,&fStack_110,uVar7);
  if ((((*(float *)(iVar9 + 0xd4) < fStack_10c) || (fStack_104 < *(float *)(iVar9 + 0xcc))) ||
      (fStack_108 < *(float *)(iVar9 + 200))) ||
     (bVar6 = true, *(float *)(iVar9 + 0xd0) < fStack_110)) {
    bVar6 = false;
  }
  if (((!bVar6) && ((*(uint *)(*piVar11 + 0x14) & 0x100) == 0)) ||
     ((ABS(fStack_b8) < lbl_82006848 && (ABS(fStack_b4) < lbl_82002AE0)))) goto LAB_8272f7bc;
  if ((*(char *)(piVar8 + 0x2c) != '\0') || (*(char *)(piVar8 + 0x2b) != '\0')) {
    (**(code **)(*piVar4 + 0x28))(piVar4,auStack_d0);
    fStack_100 = (float)dVar23;
    fStack_fc = (float)dVar23;
    fStack_f8 = (float)dVar23;
    fStack_f4 = (float)dVar23;
    fStack_90 = fStack_170;
    fStack_8c = fStack_16c;
    fStack_88 = fStack_168;
    fStack_84 = fStack_164;
    fStack_80 = fStack_160;
    fStack_7c = fStack_15c;
    uVar7 = fn_827A0C20(piVar8[0x28]);
    fn_827A8A28(&fStack_90,uVar7,&fStack_100);
    (**(code **)(*piVar4 + 0x20))(piVar4,&fStack_90);
    uStack_158 = ((((U64)(uStack_158)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)(int)fStack_f8)) & ((U64)0xFFFF)) << 48));
    uStack_134 = (((U64)(uStack_158) >> 48) & 0xFFFF);
    uStack_158 = ((((U64)(uStack_158)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)(int)fStack_100)) & ((U64)0xFFFF)) << 48));
    uStack_138 = (((U64)(uStack_158) >> 48) & 0xFFFF);
    uStack_150 = ((((U64)(uStack_150)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)(int)fStack_f4)) & ((U64)0xFFFF)) << 48));
    uStack_136 = (((U64)(uStack_150) >> 48) & 0xFFFF);
    uStack_158 = CONCAT44(piVar8[0x2b],(int)fStack_100);
    uStack_150 = ((((U64)(uStack_150)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)(int)fStack_fc)) & ((U64)0xFFFF)) << 48));
    uStack_140 = CONCAT26(uStack_138,CONCAT24((((U64)(uStack_150) >> 48) & 0xFFFF),(int)fStack_f8 << 0x10));
    uStack_140 = CONCAT62((((U64)(uStack_140) >> 0) & 0xFFFFFFFFFFFF),(((U64)(uStack_150) >> 48) & 0xFFFF));
    uStack_132 = uStack_136;
    fStack_130 = (float)CONCAT22(uStack_138,(((U64)(uStack_150) >> 48) & 0xFFFF));
    fStack_12c = (float)CONCAT22(uStack_134,(((U64)(uStack_150) >> 48) & 0xFFFF));
    fStack_128 = (float)CONCAT22(uStack_134,uStack_136);
    fStack_124 = (float)CONCAT22(uStack_138,uStack_136);
    fStack_120 = (float)CONCAT22(uStack_138,(((U64)(uStack_150) >> 48) & 0xFFFF));
    uStack_150 = (longlong)(int)fStack_fc;
    (**(code **)(*piVar4 + 0x5c))(piVar4,&uStack_158);
    (**(code **)(*piVar4 + 0x3c))(piVar4,&uStack_140,4,1,0);
    (**(code **)(*piVar4 + 0x40))(piVar4,0xffffffff820116cc,6,1,0);
    (**(code **)(*piVar4 + 0x48))(piVar4,0,0,4,0,2);
    (**(code **)(*piVar4 + 0x3c))(piVar4,0,0,0,0);
    (**(code **)(*piVar4 + 0x3c))(piVar4,&fStack_130,5,1,0);
    uStack_158 = CONCAT44(piVar8[0x2c],(((U64)(uStack_158) >> 32) & 0xFFFFFFFF));
    (**(code **)(*piVar4 + 0x54))(piVar4,&uStack_158);
    (**(code **)(*piVar4 + 0x4c))(piVar4,0,4);
    (**(code **)(*piVar4 + 0x3c))(piVar4,0,0,0,0);
    (**(code **)(*piVar4 + 0x40))(piVar4,0,0,0,0);
  }
  uVar3 = *(ushort *)(piVar8 + 0x32);
  *(ushort *)(piVar8 + 0x32) = uVar3 & 0xffbf;
  uVar3 = uVar3 >> 6 & 1;
  uVar7 = fn_8269D300(iVar9,piVar8);
  fn_8279A588(piVar8[0x28],param_2,&fStack_170,auStack_d0,uVar7);
  if (piVar8[0x39] == 0) {
LAB_8272f73c:
    fn_827A2128(piVar8[0x28],param_2,&fStack_170,auStack_d0,uVar3);
  }
  else {
    uVar13 = 0;
    if (*(int *)(piVar8[0x39] + 0xc) != 0) {
      iVar14 = 0;
      do {
        dVar22 = (double)fStack_170;
        dVar21 = (double)fStack_16c;
        dVar20 = (double)fStack_168;
        dVar19 = (double)fStack_164;
        dVar18 = (double)fStack_160;
        dVar17 = (double)fStack_15c;
        fStack_f0 = fStack_170;
        fStack_ec = fStack_16c;
        fStack_e8 = fStack_168;
        fStack_e4 = fStack_164;
        fStack_e0 = fStack_160;
        fStack_dc = fStack_15c;
        fn_82F68CC0(&fStack_130,auStack_d0,0x20);
        iVar5 = piVar8[0x39];
        fStack_130 = (float)dVar23;
        fStack_120 = (float)dVar23;
        fStack_128 = (float)dVar23;
        uStack_150 = (ulonglong)*(byte *)(iVar5 + 1);
        fStack_12c = (float)uStack_150;
        uStack_158 = (ulonglong)*(byte *)(iVar5 + 2);
        fStack_124 = (float)uStack_158;
        uStack_140 = (ulonglong)*(byte *)(iVar5 + 3);
        fStack_11c = (float)uStack_140;
        pfVar12 = (float *)(*(int *)(iVar5 + 8) + iVar14);
        dVar15 = (double)*pfVar12;
        dVar16 = (double)pfVar12[1];
        fStack_e8 = (float)((double)(float)(dVar15 * dVar22 + (double)(float)(dVar21 * dVar16)) +
                           dVar20);
        fStack_dc = (float)((double)(float)(dVar19 * dVar15 + (double)(float)(dVar18 * dVar16)) +
                           dVar17);
        fn_827A2128(piVar8[0x28],param_2,&fStack_f0,&fStack_130,uVar3);
        uVar13 = uVar13 + 1;
        iVar14 = iVar14 + 8;
      } while (uVar13 < *(uint *)(piVar8[0x39] + 0xc));
    }
    if (*(int *)(piVar8[0x39] + 0x18) == 0) goto LAB_8272f73c;
    uVar13 = 0;
    iVar14 = 0;
    do {
      fStack_ac = fStack_16c;
      fStack_b0 = fStack_170;
      fStack_a0 = fStack_160;
      fStack_a4 = fStack_164;
      pfVar12 = (float *)(*(int *)(piVar8[0x39] + 0x14) + iVar14);
      fVar1 = *pfVar12;
      fVar2 = pfVar12[1];
      fStack_a8 = fVar1 * fStack_170 + fStack_16c * fVar2 + fStack_168;
      fStack_9c = fStack_164 * fVar1 + fStack_160 * fVar2 + fStack_15c;
      fn_827A2128(piVar8[0x28],param_2,&fStack_b0,auStack_d0,uVar3);
      uVar13 = uVar13 + 1;
      iVar14 = iVar14 + 8;
    } while (uVar13 < *(uint *)(piVar8[0x39] + 0x18));
  }
  if ((*(int *)(piVar8[0x28] + 0x114) != 0) &&
     (cVar10 = fn_8269D300(iVar9,piVar8), cVar10 != '\0')) {
    fn_827A3BE8(*(undefined4 *)(piVar8[0x28] + 0x114),param_2,&fStack_170,auStack_d0);
  }
  (**(code **)(*piVar8 + 0xf4))(piVar8);
  fn_82799B68(piVar8[0x28],param_2,&fStack_170,auStack_d0,uVar7);
LAB_8272f7bc:
  fn_82F6A588();
  return;
}

