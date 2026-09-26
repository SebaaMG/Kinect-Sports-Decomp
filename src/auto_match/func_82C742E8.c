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
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_82C45200();
extern int fn_82C6E7B0();
extern int fn_82C6E8E0();
extern int fn_82C6F130();
extern int fn_82C6F290();
extern int fn_82C73C88();
extern int fn_82CC0E98();
extern int fn_82CC1258();
extern int fn_82CC1600();
extern int fn_82CC1848();
extern int fn_82CC1E70();
extern int fn_82CC2510();
extern int fn_82CC2BD8();
extern int fn_82CC3240();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8202303C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82C742E8(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar11;
  undefined8 uVar10;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  longlong lStack_78;
  
  iVar11 = fn_82F6A544();
  if (iVar11 == 0) {
    fn_82F6A590(0xfffffffffffffffd);
    return;
  }
  uVar10 = fn_82C45200(iVar11,&fStack_9c,&fStack_98,&fStack_a0,&fStack_94,&fStack_90,&fStack_a4,
                           &fStack_a8);
  if (((int)uVar10 != 0) ||
     ((iVar13 = *(int *)(iVar11 + 0x3c44), *(int *)(iVar11 + 0x3c08) == 2 &&
      (uVar10 = fn_82C45200(iVar11,&fStack_7c,&fStack_88,&fStack_8c,&fStack_84,&fStack_80,
                                &fStack_ac,&fStack_b0), (int)uVar10 != 0)))) goto code_r0x82c74c20;
  piVar12 = (int *)(iVar11 + 0x3c50);
  uVar10 = fn_82C6F290(iVar11,piVar12,(int *)(iVar11 + 0x3c54),*(undefined4 *)(iVar11 + 0x3c58),
                         (undefined4 *)(iVar11 + 0x3c5c),*(undefined4 *)(iVar11 + 0x3c60),
                         iVar11 + 0x3c64);
  if ((int)uVar10 != 0) goto code_r0x82c74c20;
  iVar1 = *piVar12;
  if (iVar1 < 1) {
code_r0x82c744fc:
    dVar24 = (double)fStack_a4;
    dVar21 = (double)fStack_a0;
    dVar16 = (double)fStack_9c;
    dVar15 = (double)fStack_a8;
  }
  else {
    iVar2 = *(int *)(iVar11 + 0x3c54);
    if (iVar2 == 2) {
      dVar24 = (double)fStack_a4;
      dVar21 = (double)fStack_a0;
      dVar16 = (double)fStack_9c;
      fStack_a8 = **(float **)(iVar11 + 0x3c58);
      dVar15 = (double)fStack_a8;
      fStack_b0 = (*(float **)(iVar11 + 0x3c58))[1];
    }
    else {
      if (iVar2 == 7) {
        pfVar3 = *(float **)(iVar11 + 0x3c58);
        iVar13 = *(int *)(iVar11 + 0x3c68);
        *(undefined4 *)(iVar11 + 0x3c08) = 1;
        fStack_9c = *pfVar3;
        fStack_98 = pfVar3[1];
        fStack_a0 = pfVar3[2];
        fStack_94 = pfVar3[3];
        fStack_90 = pfVar3[4];
        fStack_a4 = pfVar3[5];
        fStack_a8 = pfVar3[6];
        goto code_r0x82c744fc;
      }
      if (iVar2 != 0xe) {
        fn_82F6A590(1);
        return;
      }
      pfVar3 = *(float **)(iVar11 + 0x3c58);
      iVar13 = *(int *)(iVar11 + 0x3c6c);
      *(undefined4 *)(iVar11 + 0x3c08) = 2;
      fStack_9c = *pfVar3;
      dVar16 = (double)fStack_9c;
      fStack_98 = pfVar3[1];
      fStack_a0 = pfVar3[2];
      dVar21 = (double)fStack_a0;
      fStack_94 = pfVar3[3];
      fStack_90 = pfVar3[4];
      fStack_a4 = pfVar3[5];
      dVar24 = (double)fStack_a4;
      fStack_a8 = pfVar3[6];
      dVar15 = (double)fStack_a8;
      fStack_7c = pfVar3[7];
      fStack_88 = pfVar3[8];
      fStack_8c = pfVar3[9];
      fStack_84 = pfVar3[10];
      fStack_80 = pfVar3[0xb];
      fStack_ac = pfVar3[0xc];
      fStack_b0 = pfVar3[0xd];
    }
  }
  uVar4 = *(undefined4 *)(iVar11 + 0xef8);
  uVar5 = *(undefined4 *)(iVar11 + 0xefc);
  uVar6 = *(undefined4 *)(iVar11 + 0xf00);
  if (*(int *)(iVar11 + 0x3c08) == 2) {
    uVar4 = *(undefined4 *)(iVar11 + 0xed8);
    uVar5 = *(undefined4 *)(iVar11 + 0xedc);
    uVar6 = *(undefined4 *)(iVar11 + 0xee0);
  }
  dVar27 = (double)lbl_82002AE0;
  dVar26 = (double)lbl_8202303C;
  dVar25 = (double)lbl_821AAD20;
  dVar18 = lbl_82005758;
  dVar20 = lbl_82005710;
  if ((((((dVar16 != (double)*(float *)(iVar11 + 0x3c70)) ||
         (fStack_98 != *(float *)(iVar11 + 0x3c74))) ||
        (dVar21 != (double)*(float *)(iVar11 + 0x3c78))) ||
       ((fStack_94 != *(float *)(iVar11 + 0x3c7c) || (fStack_90 != *(float *)(iVar11 + 0x3c80)))))
      || (((dVar24 != (double)*(float *)(iVar11 + 0x3c84) ||
           ((dVar15 != (double)*(float *)(iVar11 + 0x3c88) || (*(int *)(iVar11 + 0x124) == 0)))) ||
          (param_2 != *(int *)(iVar11 + 0x3c08))))) || (iVar1 == 0x12)) {
    if (iVar1 == 0x12) {
      iVar1 = *(int *)(iVar11 + 0x3c60);
      if ((((double)*(float *)(iVar1 + 0x10) == dVar25) && ((double)*(float *)(iVar1 + 8) <= dVar26)
          ) || (((double)*(float *)(iVar1 + 0x10) == dVar27 &&
                (dVar26 < (double)*(float *)(iVar1 + 8))))) goto code_r0x82c74680;
    }
    dVar17 = lbl_82005758;
    dVar19 = lbl_82005710;
    dVar22 = lbl_82005710;
    dVar23 = lbl_82005758;
    if ((iVar13 != 0) && (dVar17 = dVar16, dVar23 = dVar16, iVar13 != 1)) {
      dVar19 = (double)fStack_98;
      dVar22 = (double)fStack_94;
      dVar23 = (double)fStack_90;
    }
    uVar10 = fn_82C6F130(dVar17,dVar19,dVar21,dVar22,dVar23,dVar24,dVar15,iVar11,
                           *(undefined4 *)(iVar11 + 0xec0),*(undefined4 *)(iVar11 + 0xec4),
                           *(undefined4 *)(iVar11 + 0xec8),uVar4,uVar5,uVar6);
    if ((int)uVar10 != 0) goto code_r0x82c74c20;
    dVar15 = (double)fStack_a8;
    dVar24 = (double)fStack_a4;
    dVar21 = (double)fStack_a0;
    dVar16 = (double)fStack_9c;
  }
code_r0x82c74680:
  *(float *)(iVar11 + 0x3c70) = (float)dVar16;
  *(float *)(iVar11 + 0x3c74) = fStack_98;
  *(float *)(iVar11 + 0x3c78) = (float)dVar21;
  *(float *)(iVar11 + 0x3c7c) = fStack_94;
  *(float *)(iVar11 + 0x3c80) = fStack_90;
  *(float *)(iVar11 + 0x3c84) = (float)dVar24;
  *(float *)(iVar11 + 0x3c88) = (float)dVar15;
  if (*(int *)(iVar11 + 0x3c08) == 2) {
    dVar15 = (double)fStack_7c;
    if ((((((dVar15 != (double)*(float *)(iVar11 + 0x3c8c)) ||
           (fStack_88 != *(float *)(iVar11 + 0x3c90))) ||
          ((double)fStack_8c != (double)*(float *)(iVar11 + 0x3c94))) ||
         (((fStack_84 != *(float *)(iVar11 + 0x3c98) || (fStack_80 != *(float *)(iVar11 + 0x3c9c)))
          || ((fStack_ac != *(float *)(iVar11 + 0x3ca0) ||
              ((fStack_b0 != *(float *)(iVar11 + 0x3ca4) || (*(int *)(iVar11 + 0x124) == 0))))))))
        || (param_2 != 2)) || (*piVar12 == 0x12)) {
      if (*piVar12 == 0x12) {
        iVar13 = *(int *)(iVar11 + 0x3c60);
        if ((((double)*(float *)(iVar13 + 0x10) == dVar25) &&
            (dVar26 < (double)*(float *)(iVar13 + 8))) ||
           (((double)*(float *)(iVar13 + 0x10) == dVar27 &&
            ((double)*(float *)(iVar13 + 8) <= dVar26)))) goto code_r0x82c747f0;
      }
      dVar16 = dVar20;
      dVar21 = dVar18;
      if ((*(int *)(iVar11 + 0x3c44) != 0) &&
         (dVar18 = dVar15, dVar21 = dVar15, *(int *)(iVar11 + 0x3c44) != 1)) {
        dVar20 = (double)fStack_88;
        dVar16 = (double)fStack_84;
        dVar21 = (double)fStack_80;
      }
      uVar10 = fn_82C6F130(dVar18,dVar20,(double)fStack_8c,dVar16,dVar21,(double)fStack_ac,iVar11,
                             *(undefined4 *)(iVar11 + 0xecc),*(undefined4 *)(iVar11 + 0xed0),
                             *(undefined4 *)(iVar11 + 0xed4),*(undefined4 *)(iVar11 + 0xf04),
                             *(undefined4 *)(iVar11 + 0xf08),*(undefined4 *)(iVar11 + 0xf0c));
      if ((int)uVar10 != 0) goto code_r0x82c74c20;
    }
code_r0x82c747f0:
    *(float *)(iVar11 + 0x3c8c) = fStack_7c;
    *(float *)(iVar11 + 0x3c90) = fStack_88;
    *(float *)(iVar11 + 0x3c94) = fStack_8c;
    *(float *)(iVar11 + 0x3c98) = fStack_84;
    *(float *)(iVar11 + 0x3c9c) = fStack_80;
    *(float *)(iVar11 + 0x3ca0) = fStack_ac;
    *(float *)(iVar11 + 0x3ca4) = fStack_b0;
  }
  switch(*piVar12) {
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x17:
  case 0x18:
  case 0x1b:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    iVar11 = fn_82C73C88(*(undefined4 *)(iVar11 + 0x3c4c),*(undefined4 *)(iVar11 + 0x3c0c),
                           *(undefined4 *)(iVar11 + 0x3c10),*piVar12,
                           *(undefined4 *)(iVar11 + 0x3c5c),*(undefined4 *)(iVar11 + 0x3c60),
                           *(undefined4 *)(iVar11 + 0xf04),*(undefined4 *)(iVar11 + 0xf08));
    if (iVar11 != 0) {
      fn_82F6A590();
      return;
    }
    break;
  default:
    if (*(int *)(iVar11 + 0x3c08) == 2) {
      lVar14 = (longlong)*(int *)(iVar11 + 0x3c24) * (longlong)*(int *)(iVar11 + 0x3c20);
      fn_82C6E7B0(uVar4,*(undefined4 *)(iVar11 + 0xf04),*(undefined4 *)(iVar11 + 0xef8),lVar14
                       );
      iVar13 = (int)lVar14 >> 2;
      fn_82C6E8E0(uVar5,*(undefined4 *)(iVar11 + 0xf08),*(undefined4 *)(iVar11 + 0xefc),iVar13
                       );
      fn_82C6E8E0(uVar6,*(undefined4 *)(iVar11 + 0xf0c),*(undefined4 *)(iVar11 + 0xf00),iVar13
                       );
    }
    break;
  case 0x15:
    pfVar3 = *(float **)(iVar11 + 0x3c60);
    iVar13 = (int)*pfVar3;
    lStack_78 = (longlong)(int)pfVar3[2];
    if ((double)pfVar3[3] == dVar25) {
      uVar4 = *(undefined4 *)(iVar11 + 0xf04);
      uVar5 = *(undefined4 *)(iVar11 + 0xf08);
      uVar6 = *(undefined4 *)(iVar11 + 0xf0c);
      uVar7 = *(undefined4 *)(iVar11 + 0xed8);
      uVar8 = *(undefined4 *)(iVar11 + 0xedc);
      uVar9 = *(undefined4 *)(iVar11 + 0xee0);
    }
    else {
      uVar4 = *(undefined4 *)(iVar11 + 0xed8);
      uVar5 = *(undefined4 *)(iVar11 + 0xedc);
      uVar6 = *(undefined4 *)(iVar11 + 0xee0);
      uVar7 = *(undefined4 *)(iVar11 + 0xf04);
      uVar8 = *(undefined4 *)(iVar11 + 0xf08);
      uVar9 = *(undefined4 *)(iVar11 + 0xf0c);
    }
    if (iVar13 == 1) {
      fn_82CC2510(*(undefined4 *)(iVar11 + 0x3c0c),*(undefined4 *)(iVar11 + 0x3c10));
      fn_82F6A590(0);
      return;
    }
    if (iVar13 == 2) {
      fn_82CC3240(*(undefined4 *)(iVar11 + 0x3c0c),*(undefined4 *)(iVar11 + 0x3c10));
      fn_82F6A590(0);
      return;
    }
    if (iVar13 == 3) {
      fn_82CC2BD8(*(undefined4 *)(iVar11 + 0x3c0c),*(undefined4 *)(iVar11 + 0x3c10));
      fn_82F6A590(0);
      return;
    }
    if (iVar13 == 4) {
      fn_82CC1E70(*(undefined4 *)(iVar11 + 0x3c0c),*(undefined4 *)(iVar11 + 0x3c10));
      fn_82F6A590(0);
      return;
    }
    if (iVar13 == 5) {
      fn_82CC1848(*(undefined4 *)(iVar11 + 0x3c0c),*(undefined4 *)(iVar11 + 0x3c10));
      fn_82F6A590(0);
      return;
    }
    if (iVar13 == 6) {
      fn_82CC1600(*(undefined4 *)(iVar11 + 0x3c0c),*(undefined4 *)(iVar11 + 0x3c10));
      fn_82F6A590(0);
      return;
    }
    if (iVar13 == 7) {
      fn_82CC1258(*(undefined4 *)(iVar11 + 0x3c0c),*(undefined4 *)(iVar11 + 0x3c10));
      fn_82F6A590(0);
      return;
    }
    if (iVar13 == 8) {
      fn_82CC0E98(*(undefined4 *)(iVar11 + 0x3c0c),*(undefined4 *)(iVar11 + 0x3c10),uVar4,
                        uVar5,uVar6,uVar7,uVar8,uVar9);
      fn_82F6A590(0);
      return;
    }
  }
  uVar10 = 0;
code_r0x82c74c20:
  fn_82F6A590(uVar10);
  return;
}

