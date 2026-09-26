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
#define _uStack_108 ((*(U64*)&uStack_108))
extern int fn_827B3668();
extern int fn_827B36A8();
extern int fn_827B3C10();
extern int fn_827B3C68();
extern int fn_827B44F8();
extern int fn_827B4730();
extern int fn_827B4790();
extern int fn_827B47E0();
extern int fn_827B5528();
extern int fn_827B55D0();
extern int fn_827B5620();
extern int fn_827B56E0();
extern int fn_827B5828();
extern int fn_827B5C58();
extern int fn_827B5D20();
extern int fn_827B5E10();
extern int fn_827B7110();
extern int fn_827B74F8();
extern int fn_827B7580();
extern int fn_827B8810();
extern int fn_827B93C0();
extern int fn_827BA4D0();
extern int fn_827BA830();
extern int fn_827BA890();
extern int fn_827BAD68();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_104;
extern unsigned int iStack_110;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_820143E0;
extern unsigned int lbl_820151B8;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_820162A4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_108;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_c8;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;


void fn_827B9528(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5,ulonglong param_6,undefined8 param_7)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort uVar9;
  int iVar8;
  char cVar10;
  longlong lVar11;
  int iVar13;
  uint uVar14;
  ulonglong uVar12;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar20;
  longlong lVar19;
  uint uVar22;
  uint uVar23;
  longlong lVar21;
  int *piVar25;
  uint *puVar26;
  longlong lVar24;
  ulonglong uVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int iStack_110;
  undefined4 uStack_108;
  int iStack_104;
  longlong lStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  uint uStack_c8;
  
  iVar5 = fn_82F6A548();
  iVar6 = 0;
  piVar1 = (int *)param_3;
  if ((param_4 & 0xff) != 0) {
    iVar6 = (**(code **)(**(int **)(*piVar1 + 0xc) + 0x1c))
                      (*(int **)(*piVar1 + 0xc),*(undefined2 *)(piVar1 + 1),
                       *(undefined1 *)((int)piVar1 + 6));
  }
  if (((param_5 & 0xffffffff) != 0) || (iVar6 != 0)) {
    dVar29 = (double)lbl_8200D8DC;
    dVar32 = (double)lbl_82002C5C;
    uVar15 = (ulonglong)(*(byte *)((int)piVar1 + 7) >> 1) & 2 | 1;
    uVar27 = (ulonglong)((double)*(byte *)((int)piVar1 + 9) * dVar29 + dVar32);
    iStack_104 = (int)uVar27;
    iVar16 = iStack_104;
    uVar27 = uVar27 & 0xffffffff;
    iStack_110 = iStack_104;
    uVar28 = (ulonglong)((double)*(byte *)(piVar1 + 2) * dVar29 + dVar32);
    iStack_104 = (int)uVar28;
    uVar28 = uVar28 & 0xffffffff;
    _uStack_108 = CONCAT44(iStack_104,iStack_104);
    if ((uVar28 == 0) && (*(byte *)(piVar1 + 2) != 0)) {
      uVar28 = 1;
      _uStack_108 = CONCAT44(1,iStack_104);
    }
    if ((iVar16 == 0) && (*(byte *)((int)piVar1 + 9) != 0)) {
      uVar27 = 1;
      iStack_110 = 1;
    }
    iVar16 = iVar5 + 0x334;
    fn_827B3C10(iVar16);
    dVar30 = (double)lbl_82002AE0;
    if (iVar6 == 0) {
      piVar20 = (int *)param_5;
      if (*(char *)((int)piVar20 + 0x25) == '\0') {
        uVar7 = 0;
        uVar9 = 0;
        bVar2 = false;
        if ((((*(byte *)((int)piVar1 + 7) & 1) != 0) && ((*(byte *)((int)piVar1 + 7) & 2) != 0)) &&
           (0x60 < (param_6 & 0xffffffff))) {
          uVar23 = *(uint *)(*(int *)(*piVar1 + 0xc) + 0x14);
          if (((uVar23 >> 0xd & 1) != 0) || ((uVar23 >> 4 & 1) != 0)) {
            uVar7 = fn_827B55D0(*piVar1,param_7);
            uVar7 = uVar7 & 0xffff;
            uVar9 = fn_827B5620(*piVar1,param_7);
            if ((uVar7 != 0) && (uVar9 != 0)) {
              bVar2 = true;
            }
          }
        }
        uStack_118 = (ulonglong)*(uint *)(iVar5 + 0xc);
        (**(code **)(*piVar20 + 0x18))
                  ((double)(float)((double)(lbl_820151B8 / (float)uStack_118) * dVar32),param_5,
                   iVar5 + 0x2ec);
        if (bVar2) {
          piVar20 = (int *)(iVar5 + 0x6a0);
          fn_827BA4D0(piVar20);
          iVar13 = (int)((param_6 & 0xffffffff) << 2);
          if (0x800 < iVar13) {
            iVar13 = 0x800;
          }
          *piVar20 = iVar13;
          uVar23 = 0;
          dVar32 = (double)((float)(longlong)iVar13 * lbl_820143E0);
          if (*(int *)(iVar5 + 0x304) != 0) {
            do {
              piVar25 = (int *)(*(int *)((uVar23 >> 4 & 0xffffffc) + *(int *)(iVar5 + 0x310)) +
                               (uVar23 & 0x3f) * 0x18);
              if (2 < (uint)piVar25[1]) {
                uVar22 = piVar25[2];
                uStack_118 = ((((U64)(uStack_118)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((short)(int)((double)*(float *)(*(int *)((uVar22 >> 6 & 0x3fffffc) +
                                                             *(int *)(*piVar25 + 0x14)) +
                                                    (uVar22 & 0xff) * 8) * dVar32))) & ((U64)0xFFFF)) << 48));
                uVar4 = (((U64)(uStack_118) >> 48) & 0xFFFF);
                iVar13 = (int)((double)*(float *)(*(int *)((uVar22 >> 6 & 0x3fffffc) +
                                                          *(int *)(*piVar25 + 0x14)) +
                                                  (uVar22 & 0xff) * 8 + 4) * dVar32);
                uStack_118 = ((((U64)(uStack_118)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((short)iVar13)) & ((U64)0xFFFF)) << 48));
                lVar11 = (longlong)(((U64)(uStack_118) >> 48) & 0xFFFF);
                uStack_118 = (longlong)iVar13;
                fn_827BA830(piVar20,uVar4,-lVar11);
                uVar22 = 1;
                if (1 < (uint)piVar25[1]) {
                  do {
                    uVar14 = piVar25[2] + uVar22;
                    iVar13 = (int)((double)*(float *)(*(int *)((uVar14 >> 6 & 0x3fffffc) +
                                                              *(int *)(*piVar25 + 0x14)) +
                                                     (uVar14 * 8 & 0x7f8)) * dVar32);
                    uStack_120 = ((((U64)(uStack_120)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)iVar13)) & ((U64)0xFFFF)) << 48));
                    uVar4 = (((U64)(uStack_120) >> 48) & 0xFFFF);
                    iVar8 = (int)((double)*(float *)(*(int *)((uVar14 >> 6 & 0x3fffffc) +
                                                             *(int *)(*piVar25 + 0x14)) +
                                                     (uVar14 * 8 & 0x7f8) + 4) * dVar32);
                    uStack_118 = ((((U64)(uStack_118)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((short)iVar8)) & ((U64)0xFFFF)) << 48));
                    lVar11 = (longlong)(((U64)(uStack_118) >> 48) & 0xFFFF);
                    uStack_120 = (longlong)iVar13;
                    uStack_118 = (longlong)iVar8;
                    fn_827BA890(piVar20,uVar4,-lVar11);
                    uVar22 = uVar22 + 1;
                  } while (uVar22 < (uint)piVar25[1]);
                }
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 < *(uint *)(iVar5 + 0x304));
          }
          uStack_120 = (longlong)(int)uVar7;
          uStack_118 = (ulonglong)(int)((double)uStack_120 * dVar32);
          fn_827BAD68(piVar20,(param_6 & 0xffffffff) >> 4,0,(int)((double)uStack_120 * dVar32)
                            ,(int)((double)uVar9 * dVar32));
          uStack_118 = (ulonglong)*(int *)(iVar5 + 0x708);
          uVar7 = 0;
          dVar32 = (double)(float)(dVar30 / (double)(longlong)uStack_118);
          if (*(int *)(iVar5 + 0x6a4) != 0) {
            do {
              puVar26 = (uint *)(*(int *)((uVar7 >> 2 & 0x3ffffffc) + *(int *)(iVar5 + 0x6b0)) +
                                (uVar7 & 0xf) * 8);
              if (2 < puVar26[1]) {
                uStack_120 = CONCAT44(*(undefined4 *)
                                       (*(int *)((*puVar26 >> 4 & 0xffffffc) +
                                                *(int *)(iVar5 + 0x6c0)) + (*puVar26 & 0x3f) * 4),
                                      (((U64)(uStack_120) >> 32) & 0xFFFFFFFF));
                fn_827B5C58(piVar20,&uStack_120);
                lStack_100 = (longlong)(((U64)(uStack_120) >> 0) & 0xFFFF);
                lStack_f8 = (longlong)-(int)(((U64)(uStack_120) >> 16) & 0xFFFF);
                dVar31 = (double)uVar15;
                uStack_118 = uVar15;
                fn_827B3668((double)(float)((double)(float)((double)lStack_100 * dVar31) * dVar32)
                              ,(double)(float)((double)lStack_f8 * dVar32),iVar16);
                uVar23 = 1;
                if (1 < puVar26[1]) {
                  do {
                    uStack_120 = CONCAT44(*(undefined4 *)
                                           (*(int *)((*puVar26 + uVar23 >> 4 & 0xffffffc) +
                                                    *(int *)(iVar5 + 0x6c0)) +
                                           ((*puVar26 + uVar23) * 4 & 0xfc)),(((U64)(uStack_120) >> 32) & 0xFFFFFFFF));
                    fn_827B5C58(piVar20,&uStack_120);
                    uStack_f0 = (ulonglong)(((U64)(uStack_120) >> 0) & 0xFFFF);
                    uStack_e8 = (ulonglong)-(int)(((U64)(uStack_120) >> 16) & 0xFFFF);
                    fn_827B4730((double)(float)((double)(float)((double)(longlong)uStack_f0 *
                                                                 dVar31) * dVar32),
                                  (double)(float)((double)(longlong)uStack_e8 * dVar32),iVar16);
                    uVar23 = uVar23 + 1;
                  } while (uVar23 < puVar26[1]);
                }
                fn_827B4790(iVar16);
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(iVar5 + 0x6a4));
          }
          goto LAB_827b9b28;
        }
        uStack_e8 = (longlong)(int)uVar15 * (longlong)(int)param_6 & 0xffffffff;
        dVar31 = (double)(float)((double)(param_6 & 0xffffffff) * (double)lbl_820162A4);
        dVar32 = (double)uStack_e8 * (double)lbl_820162A4;
      }
      else {
        (**(code **)(*piVar20 + 0x18))((double)lbl_8200D898,param_5,iVar5 + 0x2ec);
        uStack_f0 = param_6 & 0xffffffff;
        uStack_e8 = (ulonglong)*(byte *)((int)piVar20 + 0x25) * 0x140;
        dVar31 = (double)(float)((double)uStack_f0 / (double)uStack_e8);
        dVar32 = (double)uVar15 * dVar31;
      }
      fn_827B47E0((double)(float)dVar32,dVar31,(double)lbl_821AAD20,iVar16,iVar5 + 0x2ec);
    }
