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
extern int iRam83189f60;
extern int iRam83189f64;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int lbl_8215F7C0;
extern unsigned int lbl_8215F7E0;
extern unsigned int lbl_8215F808;
extern unsigned int lbl_82162860;
extern unsigned int lbl_82162874;
extern unsigned int uRam83189f4c;
extern unsigned int uRam83189f50;
extern unsigned int uRam83189f54;
extern unsigned int uRam83189f58;
extern unsigned int uRam83189f5c;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int *uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;


longlong fn_82E9B280(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  byte *pbVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  char *pcVar30;
  int iVar31;
  ulonglong uVar32;
  char cVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  longlong lVar40;
  ulonglong uVar41;
  int iVar42;
  int iVar43;
  longlong lVar44;
  int iVar45;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  
  iVar43 = *(int *)(param_1 + 0x1a88);
  uVar32 = (ulonglong)*(uint *)(param_1 + 0x2d8);
  lVar40 = 0;
  uVar17 = 0;
  iVar27 = 0;
  uVar34 = (ulonglong)uRam83189f54 + 1;
  uVar41 = (ulonglong)uRam83189f58 + 1;
  uVar36 = (ulonglong)uRam83189f5c + 1;
  uVar35 = uVar32 + uRam83189f4c;
  uVar15 = (ulonglong)uRam83189f50 + 1;
  uVar22 = iRam83189f60 + 1;
  uVar18 = *(uint *)(param_1 + 0x1a8c);
  uVar29 = (ulonglong)uVar18;
  uVar24 = iRam83189f64 + 1;
  uStack_f8 = (uint)uVar41;
  lVar44 = uVar32 + uVar29;
  uStack_f4 = (uint)uVar36;
  uStack_ec = (uint)uVar35;
  if (0 < (int)*(uint *)(param_1 + 0x2d8)) {
    uVar25 = uVar29;
    do {
      cVar2 = ((char *)uVar25)[iVar43 - uVar18];
      if (((cVar2 == '\x01') || (cVar2 == '\x05')) || (cVar33 = '\0', cVar2 == '\x06')) {
        cVar33 = '\x01';
      }
      iVar27 = iVar27 + 1;
      *(char *)uVar25 = cVar33;
      uVar32 = (ulonglong)*(uint *)(param_1 + 0x2d8);
      uVar25 = uVar25 + 1;
      uVar17 = (longlong)cVar33 + uVar17;
    } while (iVar27 < (int)*(uint *)(param_1 + 0x2d8));
  }
  uVar17 = (uVar17 & 0x7fffffff) << 1;
  lVar20 = 0;
  uVar17 = ((~(uVar17 ^ uVar32) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar17 <= uVar32) & 1;
  if (0 < *(int *)(param_1 + 0x2d4)) {
    iVar43 = *(int *)(param_1 + 0x2d0);
    lVar44 = lVar44 + -1;
    do {
      lVar26 = 0;
      if (0 < iVar43) {
        do {
          pcVar30 = (char *)uVar29;
          if (lVar26 + lVar20 == 0) {
LAB_82e9b3f4:
            uVar32 = uVar17;
          }
          else if ((int)lVar20 == 0) {
            uVar32 = (longlong)pcVar30[-1];
          }
          else if ((int)lVar26 == 0) {
            uVar32 = (longlong)pcVar30[-iVar43];
          }
          else {
            uVar32 = (longlong)pcVar30[-1];
            if (pcVar30[-1] != pcVar30[-iVar43]) goto LAB_82e9b3f4;
          }
          lVar26 = lVar26 + 1;
          uVar29 = uVar29 + 1;
          lVar44 = lVar44 + 1;
          *(char *)lVar44 = '\x01' - ((longlong)*pcVar30 == uVar32);
          iVar43 = *(int *)(param_1 + 0x2d0);
        } while ((int)lVar26 < iVar43);
      }
      lVar20 = lVar20 + 1;
    } while ((int)lVar20 < *(int *)(param_1 + 0x2d4));
  }
  iVar31 = (int)uVar29;
  uStack_f0 = *(uint *)(param_1 + 0x2d8);
  iVar27 = 0;
  iVar43 = iVar31 - uStack_f0;
  if (0 < (int)uStack_f0) {
    do {
      pbVar23 = (byte *)(iVar27 + iVar43);
      iVar27 = iVar27 + 1;
      *pbVar23 = (byte)uVar17 ^ *pbVar23;
      uStack_f0 = *(uint *)(param_1 + 0x2d8);
    } while (iVar27 < (int)uStack_f0);
  }
  uVar32 = (ulonglong)uStack_f0 & 1;
  iVar27 = (int)uVar32;
  if ((uStack_f0 & 1) != 0) {
    uVar34 = 2;
    uVar15 = 2;
  }
  lVar20 = 0;
  lVar44 = 0;
  lVar26 = 0;
  if (iVar27 < (int)uStack_f0) {
    uVar18 = (uStack_f0 - iVar27) + 1;
    if (1 < (int)(((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0))) {
      lVar21 = uVar32 + uVar29;
      do {
        iVar16 = (int)uVar32;
        pcVar30 = (char *)lVar21;
        uVar32 = uVar32 + 4;
        lVar21 = lVar21 + 4;
        lVar26 = (ulonglong)
                 *(uint *)(&lbl_82162860 +
                          ((int)*(char *)(iVar43 + 1 + iVar16) + (int)pcVar30[iVar43 - iVar31]) * 4)
                 + lVar26;
        iVar27 = (int)uVar32;
        lVar20 = (ulonglong)
                 *(uint *)(&lbl_82162860 + ((int)*(char *)(iVar31 + 1 + iVar16) + (int)*pcVar30) * 4
                          ) + lVar20;
        lVar40 = (ulonglong)
                 *(uint *)(&lbl_82162860 +
                          ((int)*(char *)(iVar43 + 2 + iVar16) + (int)*(char *)(iVar43 + 3 + iVar16)
                          ) * 4) + lVar40;
        lVar44 = (ulonglong)
                 *(uint *)(&lbl_82162860 +
                          ((int)*(char *)(iVar31 + 2 + iVar16) + (int)*(char *)(iVar31 + 3 + iVar16)
                          ) * 4) + lVar44;
      } while (iVar27 < (int)(uStack_f0 - 2));
    }
    if (iVar27 < (int)uStack_f0) {
      uVar15 = *(uint *)(&lbl_82162860 +
                        ((int)((char *)(iVar27 + iVar43))[1] + (int)*(char *)(iVar27 + iVar43)) * 4)
               + uVar15;
      uVar34 = *(uint *)(&lbl_82162860 +
                        ((int)*(char *)(iVar27 + iVar31 + 1) + (int)*(char *)(iVar27 + iVar31)) * 4)
               + uVar34;
    }
    uVar41 = uVar41 & 0xffffffff;
    uVar36 = uVar36 & 0xffffffff;
    uVar34 = lVar20 + lVar44 + uVar34;
    uVar35 = uVar35 & 0xffffffff;
    uVar15 = lVar26 + lVar40 + uVar15;
  }
  uVar18 = (uint)uVar15;
  bVar1 = (int)uVar18 < (int)uVar35;
  if (bVar1) {
    uVar35 = uVar15;
    uStack_ec = uVar18;
  }
  uStack_d8 = (uint)bVar1;
  if ((int)(uint)uVar34 < (int)uVar35) {
    uStack_d8 = 2;
    uVar35 = uVar34;
    uStack_ec = (uint)uVar34;
  }
  iVar27 = (int)uVar35;
  uVar18 = *(uint *)(param_1 + 0x2d4);
  uVar28 = 0;
  if ((ulonglong)uVar18 % 3 == 0) {
    uVar3 = *(uint *)(param_1 + 0x2d0);
    uVar29 = (ulonglong)uVar3;
    uVar15 = uVar29 % 3;
    uStack_dc = (uint)uVar15;
    if (uVar15 == 0) goto LAB_82e9b9a8;
    uVar32 = (ulonglong)uVar3 & 1;
    iVar16 = (int)uVar32;
    iVar38 = 0;
    if ((int)uVar18 < 1) goto LAB_82e9bd3c;
    do {
      iVar37 = 0;
      iVar27 = 0;
      iVar42 = 0;
      iVar39 = 0;
      if (iVar16 < (int)uVar3) {
        uVar28 = (uVar3 - iVar16) + 1;
        iVar45 = iVar16;
        if (1 < (int)(((int)uVar28 >> 1) + (uint)((int)uVar28 < 0 && (uVar28 & 1) != 0))) {
          iVar6 = iVar43 + 1;
          iVar5 = iVar31 + 1;
          iVar4 = *(int *)(param_1 + 0x2d0);
          uVar36 = uVar32;
          do {
            iVar14 = iVar4 * iVar38 + (int)uVar36;
            iVar45 = iVar4 + iVar14;
            iVar7 = iVar14 + 2;
            iVar8 = iVar4 + iVar45;
            iVar9 = iVar4 + iVar7;
            iVar10 = iVar4 + iVar9;
            iVar37 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar5 + iVar8) + (int)*(char *)(iVar8 + iVar31) +
                             (int)*(char *)(iVar5 + iVar45) + (int)*(char *)(iVar45 + iVar31) +
                             (int)*(char *)(iVar5 + iVar14) + (int)*(char *)(iVar14 + iVar31)) * 4)
                     + iVar37;
            uVar36 = uVar36 + 4;
            iVar42 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar6 + iVar8) + (int)*(char *)(iVar8 + iVar43) +
                             (int)*(char *)(iVar6 + iVar45) + (int)*(char *)(iVar45 + iVar43) +
                             (int)*(char *)(iVar6 + iVar14) + (int)*(char *)(iVar14 + iVar43)) * 4)
                     + iVar42;
            iVar45 = (int)uVar36;
            iVar39 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar6 + iVar10) + (int)*(char *)(iVar10 + iVar43) +
                             (int)*(char *)(iVar6 + iVar9) + (int)*(char *)(iVar9 + iVar43) +
                             (int)*(char *)(iVar6 + iVar7) + (int)*(char *)(iVar7 + iVar43)) * 4) +
                     iVar39;
            iVar27 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar5 + iVar10) + (int)*(char *)(iVar10 + iVar31) +
                             (int)*(char *)(iVar5 + iVar9) + (int)*(char *)(iVar9 + iVar31) +
                             (int)*(char *)(iVar5 + iVar7) + (int)*(char *)(iVar7 + iVar31)) * 4) +
                     iVar27;
          } while (iVar45 < (int)(uVar3 - 2));
        }
        if (iVar45 < (int)uVar3) {
          iVar5 = iVar31 + 1;
          iVar6 = iVar43 + 1;
          iVar4 = *(int *)(param_1 + 0x2d0);
          iVar45 = iVar4 * iVar38 + iVar45;
          iVar7 = iVar4 + iVar45;
          iVar4 = iVar4 + iVar7;
          uStack_f8 = *(int *)(&lbl_8215F808 +
                              ((int)*(char *)(iVar6 + iVar4) + (int)*(char *)(iVar4 + iVar43) +
                              (int)*(char *)(iVar6 + iVar7) + (int)*(char *)(iVar7 + iVar43) +
                              (int)*(char *)(iVar6 + iVar45) + (int)*(char *)(iVar45 + iVar43)) * 4)
                      + uStack_f8;
          uStack_f4 = *(int *)(&lbl_8215F808 +
                              ((int)*(char *)(iVar5 + iVar4) + (int)*(char *)(iVar4 + iVar31) +
                              (int)*(char *)(iVar5 + iVar7) + (int)*(char *)(iVar7 + iVar31) +
                              (int)*(char *)(iVar5 + iVar45) + (int)*(char *)(iVar45 + iVar31)) * 4)
                      + uStack_f4;
        }
        uVar35 = (ulonglong)uStack_ec;
        uStack_f4 = iVar27 + iVar37 + uStack_f4;
        uStack_f8 = iVar39 + iVar42 + uStack_f8;
        uVar36 = (ulonglong)uStack_f4;
        uVar41 = (ulonglong)uStack_f8;
      }
      uVar28 = 0;
      iVar27 = (int)uVar35;
      iVar38 = iVar38 + 3;
    } while (iVar38 < (int)uVar18);
  }
  else {
LAB_82e9b9a8:
    uVar3 = *(uint *)(param_1 + 0x2d0);
    uVar29 = (ulonglong)uVar3;
    uVar28 = uVar18 & 1;
    uVar32 = uVar29 % 3;
    uStack_dc = (uint)uVar32;
    uVar15 = uVar32;
    uStack_e0 = uVar28;
    if ((int)uVar18 <= (int)uVar28) goto LAB_82e9bd3c;
    do {
      iVar16 = 0;
      iVar39 = 0;
      iVar38 = 0;
      iStack_d4 = 0;
      iStack_cc = 0;
      iVar27 = 0;
      iStack_d0 = 0;
      if ((int)uStack_dc < (int)uVar3) {
        uVar19 = uStack_dc;
        if (1 < (int)((uVar3 - uStack_dc) + 2) / 3) {
          iVar45 = iVar43 + 2;
          iVar42 = iVar43 + 1;
          iVar5 = iVar31 + 2;
          iVar4 = iVar31 + 1;
          iVar37 = *(int *)(param_1 + 0x2d0);
          uVar36 = uVar32;
          do {
            iVar8 = iVar37 * uStack_e0 + (int)uVar36;
            iVar39 = iVar37 + iVar8;
            iVar6 = iVar8 + 3;
            iVar7 = iVar37 + iVar6;
            iVar16 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar4 + iVar39) + (int)*(char *)(iVar5 + iVar39) +
                              (int)*(char *)(iVar39 + iVar31) +
                             (int)*(char *)(iVar4 + iVar8) + (int)*(char *)(iVar5 + iVar8) +
                             (int)*(char *)(iVar8 + iVar31)) * 4) + iStack_d4;
            iVar38 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar42 + iVar7) + (int)*(char *)(iVar45 + iVar7) +
                              (int)*(char *)(iVar7 + iVar43) +
                             (int)*(char *)(iVar42 + iVar6) + (int)*(char *)(iVar45 + iVar6) +
                             (int)*(char *)(iVar6 + iVar43)) * 4) + iStack_d0;
            uVar36 = uVar36 + 6;
            iVar27 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar42 + iVar39) + (int)*(char *)(iVar45 + iVar39) +
                              (int)*(char *)(iVar39 + iVar43) +
                             (int)*(char *)(iVar42 + iVar8) + (int)*(char *)(iVar45 + iVar8) +
                             (int)*(char *)(iVar8 + iVar43)) * 4) + iVar27;
            uVar19 = (uint)uVar36;
            iVar39 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar4 + iVar7) + (int)*(char *)(iVar5 + iVar7) +
                              (int)*(char *)(iVar7 + iVar31) +
                             (int)*(char *)(iVar4 + iVar6) + (int)*(char *)(iVar5 + iVar6) +
                             (int)*(char *)(iVar6 + iVar31)) * 4) + iStack_cc;
            iStack_d4 = iVar16;
            iStack_d0 = iVar38;
            iStack_cc = iVar39;
          } while ((int)uVar19 < (int)(uVar3 - 3));
        }
        if ((int)uVar19 < (int)uVar3) {
          iVar37 = *(int *)(param_1 + 0x2d0) * uStack_e0 + uVar19;
          iVar42 = *(int *)(param_1 + 0x2d0) + iVar37;
          uStack_f8 = *(int *)(&lbl_8215F808 +
                              ((int)*(char *)(iVar43 + 1 + iVar42) +
                               (int)*(char *)(iVar43 + 2 + iVar42) + (int)*(char *)(iVar42 + iVar43)
                              + (int)*(char *)(iVar43 + 1 + iVar37) +
                                (int)*(char *)(iVar43 + 2 + iVar37) +
                                (int)*(char *)(iVar37 + iVar43)) * 4) + uStack_f8;
          uStack_f4 = *(int *)(&lbl_8215F808 +
                              ((int)*(char *)(iVar31 + 1 + iVar42) +
                               (int)*(char *)(iVar31 + 2 + iVar42) + (int)*(char *)(iVar42 + iVar31)
                              + (int)*(char *)(iVar31 + 1 + iVar37) +
                                (int)*(char *)(iVar31 + 2 + iVar37) +
                                (int)*(char *)(iVar37 + iVar31)) * 4) + uStack_f4;
        }
        uVar35 = (ulonglong)uStack_ec;
        uStack_f4 = iVar39 + iVar16 + uStack_f4;
        uStack_f8 = iVar38 + iVar27 + uStack_f8;
        uVar36 = (ulonglong)uStack_f4;
        uVar41 = (ulonglong)uStack_f8;
      }
      uVar29 = (ulonglong)uVar3;
      iVar27 = (int)uVar35;
      uStack_e0 = uStack_e0 + 2;
    } while ((int)uStack_e0 < (int)uVar18);
  }
  uVar15 = (ulonglong)uStack_dc;
