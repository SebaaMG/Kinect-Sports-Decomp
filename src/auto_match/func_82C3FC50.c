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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack_168;
extern int fn_82C31720();
extern int fn_82C378E0();
extern int fn_82C3F530();
extern int fn_82C3F5D0();
extern int fn_82E6BD90();
extern int fn_82F655D8();
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_118;
extern unsigned int iStack_164;
extern unsigned int iStack_d0;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82015618;
extern unsigned int lbl_820A80B8;
extern unsigned int lbl_820F8F70;
extern unsigned int lbl_820F8F74;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_160;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;


/* WARNING: Removing unreachable block (ram,0x82c4073c) */
/* WARNING: Removing unreachable block (ram,0x82c40748) */
/* WARNING: Removing unreachable block (ram,0x82c406c4) */
/* WARNING: Removing unreachable block (ram,0x82c406d0) */
/* WARNING: Removing unreachable block (ram,0x82c4064c) */
/* WARNING: Removing unreachable block (ram,0x82c40658) */
/* WARNING: Removing unreachable block (ram,0x82c4021c) */
/* WARNING: Removing unreachable block (ram,0x82c40228) */
/* WARNING: Removing unreachable block (ram,0x82c3ffe8) */
/* WARNING: Removing unreachable block (ram,0x82c3fff4) */
/* WARNING: Removing unreachable block (ram,0x82c400e0) */
/* WARNING: Removing unreachable block (ram,0x82c400ec) */
/* WARNING: Removing unreachable block (ram,0x82c40064) */
/* WARNING: Removing unreachable block (ram,0x82c40070) */
/* WARNING: Removing unreachable block (ram,0x82c407b4) */
/* WARNING: Removing unreachable block (ram,0x82c407c0) */
/* WARNING: Removing unreachable block (ram,0x82c402c8) */
/* WARNING: Removing unreachable block (ram,0x82c40b14) */
/* WARNING: Removing unreachable block (ram,0x82c40b20) */
/* WARNING: Removing unreachable block (ram,0x82c40b30) */
/* WARNING: Removing unreachable block (ram,0x82c40b3c) */
/* WARNING: Removing unreachable block (ram,0x82c40b68) */
/* WARNING: Removing unreachable block (ram,0x82c40b48) */
/* WARNING: Removing unreachable block (ram,0x82c40b54) */
/* WARNING: Removing unreachable block (ram,0x82c4015c) */
/* WARNING: Removing unreachable block (ram,0x82c40168) */
/* WARNING: Removing unreachable block (ram,0x82c40874) */
/* WARNING: Removing unreachable block (ram,0x82c40880) */

