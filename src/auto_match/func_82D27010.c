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
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_300;
extern unsigned int *auStack_364;
extern unsigned int *auStack_3b0;
extern unsigned int *auStack_3c0;
extern unsigned int *auStack_3d0;
extern unsigned int *auStack_3e0;
extern unsigned int *auStack_400;
extern unsigned int *auStack_420;
extern unsigned int *auStack_430;
extern unsigned int *auStack_448;
extern unsigned int *auStack_484;
extern unsigned int fStack_3f0;
extern unsigned int fStack_414;
extern unsigned int fStack_424;
extern unsigned int fStack_470;
extern int fn_82CE4F60();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDC88();
extern int fn_82CEE578();
extern int fn_82D1E718();
extern int fn_82D1EB20();
extern int fn_82D22578();
extern int fn_82D26480();
extern int fn_82D2B688();
extern int fn_82D2D320();
extern int fn_82D2D400();
extern int fn_82D34CA8();
extern int fn_82D34FF0();
extern int fn_82D36728();
extern int fn_82D38870();
extern unsigned int iStack00000014;
extern unsigned int iStack_3ec;
extern unsigned int iStack_45c;
extern unsigned int iStack_460;
extern unsigned int iStack_46c;
extern unsigned int iStack_480;
extern unsigned int iStack_490;
extern unsigned int iStack_494;
extern unsigned int iStack_4b0;
extern unsigned int lbl_82002D08;
extern unsigned int lbl_821347BC;
extern unsigned int lbl_82134820;
extern unsigned int lbl_82134860;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B1A0;
extern unsigned int *lbl_8323B464;
extern unsigned int lbl_8323B6BC;
extern unsigned int lbl_8323B6C0;
extern unsigned int lbl_8323B6C4;
extern unsigned int uStack_38c;
extern unsigned int uStack_390;
extern unsigned int uStack_450;
extern unsigned int uStack_454;
extern unsigned int uStack_458;
extern unsigned int uStack_464;
extern unsigned int uStack_488;
extern unsigned int uStack_48c;
extern unsigned int uStack_498;
extern unsigned int *uStack_49c;
extern unsigned int uStack_4a0;
extern unsigned int uStack_4a8;
extern unsigned int uStack_4ac;


void fn_82D27010(int param_1,int *param_2,int param_3)

