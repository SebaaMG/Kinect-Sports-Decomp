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
extern unsigned int *auStack_100;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_82809A88();
extern int fn_8280D8E0();
extern int fn_8280D9D8();
extern int fn_8280E180();
extern int fn_8280F970();
extern int fn_82810208();
extern int fn_82810B78();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_82192754;
extern unsigned int lbl_8219275C;
extern unsigned int lbl_82193AF0;
extern float lbl_82193CF0;
extern unsigned int lbl_82193D04;
extern unsigned int lbl_82193D10;
extern unsigned int lbl_82195734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975C4;
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8226BD48(void)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined8 in_r0;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  double dVar19;
  double extraout_f1;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float in_register_000104d0;
  float fVar30;
  float in_register_000104d4;
  float fVar31;
  float in_register_000104d8;
  float fVar32;
  float in_vr77;
  float fVar33;
  char acStack_140 [16];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined1 auStack_100 [4];
  float fStack_fc;
  float fStack_f8;
  struct { float first; float second; } stack_pair_f0;

  float fStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [192];
  
  iVar7 = fn_82F6A53C();
  dVar23 = (double)((float)(extraout_f1 * (double)lbl_82192754) * lbl_82193CF0);
  dVar25 = extraout_f1;
  dVar20 = (double)fn_82809A88((double)lbl_82191FB0);
  *(undefined1 *)(iVar7 + 0x74) = 1;
  iVar16 = 0;
  dVar21 = (double)lbl_821CA460;
  if (0 < *(int *)(iVar7 + 0x44)) {
    dVar22 = (double)lbl_8219275C;
    piVar12 = (int *)(iVar7 + 0xc);
    iVar18 = 0;
    do {
      dVar24 = dVar21;
      dVar26 = dVar21;
      if (*(char *)(iVar7 + 0x148) == '\0') {
        uVar11 = *(uint *)(*(int *)(iVar7 + 0x40) + iVar18 + 0xe4);
        if ((uVar11 & 0x249249) == 0) {
          if (((uVar11 & 0xdb6db6) != 0) || ((uVar11 & 0x7f000000) != 0)) {
            dVar24 = (double)lbl_821CC160;
            dVar26 = (double)lbl_821CC160;
          }
        }
        else {
          dVar24 = (double)lbl_82193D04;
          dVar26 = (double)lbl_8218E8E8;
        }
      }
      iVar14 = *(int *)(iVar7 + 0x10);
      iVar8 = *piVar12;
      stack_pair_f0.first = lbl_821CC160;
      uVar11 = 0;
      stack_pair_f0.second = lbl_821CC160;
      fStack_e8 = lbl_821CC160;
      pfVar3 = (float *)((uint)(auStack_100 + (int)in_r0) & 0xfffffff0);
      *pfVar3 = in_register_000104d0;
      pfVar3[1] = in_register_000104d4;
      pfVar3[2] = in_register_000104d8;
      pfVar3[3] = in_vr77;
      fVar33 = in_vr77;
      fVar32 = in_register_000104d8;
      fVar31 = in_register_000104d4;
      fVar30 = in_register_000104d0;
      if (iVar14 - iVar8 >> 2 != 0) {
        iVar14 = 0;
        do {
          iVar8 = *(int *)(iVar7 + 0x40) + iVar18;
          piVar2 = *(int **)(*piVar12 + iVar14);
          if ((*(uint *)(iVar8 + 0xe4) & piVar2[6]) != 0) {
            (**(code **)(*piVar2 + 8))(piVar2,iVar8 + 0x80,auStack_e0,auStack_d0,acStack_140);
            iVar9 = (int)in_r0;
            puVar4 = (undefined4 *)((int)&stack_pair_f0.first + iVar9 & 0xfffffff0);
            uVar27 = puVar4[1];
            uVar28 = puVar4[2];
            uVar29 = puVar4[3];{ V16 _vt0 = vectorAddFloatingPoint(in_vs32,in_vs45); memcpy(in_vs32, &_vt0, 16); }
            iVar8 = *piVar12;
            pfVar3 = (float *)((uint)(auStack_d0 + iVar9) & 0xfffffff0);
            in_register_000104d0 = in_register_000104d0 + *pfVar3;
            in_register_000104d4 = in_register_000104d4 + pfVar3[1];
            in_register_000104d8 = in_register_000104d8 + pfVar3[2];
            in_vr77 = in_vr77 + pfVar3[3];
            puVar5 = (undefined4 *)((int)&stack_pair_f0.first + iVar9 & 0xfffffff0);
            *puVar5 = *puVar4;
            puVar5[1] = uVar27;
            puVar5[2] = uVar28;
            puVar5[3] = uVar29;
            if (((*(char *)(*(int *)(iVar8 + iVar14) + 4) != '\0') &&
                (iVar9 = *(int *)(iVar7 + 0x40) + iVar18, *(char *)(iVar9 + 0xe0) == '\0')) &&
               (acStack_140[0] != '\0')) {
              dVar19 = (double)lbl_821CC160;
              if (dVar19 < (double)*(float *)(iVar9 + 0xc4)) {
                *(float *)(iVar9 + 0xc4) = (float)((double)*(float *)(iVar9 + 0xc4) - dVar25);
              }
              else {
                dVar19 = (double)(*(float *)(iVar9 + 200) * *(float *)(*(int *)(iVar8 + iVar14) + 8)
                                 );
              }
              iVar8 = *(int *)(iVar7 + 0x40) + iVar18;
              *(float *)(iVar8 + 0xc0) = (float)(dVar19 * dVar25 + (double)*(float *)(iVar8 + 0xc0))
              ;
              iVar8 = (**(code **)(**(int **)(*piVar12 + iVar14) + 0x10))
                                (&fStack_130,*(int **)(*piVar12 + iVar14),
                                 *(int *)(iVar7 + 0x40) + iVar18 + 0x80);
              puVar4 = (undefined4 *)((int)in_r0 + iVar8 & 0xfffffff0);
              uVar27 = puVar4[1];
              uVar28 = puVar4[2];
              uVar29 = puVar4[3];
              puVar5 = (undefined4 *)(*(int *)(iVar7 + 0x40) + iVar18 + 0xd0U & 0xfffffff0);
              *puVar5 = *puVar4;
              puVar5[1] = uVar27;
              puVar5[2] = uVar28;
              puVar5[3] = uVar29;
              iVar8 = *(int *)(iVar7 + 0x40) + iVar18;
              if (*(float *)(iVar8 + 0xe8) < *(float *)(iVar8 + 0xc0)) {
                *(float *)(iVar8 + 0xc0) = *(float *)(iVar8 + 0xe8);
                *(undefined1 *)(*(int *)(iVar7 + 0x40) + iVar18 + 0xe0) = 1;
              }
            }
          }
          uVar11 = uVar11 + 1;
          iVar14 = iVar14 + 4;
        } while (uVar11 < (uint)(*(int *)(iVar7 + 0x10) - *piVar12 >> 2));
        pfVar3 = (float *)((uint)(auStack_100 + (int)in_r0) & 0xfffffff0);
        *pfVar3 = in_register_000104d0;
        pfVar3[1] = in_register_000104d4;
        pfVar3[2] = in_register_000104d8;
        pfVar3[3] = in_vr77;
      }
      if ((*(char *)(iVar7 + 0x74) == '\0') ||
         (uVar10 = 1, *(char *)(*(int *)(iVar7 + 0x40) + iVar18 + 0xe0) == '\0')) {
        uVar10 = 0;
      }
      *(undefined1 *)(iVar7 + 0x74) = uVar10;
      fVar6 = lbl_82193D10;
      iVar14 = *(int *)(iVar7 + 0x40) + iVar18;
      *(float *)(iVar14 + 0xa8) =
           (float)((double)(fStack_e8 - *(float *)(iVar14 + 0x98)) * dVar23 +
                  (double)*(float *)(iVar14 + 0xa8));
      iVar14 = *(int *)(iVar7 + 0x40) + iVar18;
      *(float *)(iVar14 + 0xa8) =
           (float)((double)(float)((double)*(float *)(iVar14 + 0x98) * dVar22) * dVar25 +
                  (double)*(float *)(iVar14 + 0xa8));
      iVar14 = *(int *)(iVar7 + 0x40) + iVar18;
      *(float *)(iVar14 + 0xa8) = (float)(dVar20 * (double)*(float *)(iVar14 + 0xa8));
      iVar14 = *(int *)(iVar7 + 0x40) + iVar18;
      *(float *)(iVar14 + 0x98) =
           (float)((double)*(float *)(iVar14 + 0xa8) * dVar25 + (double)*(float *)(iVar14 + 0x98));
      iVar14 = *(int *)(iVar7 + 0x40) + iVar18;
      fVar1 = *(float *)(iVar14 + 0x90);
      *(float *)(iVar14 + 0x90) = ((float)((double)stack_pair_f0.first * dVar26) - fVar1) * fVar6 + fVar1;
      iVar14 = *(int *)(iVar7 + 0x40) + iVar18;
      fVar1 = *(float *)(iVar14 + 0x94);
      *(float *)(iVar14 + 0x94) = ((float)((double)stack_pair_f0.second * dVar26) - fVar1) * fVar6 + fVar1;
      fn_8280F970((double)(float)((double)fStack_f8 * dVar24),0xffffffff831d7714);
      fn_8280F970((double)(float)((double)fStack_fc * dVar24),0xffffffff831d7720);
      fn_8280D8E0(&fStack_120,&fStack_110,auStack_c0);
      in_vr77 = fVar33;
      in_register_000104d8 = fVar32;
      in_register_000104d4 = fVar31;
      in_register_000104d0 = fVar30;
      fn_8280E180((double)lbl_82193D10,*(int *)(iVar7 + 0x40) + iVar18 + 0xb0,auStack_c0);
      iVar16 = iVar16 + 1;
      iVar18 = iVar18 + 0xf0;
    } while (iVar16 < *(int *)(iVar7 + 0x44));
  }
  if ((lbl_832975C4 != '\0') && (lVar15 = 0, 0 < *(int *)(iVar7 + 0x4c))) {
    dVar20 = (double)lbl_82193AF0;
    dVar25 = (double)lbl_82195734;
    do {
      lVar13 = 0;
      if (0 < *(int *)(iVar7 + 0x48)) {
        do {
          iVar16 = (int)lVar15;
          lVar17 = (longlong)*(int *)(iVar7 + 0x48) * (longlong)iVar16 + lVar13;
          if ((-1 < lVar17) && (iVar18 = (int)lVar17, iVar18 < *(int *)(iVar7 + 0x44))) {
            iVar14 = (int)lVar13;
            fStack_12c = lbl_821CC160;
            dVar23 = dVar20;
            fStack_128 = lbl_821CC160;
            if (0 < iVar14) {
              fStack_128 = *(float *)(iVar18 * 0xf0 + *(int *)(iVar7 + 0x40) + 0x98) -
                           *(float *)(iVar18 * 0xf0 + *(int *)(iVar7 + 0x40) + -0x58);
              dVar23 = dVar25;
            }
            if (iVar14 < *(int *)(iVar7 + 0x48) + -1) {
              dVar23 = dVar23 + dVar21;
              fStack_128 = (*(float *)((iVar18 + 1) * 0xf0 + *(int *)(iVar7 + 0x40) + 0x98) -
                           *(float *)(iVar18 * 0xf0 + *(int *)(iVar7 + 0x40) + 0x98)) + fStack_128;
            }
            fStack_130 = (float)dVar23;
            fn_82810B78(&fStack_130,&fStack_130);
            fStack_120 = -fStack_128;
            fStack_118 = lbl_821CC160;
            fStack_11c = fStack_130;
            fStack_130 = lbl_821CC160;
            dVar23 = dVar20;
            fStack_128 = lbl_821CC160;
            if (0 < iVar16) {
              fStack_128 = *(float *)(iVar18 * 0xf0 + *(int *)(iVar7 + 0x40) + 0x98) -
                           *(float *)(((iVar16 + -1) * *(int *)(iVar7 + 0x48) + iVar14) * 0xf0 +
                                      *(int *)(iVar7 + 0x40) + 0x98);
              dVar23 = dVar25;
            }
            if (iVar16 < *(int *)(iVar7 + 0x4c) + -1) {
              dVar23 = dVar23 + dVar21;
              fStack_128 = (*(float *)(((iVar16 + 1) * *(int *)(iVar7 + 0x48) + iVar14) * 0xf0 +
                                       *(int *)(iVar7 + 0x40) + 0x98) -
                           *(float *)(iVar18 * 0xf0 + *(int *)(iVar7 + 0x40) + 0x98)) + fStack_128;
            }
            fStack_12c = (float)dVar23;
            fn_82810B78(&fStack_130,&fStack_130);
            fStack_110 = lbl_821CC160;
            fStack_10c = fStack_12c;
            fStack_108 = -fStack_128;
            fn_82810208(&fStack_120,&fStack_110,auStack_100);
            fn_82810B78(auStack_100,auStack_100);
            stack_pair_f0.second = (float)dVar21;
            stack_pair_f0.first = lbl_821CC160;
            fStack_e8 = lbl_821CC160;
            fn_8280D9D8(&stack_pair_f0.first,auStack_100,
                              lVar15 * 0xf0 + (ulonglong)*(uint *)(iVar7 + 0x40) + 0xb0);
          }
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < *(int *)(iVar7 + 0x48));
      }
      lVar15 = lVar15 + 1;
    } while ((int)lVar15 < *(int *)(iVar7 + 0x4c));
  }
  fn_82F6A588();
  return;
}