LAB_827b9b28:
    bVar2 = false;
    lVar18 = *(uint *)(iVar5 + 0x10) + uVar28;
    lVar11 = *(uint *)(iVar5 + 0x10) + uVar27;
    lVar19 = -lVar18;
    lVar17 = -lVar11;
    if (iVar6 == 0) {
      cVar10 = fn_827B44F8(iVar16);
      lVar21 = lVar11;
      lVar24 = lVar18;
      if (cVar10 != '\0') {
        bVar2 = true;
        lVar19 = (ulonglong)*(uint *)(iVar5 + 0x380) - lVar18;
        lVar24 = (ulonglong)*(uint *)(iVar5 + 0x388) + lVar18;
        lVar17 = (ulonglong)*(uint *)(iVar5 + 900) - lVar11;
        lVar21 = (ulonglong)*(uint *)(iVar5 + 0x38c) + lVar11;
      }
    }
    else {
      lVar19 = -((ulonglong)*(uint *)(iVar6 + 0x1c) + lVar18);
      lVar17 = -((ulonglong)*(uint *)(iVar6 + 0x20) + lVar11);
      lVar21 = ((ulonglong)*(uint *)(iVar6 + 0x18) - (ulonglong)*(uint *)(iVar6 + 0x20)) + lVar11 +
               -1;
      lVar24 = ((ulonglong)*(uint *)(iVar6 + 0x14) - (ulonglong)*(uint *)(iVar6 + 0x1c)) + lVar18 +
               -1;
    }
    iVar13 = *(int *)(iVar5 + 0x2b8);
    uVar27 = (lVar21 - lVar17) + 1;
    uVar28 = (lVar24 - lVar19) + 1;
    if ((ulonglong)*(uint *)(iVar5 + 0xc) < (uVar27 & 0xffffffff)) {
      uVar27 = (ulonglong)*(uint *)(iVar5 + 0xc);
    }
    if ((ulonglong)*(uint *)(iVar13 + 0xc) < (uVar28 & 0xffffffff)) {
      uVar28 = (ulonglong)*(uint *)(iVar13 + 0xc);
    }
    iVar8 = fn_827B93C0(iVar5 + 0x710,param_3,uVar28,uVar27);
    if ((iVar8 != 0) &&
       (uVar12 = (ulonglong)*(ushort *)(*(int *)(iVar8 + 0xc) + 0x20),
       cVar10 = fn_827B56E0(iVar5,param_2,uVar12 << 0x20 | uVar12 & 0xffffffffffff3fff),
       cVar10 != '\0')) {
      cVar10 = fn_827B5528(iVar5 + 700,uVar28,uVar27,&uStack_118,&uStack_120);
      if (cVar10 == '\0') {
        fn_827B7580(iVar5,param_2);
        cVar10 = fn_827B5528(iVar5 + 700,uVar28,uVar27,&uStack_118,&uStack_120);
        if (cVar10 == '\0') goto LAB_827b9594;
      }
      iVar3 = (((U64)(uStack_120) >> 0) & 0xFFFFFFFF);
      uVar7 = (((U64)(uStack_118) >> 0) & 0xFFFFFFFF);
      uVar12 = (ulonglong)(((U64)(uStack_118) >> 0) & 0xFFFFFFFF);
      *(short *)(iVar8 + 0x20) = *(short *)(iVar8 + 0x18) - (short)lVar19;
      *(short *)(iVar8 + 0x22) = *(short *)(iVar8 + 0x1a) - (short)lVar17;
      if ((uVar27 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0((longlong)(((U64)(uStack_120) >> 0) & 0xFFFFFFFF) * (longlong)*(int *)(iVar13 + 0x14) +
                     (ulonglong)*(uint *)(iVar13 + 0x18) + uVar12,0,uVar28);
      }
      if (iVar6 == 0) {
        if (bVar2) {
          if ((*(char *)(piVar1 + 2) != '\0') || (*(char *)((int)piVar1 + 9) != '\0')) {
            dVar30 = (double)lbl_820162A0;
          }
          if (dVar30 != (double)*(float *)(iVar5 + 0x338)) {
            fn_827B3C68(iVar16);
          }
          if ((4 < (uVar28 & 0xffffffff)) && (2 < uVar15)) {
            if (*(int *)(iVar5 + 0x368) != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0((longlong)*(int *)(iVar13 + 0x14) * (longlong)iVar3 +
                           (ulonglong)*(uint *)(iVar13 + 0x18) + uVar12,0,uVar28);
            }
                    /* WARNING: Subroutine does not return */
            fn_82F691F0((longlong)*(int *)(iVar13 + 0x14) * (longlong)iVar3 +
                         (ulonglong)*(uint *)(iVar13 + 0x18) + uVar12,0,uVar28);
          }
          uVar15 = 0;
          if (*(int *)(iVar5 + 0x368) != 0) {
            do {
              fn_827B36A8(iVar16,uVar15,
                            (longlong)(iVar3 + (int)lVar11 + (int)uVar15) *
                            (longlong)*(int *)(iVar13 + 0x14) + (ulonglong)*(uint *)(iVar13 + 0x18)
                            + uVar12 + lVar18,1);
              uVar15 = uVar15 + 1;
            } while ((uVar15 & 0xffffffff) < (ulonglong)*(uint *)(iVar5 + 0x368));
          }
          if ((*(byte *)((int)piVar1 + 7) & 0x20) != 0) {
            fn_827B5D20(iVar5,iVar13,uVar12,iVar3,uVar28,uVar27);
          }
          if ((*(byte *)(piVar1 + 2) != 0) || (*(char *)((int)piVar1 + 9) != '\0')) {
            if ((*(byte *)((int)piVar1 + 7) & 0x80) == 0) {
              fn_827B7110(iVar5,iVar13,uVar12,iVar3,uVar28,uVar27,uStack_108,iStack_110);
            }
            else {
              uStack_e8 = (ulonglong)*(byte *)((int)piVar1 + 9);
              fn_827B74F8((double)(float)((double)*(byte *)(piVar1 + 2) * dVar29),
                            (double)(float)((double)uStack_e8 * dVar29));
            }
          }
          if (*(byte *)((int)piVar1 + 10) != 0x10) {
            uStack_e8 = (ulonglong)(int)(uint)*(byte *)((int)piVar1 + 10);
            fn_827B5828(iVar5,iVar13,uVar12,iVar3,uVar28,uVar27);
          }
          if ((*(byte *)((int)piVar1 + 7) & 0x20) != 0) {
            fn_827B5E10(iVar5,iVar13,uVar12,iVar3,uVar28,uVar27);
          }
        }
      }
      else {
        uVar23 = 0;
        if (*(int *)(iVar6 + 0x18) != 0) {
          iVar16 = (((U64)(uStack_120) >> 0) & 0xFFFFFFFF) + (int)lVar11;
          do {
            fn_82F68CC0((longlong)(int)(iVar16 + uVar23) * (longlong)*(int *)(iVar13 + 0x14) +
                         (ulonglong)*(uint *)(iVar13 + 0x18) + uVar12 + lVar18,
                         (longlong)*(int *)(iVar6 + 0x14) * (longlong)(int)uVar23 +
                         (ulonglong)*(uint *)(iVar6 + 8));
            uVar23 = uVar23 + 1;
          } while (uVar23 < *(uint *)(iVar6 + 0x18));
        }
      }
      iStack_d0 = uVar7 + (int)uVar28;
      iStack_cc = iVar3 + (int)uVar27;
      uStack_d8 = uVar7;
      iStack_d4 = iVar3;
      uStack_e0 = (uint)*(ushort *)(iVar8 + 0x18);
      uStack_c8 = *(ushort *)(*(int *)(iVar8 + 0xc) + 0x20) & 0xffff3fff;
      uStack_dc = (uint)*(ushort *)(iVar8 + 0x1a);
      fn_827B8810(iVar5 + 0x1c,&uStack_e0);
      iVar6 = uStack_c8 * 0x14 + iVar5;
      *(int *)(iVar6 + 0x48) = *(int *)(iVar6 + 0x48) + 1;
      *(int *)(iVar5 + 0x79c) = *(int *)(iVar5 + 0x79c) + 1;
      goto LAB_827ba048;
    }
  }
LAB_827b9594:
  iVar8 = 0;
LAB_827ba048:
  fn_82F6A594(iVar8);
  return;
}

