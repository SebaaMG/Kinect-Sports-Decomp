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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT13(h,l) ((U32)((((U8)(h)) << 24) | ((U32)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6A7A0();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82015600;
extern unsigned int lbl_82015608;
extern unsigned int lbl_82054148;
extern unsigned int uStack_80;
extern unsigned int uStack_92;


void fn_8278F338(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  undefined2 uVar16;
  int *piVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  byte bVar22;
  char cVar26;
  undefined1 *puVar24;
  byte bVar27;
  byte *pbVar25;
  longlong lVar23;
  bool bVar28;
  ulonglong uVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  undefined2 uStack_92;
  undefined4 uStack_80;
  
  piVar17 = (int *)fn_82F6A548();
  if (piVar17[3] != 0) {
    piVar17[2] = piVar17[2] + 1;
  }
  piVar17[3] = 0;
  uVar29 = 0;
  bVar28 = false;
  cVar26 = *(char *)(piVar17[2] + *piVar17);
  piVar17[2] = piVar17[2] + 1;
  if (cVar26 != '\0') {
    dVar31 = (double)lbl_8200571C;
    dVar33 = (double)lbl_82015608;
    dVar34 = (double)lbl_82054148;
    uVar32 = lbl_82015600;
    do {
      cVar26 = cVar26 + -1;
      if (piVar17[3] != 0) {
        piVar17[2] = piVar17[2] + 1;
      }
      iVar9 = piVar17[2];
      iVar10 = *piVar17;
      iVar19 = iVar9 + 1;
      piVar17[3] = 0;
      bVar22 = *(byte *)(iVar10 + iVar9);
      piVar17[2] = iVar19;
      if (bVar22 < 8) {
        iVar14 = (int)param_2;
        iVar15 = (int)uVar29;
        if (bVar22 == 1) {
          iVar19 = iVar10 + iVar19;
          piVar17[3] = 0;
          uVar11 = CONCAT11(*(undefined1 *)(iVar19 + 3),*(undefined1 *)(iVar19 + 2));
          uVar1 = *(undefined1 *)(iVar19 + 1);
          piVar17[2] = iVar9 + 5;
          uVar18 = (ulonglong)uVar11;
          if (0xf < uVar18) {
            uVar18 = 0xf;
          }
          piVar17[3] = 0;
          iVar19 = iVar10 + iVar9 + 5;
          uVar4 = *(undefined1 *)(iVar19 + 1);
          uVar12 = CONCAT11(*(undefined1 *)(iVar19 + 3),*(undefined1 *)(iVar19 + 2));
          piVar17[2] = iVar9 + 9;
          uVar20 = (ulonglong)uVar12;
          if (0xf < uVar20) {
            uVar20 = 0xf;
          }
          piVar17[3] = 0;
          bVar22 = *(byte *)(iVar10 + iVar9 + 9);
          piVar17[2] = iVar9 + 10;
          if (((!bVar28) && ((param_2 & 0xffffffff) != 0)) && ((uVar29 & 0xffffffff) < 4)) {
            pbVar25 = (byte *)(iVar15 * 0xc + iVar14);
            uVar29 = uVar29 + 1;
            *pbVar25 = -(8 < (bVar22 & 0xf8)) & 0x80U | 1;
            pbVar25[1] = (byte)(CONCAT21(uVar11,uVar1) >> 4) & 0xf | (byte)(uVar18 << 4);
            pbVar25[2] = (byte)(CONCAT21(uVar12,uVar4) >> 4) & 0xf | (byte)(uVar20 << 4);
            pbVar25[3] = 0x10;
            pbVar25[4] = 0;
            pbVar25[5] = 0;
            pbVar25[6] = 0;
            pbVar25[7] = 0;
            pbVar25[8] = 0;
            pbVar25[9] = 0;
            pbVar25[10] = 0;
            pbVar25[0xb] = 0;
          }
        }
        else if (bVar22 == 2) {
          piVar17[3] = 0;
          uVar1 = *(undefined1 *)(iVar10 + iVar19);
          piVar17[2] = iVar9 + 2;
          piVar17[3] = 0;
          iVar19 = iVar9 + 5 + iVar10;
          uVar4 = *(undefined1 *)(iVar9 + 2 + iVar10);
          piVar17[2] = iVar9 + 3;
          piVar17[3] = 0;
          uVar5 = *(undefined1 *)(iVar9 + 3 + iVar10);
          piVar17[2] = iVar9 + 4;
          piVar17[3] = 0;
          uVar6 = *(undefined1 *)(iVar9 + 4 + iVar10);
          piVar17[2] = iVar9 + 5;
          piVar17[3] = 0;
          uStack_80 = CONCAT13(uVar6,CONCAT21(CONCAT11(uVar1,uVar4),uVar5));
          uVar1 = *(undefined1 *)(iVar19 + 1);
          uVar11 = CONCAT11(*(undefined1 *)(iVar19 + 3),*(undefined1 *)(iVar19 + 2));
          piVar17[2] = iVar9 + 9;
          uVar18 = (ulonglong)uVar11;
          if (0xf < uVar18) {
            uVar18 = 0xf;
          }
          piVar17[3] = 0;
          iVar21 = iVar9 + 9 + iVar10;
          iVar19 = iVar9 + 0xd;
          uVar4 = *(undefined1 *)(iVar21 + 1);
          uVar12 = CONCAT11(*(undefined1 *)(iVar21 + 3),*(undefined1 *)(iVar21 + 2));
          piVar17[2] = iVar19;
          uVar20 = (ulonglong)uVar12;
          if (0xf < uVar20) {
            uVar20 = 0xf;
          }
          piVar17[3] = 0;
          bVar22 = *(byte *)(iVar10 + iVar19 + 1);
          uVar5 = *(undefined1 *)(iVar10 + iVar19);
          piVar17[2] = iVar9 + 0xf;
          uVar13 = CONCAT11(bVar22,uVar5);
          if (0xf < bVar22) {
            bVar22 = 0xf;
          }
          piVar17[3] = 0;
          bVar27 = 0;
          bVar8 = *(byte *)(iVar10 + iVar9 + 0xf);
          piVar17[2] = iVar9 + 0x10;
          if ((bVar8 & 0x40) != 0) {
            bVar27 = 0x20;
          }
          if ((bVar8 & 0x20) == 0) {
            bVar27 = bVar27 | 0x40;
          }
          if (1 < (bVar8 & 0xf)) {
            bVar27 = bVar27 | 0x80;
          }
          if (((!bVar28) && ((param_2 & 0xffffffff) != 0)) && ((uVar29 & 0xffffffff) < 4)) {
            pbVar25 = (byte *)(iVar15 * 0xc + iVar14);
            uVar29 = uVar29 + 1;
            *pbVar25 = bVar27 | 2;
            pbVar25[1] = (byte)(CONCAT21(uVar11,uVar1) >> 4) & 0xf | (byte)(uVar18 << 4);
            pbVar25[2] = (byte)(CONCAT21(uVar12,uVar4) >> 4) & 0xf | (byte)(uVar20 << 4);
            pbVar25[3] = bVar22 << 4 | (byte)(uVar13 >> 4) & 0xf;
            pbVar25[4] = 0;
            pbVar25[5] = 0;
            pbVar25[6] = 0;
            pbVar25[7] = 0;
            *(int *)(pbVar25 + 8) = uStack_80;
          }
        }
        else {
          if (bVar22 == 3) {
            lVar23 = 0x1b;
          }
          else {
            if (bVar22 == 4) {
LAB_8278fa28:
              piVar17[3] = 0;
              lVar23 = (ulonglong)*(byte *)(iVar10 + iVar19) * 5 + 0x13;
              piVar17[2] = iVar9 + 2;
            }
            else {
              if (bVar22 != 5) {
                if (bVar22 == 6) {
                  lVar23 = 0x50;
                  goto LAB_8278fa4c;
                }
                if (bVar22 == 0) {
                  piVar17[3] = 0;
                  bVar22 = *(byte *)(iVar10 + iVar19);
                  piVar17[2] = iVar9 + 2;
                  piVar17[3] = 0;
                  uStack_80 = (uint)bVar22 << 0x10;
                  uVar4 = *(undefined1 *)(iVar9 + 2 + iVar10);
                  piVar17[2] = iVar9 + 3;
                  piVar17[3] = 0;
                  iVar19 = iVar9 + 5 + iVar10;
                  uVar5 = *(undefined1 *)(iVar9 + 3 + iVar10);
                  piVar17[2] = iVar9 + 4;
                  piVar17[3] = 0;
                  uVar6 = *(undefined1 *)(iVar9 + 4 + iVar10);
                  piVar17[2] = iVar9 + 5;
                  piVar17[3] = 0;
                  uStack_80 = CONCAT31((((U64)(uStack_80) >> 0) & 0xFFFFFF),uVar5);
                  uVar1 = *(undefined1 *)(iVar19 + 1);
                  uVar11 = CONCAT11(*(undefined1 *)(iVar19 + 3),*(undefined1 *)(iVar19 + 2));
                  uStack_80 = CONCAT13(uVar6,(((U64)(uStack_80) >> 8) & 0xFFFFFF));
                  uStack_80 = ((((U64)(uStack_80)) & (~(((U64)0xFFFF) << 16))) | ((((U64)(CONCAT11(uVar4,uVar5))) & ((U64)0xFFFF)) << 16));
                  piVar17[2] = iVar9 + 9;
                  uVar18 = (ulonglong)uVar11;
                  if (0xf < uVar18) {
                    uVar18 = 0xf;
                  }
                  piVar17[3] = 0;
                  iVar19 = iVar9 + 9 + iVar10;
                  uVar4 = *(undefined1 *)(iVar19 + 1);
                  uVar12 = CONCAT11(*(undefined1 *)(iVar19 + 3),*(undefined1 *)(iVar19 + 2));
                  piVar17[2] = iVar9 + 0xd;
                  uVar20 = (ulonglong)uVar12;
                  if (0xf < uVar20) {
                    uVar20 = 0xf;
                  }
                  puVar24 = (undefined1 *)(iVar10 + iVar9 + 0xd);
                  piVar17[3] = 0;
                  uVar5 = puVar24[2];
                  uVar6 = *puVar24;
                  uVar2 = puVar24[3];
                  uVar3 = puVar24[1];
                  piVar17[2] = iVar9 + 0x11;
                  dVar30 = (double)fn_82F6A7A0((double)(float)((double)(float)((double)(longlong)
                                                                                        CONCAT31(
                                                  CONCAT21(CONCAT11(uVar2,uVar5),uVar3),uVar6) *
                                                  dVar34) * dVar33),uVar32);
                  uStack_92 = (undefined2)(int)dVar30;
                  uVar16 = uStack_92;
                  if (piVar17[3] != 0) {
                    piVar17[2] = piVar17[2] + 1;
                  }
                  iVar9 = piVar17[2];
                  iVar10 = *piVar17;
                  piVar17[3] = 0;
                  iVar21 = iVar9 + 4;
                  iVar19 = iVar10 + iVar9;
                  uVar3 = *(undefined1 *)(iVar10 + iVar9);
                  uVar5 = *(undefined1 *)(iVar19 + 2);
                  uVar6 = *(undefined1 *)(iVar19 + 3);
                  uVar2 = *(undefined1 *)(iVar19 + 1);
                  piVar17[3] = 0;
                  piVar17[2] = iVar21;
                  uVar7 = *(undefined1 *)(iVar21 + iVar10);
                  bVar22 = *(byte *)(iVar21 + iVar10 + 1);
                  piVar17[2] = iVar9 + 6;
                  uVar13 = CONCAT11(bVar22,uVar7);
                  uStack_92 = (undefined2)
                              (int)((double)(float)((double)(longlong)
                                                            CONCAT31(CONCAT21(CONCAT11(uVar6,uVar5),
                                                                              uVar2),uVar3) * dVar34
                                                   ) * dVar31);
                  if (0xf < bVar22) {
                    bVar22 = 0xf;
                  }
                  piVar17[3] = 0;
                  bVar8 = *(byte *)(iVar10 + iVar9 + 6);
                  piVar17[2] = iVar9 + 7;
                  bVar27 = 0;
                  if ((bVar8 & 0x40) != 0) {
                    bVar27 = 0x20;
                  }
                  if ((bVar8 & 0x20) == 0) {
                    bVar27 = bVar27 | 0x40;
                  }
                  if (1 < (bVar8 & 0xf)) {
                    bVar27 = bVar27 | 0x80;
                  }
                  if (((!bVar28) && ((param_2 & 0xffffffff) != 0)) && ((uVar29 & 0xffffffff) < 4)) {
                    pbVar25 = (byte *)(iVar15 * 0xc + iVar14);
                    uVar29 = uVar29 + 1;
                    *pbVar25 = bVar27;
                    pbVar25[1] = (byte)(CONCAT21(uVar11,uVar1) >> 4) & 0xf | (byte)(uVar18 << 4);
                    pbVar25[2] = (byte)(CONCAT21(uVar12,uVar4) >> 4) & 0xf | (byte)(uVar20 << 4);
                    pbVar25[3] = bVar22 << 4 | (byte)(uVar13 >> 4) & 0xf;
                    *(undefined2 *)(pbVar25 + 4) = uVar16;
                    *(undefined2 *)(pbVar25 + 6) = uStack_92;
                    *(int *)(pbVar25 + 8) = uStack_80;
                  }
                  goto LAB_8278fa60;
                }
                goto LAB_8278fa28;
              }
              piVar17[3] = 0;
              bVar22 = *(byte *)(iVar10 + iVar19);
              piVar17[2] = iVar9 + 2;
              piVar17[3] = 0;
              bVar8 = *(byte *)(iVar9 + 2 + iVar10);
              piVar17[2] = iVar9 + 3;
              lVar23 = (longlong)(int)(uint)bVar8 * (longlong)(int)(uint)bVar22 * 4 + 0xd;
            }
            if (lVar23 == 0) goto LAB_8278fa60;
          }
LAB_8278fa4c:
          do {
            piVar17[3] = 0;
            piVar17[2] = piVar17[2] + 1;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
      }
LAB_8278fa60:
      if ((!bVar28) && ((uVar29 & 0xffffffff) == (param_3 & 0xffffffff))) {
        bVar28 = true;
      }
    } while (cVar26 != '\0');
  }
  fn_82F6A594(uVar29);
  return;
}