{
  float *pfVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 in_r0;
  int iVar5;
  float fVar6;
  int iVar7;
  char cVar10;
  char *pcVar8;
  int iVar9;
  undefined8 uVar4;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  undefined4 *puVar23;
  int iVar24;
  int *piVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  int iStack00000014;
  int *piStack0000001c;
  int iStack_4b0;
  uint uStack_4ac;
  uint uStack_4a8;
  uint uStack_4a0;
  uint uStack_49c;
  uint uStack_498;
  int iStack_494;
  int iStack_490;
  uint uStack_48c;
  uint uStack_488;
  undefined1 auStack_484 [4];
  int iStack_480;
  float fStack_470;
  int iStack_46c;
  undefined4 uStack_464;
  int iStack_460;
  int iStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [12];
  float fStack_424;
  undefined1 auStack_420 [12];
  float fStack_414;
  undefined **appuStack_410 [4];
  undefined1 auStack_400 [16];
  float fStack_3f0;
  int iStack_3ec;
  undefined1 auStack_3e0 [16];
  undefined1 auStack_3d0 [16];
  undefined1 auStack_3c0 [16];
  undefined1 auStack_3b0 [32];
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined **appuStack_380 [7];
  undefined1 auStack_364 [100];
  undefined1 auStack_300 [80];
  undefined1 auStack_2b0 [688];
  
  iStack_490 = 0;
  uStack_48c = 0;
  uStack_488 = 0x80000000;
  iStack00000014 = param_1;
  piStack0000001c = param_2;
  fn_82D34FF0(appuStack_380);
  uStack_4a0 = 0;
  uStack_49c = 0;
  uStack_498 = 0x80000000;
  iStack_494 = 0;
  uVar11 = param_2[1];
  iVar5 = fn_82CE5410();
  if ((int)(uStack_488 & 0x3fffffff) < (int)uVar11) {
    uVar14 = ((ulonglong)uStack_488 & 0x3fffffff) << 1;
    if ((int)uVar14 <= (int)uVar11) {
      uVar14 = (ulonglong)uVar11;
    }
    fn_82CE6310(*(undefined4 *)(iVar5 + 0x10),&iStack_490,uVar14,4);
  }
  uVar14 = (ulonglong)uVar11 - (ulonglong)uStack_48c;
  if (0 < (longlong)uVar14) {
    puVar23 = (undefined4 *)(uStack_48c * 4 + iStack_490 + -4);
    uVar3 = uVar14 & 0xffffffff;
    while (uVar3 != 0) {
      puVar23 = puVar23 + 1;
      *puVar23 = 0;
      uVar14 = uVar14 - 1;
      uVar3 = uVar14;
    }
  }
  uVar14 = (ulonglong)uStack_49c;
  uStack_48c = uVar11;
  if (0 < (int)uStack_49c) {
    puVar23 = (undefined4 *)(uStack_4a0 - 4);
    do {
      iVar5 = fn_82CE5410();
      piVar15 = *(int **)(iVar5 + 0x10);
      puVar23[2] = 0;
      if ((puVar23[3] & 0x80000000) == 0) {
        (**(code **)(*piVar15 + 0x10))(piVar15,puVar23[1],puVar23[3] & 0x3fffffff,0x14);
      }
      puVar23[1] = 0;
      uVar14 = uVar14 - 1;
      puVar23 = puVar23 + 3;
      *puVar23 = 0x80000000;
    } while (uVar14 != 0);
  }
  uStack_49c = 0;
  iStack_494 = 0;
  iVar5 = fn_82CE5410();
  if ((uStack_498 & 0x3fffffff) < 0x2000) {
    uVar11 = (uStack_498 & 0x3fffffff) << 1;
    if (uVar11 < 0x2001) {
      uVar11 = 0x2000;
    }
    fn_82CE6310(*(undefined4 *)(iVar5 + 0x10),&uStack_4a0,uVar11,0xc);
  }
  uVar14 = (ulonglong)uStack_49c;
  lVar22 = uVar14 - 0x2000;
  if (0 < lVar22) {
    puVar23 = (undefined4 *)(uStack_4a0 + 0x17ffc);
    do {
      iVar5 = fn_82CE5410();
      piVar15 = *(int **)(iVar5 + 0x10);
      puVar23[2] = 0;
      if ((puVar23[3] & 0x80000000) == 0) {
        (**(code **)(*piVar15 + 0x10))(piVar15,puVar23[1],puVar23[3] & 0x3fffffff,0x14);
      }
      puVar23[1] = 0;
      lVar22 = lVar22 + -1;
      puVar23 = puVar23 + 3;
      *puVar23 = 0x80000000;
    } while (lVar22 != 0);
    uVar14 = (ulonglong)uStack_49c;
  }
  piVar15 = piStack0000001c;
  iVar5 = iStack00000014;
  lVar22 = 0x2000 - uVar14;
  uVar14 = (uVar14 + (uVar14 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + (ulonglong)uStack_4a0;
  if (0 < (int)lVar22) {
    do {
      if ((uVar14 & 0xffffffff) != 0) {
        puVar23 = (undefined4 *)uVar14;
        *puVar23 = 0;
        puVar23[1] = 0;
        puVar23[2] = 0x80000000;
      }
      uVar14 = uVar14 + 0xc;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  iVar9 = 0;
  uStack_49c = 0x2000;
  do {
    iVar24 = iVar9 + uStack_4a0;
    iVar9 = iVar9 + 0xc;
    *(undefined4 *)(iVar24 + 4) = 0;
  } while (iVar9 < 0x18000);
  uVar14 = (ulonglong)(uint)piStack0000001c[1];
  if (0 < piStack0000001c[1]) {
    dVar26 = (double)lbl_821AAD20;
    iVar24 = 0;
    iVar9 = 0;
    do {
      iVar21 = (int)in_r0;
      pfVar1 = (float *)(iVar21 + param_3 & 0xfffffff0);
      fVar27 = *pfVar1;
      fVar28 = pfVar1[1];
      fVar30 = pfVar1[2];
      fVar32 = pfVar1[3];
      fStack_470 = *(float *)(iVar5 + 0x7dc);
      fStack_3f0 = fStack_470 * fStack_470;
      pfVar1 = (float *)(iVar9 + *piVar15 & 0xfffffff0);
      appuStack_410[0] = &lbl_82134860;
      fVar6 = *pfVar1 * fVar27;
      fVar42 = pfVar1[1] * fVar28;
      fVar43 = pfVar1[2] * fVar30;
      fVar44 = pfVar1[3] * fVar32;
      iStack_3ec = 0;
      pfVar1 = (float *)((uint)(auStack_400 + iVar21) & 0xfffffff0);
      *pfVar1 = fVar6;
      pfVar1[1] = fVar42;
      pfVar1[2] = fVar43;
      pfVar1[3] = fVar44;
      pfVar1 = (float *)((int)&fStack_470 + iVar21 & 0xfffffff0);
      *pfVar1 = fVar27;
      pfVar1[1] = fVar28;
      pfVar1[2] = fVar30;
      pfVar1[3] = fVar32;
      pfVar1 = (float *)((uint)(auStack_430 + iVar21) & 0xfffffff0);
      *pfVar1 = fVar6 - fVar27;
      pfVar1[1] = fVar42 - fVar28;
      pfVar1[2] = fVar43 - fVar30;
      pfVar1[3] = fVar44 - fVar32;
      fStack_424 = (float)dVar26;
      pfVar1 = (float *)((uint)(auStack_420 + iVar21) & 0xfffffff0);
      *pfVar1 = fVar6 + fVar27;
      pfVar1[1] = fVar42 + fVar28;
      pfVar1[2] = fVar43 + fVar30;
      pfVar1[3] = fVar44 + fVar32;
      fStack_414 = (float)dVar26;
      fn_82D38870(appuStack_380,auStack_430,appuStack_410);
      if (iStack_3ec == 0) {
        uStack_390 = 0xffffffff;
        uStack_38c = 0xffffffff;
        uVar4 = fn_82D2D320(iVar5 + 8,auStack_3d0);
        iVar21 = (int)uVar4;
        pfVar1 = (float *)(iVar21 + 0x10U & 0xfffffff0);
        *pfVar1 = fVar6;
        pfVar1[1] = fVar42;
        pfVar1[2] = fVar43;
        pfVar1[3] = fVar44;
        puVar23 = (undefined4 *)((uint)(&lbl_8323B1A0 + (int)in_r0) & 0xfffffff0);
        uVar29 = puVar23[1];
        uVar31 = puVar23[2];
        uVar33 = puVar23[3];
        puVar18 = (undefined4 *)(iVar21 + 0x30U & 0xfffffff0);
        *puVar18 = *puVar23;
        puVar18[1] = uVar29;
        puVar18[2] = uVar31;
        puVar18[3] = uVar33;
        *(int *)(iVar24 + iStack_490) = iVar21;
        fn_82D36728(appuStack_380,auStack_430,uVar4);
      }
      else {
        *(int *)(iVar24 + iStack_490) = iStack_3ec;
      }
      uVar14 = uVar14 - 1;
      appuStack_410[0] = &lbl_821347BC;
      iVar9 = iVar9 + 0x10;
      iVar24 = iVar24 + 4;
    } while (uVar14 != 0);
  }
  iStack_480 = 0;
  if (0 < piVar15[4]) {
    iVar9 = 0;
    iVar5 = iStack_490;
    do {
      iVar7 = iStack00000014;
      piVar15 = (int *)(iVar9 + piStack0000001c[3]);
      iVar24 = *(int *)(*piVar15 * 4 + iVar5);
      iVar21 = *(int *)(piVar15[1] * 4 + iVar5);
      iVar19 = *(int *)(piVar15[2] * 4 + iVar5);
      if (((iVar24 != iVar21) && (iVar21 != iVar19)) && (iVar19 != iVar24)) {
        puVar23 = (undefined4 *)(iVar24 + 0x10U & 0xfffffff0);
        uVar29 = puVar23[1];
        uVar31 = puVar23[2];
        uVar33 = puVar23[3];
        puVar18 = (undefined4 *)(iVar21 + 0x10U & 0xfffffff0);
        uVar38 = *puVar18;
        uVar39 = puVar18[1];
        uVar40 = puVar18[2];
        uVar41 = puVar18[3];
        puVar18 = (undefined4 *)(iVar19 + 0x10U & 0xfffffff0);
        uVar34 = *puVar18;
        uVar35 = puVar18[1];
        uVar36 = puVar18[2];
        uVar37 = puVar18[3];
        iVar5 = (int)in_r0;
        puVar18 = (undefined4 *)((uint)(auStack_3d0 + iVar5) & 0xfffffff0);
        *puVar18 = *puVar23;
        puVar18[1] = uVar29;
        puVar18[2] = uVar31;
        puVar18[3] = uVar33;
        puVar23 = (undefined4 *)((uint)(auStack_3c0 + iVar5) & 0xfffffff0);
        *puVar23 = uVar38;
        puVar23[1] = uVar39;
        puVar23[2] = uVar40;
        puVar23[3] = uVar41;
        puVar23 = (undefined4 *)((uint)(auStack_3b0 + iVar5) & 0xfffffff0);
        *puVar23 = uVar34;
        puVar23[1] = uVar35;
        puVar23[2] = uVar36;
        puVar23[3] = uVar37;
        fVar6 = (float)fn_82D2D400(iStack00000014 + 0x20,auStack_300);
        *(undefined4 *)((int)fVar6 + 0x30) = 0xffffffff;
        *(undefined4 *)((int)fVar6 + 0x14) = 0;
        *(undefined4 *)((int)fVar6 + 0x18) = 0;
        *(undefined4 *)((int)fVar6 + 0x1c) = 0;
        piVar15 = (int *)((int)fVar6 + 8);
        *(undefined4 *)((int)fVar6 + 0x38) = *(undefined4 *)(iVar9 + piStack0000001c[3] + 0xc);
        *(int *)((int)fVar6 + 8) = iVar24;
        *(int *)((int)fVar6 + 0xc) = iVar21;
        *(int *)((int)fVar6 + 0x10) = iVar19;
        fn_82D1EB20(iVar7,auStack_3d0,auStack_3c0,auStack_3b0,(int)fVar6 + 0x20,1);
        uStack_458 = 0;
        uStack_454 = 0;
        uStack_450 = 0;
        iVar24 = 8;
        iVar21 = 2;
        iVar19 = 0;
        iVar7 = iStack00000014;
        do {
          iVar5 = *piVar15;
          iVar20 = *(int *)(iVar24 + 8 + (int)fVar6);
          iVar13 = iVar5;
          iVar16 = iVar20;
          if (iVar5 < iVar20) {
            iVar13 = iVar20;
            iVar16 = iVar5;
          }
          iVar12 = 0;
          trapWord(6,(ulonglong)uStack_49c,0);
          uVar11 = (iVar16 * 0x2b743e5 ^ iVar13 * 0x5b23451) % 0x54e9d7;
          piVar25 = (int *)((uVar11 - (uVar11 / uStack_49c) * uStack_49c) * 0xc + uStack_4a0);
          iVar13 = piVar25[1];
          iStack_460 = iVar20;
          iStack_45c = iVar5;
          if (0 < iVar13) {
            piVar25 = (int *)*piVar25;
            piVar17 = piVar25;
            do {
              if (((iVar20 == *piVar17) && (iVar5 == piVar17[1])) ||
                 ((iVar20 == piVar17[1] && (iVar5 == *piVar17)))) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (bVar2) {
                if ((iVar12 != -1) && (piVar25 = piVar25 + iVar12 * 5, piVar25 != (int *)0x0))
                goto LAB_82d276c4;
                break;
              }
              iVar12 = iVar12 + 1;
              piVar17 = piVar17 + 5;
            } while (iVar12 < iVar13);
          }
          iVar7 = iVar20;
          iVar13 = iVar5;
          if (iVar5 < iVar20) {
            iVar7 = iVar5;
            iVar13 = iVar20;
          }
          uVar11 = iVar7 * 0x2b743e5 ^ iVar13 * 0x5b23451;
          iStack_494 = iStack_494 + 1;
          trapWord(6,(ulonglong)uStack_49c,0);
          piVar25 = (int *)(((int)uVar11 % 0x54e9d7 -
                            (int)((((longlong)iVar7 * 0x2b743e5 ^ (longlong)iVar13 * 0x5b23451) +
                                   (longlong)((int)uVar11 / 0x54e9d7) * -0x54e9d7 & 0xffffffffU) /
                                 (ulonglong)uStack_49c) * uStack_49c) * 0xc + uStack_4a0);
          iVar7 = fn_82CE5410();
          if (piVar25[1] == (piVar25[2] & 0x3fffffffU)) {
            fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),piVar25,0x14);
          }
          puVar23 = (undefined4 *)(piVar25[1] * 0x14 + *piVar25);
          if (puVar23 != (undefined4 *)0x0) {
            *puVar23 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            puVar23[4] = 0;
          }
          iVar7 = piVar25[1];
          piVar25[1] = iVar7 + 1;
          puVar23 = &uStack_464;
          lVar22 = 5;
          puVar18 = (undefined4 *)(iVar7 * 0x14 + *piVar25 + -4);
          do {
            puVar23 = puVar23 + 1;
            puVar18 = puVar18 + 1;
            *puVar18 = *puVar23;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          piVar25 = (int *)(piVar25[1] * 0x14 + *piVar25 + -0x14);
          iVar7 = iStack00000014;
LAB_82d276c4:
          iVar13 = piVar25[4] + 1;
          piVar25[4] = iVar13;
          if (iVar13 == 1) {
            *(ulonglong *)(piVar25 + 2) = CONCAT44(fVar6,iVar21);
            fStack_470 = fVar6;
            iStack_46c = iVar21;
          }
          else if (((iVar13 == 2) && (iVar20 == piVar25[1])) && (iVar5 == *piVar25)) {
            piVar17 = piVar25 + 2;
            *(int *)(iVar24 + 0x14 + (int)fVar6) = *piVar17 + piVar25[3];
            if (*piVar17 != 0) {
              *(int *)((piVar25[3] + 5) * 4 + *piVar17) = iVar21 + (int)fVar6;
            }
            if ((lbl_8323B6C4 & 1) == 0) {
              lbl_8323B6C4 = lbl_8323B6C4 | 1;
              lbl_8323B6BC = 0;
              lbl_8323B6C0 = 0;
            }
            *(ulonglong *)piVar17 = CONCAT44(lbl_8323B6BC,lbl_8323B6C0);
          }
          else {
            *(undefined1 *)(iVar7 + 2000) = 1;
          }
          iVar24 = iVar19 << 2;
          iVar20 = iVar19 + 1;
          piVar15 = piVar15 + 1;
          iVar21 = iVar19;
          iVar19 = iVar20;
          iVar5 = iStack_490;
        } while (iVar20 < 3);
      }
      iVar9 = iVar9 + 0x10;
      iStack_480 = iStack_480 + 1;
    } while (iStack_480 < piStack0000001c[4]);
  }
  iVar5 = iStack00000014;
  iStack_4b0 = 0;
  uStack_4ac = 0;
  uStack_4a8 = 0x80000000;
  piVar15 = *(int **)(iStack00000014 + 0x2c);
  if (piVar15 != (int *)0x0) {
    dVar26 = (double)lbl_82002D08;
    do {
      cVar10 = fn_82D1EB20(iVar5,(ulonglong)(uint)piVar15[2] + 0x10,
                            (ulonglong)(uint)piVar15[3] + 0x10,(ulonglong)(uint)piVar15[4] + 0x10,
                            auStack_3e0,1);
      if ((cVar10 == '\0') ||
         (pcVar8 = (char *)fn_82CE4F60(dVar26,auStack_484,auStack_3e0), *pcVar8 == '\0')) {
        iVar9 = fn_82CE5410();
        if (uStack_4ac == (uStack_4a8 & 0x3fffffff)) {
          fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),&iStack_4b0,4);
        }
        *(int **)(uStack_4ac * 4 + iStack_4b0) = piVar15;
        uStack_4ac = uStack_4ac + 1;
      }
      piVar15 = (int *)*piVar15;
    } while (piVar15 != (int *)0x0);
    if (uStack_4ac != 0) {
      fn_82CEE578(auStack_448,auStack_2b0,0x200);
      uVar11 = uStack_4ac;
      uVar4 = fn_82CEDB38(auStack_448,0xffffffff82134b18);
      uVar4 = fn_82CEDC88(uVar4,uVar11);
      fn_82CEDB38(uVar4,0xffffffff82134b04);
      (**(code **)(*lbl_8323B464 + 0xc))
                (lbl_8323B464,0,0xffffffffffffffff,auStack_2b0,0xffffffff8213492c,0x5a3);
      fn_82CED958(auStack_448);
    }
  }
  iVar5 = iStack00000014;
  iVar9 = 0;
  if (0 < (int)uStack_4ac) {
    iVar24 = 0;
    do {
      iVar21 = *(int *)(iVar24 + iStack_4b0);
      uVar11 = *(uint *)(iVar21 + 0x14);
      if ((uVar11 & 0xfffffffc) != 0) {
        *(undefined4 *)(((uVar11 & 3) + 5) * 4 + (uVar11 & 0xfffffffc)) = 0;
      }
      *(undefined4 *)(iVar21 + 0x14) = 0;
      iVar21 = *(int *)(iVar24 + iStack_4b0);
      uVar11 = *(uint *)(iVar21 + 0x18);
      if ((uVar11 & 0xfffffffc) != 0) {
        *(undefined4 *)(((uVar11 & 3) + 5) * 4 + (uVar11 & 0xfffffffc)) = 0;
      }
      *(undefined4 *)(iVar21 + 0x18) = 0;
      iVar21 = *(int *)(iVar24 + iStack_4b0);
      uVar11 = *(uint *)(iVar21 + 0x1c);
      if ((uVar11 & 0xfffffffc) != 0) {
        *(undefined4 *)(((uVar11 & 3) + 5) * 4 + (uVar11 & 0xfffffffc)) = 0;
      }
      *(undefined4 *)(iVar21 + 0x1c) = 0;
      iVar9 = iVar9 + 1;
      iVar24 = iVar24 + 4;
    } while (iVar9 < (int)uStack_4ac);
  }
  iVar9 = 0;
  if (0 < (int)uStack_4ac) {
    iVar21 = 0;
    iVar24 = iStack00000014 + 0x20;
    do {
      iVar19 = **(int **)(iVar21 + iStack_4b0);
      piVar15 = (int *)(*(int **)(iVar21 + iStack_4b0))[1];
      if (iVar19 != 0) {
        *(int **)(iVar19 + 4) = piVar15;
      }
      if (piVar15 == (int *)0x0) {
        *(int *)(iVar5 + 0x2c) = iVar19;
      }
      else {
        *piVar15 = iVar19;
      }
      *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + -1;
      fn_82D2B688(iVar24);
      iVar9 = iVar9 + 1;
      iVar21 = iVar21 + 4;
    } while (iVar9 < (int)uStack_4ac);
  }
  iVar5 = iStack00000014;
  fn_82D22578(iStack00000014);
  fn_82D26480(iVar5,0x70e);
  puVar23 = *(undefined4 **)(iVar5 + 0x7b8);
  if (puVar23 != (undefined4 *)0x0) {
    (**(code **)*puVar23)(puVar23,1);
  }
  *(undefined4 *)(iVar5 + 0x7b8) = 0;
  iVar5 = fn_82CE5410();
  uStack_4ac = 0;
  if ((uStack_4a8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),iStack_4b0,uStack_4a8 & 0x3fffffff,4);
  }
  iStack_4b0 = 0;
  uStack_4a8 = 0x80000000;
  iVar5 = fn_82CE5410();
  uVar14 = (ulonglong)uStack_49c;
  piVar15 = *(int **)(iVar5 + 0x10);
  if (0 < (int)uStack_49c) {
    puVar23 = (undefined4 *)(uStack_4a0 - 4);
    do {
      iVar5 = fn_82CE5410();
      piVar25 = *(int **)(iVar5 + 0x10);
      puVar23[2] = 0;
      if ((puVar23[3] & 0x80000000) == 0) {
        (**(code **)(*piVar25 + 0x10))(piVar25,puVar23[1],puVar23[3] & 0x3fffffff,0x14);
      }
      puVar23[1] = 0;
      uVar14 = uVar14 - 1;
      puVar23 = puVar23 + 3;
      *puVar23 = 0x80000000;
    } while (uVar14 != 0);
  }
  uStack_49c = 0;
  if ((uStack_498 & 0x80000000) == 0) {
    (**(code **)(*piVar15 + 0x10))(piVar15,uStack_4a0,uStack_498 & 0x3fffffff,0xc);
  }
  uStack_4a0 = 0;
  uStack_498 = 0x80000000;
  appuStack_380[0] = &lbl_82134820;
  fn_82D34CA8(appuStack_380);
  fn_82D1E718(auStack_364);
  iVar5 = fn_82CE5410();
  uStack_48c = 0;
  if ((uStack_488 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),iStack_490,uStack_488 & 0x3fffffff,4);
  }
  return;
}

