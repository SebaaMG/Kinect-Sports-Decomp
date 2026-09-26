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
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_80;
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E9188();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6A7A0();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82015600;
extern unsigned int lbl_82015608;
extern unsigned int lbl_82054148;
extern unsigned int uStack_82;
extern unsigned int uStack_84;
extern unsigned int uStack_92;


void fn_8278EA40(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte *pbVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  char cVar17;
  int iVar15;
  ulonglong uVar13;
  undefined1 *puVar16;
  byte bVar18;
  ulonglong uVar14;
  byte bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  undefined2 uStack_92;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined4 auStack_80 [32];
  
  iVar10 = fn_82F6A548();
  *(undefined1 *)(iVar10 + 0x15) = 0;
  if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 1) {
    fn_826E7990();
  }
  uVar20 = 0;
  bVar6 = false;
  cVar17 = *(char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
  *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 1;
  if (cVar17 != '\0') {
    dVar23 = (double)lbl_8200571C;
    dVar25 = (double)lbl_82015608;
    dVar26 = (double)lbl_82054148;
    uVar21 = param_2;
    uVar24 = lbl_82015600;
    do {
      cVar17 = cVar17 + -1;
      *(undefined1 *)(iVar10 + 0x15) = 0;
      if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 1) {
        fn_826E7990(iVar10);
      }
      iVar11 = *(int *)(iVar10 + 0x2c) + 1;
      bVar19 = *(byte *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
      bStack_85 = 0x10;
      uStack_84 = 0;
      *(int *)(iVar10 + 0x2c) = iVar11;
      uStack_82 = 0;
      auStack_80[0] = 0;
      if (bVar19 < 8) {
        pbVar5 = (byte *)uVar21;
        if (bVar19 == 1) {
          *(undefined1 *)(iVar10 + 0x15) = 0;
          if (*(int *)(iVar10 + 0x30) - iVar11 < 4) {
            fn_826E7800(iVar10,4);
          }
          iVar11 = *(int *)(iVar10 + 0x2c) + 4;
          iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
          uVar1 = *(undefined1 *)(iVar15 + 1);
          uVar7 = CONCAT11(*(undefined1 *)(iVar15 + 3),*(undefined1 *)(iVar15 + 2));
          *(int *)(iVar10 + 0x2c) = iVar11;
          uVar13 = (ulonglong)uVar7;
          if (0xf < uVar13) {
            uVar13 = 0xf;
          }
          *(undefined1 *)(iVar10 + 0x15) = 0;
          bStack_87 = (byte)(CONCAT21(uVar7,uVar1) >> 4) & 0xf | (byte)(uVar13 << 4);
          if (*(int *)(iVar10 + 0x30) - iVar11 < 4) {
            fn_826E7800(iVar10,4);
          }
          iVar11 = *(int *)(iVar10 + 0x2c) + 4;
          iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
          uVar1 = *(undefined1 *)(iVar15 + 1);
          uVar7 = CONCAT11(*(undefined1 *)(iVar15 + 3),*(undefined1 *)(iVar15 + 2));
          *(int *)(iVar10 + 0x2c) = iVar11;
          uVar13 = (ulonglong)uVar7;
          if (0xf < uVar13) {
            uVar13 = 0xf;
          }
          *(undefined1 *)(iVar10 + 0x15) = 0;
          bStack_86 = (byte)(CONCAT21(uVar7,uVar1) >> 4) & 0xf | (byte)(uVar13 << 4);
          if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
            fn_826E7990(iVar10);
          }
          bVar18 = *(byte *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
          *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 1;
          bVar18 = -(8 < (bVar18 & 0xf8)) & 0x80;
LAB_8278ee4c:
          if (((!bVar6) && ((param_2 & 0xffffffff) != 0)) && ((uVar20 & 0xffffffff) < 4)) {
            *pbVar5 = bVar18 | bVar19;
            pbVar5[1] = bStack_87;
            pbVar5[2] = bStack_86;
            pbVar5[3] = bStack_85;
            *(undefined2 *)(pbVar5 + 4) = uStack_84;
            *(undefined2 *)(pbVar5 + 6) = uStack_82;
LAB_8278ee94:
            uVar21 = uVar21 + 0xc;
            uVar20 = uVar20 + 1;
            *(undefined4 *)(pbVar5 + 8) = auStack_80[0];
          }
        }
        else if (bVar19 == 2) {
          fn_826E9188(iVar10,auStack_80);
          *(undefined1 *)(iVar10 + 0x15) = 0;
          if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 4) {
            fn_826E7800(iVar10,4);
          }
          iVar11 = *(int *)(iVar10 + 0x2c) + 4;
          iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
          uVar1 = *(undefined1 *)(iVar15 + 1);
          uVar7 = CONCAT11(*(undefined1 *)(iVar15 + 3),*(undefined1 *)(iVar15 + 2));
          *(int *)(iVar10 + 0x2c) = iVar11;
          uVar13 = (ulonglong)uVar7;
          if (0xf < uVar13) {
            uVar13 = 0xf;
          }
          *(undefined1 *)(iVar10 + 0x15) = 0;
          if (*(int *)(iVar10 + 0x30) - iVar11 < 4) {
            fn_826E7800(iVar10,4);
          }
          iVar11 = *(int *)(iVar10 + 0x2c) + 4;
          iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
          uVar2 = *(undefined1 *)(iVar15 + 1);
          uVar8 = CONCAT11(*(undefined1 *)(iVar15 + 3),*(undefined1 *)(iVar15 + 2));
          *(int *)(iVar10 + 0x2c) = iVar11;
          uVar14 = (ulonglong)uVar8;
          if (0xf < uVar14) {
            uVar14 = 0xf;
          }
          *(undefined1 *)(iVar10 + 0x15) = 0;
          if (*(int *)(iVar10 + 0x30) - iVar11 < 2) {
            fn_826E7800(iVar10,2);
          }
          iVar11 = *(int *)(iVar10 + 0x2c) + 2;
          puVar16 = (undefined1 *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
          bVar19 = puVar16[1];
          uVar3 = *puVar16;
          *(int *)(iVar10 + 0x2c) = iVar11;
          uVar9 = CONCAT11(bVar19,uVar3);
          if (0xf < bVar19) {
            bVar19 = 0xf;
          }
          *(undefined1 *)(iVar10 + 0x15) = 0;
          if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
            fn_826E7990(iVar10);
          }
          bVar12 = 0;
          bVar18 = *(byte *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
          *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 1;
          if ((bVar18 & 0x40) != 0) {
            bVar12 = 0x20;
          }
          if ((bVar18 & 0x20) == 0) {
            bVar12 = bVar12 | 0x40;
          }
          if (1 < (bVar18 & 0xf)) {
            bVar12 = bVar12 | 0x80;
          }
          if (((!bVar6) && ((param_2 & 0xffffffff) != 0)) && ((uVar20 & 0xffffffff) < 4)) {
            *pbVar5 = bVar12 | 2;
            pbVar5[4] = 0;
            pbVar5[5] = 0;
            pbVar5[1] = (byte)(CONCAT21(uVar7,uVar1) >> 4) & 0xf | (byte)(uVar13 << 4);
            pbVar5[2] = (byte)(CONCAT21(uVar8,uVar2) >> 4) & 0xf | (byte)(uVar14 << 4);
            pbVar5[3] = bVar19 << 4 | (byte)(uVar9 >> 4) & 0xf;
            pbVar5[6] = 0;
            pbVar5[7] = 0;
            goto LAB_8278ee94;
          }
        }
        else {
          if (bVar19 == 3) {
            iVar15 = 0x1b;
            goto LAB_8278f228;
          }
          if (bVar19 == 4) {
LAB_8278f300:
            *(undefined1 *)(iVar10 + 0x15) = 0;
            if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
              fn_826E7990(iVar10);
            }
            iVar11 = *(int *)(iVar10 + 0x2c) + 1;
            iVar15 = (uint)*(byte *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c)) * 5 + 0x13;
          }
          else {
            if (bVar19 != 5) {
              if (bVar19 == 6) {
                iVar15 = 0x50;
                goto LAB_8278f228;
              }
              if (bVar19 == 0) {
                fn_826E9188(iVar10,auStack_80);
                *(undefined1 *)(iVar10 + 0x15) = 0;
                if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 4) {
                  fn_826E7800(iVar10,4);
                }
                iVar11 = *(int *)(iVar10 + 0x2c) + 4;
                iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
                uVar1 = *(undefined1 *)(iVar15 + 1);
                uVar7 = CONCAT11(*(undefined1 *)(iVar15 + 3),*(undefined1 *)(iVar15 + 2));
                *(int *)(iVar10 + 0x2c) = iVar11;
                uVar13 = (ulonglong)uVar7;
                if (0xf < uVar13) {
                  uVar13 = 0xf;
                }
                *(undefined1 *)(iVar10 + 0x15) = 0;
                bStack_87 = (byte)(CONCAT21(uVar7,uVar1) >> 4) & 0xf | (byte)(uVar13 << 4);
                if (*(int *)(iVar10 + 0x30) - iVar11 < 4) {
                  fn_826E7800(iVar10,4);
                }
                iVar11 = *(int *)(iVar10 + 0x2c) + 4;
                iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
                uVar1 = *(undefined1 *)(iVar15 + 1);
                uVar7 = CONCAT11(*(undefined1 *)(iVar15 + 3),*(undefined1 *)(iVar15 + 2));
                *(int *)(iVar10 + 0x2c) = iVar11;
                uVar13 = (ulonglong)uVar7;
                if (0xf < uVar13) {
                  uVar13 = 0xf;
                }
                *(undefined1 *)(iVar10 + 0x15) = 0;
                bStack_86 = (byte)(CONCAT21(uVar7,uVar1) >> 4) & 0xf | (byte)(uVar13 << 4);
                if (*(int *)(iVar10 + 0x30) - iVar11 < 4) {
                  fn_826E7800(iVar10,4);
                }
                puVar16 = (undefined1 *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
                uVar1 = puVar16[3];
                uVar2 = puVar16[2];
                uVar3 = puVar16[1];
                uVar4 = *puVar16;
                *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 4;
                dVar22 = (double)fn_82F6A7A0((double)(float)((double)(float)((double)(longlong)
                                                                                      CONCAT31(
                                                  CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4) *
                                                  dVar26) * dVar25),uVar24);
                uStack_92 = (undefined2)(int)dVar22;
                uStack_84 = uStack_92;
                *(undefined1 *)(iVar10 + 0x15) = 0;
                if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 4) {
                  fn_826E7800(iVar10,4);
                }
                iVar11 = *(int *)(iVar10 + 0x2c) + 4;
                puVar16 = (undefined1 *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
                uVar1 = puVar16[3];
                uVar2 = puVar16[2];
                uVar3 = puVar16[1];
                uVar4 = *puVar16;
                *(int *)(iVar10 + 0x2c) = iVar11;
                *(undefined1 *)(iVar10 + 0x15) = 0;
                uStack_92 = (undefined2)
                            (int)((double)(float)((double)(longlong)
                                                          CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),
                                                                            uVar3),uVar4) * dVar26)
                                 * dVar23);
                uStack_82 = uStack_92;
                if (*(int *)(iVar10 + 0x30) - iVar11 < 2) {
                  fn_826E7800(iVar10,2);
                }
                iVar11 = *(int *)(iVar10 + 0x2c) + 2;
                puVar16 = (undefined1 *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
                bVar18 = puVar16[1];
                uVar1 = *puVar16;
                *(int *)(iVar10 + 0x2c) = iVar11;
                uVar7 = CONCAT11(bVar18,uVar1);
                if (0xf < bVar18) {
                  bVar18 = 0xf;
                }
                *(undefined1 *)(iVar10 + 0x15) = 0;
                bStack_85 = bVar18 << 4 | (byte)(uVar7 >> 4) & 0xf;
                if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
                  fn_826E7990(iVar10);
                }
                bVar18 = 0;
                bVar12 = *(byte *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
                *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 1;
                if ((bVar12 & 0x40) != 0) {
                  bVar18 = 0x20;
                }
                if ((bVar12 & 0x20) == 0) {
                  bVar18 = bVar18 | 0x40;
                }
                if (1 < (bVar12 & 0xf)) {
                  bVar18 = bVar18 | 0x80;
                }
                goto LAB_8278ee4c;
              }
              goto LAB_8278f300;
            }
            *(undefined1 *)(iVar10 + 0x15) = 0;
            if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
              fn_826E7990(iVar10);
            }
            iVar11 = *(int *)(iVar10 + 0x2c) + 1;
            bVar19 = *(byte *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
            *(int *)(iVar10 + 0x2c) = iVar11;
            *(undefined1 *)(iVar10 + 0x15) = 0;
            if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
              fn_826E7990(iVar10);
            }
            iVar11 = *(int *)(iVar10 + 0x2c) + 1;
            iVar15 = (uint)*(byte *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c)) *
                     (uint)bVar19 * 4 + 0xd;
          }
          while (*(int *)(iVar10 + 0x2c) = iVar11, iVar15 != 0) {
LAB_8278f228:
            iVar15 = iVar15 + -1;
            *(undefined1 *)(iVar10 + 0x15) = 0;
            if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
              fn_826E7990(iVar10);
            }
            iVar11 = *(int *)(iVar10 + 0x2c) + 1;
          }
        }
      }
      if ((!bVar6) && ((uVar20 & 0xffffffff) == (param_3 & 0xffffffff))) {
        bVar6 = true;
      }
    } while (cVar17 != '\0');
  }
  fn_82F6A594(uVar20);
  return;
}

