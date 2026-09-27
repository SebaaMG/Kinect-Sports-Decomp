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
#define ZEXT48(x) ((U64)((U32)(x)))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_100;
extern unsigned int *auStack_c0;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_120;
extern int fn_82531758();
extern int fn_82559FF0();
extern int fn_8255A0D0();
extern int fn_82626020();
extern int fn_82626A18();
extern int fn_82809D40();
extern int fn_82CE57B0();
extern int fn_82D80A40();
extern int fn_82D93168();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821916FC;
extern float lbl_82195590;
extern float lbl_821955A0;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831E4E38;
extern unsigned int lbl_83274B10;
extern unsigned int lbl_83274B14;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82626258(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 in_r0;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  bool bVar13;
  double dVar14;
  double extraout_f1;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float in_register_000100c0;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fStack_120;
  struct { float first; float second; } stack_pair_110;

  float fStack_108;
  float fStack_104;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [192];
  
  uVar8 = ZEXT48(&stack0x00000000);
  uVar9 = fn_82F6A548();
  iVar2 = (int)param_2;
  if (*(char *)(iVar2 + 0x94) != '\0') {
    bVar13 = false;
    goto LAB_82626708;
  }
  iVar10 = *(int *)(iVar2 + 0x30);
  if (iVar10 != 0) {
    fn_82D80A40(*(undefined4 *)(iVar10 + 8));
    iVar7 = (int)in_r0;
    fn_82D93168(iVar10 + 0xe0);
    puVar3 = (undefined4 *)((uint)(auStack_c0 + iVar7) & 0xfffffff0);
    uVar11 = puVar3[1];
    uVar25 = puVar3[2];
    uVar27 = puVar3[3];
    puVar4 = (undefined4 *)(iVar7 + iVar2 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar11;
    puVar4[2] = uVar25;
    puVar4[3] = uVar27;
    iVar10 = *(int *)(iVar2 + 0x30);
    fn_82D80A40(*(undefined4 *)(iVar10 + 8));
    fn_82D93168(iVar10 + 0xe0);
    fn_82CE57B0(uVar8 - 0x100,uVar8 - 0xb0);
    puVar3 = (undefined4 *)((uint)(auStack_100 + iVar7) & 0xfffffff0);
    uVar11 = puVar3[1];
    uVar25 = puVar3[2];
    uVar27 = puVar3[3];
    puVar4 = (undefined4 *)((int)&stack_pair_110.first + iVar7 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar11;
    puVar4[2] = uVar25;
    puVar4[3] = uVar27;
    dVar18 = (double)stack_pair_110.second;
    dVar17 = (double)fStack_104;
    dVar14 = (double)lbl_821916FC;
    dVar19 = (double)stack_pair_110.first;
    dVar15 = (double)(float)(dVar18 * dVar14);
    dVar16 = (double)(float)((double)fStack_108 * dVar14);
    fVar24 = (float)(dVar19 * (double)(float)(dVar19 * dVar14));
    dVar14 = (double)(float)(dVar17 * (double)(float)(dVar19 * dVar14));
    dVar20 = (double)(float)(dVar16 * dVar18 - dVar14);
    fVar26 = (float)((double)fStack_108 * dVar16);
    dVar23 = (double)(float)(dVar17 * dVar15 + (double)(float)(dVar16 * dVar19));
    dVar22 = (double)(lbl_821CA460 - ((float)(dVar18 * dVar15) + fVar24));
    dVar21 = (double)SQRT((float)(dVar22 * dVar22 + (double)(float)(dVar23 * dVar23)));
    if (dVar21 <= (double)lbl_82195628) {
      dVar14 = (double)fn_82809D40(-(double)((float)(dVar15 * dVar19) - (float)(dVar17 * dVar16)),
                                    (double)(lbl_821CA460 - (fVar26 + (float)(dVar18 * dVar15))),
                                    dVar14);
      fStack_108 = (float)dVar14;
      dVar14 = (double)fn_82809D40(-dVar20,dVar21);
      stack_pair_110.first = (float)dVar14;
      stack_pair_110.second = lbl_821CC160;
    }
    else {
      dVar14 = (double)fn_82809D40((double)((float)(dVar15 * dVar19) + (float)(dVar17 * dVar16)),
                                    (double)(lbl_821CA460 - (fVar26 + fVar24)));
      fStack_108 = (float)dVar14;
      dVar14 = (double)fn_82809D40(-dVar20,dVar21);
      stack_pair_110.first = (float)dVar14;
      dVar14 = (double)fn_82809D40(dVar23,dVar22);
      stack_pair_110.second = (float)dVar14;
    }
    bVar13 = false;
    *(float *)(iVar2 + 0x10) = stack_pair_110.first;
    *(float *)(iVar2 + 0x14) = stack_pair_110.second;
    *(float *)(iVar2 + 0x18) = fStack_108;
    goto LAB_82626708;
  }
  iVar10 = (int)in_r0;
  pfVar5 = (float *)(iVar10 + iVar2 & 0xfffffff0);
  fVar29 = *pfVar5;
  fVar30 = pfVar5[1];
  fVar31 = pfVar5[2];
  fVar32 = pfVar5[3];
  iVar7 = iVar2 + 0x40;
  lVar12 = (ulonglong)*(uint *)(iVar2 + 0x8c) - 1;
  loadVectorLeftIndexed128(in_r0,uVar8 + 0x2c);
  *(int *)(iVar2 + 0x8c) = (int)lVar12;
  pfVar5 = (float *)(iVar10 + iVar7 & 0xfffffff0);
  fVar24 = *pfVar5 * in_register_000100c0 + fVar29;
  fVar26 = pfVar5[1] * in_register_000100c0 + fVar30;
  fVar28 = pfVar5[2] * in_register_000100c0 + fVar31;
  fVar33 = pfVar5[3] * in_register_000100c0 + fVar32;
  pfVar5 = (float *)((int)&stack_pair_110.first + iVar10 & 0xfffffff0);
  *pfVar5 = fVar24;
  pfVar5[1] = fVar26;
  pfVar5[2] = fVar28;
  pfVar5[3] = fVar33;
  dVar14 = extraout_f1;
  if (lVar12 < 1) {
    if (((*(uint *)(iVar2 + 0x90) & 0x10) == 0) ||
       (iVar10 = fn_82531758(param_2 + 0x20,uVar8 - 0x110,0xffffffff83274b20), iVar10 == 0)) {
      if (((*(uint *)(iVar2 + 0x90) & 1) != 0) &&
         (iVar10 = fn_82626020((double)(*(float *)(iVar2 + 0x7c) * *(float *)(iVar2 + 0x70)),
                                     uVar9,param_2 + 0x20,uVar8 - 0x110), iVar10 != 0)) {
        if (*(char *)(iVar2 + 0x95) == '\0') {
          *(undefined1 *)(iVar2 + 0x94) = 1;
        }
        lbl_83274B10 = 1;
        *(undefined1 *)(iVar2 + 0x95) = 0;
        goto LAB_82626484;
      }
      *(undefined4 *)(iVar2 + 0x8c) = 3;
      *(char *)(iVar2 + 0x95) = *(char *)(iVar2 + 0x95) + '\x01';
      pfVar5 = (float *)((int)&stack_pair_110.first + (int)in_r0 & 0xfffffff0);
      fVar24 = *pfVar5;
      fVar26 = pfVar5[1];
      fVar28 = pfVar5[2];
      fVar33 = pfVar5[3];
      lbl_83274B10 = 0;
    }
    else {
      *(undefined1 *)(iVar2 + 0x95) = 0;
      lbl_83274B10 = 2;
      lbl_83274B14 = 0;
LAB_82626484:
      pfVar5 = (float *)((int)&stack_pair_110.first + (int)in_r0 & 0xfffffff0);
      fVar24 = *pfVar5;
      fVar26 = pfVar5[1];
      fVar28 = pfVar5[2];
      fVar33 = pfVar5[3];
      pfVar5 = (float *)((int)in_r0 + iVar2 & 0xfffffff0);
      *pfVar5 = fVar24;
      pfVar5[1] = fVar26;
      pfVar5[2] = fVar28;
      pfVar5[3] = fVar33;
      *(int *)((int)param_5 + 0xa4) = *(int *)((int)param_5 + 0xa4) + 1;
      uVar11 = fn_82626A18(uVar9,param_5);
      *param_3 = uVar11;
    }
    pfVar5 = (float *)(iVar2 + 0x20U & 0xfffffff0);
    *pfVar5 = fVar24;
    pfVar5[1] = fVar26;
    pfVar5[2] = fVar28;
    pfVar5[3] = fVar33;
  }
  else {
    lbl_83274B10 = 0;
  }
  uVar1 = *(uint *)(iVar2 + 0x90);
  pfVar5 = (float *)((int)in_r0 + iVar2 & 0xfffffff0);
  *pfVar5 = fVar24;
  pfVar5[1] = fVar26;
  pfVar5[2] = fVar28;
  pfVar5[3] = fVar33;
  if (((uVar1 & 2) != 0) && (iVar10 = fn_8255A0D0(uVar8 - 0x120), iVar10 != 0)) {
    *(float *)(iVar2 + 0x10) = fStack_120 - lbl_831E4E38;
  }
  if (((*(uint *)(iVar2 + 0x90) & 8) != 0) &&
     (iVar10 = fn_82559FF0(uVar8 - 0x120), iVar10 != 0)) {
    *(float *)(iVar2 + 0x14) = fStack_120;
  }
  if ((*(uint *)(iVar2 + 0x90) & 0x40) != 0) {
    *(float *)(iVar2 + 0x10) =
         (float)((double)*(float *)(iVar2 + 0x50) * dVar14 + (double)*(float *)(iVar2 + 0x10));
    *(float *)(iVar2 + 0x14) =
         (float)((double)*(float *)(iVar2 + 0x54) * dVar14 + (double)*(float *)(iVar2 + 0x14));
    *(float *)(iVar2 + 0x18) =
         (float)((double)*(float *)(iVar2 + 0x58) * dVar14 + (double)*(float *)(iVar2 + 0x18));
  }
  iVar10 = *(int *)(iVar2 + 0x88);
  *(int *)(iVar2 + 0x88) = iVar10 + -1;
  if (iVar10 < 1) {
    fVar24 = *(float *)(iVar2 + 0x10) * lbl_82195590;
    fVar26 = *(float *)(iVar2 + 0x14) * lbl_82195590;
    fVar28 = *(float *)(iVar2 + 0x18) * lbl_82195590;
    dVar16 = ((double)fVar26 - (double)(longlong)fVar26) * lbl_821955A0;
    dVar15 = ((double)fVar28 - (double)(longlong)fVar28) * lbl_821955A0;
    *(float *)(iVar2 + 0x10) = (float)(((double)fVar24 - (double)(longlong)fVar24) * lbl_821955A0);
    *(float *)(iVar2 + 0x14) = (float)dVar16;
    *(float *)(iVar2 + 0x18) = (float)dVar15;
    *(undefined4 *)(iVar2 + 0x88) = 8;
  }
  *(float *)(iVar2 + 0x44) =
       (float)((double)*(float *)(iVar2 + 0x80) * dVar14 + (double)*(float *)(iVar2 + 0x44));
  if ((*(uint *)(iVar2 + 0x90) & 0x80) != 0) {
    pfVar5 = (float *)((int)in_r0 + iVar7 & 0xfffffff0);
    fVar24 = pfVar5[1];
    fVar26 = pfVar5[2];
    fVar28 = pfVar5[3];
    loadVectorLeftIndexed128(in_r0,uVar8 - 0x120);
    pfVar6 = (float *)((int)in_r0 + iVar7 & 0xfffffff0);
    *pfVar6 = *pfVar5 * fVar29;
    pfVar6[1] = fVar24 * fVar30;
    pfVar6[2] = fVar26 * fVar31;
    pfVar6[3] = fVar28 * fVar32;
  }
  bVar13 = lbl_83274B10 != 0;
LAB_82626708:
  fn_82F6A594(bVar13);
  return;
}