LAB_82e9bd3c:
  uVar35 = (ulonglong)uVar18;
  iVar42 = (int)uVar41;
  iVar37 = (int)uVar36;
  iVar38 = 0;
  iVar16 = (int)uVar32;
  iVar39 = (int)uVar29;
  if (iVar16 != 0) {
    do {
      iVar37 = 0;
      if (0 < (int)uVar18) {
        do {
          if (*(char *)(iVar39 * iVar37 + iVar38 + iVar43) != '\0') {
            uVar41 = uVar35 + uVar41;
            break;
          }
          iVar37 = iVar37 + 1;
        } while (iVar37 < (int)uVar18);
      }
      iVar37 = 0;
      if (0 < (int)uVar18) {
        do {
          if (*(char *)(iVar39 * iVar37 + iVar38 + iVar31) != '\0') {
            uVar36 = uVar35 + uVar36;
            break;
          }
          iVar37 = iVar37 + 1;
        } while (iVar37 < (int)uVar18);
      }
      iVar38 = iVar38 + 1;
      uVar41 = uVar41 + 1;
      iVar42 = (int)uVar41;
      uVar36 = uVar36 + 1;
      iVar37 = (int)uVar36;
    } while (iVar38 < iVar16);
  }
  uVar36 = uVar32;
  iVar38 = iVar16;
  if (uVar28 == 0) {
LAB_82e9be2c:
    if (iVar42 < iVar27) {
      uStack_d8 = 3;
      iVar27 = iVar42;
    }
    if (iVar37 < iVar27) {
      uStack_d8 = 4;
      iVar27 = iVar37;
    }
    lVar44 = uVar35 + uVar22;
    iVar16 = (int)lVar44;
    if (0 < (int)uVar18) {
      lVar40 = 0;
      uVar36 = uVar35;
      do {
        lVar26 = 0;
        lVar20 = lVar40;
        if (0 < iVar39) {
          do {
            if (*(char *)((int)lVar20 + iVar43) != '\0') {
              lVar44 = uVar29 + lVar44;
              break;
            }
            lVar26 = lVar26 + 1;
            lVar20 = lVar40 + lVar26;
          } while ((int)lVar26 < iVar39);
        }
        iVar16 = (int)lVar44;
        lVar40 = lVar40 + uVar29;
        uVar36 = uVar36 - 1;
      } while (uVar36 != 0);
    }
    if (iVar16 < iVar27) {
      uStack_d8 = 5;
      iVar27 = iVar16;
    }
    iVar38 = 0;
    lVar44 = uVar29 + uVar24;
    iVar16 = (int)lVar44;
    if (0 < iVar39) {
      do {
        iVar16 = 0;
        if (0 < (int)uVar18) {
          do {
            if (*(char *)(iVar39 * iVar16 + iVar38 + iVar43) != '\0') {
              lVar44 = uVar35 + lVar44;
              break;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < (int)uVar18);
        }
        iVar16 = (int)lVar44;
        iVar38 = iVar38 + 1;
      } while (iVar38 < iVar39);
    }
    if (iVar16 < iVar27) {
      uStack_d8 = 6;
    }
    if (*(int *)(param_1 + 0x8d4) == 0) {
      uVar24 = 0;
      if (uStack_d8 != 0) {
        uVar24 = uStack_d8 << 1 | (uint)uVar17;
      }
    }
    else {
      uVar24 = 0;
    }
    iVar27 = (int)uVar24 >> 1;
    iVar43 = *(int *)(param_1 + 0x1a8c);
    uVar36 = (ulonglong)*(uint *)(iVar27 * 4 + -0x7ce760b4);
    lVar44 = uVar36 + 1;
    if (iVar27 - 1U < 6) {
      iVar16 = iVar43;
      if ((iVar27 == 1) || (iVar16 = iVar31, iVar27 == 2)) {
        uVar18 = uStack_f0 & 1;
        if (uVar18 != 0) {
          lVar44 = uVar36 + 2;
        }
        lVar40 = 0;
        lVar20 = 0;
        if ((int)uVar18 < (int)uStack_f0) {
          uVar24 = (uStack_f0 - uVar18) + 1;
          if (1 < (int)(((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0))) {
            do {
              pcVar30 = (char *)(iVar16 + 1 + uVar18);
              pcVar11 = (char *)(iVar16 + 3 + uVar18);
              pcVar12 = (char *)(iVar16 + 2 + uVar18);
              pcVar13 = (char *)(uVar18 + iVar16);
              uVar18 = uVar18 + 4;
              lVar20 = (ulonglong)*(uint *)(&lbl_8215F7E0 + (*pcVar11 * 2 + (int)*pcVar12) * 4) +
                       lVar20;
              lVar40 = (ulonglong)*(uint *)(&lbl_8215F7E0 + (*pcVar30 * 2 + (int)*pcVar13) * 4) +
                       lVar40;
            } while ((int)uVar18 < (int)(uStack_f0 - 2));
          }
          if ((int)uVar18 < (int)uStack_f0) {
            lVar44 = (ulonglong)
                     *(uint *)(&lbl_8215F7E0 +
                              (((char *)(uVar18 + iVar16))[1] * 2 + (int)*(char *)(uVar18 + iVar16))
                              * 4) + lVar44;
          }
          lVar44 = lVar20 + lVar40 + lVar44;
        }
      }
      else {
        iVar16 = iVar43;
        if ((iVar27 == 3) || (iVar16 = iVar31, iVar27 == 4)) {
          if (((int)((ulonglong)uVar18 % 3) == 0) && (uVar15 != 0)) {
            uVar15 = uVar29 & 1;
            iVar43 = 0;
            if (0 < (int)uVar18) {
              do {
                if ((int)uVar15 < iVar39) {
                  iVar27 = *(int *)(param_1 + 0x2d0);
                  iVar31 = iVar16 + 1;
                  lVar40 = (((uVar29 - uVar15) - 1 & 0xffffffff) >> 1) + 1;
                  uVar36 = uVar15;
                  do {
                    iVar38 = iVar27 * iVar43 + (int)uVar36;
                    iVar37 = iVar27 + iVar38;
                    iVar37 = (*(char *)(iVar31 + iVar27 + iVar37) * 2 +
                             (int)*(char *)(iVar27 + iVar37 + iVar16)) * 0x10 +
                             (*(char *)(iVar31 + iVar37) * 2 + (int)*(char *)(iVar37 + iVar16)) * 4
                             + *(char *)(iVar31 + iVar38) * 2 + (int)*(char *)(iVar38 + iVar16);
                    iVar38 = iVar37 * 2;
                    lVar44 = (ulonglong)*(uint *)(&lbl_82162874 + iVar37 * 8) + lVar44;
                    if (*(uint *)(&lbl_82162874 + iVar37 * 8) == 5) {
                      uVar24 = iVar38 >> 1;
                      if (*(int *)(&lbl_8215F7C0 + (uVar24 & 7) * 4) +
                          *(int *)(&lbl_8215F7C0 + (iVar38 >> 4) * 4) == 3) {
                        lVar44 = lVar44 + 5;
                      }
                      else {
                        lVar44 = (ulonglong)*(uint *)(&lbl_82162874 + (uVar24 << 3 ^ 0x1f8)) +
                                 lVar44;
                      }
                    }
                    uVar36 = uVar36 + 2;
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                }
                iVar43 = iVar43 + 3;
              } while (iVar43 < (int)uVar18);
            }
          }
          else {
            uVar36 = uVar35 & 1;
            uVar28 = (uint)uVar36;
            uVar24 = uVar28;
            while ((int)uVar24 < (int)uVar18) {
              if ((int)uVar15 < iVar39) {
                lVar40 = ((uVar29 - uVar15) - 1 & 0xffffffff) / 3 + 1;
                uVar41 = uVar15;
                do {
                  iVar43 = *(int *)(param_1 + 0x2d0) * (int)uVar36 + (int)uVar41;
                  iVar27 = *(int *)(param_1 + 0x2d0) + iVar43;
                  iVar27 = ((*(char *)(iVar27 + iVar16 + 2) * 2 +
                            (int)*(char *)(iVar16 + 1 + iVar27)) * 2 +
                           (int)*(char *)(iVar27 + iVar16)) * 8 +
                           (*(char *)(iVar43 + iVar16 + 2) * 2 + (int)*(char *)(iVar16 + 1 + iVar43)
                           ) * 2 + (int)*(char *)(iVar43 + iVar16);
                  iVar43 = iVar27 * 2;
                  lVar44 = (ulonglong)*(uint *)(&lbl_82162874 + iVar27 * 8) + lVar44;
                  if (*(uint *)(&lbl_82162874 + iVar27 * 8) == 5) {
                    uVar24 = iVar43 >> 1;
                    if (*(int *)(&lbl_8215F7C0 + (uVar24 & 7) * 4) +
                        *(int *)(&lbl_8215F7C0 + (iVar43 >> 4) * 4) == 3) {
                      lVar44 = lVar44 + 5;
                    }
                    else {
                      lVar44 = (ulonglong)*(uint *)(&lbl_82162874 + (uVar24 << 3 ^ 0x1f8)) + lVar44;
                    }
                  }
                  uVar41 = uVar41 + 3;
                  lVar40 = lVar40 + -1;
                } while (lVar40 != 0);
              }
              uVar36 = uVar36 + 2;
              uVar24 = (uint)uVar36;
            }
          }
          iVar43 = 0;
          iVar27 = (int)uVar15;
          if (iVar27 != 0) {
            do {
              uVar24 = 0;
              if (0 < (int)uVar18) {
                do {
                  if (*(char *)(iVar39 * uVar24 + iVar43 + iVar16) != '\0') break;
                  uVar24 = uVar24 + 1;
                } while ((int)uVar24 < (int)uVar18);
              }
              lVar44 = lVar44 + 1;
              if ((uVar24 != uVar18) && (0 < (int)uVar18)) {
                lVar44 = uVar35 + lVar44;
              }
              iVar43 = iVar43 + 1;
            } while (iVar43 < iVar27);
          }
          uVar36 = uVar15;
          iVar43 = iVar27;
          if (uVar28 != 0) {
            while ((iVar43 < iVar39 && (*(char *)((int)uVar36 + iVar16) == '\0'))) {
              uVar36 = uVar36 + 1;
              iVar43 = (int)uVar36;
            }
            lVar44 = lVar44 + 1;
            if (((int)uVar36 != iVar39) && (iVar27 < iVar39)) {
              lVar44 = (uVar29 - uVar15) + lVar44;
            }
          }
        }
        else if (iVar27 == 5) {
          if (0 < (int)uVar18) {
            lVar40 = 0;
            do {
              lVar26 = 0;
              iVar27 = 0;
              lVar20 = lVar40;
              if (0 < iVar39) {
                do {
                  iVar27 = (int)lVar26;
                  if (*(char *)((int)lVar20 + iVar43) != '\0') break;
                  lVar26 = lVar26 + 1;
                  iVar27 = (int)lVar26;
                  lVar20 = lVar40 + lVar26;
                } while (iVar27 < iVar39);
              }
              lVar44 = lVar44 + 1;
              if ((iVar27 != iVar39) && (0 < iVar39)) {
                lVar44 = uVar29 + lVar44;
              }
              lVar40 = uVar29 + lVar40;
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
          }
        }
        else {
          iVar27 = 0;
          if (0 < iVar39) {
            do {
              uVar24 = 0;
              if (0 < (int)uVar18) {
                do {
                  if (*(char *)(iVar39 * uVar24 + iVar27 + iVar43) != '\0') break;
                  uVar24 = uVar24 + 1;
                } while ((int)uVar24 < (int)uVar18);
              }
              lVar44 = lVar44 + 1;
              if ((uVar24 != uVar18) && (0 < (int)uVar18)) {
                lVar44 = uVar35 + lVar44;
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 < iVar39);
          }
        }
      }
    }
    return lVar44;
  }
  while (iVar45 = iVar16, iVar38 < iVar39) {
    if (*(char *)((int)uVar36 + iVar43) != '\0') {
      iVar42 = (iVar39 - iVar16) + iVar42;
      break;
    }
    uVar36 = uVar36 + 1;
    iVar38 = (int)uVar36;
  }
  do {
    if (iVar39 <= iVar45) goto LAB_82e9be2c;
    if (*(char *)((int)uVar32 + iVar31) != '\0') {
      iVar37 = (iVar39 - iVar16) + iVar37;
      goto LAB_82e9be2c;
    }
    uVar32 = uVar32 + 1;
    iVar45 = (int)uVar32;
  } while( true );
}

