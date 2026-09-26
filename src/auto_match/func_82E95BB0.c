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
extern int iRam8318903c;
extern int iRam83189040;
extern int iRam83189044;
extern int iRam83189048;
extern int iRam8318904c;
extern int iRam83189050;
extern int iRam83189054;
extern int iRam83189058;
extern unsigned int iStack_b4;
extern unsigned int lbl_8215F808;
extern unsigned int lbl_82162860;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;


void fn_82E95BB0(int param_1,uint *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar19;
  longlong lVar17;
  byte *pbVar20;
  ulonglong uVar18;
  uint uVar24;
  ulonglong uVar21;
  longlong lVar22;
  int iVar25;
  longlong lVar23;
  char *pcVar26;
  uint uVar27;
  uint uVar28;
  undefined1 uVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  undefined1 *puVar33;
  int iVar34;
  int iVar35;
  longlong lVar36;
  int iVar37;
  int iVar38;
  ulonglong uVar39;
  int iVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_b8;
  int iStack_b4;
  uint uStack_b0;
  
  puVar33 = *(undefined1 **)(param_1 + 0x1b8c);
  uVar4 = ((ulonglong)*(uint *)(param_1 + 0x2d0) + 1 & 0xffffffff) >> 1;
  uVar5 = ((ulonglong)*(uint *)(param_1 + 0x2d4) + 1 & 0xffffffff) >> 1;
  uVar16 = *(uint *)(param_1 + 0x2d4) >> 1;
  uVar31 = (uint)uVar5;
  uVar14 = (uint)uVar4;
  uVar13 = (longlong)(int)uVar31 * (longlong)(int)uVar14;
  iVar30 = *(int *)(param_1 + 0x1b84);
  uStack_c0 = iRam83189040 + 1;
  uStack_c4 = iRam83189044 + 1;
  iVar32 = 0;
  uVar15 = iRam83189048 + 1;
  uStack_c8 = iRam8318904c + 1;
  iStack_b4 = 0;
  uVar24 = iRam83189050 + 1;
  uVar19 = iRam83189054 + 1;
  iVar35 = (int)uVar13;
  uStack_b8 = iRam8318903c + iVar35;
  iVar25 = 0;
  uVar39 = 0;
  uVar11 = *(uint *)(param_1 + 0x2d0) >> 1;
  uVar42 = (ulonglong)uVar11;
  iVar40 = 0;
  if (uVar16 != 0) {
    lVar36 = 0;
    iVar34 = 1;
    do {
      uVar21 = 0;
      iVar37 = *(int *)(param_1 + 0x1b88) + (int)lVar36;
      if (uVar11 != 0) {
        iVar38 = 0;
        uVar41 = uVar42;
        do {
          iVar3 = *(int *)(param_1 + 0x2d0);
          iVar7 = (int)uVar21;
          iVar12 = (iVar3 * iVar40 + iVar7) * 2;
          iVar6 = iVar12 + iVar30;
          cVar2 = *(char *)(iVar12 + iVar30);
          if ((((cVar2 == '\0') || (*(char *)(iVar6 + 1) == '\0')) ||
              (pcVar26 = (char *)(iVar3 * iVar34 + iVar38 + iVar30), *pcVar26 == '\0')) ||
             (pcVar26[1] == '\0')) {
            uVar27 = (uint)(cVar2 != '\0');
            if (*(char *)(iVar6 + 1) != '\0') {
              uVar27 = uVar27 | 2;
            }
            pcVar26 = (char *)(iVar3 * iVar34 + iVar38 + iVar30);
            if (*pcVar26 != '\0') {
              uVar27 = uVar27 | 4;
            }
            if (pcVar26[1] != '\0') {
              uVar27 = uVar27 | 8;
            }
            *(undefined1 *)(iVar7 + iVar37) = 0;
            iVar25 = *(int *)(uVar27 * 4 + -0x7ce76fa8) + iVar25;
          }
          else {
            uVar27 = 0xf;
            *(undefined1 *)(iVar7 + iVar37) = 1;
            uVar39 = uVar39 + 1;
          }
          *puVar33 = (char)uVar27;
          uVar21 = uVar21 + 1;
          puVar33 = puVar33 + 1;
          iVar38 = iVar38 + 2;
          uVar41 = uVar41 - 1;
        } while (uVar41 != 0);
      }
      uVar27 = *(uint *)(param_1 + 0x2d0);
      if ((uVar27 & 1) != 0) {
        cVar2 = *(char *)((int)(((longlong)(int)uVar27 * (longlong)iVar40 + uVar21 & 0xffffffff) <<
                               1) + iVar30);
        if ((cVar2 == '\0') ||
           (*(char *)(uVar27 * iVar34 + (int)((uVar21 & 0xffffffff) << 1) + iVar30) == '\0')) {
          uVar28 = (uint)(cVar2 != '\0');
          if (*(char *)(uVar27 * iVar34 + (int)((uVar21 & 0xffffffff) << 1) + iVar30) != '\0') {
            uVar28 = uVar28 | 4;
          }
          *(undefined1 *)((int)uVar21 + iVar37) = 0;
          iVar25 = *(int *)(uVar28 * 4 + -0x7ce76fa8) + iVar25;
        }
        else {
          uVar28 = 0xf;
          *(undefined1 *)((int)uVar21 + iVar37) = 1;
          uVar39 = uVar39 + 1;
        }
        *puVar33 = (char)uVar28;
        puVar33 = puVar33 + 1;
      }
      iVar40 = iVar40 + 1;
      lVar36 = lVar36 + uVar4;
      iVar34 = iVar34 + 2;
      iStack_b4 = iVar25;
    } while (iVar40 < (int)uVar16);
  }
  if ((*(uint *)(param_1 + 0x2d4) & 1) != 0) {
    iVar25 = iVar40 * uVar14 + *(int *)(param_1 + 0x1b88);
    iVar34 = 0;
    if (uVar11 != 0) {
      do {
        iVar38 = (*(int *)(param_1 + 0x2d0) * iVar40 + iVar34) * 2;
        iVar37 = iVar38 + iVar30;
        cVar2 = *(char *)(iVar38 + iVar30);
        if ((cVar2 == '\0') || (*(char *)(iVar37 + 1) == '\0')) {
          uVar16 = (uint)(cVar2 != '\0');
          if (*(char *)(iVar37 + 1) != '\0') {
            uVar16 = uVar16 | 2;
          }
          *(undefined1 *)(iVar34 + iVar25) = 0;
          iStack_b4 = *(int *)(uVar16 * 4 + -0x7ce76fa8) + iStack_b4;
        }
        else {
          uVar16 = 0xf;
          *(undefined1 *)(iVar34 + iVar25) = 1;
          uVar39 = uVar39 + 1;
        }
        *puVar33 = (char)uVar16;
        iVar34 = iVar34 + 1;
        puVar33 = puVar33 + 1;
        uVar42 = uVar42 - 1;
      } while (uVar42 != 0);
    }
    if ((*(uint *)(param_1 + 0x2d0) & 1) != 0) {
      if (*(char *)((*(uint *)(param_1 + 0x2d0) * iVar40 + iVar34) * 2 + iVar30) == '\0') {
        *(undefined1 *)(iVar34 + iVar25) = 0;
        uVar29 = 0;
        iStack_b4 = iRam83189058 + iStack_b4;
      }
      else {
        uVar29 = 0xf;
        *(undefined1 *)(iVar34 + iVar25) = 1;
        uVar39 = uVar39 + 1;
      }
      *puVar33 = uVar29;
    }
  }
  uVar42 = (uVar39 & 0x7fffffff) << 1;
  uVar39 = (ulonglong)*(uint *)(param_1 + 0x1b88);
  lVar36 = 0;
  uVar42 = ((~(uVar42 ^ uVar13) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar42 <= uVar13) & 1;
  if (uVar31 != 0) {
    lVar17 = uVar39 + uVar13 + -1;
    do {
      lVar22 = 0;
      if (uVar14 != 0) {
        do {
          pcVar26 = (char *)uVar39;
          if (lVar22 + lVar36 == 0) {
LAB_82e95fbc:
            uVar21 = uVar42;
          }
          else if ((int)lVar36 == 0) {
            uVar21 = (longlong)pcVar26[-1];
          }
          else if ((int)lVar22 == 0) {
            uVar21 = (longlong)pcVar26[-uVar14];
          }
          else {
            uVar21 = (longlong)pcVar26[-1];
            if (pcVar26[-1] != pcVar26[-uVar14]) goto LAB_82e95fbc;
          }
          lVar22 = lVar22 + 1;
          uVar39 = uVar39 + 1;
          lVar17 = lVar17 + 1;
          *(char *)lVar17 = '\x01' - ((longlong)*pcVar26 == uVar21);
        } while ((int)lVar22 < (int)uVar14);
      }
      lVar36 = lVar36 + 1;
    } while ((int)lVar36 < (int)uVar31);
  }
  iVar25 = 0;
  lVar36 = uVar39 - uVar13;
  iVar30 = (int)lVar36;
  if (0 < iVar35) {
    uVar21 = uVar13;
    do {
      pbVar20 = (byte *)(iVar25 + iVar30);
      iVar25 = iVar25 + 1;
      *pbVar20 = (byte)uVar42 ^ *pbVar20;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  uVar13 = uVar13 & 1;
  iVar25 = (int)uVar13;
  if (iVar25 != 0) {
    uStack_c4 = 2;
    uStack_c0 = 2;
  }
  iVar37 = 0;
  iVar38 = 0;
  iVar34 = 0;
  iVar40 = (int)uVar39;
  if (iVar25 < iVar35) {
    uVar16 = (iVar35 - iVar25) + 1;
    if (1 < (int)(((int)uVar16 >> 1) + (uint)((int)uVar16 < 0 && (uVar16 & 1) != 0))) {
      lVar17 = uVar39 + uVar13;
      do {
        iVar3 = (int)uVar13;
        pcVar26 = (char *)lVar17;
        uVar13 = uVar13 + 4;
        lVar17 = lVar17 + 4;
        iVar38 = *(int *)(&lbl_82162860 +
                         ((int)*(char *)(iVar30 + 1 + iVar3) + (int)pcVar26[iVar30 - iVar40]) * 4) +
                 iVar38;
        iVar25 = (int)uVar13;
        iVar34 = *(int *)(&lbl_82162860 +
                         ((int)*(char *)(iVar30 + 2 + iVar3) + (int)*(char *)(iVar30 + 3 + iVar3)) *
                         4) + iVar34;
        iVar32 = *(int *)(&lbl_82162860 +
                         ((int)*(char *)(iVar40 + 2 + iVar3) + (int)*(char *)(iVar40 + 3 + iVar3)) *
                         4) + iVar32;
        iVar37 = *(int *)(&lbl_82162860 + ((int)*(char *)(iVar40 + 1 + iVar3) + (int)*pcVar26) * 4)
                 + iVar37;
      } while (iVar25 < iVar35 + -2);
    }
    if (iVar25 < iVar35) {
      uStack_c0 = *(int *)(&lbl_82162860 +
                          ((int)((char *)(iVar25 + iVar30))[1] + (int)*(char *)(iVar25 + iVar30)) *
                          4) + uStack_c0;
      uStack_c4 = *(int *)(&lbl_82162860 +
                          ((int)*(char *)(iVar40 + iVar25 + 1) + (int)*(char *)(iVar40 + iVar25)) *
                          4) + uStack_c4;
    }
    uStack_c4 = iVar37 + iVar32 + uStack_c4;
    uStack_c0 = iVar38 + iVar34 + uStack_c0;
  }
  bVar1 = (int)uStack_c0 < (int)uStack_b8;
  if (bVar1) {
    uStack_b8 = uStack_c0;
  }
  uStack_b0 = (uint)bVar1;
  if ((int)uStack_c4 < (int)uStack_b8) {
    uStack_b0 = 2;
    uStack_b8 = uStack_c4;
  }
  uStack_c4 = 0;
  uStack_cc = uVar15;
  if ((uVar5 == ((ulonglong)(longlong)(int)uVar31 / 3) * 3) &&
     (uVar4 != ((ulonglong)(longlong)(int)uVar14 / 3) * 3)) {
    uVar13 = uVar4 & 1;
    uVar16 = 0;
    if (uVar31 != 0) {
      lVar17 = 0;
      lVar22 = (ulonglong)(uVar31 - 1) / 3 + 1;
      do {
        iVar32 = 0;
        iVar35 = 0;
        iVar34 = 0;
        iVar25 = 0;
        if ((uint)uVar13 < uVar14) {
          uVar16 = (uVar14 - (uint)uVar13) + 1;
          iVar37 = (int)lVar17;
          uVar21 = uVar13;
          if (1 < (int)(((int)uVar16 >> 1) + (uint)((int)uVar16 < 0 && (uVar16 & 1) != 0))) {
            iVar38 = iVar30 + 1;
            iVar3 = iVar40 + 1;
            do {
              iVar6 = iVar37 + (int)uVar21;
              iVar12 = iVar6 + uVar14;
              iVar7 = iVar12 + uVar14;
              iVar8 = iVar37 + 2 + (int)uVar21;
              iVar9 = iVar8 + uVar14;
              iVar10 = iVar9 + uVar14;
              iVar34 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar7 + iVar30) + (int)*(char *)(iVar38 + iVar7) +
                               (int)*(char *)(iVar12 + iVar30) + (int)*(char *)(iVar38 + iVar12) +
                               (int)*(char *)(iVar6 + iVar30) + (int)*(char *)(iVar38 + iVar6)) * 4)
                       + iVar34;
              iVar32 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar7 + iVar40) + (int)*(char *)(iVar3 + iVar7) +
                               (int)*(char *)(iVar12 + iVar40) + (int)*(char *)(iVar3 + iVar12) +
                               (int)*(char *)(iVar6 + iVar40) + (int)*(char *)(iVar3 + iVar6)) * 4)
                       + iVar32;
              uVar21 = uVar21 + 4;
              iVar25 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar10 + iVar30) + (int)*(char *)(iVar38 + iVar10) +
                               (int)*(char *)(iVar9 + iVar30) + (int)*(char *)(iVar38 + iVar9) +
                               (int)*(char *)(iVar8 + iVar30) + (int)*(char *)(iVar38 + iVar8)) * 4)
                       + iVar25;
              iVar35 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar10 + iVar40) + (int)*(char *)(iVar3 + iVar10) +
                               (int)*(char *)(iVar9 + iVar40) + (int)*(char *)(iVar3 + iVar9) +
                               (int)*(char *)(iVar8 + iVar40) + (int)*(char *)(iVar3 + iVar8)) * 4)
                       + iVar35;
              uVar15 = uStack_cc;
            } while ((int)uVar21 < (int)(uVar14 - 2));
          }
          if ((int)uVar21 < (int)uVar14) {
            iVar37 = iVar37 + (int)uVar21;
            iVar38 = iVar40 + 1;
            iVar3 = iVar30 + 1;
            iVar6 = iVar37 + uVar14;
            iVar12 = iVar6 + uVar14;
            uVar15 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar12 + iVar30) + (int)*(char *)(iVar3 + iVar12) +
                             (int)*(char *)(iVar6 + iVar30) + (int)*(char *)(iVar3 + iVar6) +
                             (int)*(char *)(iVar37 + iVar30) + (int)*(char *)(iVar3 + iVar37)) * 4)
                     + uVar15;
            uStack_c8 = *(int *)(&lbl_8215F808 +
                                ((int)*(char *)(iVar12 + iVar40) + (int)*(char *)(iVar38 + iVar12) +
                                (int)*(char *)(iVar6 + iVar40) + (int)*(char *)(iVar38 + iVar6) +
                                (int)*(char *)(iVar37 + iVar40) + (int)*(char *)(iVar38 + iVar37)) *
                                4) + uStack_c8;
          }
          uVar15 = iVar34 + iVar25 + uVar15;
          uStack_c8 = iVar32 + iVar35 + uStack_c8;
          uStack_cc = uVar15;
        }
        lVar17 = uVar4 * 3 + lVar17;
        lVar22 = lVar22 + -1;
        uVar16 = uStack_c4;
      } while (lVar22 != 0);
    }
  }
  else {
    uVar16 = (uint)(uVar5 & 1);
    uVar21 = uVar4 + ((ulonglong)(longlong)(int)uVar14 / 3) * -3;
    uVar13 = uVar21;
    if (uVar16 < uVar31) {
      lVar22 = (longlong)(int)uVar16 * (longlong)(int)uVar14;
      lVar17 = (((uVar5 - (uVar5 & 1)) - 1 & 0xffffffff) >> 1) + 1;
      uVar41 = uVar21;
      do {
        iVar32 = 0;
        iVar35 = 0;
        iVar34 = 0;
        iVar25 = 0;
        uVar13 = uVar41;
        if ((int)uVar41 < (int)uVar14) {
          iVar37 = (int)lVar22;
          if (1 < (int)((uVar14 - (int)uVar41) + 2) / 3) {
            iVar38 = iVar30 + 2;
            iVar3 = iVar30 + 1;
            iVar6 = iVar40 + 2;
            iVar12 = iVar40 + 1;
            do {
              iVar7 = iVar37 + (int)uVar41;
              iVar8 = iVar7 + uVar14;
              iVar9 = iVar37 + 3 + (int)uVar41;
              iVar10 = iVar9 + uVar14;
              iVar34 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar8 + iVar30) + (int)*(char *)(iVar38 + iVar8) +
                                (int)*(char *)(iVar3 + iVar8) +
                               (int)*(char *)(iVar7 + iVar30) + (int)*(char *)(iVar38 + iVar7) +
                               (int)*(char *)(iVar3 + iVar7)) * 4) + iVar34;
              uVar41 = uVar41 + 6;
              iVar32 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar8 + iVar40) + (int)*(char *)(iVar6 + iVar8) +
                                (int)*(char *)(iVar12 + iVar8) +
                               (int)*(char *)(iVar7 + iVar40) + (int)*(char *)(iVar6 + iVar7) +
                               (int)*(char *)(iVar12 + iVar7)) * 4) + iVar32;
              iVar25 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar10 + iVar30) + (int)*(char *)(iVar38 + iVar10) +
                                (int)*(char *)(iVar3 + iVar10) +
                               (int)*(char *)(iVar9 + iVar30) + (int)*(char *)(iVar38 + iVar9) +
                               (int)*(char *)(iVar3 + iVar9)) * 4) + iVar25;
              iVar35 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar10 + iVar40) + (int)*(char *)(iVar6 + iVar10) +
                                (int)*(char *)(iVar12 + iVar10) +
                               (int)*(char *)(iVar9 + iVar40) + (int)*(char *)(iVar6 + iVar9) +
                               (int)*(char *)(iVar12 + iVar9)) * 4) + iVar35;
            } while ((int)uVar41 < (int)(uVar14 - 3));
            uVar13 = uVar21 & 0xffffffff;
          }
          if ((int)uVar41 < (int)uVar14) {
            iVar37 = iVar37 + (int)uVar41;
            iVar38 = iVar37 + uVar14;
            uStack_cc = *(int *)(&lbl_8215F808 +
                                ((int)*(char *)(iVar38 + iVar30) +
                                 (int)*(char *)(iVar30 + 2 + iVar38) +
                                 (int)*(char *)(iVar30 + 1 + iVar38) +
                                (int)*(char *)(iVar37 + iVar30) +
                                (int)*(char *)(iVar30 + 2 + iVar37) +
                                (int)*(char *)(iVar30 + 1 + iVar37)) * 4) + uStack_cc;
            uStack_c8 = *(int *)(&lbl_8215F808 +
                                ((int)*(char *)(iVar38 + iVar40) +
                                 (int)*(char *)(iVar40 + 2 + iVar38) +
                                 (int)*(char *)(iVar40 + 1 + iVar38) +
                                (int)*(char *)(iVar37 + iVar40) +
                                (int)*(char *)(iVar40 + 2 + iVar37) +
                                (int)*(char *)(iVar40 + 1 + iVar37)) * 4) + uStack_c8;
          }
          uStack_c8 = iVar32 + iVar35 + uStack_c8;
          uStack_cc = iVar34 + iVar25 + uStack_cc;
        }
        lVar22 = uVar4 * 2 + lVar22;
        lVar17 = lVar17 + -1;
        uVar41 = uVar13;
      } while (lVar17 != 0);
    }
  }
  iVar35 = (int)uVar13;
  uVar21 = (ulonglong)uStack_c8;
  uVar41 = (ulonglong)uStack_cc;
  if (0 < iVar35) {
    lVar17 = lVar36 - uVar39;
    uVar43 = uVar13;
    do {
      iVar25 = 0;
      if (uVar31 != 0) {
        lVar22 = uVar39 + lVar17;
        do {
          if (*(char *)lVar22 != '\0') {
            uVar41 = uVar5 + uVar41;
            break;
          }
          iVar25 = iVar25 + 1;
          lVar22 = lVar22 + uVar4;
        } while (iVar25 < (int)uVar31);
      }
      iVar25 = 0;
      uVar18 = uVar39;
      if (uVar31 != 0) {
        do {
          if (*(char *)uVar18 != '\0') {
            uVar21 = uVar5 + uVar21;
            break;
          }
          iVar25 = iVar25 + 1;
          uVar18 = uVar18 + uVar4;
        } while (iVar25 < (int)uVar31);
      }
      uVar41 = uVar41 + 1;
      uStack_cc = (uint)uVar41;
      uVar21 = uVar21 + 1;
      uStack_c8 = (uint)uVar21;
      uVar39 = uVar39 + 1;
      uVar43 = uVar43 - 1;
    } while (uVar43 != 0);
  }
  uVar39 = uVar13;
  iVar25 = iVar35;
  if (uVar16 == 0) {
LAB_82e96908:
    if ((int)uStack_cc < (int)uStack_b8) {
      uStack_b0 = 3;
      uStack_b8 = uStack_cc;
    }
    if ((int)uStack_c8 < (int)uStack_b8) {
      uStack_b0 = 4;
      uStack_b8 = uStack_c8;
    }
    lVar22 = uVar5 + uVar24;
    uVar16 = (uint)lVar22;
    lVar17 = lVar36;
    uVar13 = uVar5;
    if (uVar31 != 0) {
      do {
        iVar30 = 0;
        if (uVar14 != 0) {
          do {
            if (*(char *)((int)lVar17 + iVar30) != '\0') {
              lVar22 = uVar4 + lVar22;
              break;
            }
            iVar30 = iVar30 + 1;
          } while (iVar30 < (int)uVar14);
        }
        uVar16 = (uint)lVar22;
        uVar13 = uVar13 - 1;
        lVar17 = lVar17 + uVar4;
      } while (uVar13 != 0);
    }
    if ((int)uVar16 < (int)uStack_b8) {
      uStack_b0 = 5;
      uStack_b8 = uVar16;
    }
    lVar22 = 0;
    lVar17 = uVar4 + uVar19;
    uVar16 = (uint)lVar17;
    if (uVar14 != 0) {
      do {
        iVar30 = 0;
        if (uVar31 != 0) {
          lVar23 = lVar22 + lVar36;
          do {
            if (*(char *)lVar23 != '\0') {
              lVar17 = uVar5 + lVar17;
              break;
            }
            iVar30 = iVar30 + 1;
            lVar23 = lVar23 + uVar4;
          } while (iVar30 < (int)uVar31);
        }
        uVar16 = (uint)lVar17;
        lVar22 = lVar22 + 1;
      } while ((int)lVar22 < (int)uVar14);
    }
    if ((int)uVar16 < (int)uStack_b8) {
      uStack_b0 = 6;
      uStack_b8 = uVar16;
    }
    if (((*(int *)(param_1 + 0x8d4) == 0) && (*(int *)(param_1 + 0x8e0) == 0)) &&
       (*(int *)(param_1 + 0xb08) == 0)) {
      uVar16 = 0;
      if (uStack_b0 != 0) {
        uVar16 = uStack_b0 << 1 | (uint)uVar42;
      }
    }
    else {
      uVar16 = 0;
    }
    *param_2 = uVar16;
    *param_3 = uStack_b8 + iStack_b4;
    return;
  }
  while (iVar32 = iVar35, iVar25 < (int)uVar14) {
    if (*(char *)((int)uVar39 + iVar30) != '\0') {
      uStack_cc = (uVar14 - iVar35) + uStack_cc;
      break;
    }
    uVar39 = uVar39 + 1;
    iVar25 = (int)uVar39;
  }
  do {
    if ((int)uVar14 <= iVar32) goto LAB_82e96908;
    if (*(char *)(iVar40 + (int)uVar13) != '\0') {
      uStack_c8 = (uVar14 - iVar35) + uStack_c8;
      goto LAB_82e96908;
    }
    uVar13 = uVar13 + 1;
    iVar32 = (int)uVar13;
  } while( true );
}