void fn_82C3FC50(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar18;
  float *pfVar19;
  longlong lVar17;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  float *pfVar24;
  float *pfVar25;
  int iVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  uint uStack_170;
  uint uStack_16c;
  float fStack_168;
  int iStack_164;
  uint uStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  int iStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  int iStack_d0;
  longlong lStack_c8;
  
  pfVar5 = (float *)fn_82F6A548();
  piVar9 = (int *)param_2;
  iStack_164 = *piVar9;
  iVar26 = 0;
  iStack_118 = piVar9[3];
  iVar13 = piVar9[1];
  uStack_160 = piVar9[0x10];
  iVar21 = 0;
  iVar22 = 0;
  iVar2 = piVar9[5];
  pfVar24 = (float *)piVar9[4];
  iVar3 = piVar9[0xe];
  uStack_170 = 0;
  if (piVar9[0x2b] == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = piVar9[0x2c];
  }
  iStack_d0 = iVar13;
  if (((int)pfVar5[0x38] < 1) || (*(short *)((int)piVar9 + 0x76) < 1)) {
    fn_82F6A594(0xffffffff80040002);
  }
  else {
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(iVar8,0,100);
    }
    fVar11 = pfVar5[0x38];
    uStack_16c = 0;
    sVar1 = *(short *)((int)piVar9 + 0x76);
    uStack_140 = (int)(((ulonglong)(uint)fVar11 & 0x3ffffff) << 6) / (int)sVar1;
    trapWord(6,(longlong)sVar1,0);
    trapWord(5,(longlong)sVar1 &
               ~((((ulonglong)(uint)fVar11 & 0x1ffffff) << 7 |
                 ((ulonglong)(uint)fVar11 & 0x3ffffff) >> 0x19) - 1),0xffff);
    uVar20 = uStack_140;
    while (1 < uVar20) {
      uStack_16c = uStack_16c + 1;
      uVar20 = uStack_140 >> (uStack_16c & 0x3f);
    }
    fVar7 = pfVar5[0x40];
    lVar15 = 0;
    trapWord(6,(ulonglong)(uint)fVar11,0);
    uVar20 = (int)fVar7 / (int)fVar11;
    trapWord(5,(ulonglong)(uint)fVar11 &
               ~((((ulonglong)(uint)fVar7 & 0x7fffffff) << 1 | (ulonglong)((uint)fVar7 >> 0x1f)) - 1
                ),0xffff);
    uVar4 = uVar20;
    while (1 < uVar4) {
      lVar15 = lVar15 + 1;
      uVar4 = uVar20 >> ((uint)lVar15 & 0x3f);
    }
    lVar15 = lVar15 * 0x74 + (ulonglong)(uint)pfVar5[0x56];
    uVar16 = 0;
    uVar4 = uVar20;
    while (1 < uVar4) {
      uVar16 = uVar16 + 1;
      uVar4 = uVar20 >> (uVar16 & 0x3f);
    }
    fVar11 = pfVar5[0x4d];
    uVar30 = CONCAT44(uStack_140,uStack_16c);
    uVar20 = *(uint *)(uVar16 * 4 + (int)pfVar5[0x55]);
    fStack_168 = fVar11;
    uStack_13c = uStack_16c;
    uStack_138 = uVar20;
    fn_82C3F5D0(pfVar5,param_2,fVar11,lVar15,uVar30,(ulonglong)uVar20 << 0x20);
    fVar7 = pfVar5[0x42];
    fn_82E6BD90(0,&uStack_170,fVar7,lVar15,uVar30,(ulonglong)uVar20 << 0x20);
    piVar18 = (int *)((int)fVar11 + 4);
    iVar8 = *(int *)((int)fVar11 + 4);
    while (iVar8 < 1) {
      piVar18 = piVar18 + 1;
      iVar21 = iVar21 + 1;
      iVar8 = *piVar18;
    }
    uVar23 = (ulonglong)uStack_170;
    if (0 < (int)fVar7) {
      dVar29 = (double)*pfVar5;
      iVar8 = uStack_170 * 4;
      pfVar25 = (float *)(iVar3 + -4);
      dVar31 = (double)lbl_8200D8DC;
      uVar30 = lbl_82015618;
      do {
        fVar7 = lbl_820F8F74;
        fVar11 = pfVar5[0x87];
        fVar12 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
        pfVar5[0x88] = fVar12;
        fVar12 = (float)(((int)fVar12 >> 4) + ((int)fVar12 >> 2));
        pfVar5[0x87] = fVar12;
        lStack_148 = (longlong)((int)fVar12 - (int)fVar11);
        lStack_158 = (longlong)(int)(*(int *)(iVar8 + iVar13) - uStack_160);
        dVar28 = (double)((float)lStack_148 * fVar7 * pfVar5[0x49]);
        dVar27 = (double)fn_82F655D8(uVar30,(double)(float)((double)lStack_158 * dVar31));
        iVar26 = iVar26 + 1;
        pfVar25 = pfVar25 + 1;
        *pfVar25 = (float)((double)(float)((double)(float)dVar27 * dVar28) * dVar29);
      } while (iVar26 < (int)pfVar5[0x42]);
    }
    iVar8 = iStack_164;
    fVar11 = pfVar5[0x65];
    dVar29 = (double)lbl_820A80B8;
    iVar13 = (int)lVar15;
    if (iVar26 < (int)fVar11) {
      uVar30 = CONCAT44(uStack_140,uStack_13c);
      do {
        iVar6 = fn_82E6BD90(iVar26,&uStack_170,fVar11,lVar15,uVar30,(ulonglong)uVar20 << 0x20);
        uVar23 = (ulonglong)uStack_170;
        dVar31 = (double)fn_82C378E0(pfVar5,piVar9,uVar23);
        if (iVar26 < iVar6) {
          if (3 < iVar6 - iVar26) {
            pfVar14 = pfVar5 + 0x87;
            piVar18 = (int *)((iVar22 + 2) * 4 + iVar8);
            pfVar25 = (float *)((iVar26 + 2) * 4 + iVar3);
            do {
              fVar11 = *pfVar14;
              fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
              pfVar5[0x88] = fVar7;
              fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
              *pfVar14 = fVar7;
              lStack_158 = (longlong)((int)fVar7 - (int)fVar11);
              lStack_148 = (longlong)piVar18[-2];
              pfVar25[-2] = (float)((double)(float)((double)lStack_158 * dVar29 + (double)lStack_148
                                                   ) * dVar31);
              fVar11 = *pfVar14;
              fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
              pfVar5[0x88] = fVar7;
              fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
              *pfVar14 = fVar7;
              lStack_d8 = (longlong)((int)fVar7 - (int)fVar11);
              lStack_120 = (longlong)piVar18[-1];
              pfVar25[-1] = (float)((double)(float)((double)lStack_d8 * dVar29 + (double)lStack_120)
                                   * dVar31);
              fVar11 = *pfVar14;
              fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
              pfVar5[0x88] = fVar7;
              fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
              *pfVar14 = fVar7;
              lStack_130 = (longlong)((int)fVar7 - (int)fVar11);
              lStack_110 = (longlong)*piVar18;
              *pfVar25 = (float)((double)(float)((double)lStack_130 * dVar29 + (double)lStack_110) *
                                dVar31);
              fVar11 = *pfVar14;
              fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
              pfVar5[0x88] = fVar7;
              fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
              *pfVar14 = fVar7;
              lStack_108 = (longlong)((int)fVar7 - (int)fVar11);
              lStack_e8 = (longlong)piVar18[1];
              pfVar25[1] = (float)((double)(float)((double)lStack_108 * dVar29 + (double)lStack_e8)
                                  * dVar31);
              iVar26 = iVar26 + 4;
              iVar22 = iVar22 + 4;
              piVar18 = piVar18 + 4;
              pfVar25 = pfVar25 + 4;
            } while (iVar26 < iVar6 + -3);
          }
          if (iVar26 < iVar6) {
            iVar6 = iVar6 - iVar26;
            piVar18 = (int *)(iVar22 * 4 + iVar8);
            pfVar25 = (float *)(iVar26 * 4 + iVar3);
            iVar22 = iVar6 + iVar22;
            iVar26 = iVar6 + iVar26;
            do {
              fVar11 = pfVar5[0x87];
              fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
              pfVar5[0x88] = fVar7;
              fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
              pfVar5[0x87] = fVar7;
              lStack_f8 = (longlong)((int)fVar7 - (int)fVar11);
              lStack_128 = (longlong)*piVar18;
              *pfVar25 = (float)((double)(float)((double)lStack_f8 * dVar29 + (double)lStack_128) *
                                dVar31);
              piVar18 = piVar18 + 1;
              pfVar25 = pfVar25 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        if (*(int *)((int)((uVar23 + 1 & 0xffffffff) << 2) + iVar13) <=
            (iVar26 + 1 << (uStack_16c & 0x3f)) >> 6) {
          uVar23 = uVar23 + 1;
          uStack_170 = (uint)uVar23;
        }
        piVar18 = (int *)((iVar21 + 1) * 4 + (int)fStack_168);
        iVar6 = *piVar18;
        while (iVar6 <= iVar26) {
          piVar18 = piVar18 + 1;
          iVar21 = iVar21 + 1;
          iVar6 = *piVar18;
        }
        fVar11 = pfVar5[0x65];
      } while (iVar26 < (int)fVar11);
    }
    fVar11 = pfVar5[0x43];
    if (iVar26 < (int)fVar11) {
      iVar2 = iVar2 - (int)pfVar24;
      do {
        if (*(char *)(iStack_118 + iVar21) == '\x01') {
          dVar31 = (double)fn_82C31720(*(undefined4 *)(iVar2 + (int)pfVar24));
          dVar31 = (double)(float)((double)*pfVar24 * dVar31);
          pfVar25 = (float *)((iVar21 + 1) * 4 + (int)fStack_168);
          fVar11 = *pfVar25;
          if ((int)pfVar5[0x43] <= (int)*pfVar25) {
            fVar11 = pfVar5[0x43];
          }
          while (iVar26 < (int)fVar11) {
            dVar27 = (double)fn_82C3F530((ulonglong)
                                           *(uint *)((int)((uVar23 & 0xffffffff) << 2) + iStack_d0)
                                           - (ulonglong)uStack_160);
            dVar27 = (double)(float)(dVar27 * dVar31);
            iVar8 = fn_82E6BD90(iVar26,&uStack_170,fVar11,lVar15,CONCAT44(uStack_140,uStack_13c),
                                 uVar20);
            if (iVar26 < iVar8) {
              if (3 < iVar8 - iVar26) {
                pfVar19 = pfVar5 + 0x87;
                pfVar14 = (float *)(iVar26 * 4 + iVar3 + -4);
                do {
                  fVar12 = lbl_820F8F74;
                  fVar7 = *pfVar19;
                  iVar26 = iVar26 + 4;
                  fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                  pfVar5[0x88] = fVar10;
                  fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
                  *pfVar19 = fVar10;
                  lStack_128 = (longlong)((int)fVar10 - (int)fVar7);
                  pfVar14[1] = (float)((double)((float)lStack_128 * fVar12) * dVar27);
                  fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                  fVar7 = *pfVar19;
                  pfVar5[0x88] = fVar10;
                  fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
                  *pfVar19 = fVar10;
                  lStack_f8 = (longlong)((int)fVar10 - (int)fVar7);
                  pfVar14[2] = (float)((double)((float)lStack_f8 * fVar12) * dVar27);
                  fVar7 = *pfVar19;
                  fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                  pfVar5[0x88] = fVar10;
                  fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
                  *pfVar19 = fVar10;
                  lStack_e8 = (longlong)((int)fVar10 - (int)fVar7);
                  pfVar14[3] = (float)((double)((float)lStack_e8 * fVar12) * dVar27);
                  fVar7 = *pfVar19;
                  fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                  pfVar5[0x88] = fVar10;
                  fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
                  *pfVar19 = fVar10;
                  lStack_108 = (longlong)((int)fVar10 - (int)fVar7);
                  pfVar14 = pfVar14 + 4;
                  *pfVar14 = (float)((double)((float)lStack_108 * fVar12) * dVar27);
                  uVar20 = uStack_138;
                } while (iVar26 < iVar8 + -3);
              }
              if (iVar26 < iVar8) {
                iVar8 = iVar8 - iVar26;
                pfVar14 = (float *)(iVar26 * 4 + iVar3 + -4);
                iVar26 = iVar8 + iVar26;
                do {
                  fVar12 = lbl_820F8F74;
                  fVar7 = pfVar5[0x87];
                  fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                  pfVar5[0x88] = fVar10;
                  fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
                  pfVar5[0x87] = fVar10;
                  lStack_110 = (longlong)((int)fVar10 - (int)fVar7);
                  pfVar14 = pfVar14 + 1;
                  *pfVar14 = (float)((double)((float)lStack_110 * fVar12) * dVar27);
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            }
            uVar23 = (ulonglong)uStack_170;
            if (*(int *)((int)((uVar23 + 1 & 0xffffffff) << 2) + iVar13) <=
                (iVar26 + 1 << (uStack_16c & 0x3f)) >> 6) {
              uVar23 = uVar23 + 1;
              uStack_170 = (uint)uVar23;
            }
          }
          pfVar24 = pfVar24 + 1;
        }
        else {
          iVar6 = fn_82E6BD90(iVar26,&uStack_170,fVar11,lVar15,CONCAT44(uStack_140,uStack_13c),
                               uVar20);
          iVar8 = iVar21 * 4 + (int)fStack_168;
          pfVar25 = (float *)(iVar8 + 4);
          iVar8 = *(int *)(iVar8 + 4);
          if (iVar8 < iVar6) {
            iVar6 = iVar8;
          }
          uVar23 = (ulonglong)uStack_170;
          dVar31 = (double)fn_82C378E0(pfVar5,piVar9,uVar23);
          if (iVar26 < iVar6) {
            if (3 < iVar6 - iVar26) {
              pfVar19 = pfVar5 + 0x87;
              piVar18 = (int *)((iVar22 + 2) * 4 + iStack_164);
              pfVar14 = (float *)((iVar26 + 2) * 4 + iVar3);
              do {
                fVar11 = *pfVar19;
                fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                pfVar5[0x88] = fVar7;
                fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
                *pfVar19 = fVar7;
                lStack_130 = (longlong)((int)fVar7 - (int)fVar11);
                lStack_120 = (longlong)piVar18[-2];
                pfVar14[-2] = (float)((double)(float)((double)lStack_130 * dVar29 +
                                                     (double)lStack_120) * dVar31);
                fVar11 = *pfVar19;
                fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                pfVar5[0x88] = fVar7;
                fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
                *pfVar19 = fVar7;
                lStack_d8 = (longlong)((int)fVar7 - (int)fVar11);
                lStack_158 = (longlong)piVar18[-1];
                pfVar14[-1] = (float)((double)(float)((double)lStack_d8 * dVar29 +
                                                     (double)lStack_158) * dVar31);
                fVar11 = *pfVar19;
                fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                pfVar5[0x88] = fVar7;
                fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
                *pfVar19 = fVar7;
                lStack_148 = (longlong)((int)fVar7 - (int)fVar11);
                lStack_c8 = (longlong)*piVar18;
                *pfVar14 = (float)((double)(float)((double)lStack_148 * dVar29 + (double)lStack_c8)
                                  * dVar31);
                fVar11 = *pfVar19;
                fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                pfVar5[0x88] = fVar7;
                fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
                *pfVar19 = fVar7;
                lStack_100 = (longlong)((int)fVar7 - (int)fVar11);
                lStack_f0 = (longlong)piVar18[1];
                pfVar14[1] = (float)((double)(float)((double)lStack_100 * dVar29 + (double)lStack_f0
                                                    ) * dVar31);
                iVar26 = iVar26 + 4;
                iVar22 = iVar22 + 4;
                piVar18 = piVar18 + 4;
                pfVar14 = pfVar14 + 4;
              } while (iVar26 < iVar6 + -3);
            }
            if (iVar26 < iVar6) {
              iVar6 = iVar6 - iVar26;
              piVar18 = (int *)(iVar22 * 4 + iStack_164);
              pfVar14 = (float *)(iVar26 * 4 + iVar3);
              iVar22 = iVar6 + iVar22;
              iVar26 = iVar6 + iVar26;
              do {
                fVar11 = pfVar5[0x87];
                fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                pfVar5[0x88] = fVar7;
                fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
                pfVar5[0x87] = fVar7;
                lStack_e0 = (longlong)((int)fVar7 - (int)fVar11);
                lStack_150 = (longlong)*piVar18;
                *pfVar14 = (float)((double)(float)((double)lStack_e0 * dVar29 + (double)lStack_150)
                                  * dVar31);
                piVar18 = piVar18 + 1;
                pfVar14 = pfVar14 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
          }
        }
        if (*(int *)((int)((uVar23 + 1 & 0xffffffff) << 2) + iVar13) <=
            (iVar26 + 1 << (uStack_16c & 0x3f)) >> 6) {
          uVar23 = uVar23 + 1;
          uStack_170 = (uint)uVar23;
        }
        fVar11 = *pfVar25;
        while ((int)fVar11 <= iVar26) {
          pfVar25 = pfVar25 + 1;
          iVar21 = iVar21 + 1;
          fVar11 = *pfVar25;
        }
        fVar11 = pfVar5[0x43];
      } while (iVar26 < (int)fVar11);
    }
    sVar1 = *(short *)((int)piVar9 + 0x76);
    if (iVar26 < sVar1) {
      lVar17 = (uVar23 & 0x3fffffff) * 4;
      lVar15 = lVar17 + lVar15;
      iVar13 = *(int *)((int)lVar17 + iVar13);
      while (((int)fVar11 + -1 << (uStack_16c & 0x3f)) >> 6 < iVar13) {
        lVar15 = lVar15 + -4;
        uVar23 = uVar23 - 1;
        iVar13 = *(int *)lVar15;
      }
      dVar29 = (double)fn_82C378E0(pfVar5,piVar9,uVar23);
      fVar11 = (float)(dVar29 * (double)lbl_820F8F70);
      if (3 < sVar1 - iVar26) {
        pfVar25 = pfVar5 + 0x87;
        pfVar24 = (float *)(iVar26 * 4 + iVar3 + -4);
        do {
          fVar12 = lbl_820F8F74;
          fVar7 = *pfVar25;
          iVar26 = iVar26 + 4;
          fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
          pfVar5[0x88] = fVar10;
          fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
          *pfVar25 = fVar10;
          lStack_150 = (longlong)((int)fVar10 - (int)fVar7);
          pfVar24[1] = (float)lStack_150 * fVar12 * fVar11;
          fVar7 = *pfVar25;
          fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
          pfVar5[0x88] = fVar10;
          fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
          *pfVar25 = fVar10;
          lStack_e0 = (longlong)((int)fVar10 - (int)fVar7);
          pfVar24[2] = (float)lStack_e0 * fVar12 * fVar11;
          fVar7 = *pfVar25;
          fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
          pfVar5[0x88] = fVar10;
          fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
          *pfVar25 = fVar10;
          lStack_f0 = (longlong)((int)fVar10 - (int)fVar7);
          pfVar24[3] = (float)lStack_f0 * fVar12 * fVar11;
          fVar7 = *pfVar25;
          fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
          pfVar5[0x88] = fVar10;
          fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
          *pfVar25 = fVar10;
          lStack_100 = (longlong)((int)fVar10 - (int)fVar7);
          pfVar24 = pfVar24 + 4;
          *pfVar24 = (float)lStack_100 * fVar12 * fVar11;
        } while (iVar26 < sVar1 + -3);
      }
      if (iVar26 < sVar1) {
        iVar13 = sVar1 - iVar26;
        pfVar24 = (float *)(iVar26 * 4 + iVar3 + -4);
        do {
          fVar10 = lbl_820F8F74;
          fVar7 = pfVar5[0x87];
          fVar12 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
          pfVar5[0x88] = fVar12;
          fVar12 = (float)(((int)fVar12 >> 4) + ((int)fVar12 >> 2));
          pfVar5[0x87] = fVar12;
          lStack_150 = (longlong)((int)fVar12 - (int)fVar7);
          pfVar24 = pfVar24 + 1;
          *pfVar24 = (float)lStack_150 * fVar10 * fVar11;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    fn_82F6A594(0);
  }
  return;
}

