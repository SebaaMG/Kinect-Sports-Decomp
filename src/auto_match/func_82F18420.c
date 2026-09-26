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
extern unsigned int *auStack_100;
extern unsigned int *auStack_e0;
extern int fn_82F14D98();
extern int fn_82F14DF0();
extern int fn_82F14E48();
extern int fn_82F18188();
extern int fn_82F262C8();
extern int fn_83143EB0();
extern unsigned int iStack_128;
extern unsigned int iStack_138;
extern unsigned int iStack_13c;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int lbl_831AE620;
extern unsigned int lbl_831AE760;
extern unsigned int lbl_831AE8A0;
extern unsigned int lbl_831AE9E0;
extern unsigned int lbl_831AEA20;
extern unsigned int lbl_831AEC68;
extern unsigned int lbl_831AEEB0;
extern unsigned int lbl_831AF0F8;
extern unsigned int lbl_831AF340;
extern unsigned int lbl_831AF598;
extern unsigned int lbl_831AF7F0;
extern unsigned int lbl_831AFA48;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_130;
extern unsigned int uStack_140;


void fn_82F18420(uint param_1)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong lVar19;
  uint *puVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uStack_140;
  int iStack_13c;
  int iStack_138;
  ulonglong uStack_130;
  int iStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_114;
  undefined *puStack_110;
  undefined *puStack_10c;
  uint auStack_100 [8];
  undefined1 auStack_e0 [8];
  int iStack_d8;
  int iStack_d4;
  
  uVar17 = 0;
  puVar18 = *(uint **)(param_1 + 0x1e54);
  *(undefined4 *)(param_1 + 0x1b30) = 0;
  *(undefined4 *)(param_1 + 0x1b2c) = 0;
  *(undefined4 *)(param_1 + 0x1b28) = 0;
  *(undefined4 *)(param_1 + 0x1b24) = 0;
  *(undefined4 *)(param_1 + 0x1b20) = 0;
  *(undefined4 *)(param_1 + 0x1b1c) = 0;
  iStack_128 = 0;
  *(undefined4 *)(param_1 + 0x1b18) = 0;
  *(undefined4 *)(param_1 + 0x1b14) = 0;
  uStack_124 = 0;
  if (0 < *(int *)(param_1 + 0x2d4)) {
    puStack_114 = &lbl_831AE9E0;
    puStack_10c = &lbl_831AE8A0;
    puStack_118 = &lbl_831AE760;
    puStack_110 = &lbl_831AE620;
    do {
      uVar16 = 0;
      if (0 < *(int *)(param_1 + 0x2d0)) {
        do {
          uVar23 = uStack_124;
          lVar25 = 6;
          uVar21 = 0;
          uVar15 = (((longlong)*(int *)(param_1 + 0x2d0) * (longlong)(int)uVar17 & 0x7fffffffU) * 2
                    + uVar16 & 0x7fffffff) << 1;
          iVar12 = 0;
          uStack_130 = CONCAT44((int)uVar15,(((U64)(uStack_130) >> 32) & 0xFFFFFFFF));
          lVar19 = (uVar15 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x914);
          puVar14 = auStack_100;
          puVar20 = puVar18;
          do {
            puVar20 = puVar20 + 1;
            cVar13 = *(char *)((int)puVar18 + iVar12 + 0x4a);
            *puVar14 = *puVar20;
            if (cVar13 != '\0') {
              *(undefined1 *)((int)puVar18 + iVar12 + 0x38) = 0;
            }
            cVar13 = *(char *)((int)puVar18 + iVar12 + 0x38);
            if (cVar13 == '\x01') {
              cVar13 = *(char *)((int)puVar18 + iVar12 + 0x80);
LAB_82f18590:
              *puVar20 = (int)cVar13;
              *puVar14 = (int)cVar13 + (-(uint)(cVar13 == '\0') - (cVar13 + -1));
            }
            else {
              if (cVar13 == '\x02') {
                cVar13 = *(char *)((int)puVar18 + iVar12 + 0x86);
                goto LAB_82f18590;
              }
              if (cVar13 == '\x04') {
                cVar13 = *(char *)((int)puVar18 + iVar12 + 0x8c);
                goto LAB_82f18590;
              }
            }
            uVar1 = *puVar14;
            if (uVar1 == 0) {
              *(undefined1 *)((int)puVar18 + iVar12 + 0x38) = 0;
            }
            *(char *)((int)puVar18 + iVar12 + 0x44) = (char)uVar1;
            uVar21 = uVar21 << 1 | uVar1;
            if (uVar1 == 0) {
              *(undefined1 *)((int)puVar18 + iVar12 + 0x38) = 0;
            }
            iVar12 = iVar12 + 1;
            puVar14 = puVar14 + 1;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          *(undefined1 *)((int)puVar18 + 0x93) = 0;
          *(char *)((int)puVar18 + 0x92) = (char)uVar21;
          *puVar18 = (uint)(LZCOUNT(uVar21) << 0x1a) & 0x80000000 | *puVar18 & 0x7fffffff;
          cVar13 = *(char *)(*(int *)(param_1 + 0x1a88) + uStack_124);
          if (cVar13 == '\x01') {
            lVar24 = (uVar17 & 0x7fffffff) * 2;
            lVar22 = (uVar16 & 0x7fffffff) * 2;
            uVar15 = ((longlong)*(int *)(param_1 + 0x2d0) * (longlong)(int)lVar24 & 0x7fffffffU) * 2
                     + lVar22;
            uVar7 = fn_82F18188(param_1,lVar22,lVar24,
                                      (uVar15 & 0x3fffffff) * 4 +
                                      (ulonglong)*(uint *)(param_1 + 0x914),0);
            uVar15 = uVar15 + 1;
            uVar8 = fn_82F18188(param_1,lVar22 + 1,lVar24,
                                      (uVar15 & 0x3fffffff) * 4 +
                                      (ulonglong)*(uint *)(param_1 + 0x914),0);
            lVar25 = ((((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar15) - 1 &
                     0x3fffffff) * 4;
            uVar9 = fn_82F18188(param_1,lVar22,lVar24 + 1,
                                      lVar25 + (ulonglong)*(uint *)(param_1 + 0x914),0);
            uVar10 = fn_82F18188(param_1,lVar22 + 1,lVar24 + 1,
                                       lVar25 + (ulonglong)*(uint *)(param_1 + 0x914) + 4,0);
            uVar15 = uStack_130 >> 0x20;
            uVar7 = (uVar10 & 0x3fffffff) << 2 |
                    (uVar9 & 0x1fffffff) << 3 | (uVar8 & 0xfffffff) << 4 | (uVar7 & 0x7ffffff) << 5;
LAB_82f186e4:
            *(char *)((int)puVar18 + 0x93) = (char)uVar7;
            uVar21 = uVar21 | (uint)uVar7;
LAB_82f186ec:
            if ((int)uVar7 != 0) goto LAB_82f18708;
LAB_82f186f4:
            if ((*puVar18 & 0x80000000) == 0) goto LAB_82f18708;
          }
          else {
            if (cVar13 == '\x05') {
              lVar25 = (uVar17 & 0x7fffffff) * 2;
              lVar22 = (uVar16 & 0x7fffffff) * 2;
              uVar7 = ((longlong)*(int *)(param_1 + 0x2d0) * (longlong)(int)lVar25 & 0x7fffffffU) *
                      2 + lVar22;
              iVar12 = fn_82F18188(param_1,lVar22,lVar25,
                                         (uVar7 & 0x3fffffff) * 4 +
                                         (ulonglong)*(uint *)(param_1 + 0x914),0);
              uStack_130 = CONCAT44(iVar12 << 5,(((U64)(uStack_130) >> 32) & 0xFFFFFFFF));
              uVar7 = fn_82F18188(param_1,lVar22,lVar25 + 1,
                                        (((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 +
                                         uVar7 & 0x3fffffff) * 4 +
                                        (ulonglong)*(uint *)(param_1 + 0x914),0);
              uVar7 = (uVar7 & 0x1fffffff) << 3 | uStack_130 >> 0x20;
              goto LAB_82f186e4;
            }
            if (cVar13 == '\x06') {
              lVar25 = (uVar17 & 0x7fffffff) << 1;
              lVar24 = (uVar16 & 0x7fffffff) * 2;
              lVar22 = (((longlong)*(int *)(param_1 + 0x2d0) * (longlong)(int)lVar25 & 0x7fffffffU)
                        * 2 + lVar24 & 0x3fffffff) * 4;
              iVar12 = fn_82F18188(param_1,lVar24,lVar25,
                                         lVar22 + (ulonglong)*(uint *)(param_1 + 0x914),0);
              uStack_130 = CONCAT44(iVar12 << 5,(((U64)(uStack_130) >> 32) & 0xFFFFFFFF));
              uVar7 = fn_82F18188(param_1,lVar24 + 1,lVar25,
                                        lVar22 + (ulonglong)*(uint *)(param_1 + 0x914) + 4,0);
              uVar7 = (uVar7 & 0xfffffff) << 4 | uStack_130 >> 0x20;
              goto LAB_82f186e4;
            }
            if (*(int *)(param_1 + 0xaf0) != 2) {
              uVar7 = fn_82F18188(param_1,(uVar16 & 0x7fffffff) << 1,
                                        (uVar17 & 0x7fffffff) << 1,lVar19,1);
              goto LAB_82f186ec;
            }
            uVar7 = ((ulonglong)uStack_124 & 0x3fffffff) * 4;
            lVar19 = uVar7 + *(uint *)(param_1 + 0x914);
            uStack_120 = uStack_120 & 0xffffffff;
            puVar20 = (uint *)lVar19;
            uVar1 = *puVar20;
            if (puVar18[0x1d] == 0) {
              *puVar20 = uVar1 & 0xfffffffb;
              iVar12 = (int)puVar18[0x17] >> 0x1c;
              if (iVar12 == 1) {
                *puVar20 = uVar1 & 0xffff000b;
                *(undefined2 *)puVar20 = 0;
              }
              else if ((iVar12 == 3) || (iVar12 == 2)) {
                if (*(int *)(param_1 + 4) == 8) {
                  fn_83143EB0(param_1,auStack_e0,uVar16,uVar17,
                                    *(undefined4 *)(param_1 + 0x9a0),
                                    *(undefined4 *)(param_1 + 0x9a4),1,0);
                  iStack_13c = iStack_d8;
                  iStack_138 = iStack_d4;
                }
                else {
                  fn_82F262C8(param_1,uVar16,uVar17,2,*(undefined4 *)(param_1 + 0x2d0),
                                  *(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x9a0),
                                  *(undefined4 *)(param_1 + 0x9a4));
                }
                iVar12 = uVar23 * 2;
                sVar2 = (short)*(undefined4 *)(param_1 + 0xa2c);
                *(ushort *)puVar20 =
                     ((*(short *)(iVar12 + *(int *)(param_1 + 0x9a0)) - (short)iStack_13c) + sVar2 &
                     (ushort)*(undefined4 *)(param_1 + 0xa34)) - sVar2;
                *puVar20 = *puVar20 & 0xffff000f |
                           (((*(short *)(iVar12 + *(int *)(param_1 + 0x9a4)) - iStack_138) +
                            *(int *)(param_1 + 0xa30)) * 0x10 & *(int *)(param_1 + 0xa38) << 4) +
                           *(int *)(param_1 + 0xa30) * -0x10 & 0xfff0U;
                if ((puVar18[0x17] & 0xf0000000) == 0x20000000) {
                  if (*(int *)(param_1 + 4) == 8) {
                    fn_83143EB0(param_1,auStack_e0,uVar16,uVar17,
                                      *(undefined4 *)(param_1 + 0x998),
                                      *(undefined4 *)(param_1 + 0x99c),1,0);
                    iStack_13c = iStack_d8;
                    iStack_138 = iStack_d4;
                  }
                  else {
                    fn_82F262C8(param_1,uVar16,uVar17,2,*(undefined4 *)(param_1 + 0x2d0),
                                    *(undefined4 *)(param_1 + 0x2d4),
                                    *(undefined4 *)(param_1 + 0x998),
                                    *(undefined4 *)(param_1 + 0x99c));
                  }
                  uVar23 = ((*(short *)(iVar12 + *(int *)(param_1 + 0x99c)) - iStack_138) +
                            *(uint *)(param_1 + 0xa30) & 0xfffffff &
                           *(uint *)(param_1 + 0xa38) & 0xfffffff) * 0x10 +
                           (*(uint *)(param_1 + 0xa30) & 0xfffffff) * -0x10 & 0xfff0;
                  uStack_140 = ((*(short *)(iVar12 + *(int *)(param_1 + 0x998)) - iStack_13c) +
                                *(uint *)(param_1 + 0xa2c) & 0xffff &
                               *(uint *)(param_1 + 0xa34) & 0xffff) * 0x10000 +
                               (*(uint *)(param_1 + 0xa2c) & 0xffff) * -0x10000 | uVar23;
                  if (*(int *)(param_1 + 0x89c) == 3) {
                    uStack_140 = (int)uStack_140 >> 1 & 0xffff0000U |
                                 (int)(uVar23 | (int)uStack_140 >> 1 & 0xffff0000U) >> 1 & 0xfff0U;
                  }
                  iVar12 = (int)uVar7;
                  *(short *)(iVar12 + *(int *)(param_1 + 0x1eb0)) = (short)(uStack_140 >> 0x10);
                  *(uint *)(iVar12 + *(int *)(param_1 + 0x1eb0)) =
                       *(uint *)(iVar12 + *(int *)(param_1 + 0x1eb0)) & 0xffff000f |
                       uStack_140 & 0xfff0;
                  uStack_130 = uVar7;
                  if (((uStack_140 & 0xffff0000) == 0) && ((uStack_140 & 0xfff0) == 0)) {
                    uStack_120 = (ulonglong)param_1;
                  }
                  else {
                    uStack_120 = CONCAT44(1,param_1);
                  }
                }
              }
              else if (iVar12 == 4) {
                if (*(int *)(param_1 + 4) == 8) {
                  fn_83143EB0(param_1,auStack_e0,uVar16,uVar17,
                                    *(undefined4 *)(param_1 + 0x998),
                                    *(undefined4 *)(param_1 + 0x99c),1,0);
                  iStack_13c = iStack_d8;
                  iStack_138 = iStack_d4;
                }
                else {
                  fn_82F262C8(param_1,uVar16,uVar17,2,*(undefined4 *)(param_1 + 0x2d0),
                                  *(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x998),
                                  *(undefined4 *)(param_1 + 0x99c));
                }
                iVar12 = uVar23 * 2;
                sVar2 = (short)*(undefined4 *)(param_1 + 0xa2c);
                *(ushort *)puVar20 =
                     ((*(short *)(iVar12 + *(int *)(param_1 + 0x998)) - (short)iStack_13c) + sVar2 &
                     (ushort)*(undefined4 *)(param_1 + 0xa34)) - sVar2;
                *puVar20 = *puVar20 & 0xffff000f |
                           (((*(short *)(iVar12 + *(int *)(param_1 + 0x99c)) - iStack_138) +
                            *(int *)(param_1 + 0xa30)) * 0x10 & *(int *)(param_1 + 0xa38) << 4) +
                           *(int *)(param_1 + 0xa30) * -0x10 & 0xfff0U;
              }
            }
            else {
              *puVar20 = uVar1 & 0xffff000b | 4;
              *(undefined2 *)puVar20 = 0;
            }
            if (*(int *)(param_1 + 0x89c) == 3) {
              *(short *)puVar20 = (short)((int)*puVar20 >> 0x11);
              *puVar20 = *puVar20 & 0xffff000f | (int)*puVar20 >> 1 & 0xfff0U;
            }
            uVar23 = *puVar20;
            *puVar20 = uVar23 & 0xfffffff4;
            if (((((uVar23 & 0xffff0000) == 0) && ((uVar23 & 0xfff0) == 0)) && ((uVar23 & 4) == 0))
               && (((puVar18[0x17] & 0xf0000000) != 0x20000000 || ((((U64)(uStack_120) >> 0) & 0xFFFFFFFF) == 0)))) {
              uVar7 = 0;
              goto LAB_82f186f4;
            }
            uVar7 = 1;
LAB_82f18708:
            uVar8 = (~(ulonglong)*puVar18 & 0xffffffff) >> 0x1f;
            *puVar18 = *puVar18 & 0x7fffffff;
            if (*(char *)(puVar18 + 0x16) == '\0') {
              iVar12 = (int)uVar8;
              if ((iVar12 == 0) && ((*(int *)(param_1 + 0xaf0) != 2 || ((((U64)(uStack_120) >> 0) & 0xFFFFFFFF) == 0)))) {
                iVar11 = 0;
              }
              else {
                iVar11 = 1;
              }
              uVar23 = *(uint *)lVar19;
              *(uint *)lVar19 = uVar23 & 0xfffffff7 | iVar11 << 3 | uVar23 & 8;
              if (0 < *(int *)(param_1 + 0x84c)) {
                uStack_140 = uStack_140 & 0xfffffff7 | (uint)(uVar8 << 3) | uStack_140 & 8;
              }
              if (((*(int *)(param_1 + 0x84c) == 0) || (*(int *)(param_1 + 0xaf0) != 2)) ||
                 ((puVar18[0x17] & 0xf0000000) != 0x10000000)) {
                if (*(int *)(param_1 + 0x7b3c) == 0) {
                  iVar11 = fn_82F14D98(*(undefined4 *)(param_1 + 0x1c18),8,lVar19);
                  puVar5 = &lbl_831AEA20;
                  puVar4 = &lbl_831AEC68;
                  puVar3 = &lbl_831AEEB0;
                  puVar6 = &lbl_831AF0F8;
                }
                else {
                  iVar11 = fn_82F14DF0();
                  puVar5 = &lbl_831AF340;
                  puVar4 = &lbl_831AF598;
                  puVar3 = &lbl_831AF7F0;
                  puVar6 = &lbl_831AFA48;
                }
                iVar11 = iVar11 * 8;
                *(int *)(param_1 + 0x1b14) =
                     *(int *)(puVar5 + iVar11 + 4) + *(int *)(param_1 + 0x1b14);
                *(int *)(param_1 + 0x1b18) =
                     *(int *)(puVar4 + iVar11 + 4) + *(int *)(param_1 + 0x1b18);
                *(int *)(param_1 + 0x1b1c) =
                     *(int *)(puVar3 + iVar11 + 4) + *(int *)(param_1 + 0x1b1c);
                *(int *)(param_1 + 0x1b20) =
                     *(int *)(puVar6 + iVar11 + 4) + *(int *)(param_1 + 0x1b20);
              }
              if ((iVar12 != 0) ||
                 (((*(int *)(param_1 + 0x84c) != 0 && (*(int *)(param_1 + 0xaf0) == 2)) &&
                  ((((U64)(uStack_120) >> 0) & 0xFFFFFFFF) != 0)))) {
                if ((*(int *)(param_1 + 0xaf0) == 2) && ((puVar18[0x17] & 0xf0000000) == 0x20000000)
                   ) {
                  iVar11 = fn_82F14D98(*(undefined4 *)(param_1 + 0x1c18),8,&uStack_140);
                  iVar11 = iVar11 * 8;
                  *(int *)(param_1 + 0x1b14) =
                       *(int *)(iVar11 + -0x7ce515dc) + *(int *)(param_1 + 0x1b14);
                  *(int *)(param_1 + 0x1b18) =
                       *(int *)(iVar11 + -0x7ce51394) + *(int *)(param_1 + 0x1b18);
                  *(int *)(param_1 + 0x1b1c) =
                       *(int *)(iVar11 + -0x7ce5114c) + *(int *)(param_1 + 0x1b1c);
                  *(int *)(param_1 + 0x1b20) =
                       *(int *)(iVar11 + -0x7ce50f04) + *(int *)(param_1 + 0x1b20);
                }
                if (iVar12 != 0) goto LAB_82f18f2c;
              }
            }
            else {
LAB_82f18f2c:
              *(uint *)(param_1 + 0x1b24) =
                   (uint)(byte)puStack_110[uVar21] + *(int *)(param_1 + 0x1b24);
              *(uint *)(param_1 + 0x1b28) =
                   (uint)(byte)puStack_118[uVar21] + *(int *)(param_1 + 0x1b28);
              *(uint *)(param_1 + 0x1b2c) =
                   (uint)(byte)puStack_10c[uVar21] + *(int *)(param_1 + 0x1b2c);
              *(uint *)(param_1 + 0x1b30) =
                   (uint)(byte)puStack_114[uVar21] + *(int *)(param_1 + 0x1b30);
              cVar13 = *(char *)(puVar18 + 0x16);
              if (cVar13 == '\x01') {
                uVar23 = 0;
                puVar20 = auStack_100;
                do {
                  uVar21 = *puVar20;
                  iVar11 = (int)uVar7;
                  lVar19 = ((longlong)(int)(uVar23 & 2) * (longlong)*(int *)(param_1 + 0x2d0) +
                            ((ulonglong)uVar23 & 1) + uVar15 & 0x3fffffff) * 4;
                  uVar7 = (uVar7 & 0x7fffffff) << 1;
                  iVar12 = (int)lVar19;
                  *(uint *)(iVar12 + *(int *)(param_1 + 0x914)) =
                       (uVar21 & 1) << 3 |
                       *(uint *)(iVar12 + *(int *)(param_1 + 0x914)) & 0xfffffff7;
                  if ((iVar11 >> 5 & 1U) != 0 || uVar21 != 0) {
                    if (*(int *)(param_1 + 0x7b3c) == 0) {
                      iVar12 = fn_82F14D98(*(undefined4 *)(param_1 + 0x1c18),8,
                                               lVar19 + (ulonglong)*(uint *)(param_1 + 0x914));
                      puVar5 = &lbl_831AEA20;
                      puVar4 = &lbl_831AEC68;
                      puVar3 = &lbl_831AEEB0;
                      puVar6 = &lbl_831AF0F8;
                    }
                    else {
                      iVar12 = fn_82F14DF0();
                      puVar5 = &lbl_831AF340;
                      puVar4 = &lbl_831AF598;
                      puVar3 = &lbl_831AF7F0;
                      puVar6 = &lbl_831AFA48;
                    }
                    iVar12 = iVar12 * 8;
                    *(int *)(param_1 + 0x1b14) =
                         *(int *)(puVar5 + iVar12 + 4) + *(int *)(param_1 + 0x1b14);
                    *(int *)(param_1 + 0x1b18) =
                         *(int *)(puVar4 + iVar12 + 4) + *(int *)(param_1 + 0x1b18);
                    *(int *)(param_1 + 0x1b1c) =
                         *(int *)(puVar3 + iVar12 + 4) + *(int *)(param_1 + 0x1b1c);
                    *(int *)(param_1 + 0x1b20) =
                         *(int *)(puVar6 + iVar12 + 4) + *(int *)(param_1 + 0x1b20);
                  }
                  uVar23 = uVar23 + 1;
                  puVar20 = puVar20 + 1;
                } while ((int)uVar23 < 4);
              }
              else if (cVar13 == '\x05') {
                uVar23 = 0;
                puVar20 = auStack_100;
                do {
                  uVar21 = *puVar20;
                  iVar11 = (int)uVar7;
                  lVar19 = ((longlong)(int)(uVar23 & 2) * (longlong)*(int *)(param_1 + 0x2d0) +
                            uVar15 & 0x3fffffff) * 4;
                  uVar7 = (uVar7 & 0x3fffffff) << 2;
                  iVar12 = (int)lVar19;
                  *(uint *)(iVar12 + *(int *)(param_1 + 0x914)) =
                       (uVar21 & 1) << 3 |
                       *(uint *)(iVar12 + *(int *)(param_1 + 0x914)) & 0xfffffff7;
                  if ((iVar11 >> 5 & 1U) != 0 || uVar21 != 0) {
                    if (*(int *)(param_1 + 0x7b3c) == 0) {
                      iVar12 = fn_82F14D98(*(undefined4 *)(param_1 + 0x1c18),8,
                                               lVar19 + (ulonglong)*(uint *)(param_1 + 0x914));
                      puVar5 = &lbl_831AEA20;
                      puVar4 = &lbl_831AEC68;
                      puVar3 = &lbl_831AEEB0;
                      puVar6 = &lbl_831AF0F8;
                    }
                    else {
                      iVar12 = fn_82F14DF0();
                      puVar5 = &lbl_831AF340;
                      puVar4 = &lbl_831AF598;
                      puVar3 = &lbl_831AF7F0;
                      puVar6 = &lbl_831AFA48;
                    }
                    iVar12 = iVar12 * 8;
                    *(int *)(param_1 + 0x1b14) =
                         *(int *)(puVar5 + iVar12 + 4) + *(int *)(param_1 + 0x1b14);
                    *(int *)(param_1 + 0x1b18) =
                         *(int *)(puVar4 + iVar12 + 4) + *(int *)(param_1 + 0x1b18);
                    *(int *)(param_1 + 0x1b1c) =
                         *(int *)(puVar3 + iVar12 + 4) + *(int *)(param_1 + 0x1b1c);
                    *(int *)(param_1 + 0x1b20) =
                         *(int *)(puVar6 + iVar12 + 4) + *(int *)(param_1 + 0x1b20);
                  }
                  uVar23 = uVar23 + 2;
                  puVar20 = puVar20 + 2;
                } while ((int)uVar23 < 4);
              }
              else if (cVar13 == '\x06') {
                uVar23 = 0;
                puVar20 = auStack_100;
                do {
                  uVar21 = *puVar20;
                  iVar11 = (int)uVar7;
                  lVar19 = ((longlong)(int)(uVar23 & 2) * (longlong)*(int *)(param_1 + 0x2d0) +
                            ((ulonglong)uVar23 & 1) + uVar15 & 0x3fffffff) * 4;
                  uVar7 = (uVar7 & 0x7fffffff) << 1;
                  iVar12 = (int)lVar19;
                  *(uint *)(iVar12 + *(int *)(param_1 + 0x914)) =
                       (uVar21 & 1) << 3 |
                       *(uint *)(iVar12 + *(int *)(param_1 + 0x914)) & 0xfffffff7;
                  if ((iVar11 >> 5 & 1U) != 0 || uVar21 != 0) {
                    if (*(int *)(param_1 + 0x7b3c) == 0) {
                      iVar12 = fn_82F14D98(*(undefined4 *)(param_1 + 0x1c18),8,
                                               lVar19 + (ulonglong)*(uint *)(param_1 + 0x914));
                      puVar5 = &lbl_831AEA20;
                      puVar4 = &lbl_831AEC68;
                      puVar3 = &lbl_831AEEB0;
                      puVar6 = &lbl_831AF0F8;
                    }
                    else {
                      iVar12 = fn_82F14DF0();
                      puVar5 = &lbl_831AF340;
                      puVar4 = &lbl_831AF598;
                      puVar3 = &lbl_831AF7F0;
                      puVar6 = &lbl_831AFA48;
                    }
                    iVar12 = iVar12 * 8;
                    *(int *)(param_1 + 0x1b14) =
                         *(int *)(puVar5 + iVar12 + 4) + *(int *)(param_1 + 0x1b14);
                    *(int *)(param_1 + 0x1b18) =
                         *(int *)(puVar4 + iVar12 + 4) + *(int *)(param_1 + 0x1b18);
                    *(int *)(param_1 + 0x1b1c) =
                         *(int *)(puVar3 + iVar12 + 4) + *(int *)(param_1 + 0x1b1c);
                    *(int *)(param_1 + 0x1b20) =
                         *(int *)(puVar6 + iVar12 + 4) + *(int *)(param_1 + 0x1b20);
                  }
                  uVar23 = uVar23 + 1;
                  puVar20 = puVar20 + 1;
                } while ((int)uVar23 < 2);
              }
            }
          }
          uVar23 = *puVar18;
          uVar16 = uVar16 + 1;
          puVar18 = puVar18 + 0x45;
          uStack_124 = uStack_124 + 1;
          iStack_128 = iStack_128 - ((int)uVar23 >> 0x1f);
        } while ((int)uVar16 < *(int *)(param_1 + 0x2d0));
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < *(int *)(param_1 + 0x2d4));
  }
  *(int *)(param_1 + 0x4c10) = iStack_128;
  if ((((*(int *)(param_1 + 8) == 0) && (0 < *(int *)(param_1 + 0x84c))) ||
      (*(int *)(param_1 + 0xaf0) == 2)) ||
     ((*(int *)(param_1 + 0xaf0) == 4 || (*(int *)(param_1 + 0x8a0) != 0)))) {
    *(undefined4 *)(param_1 + 0x202c) = 0;
  }
  else {
    *(uint *)(param_1 + 0x202c) = (uint)(*(int *)(param_1 + 0x2d8) == iStack_128);
  }
  fn_82F14E48(*(undefined4 *)(param_1 + 0x1c18),*(undefined4 *)(param_1 + 0x588),1);
  return;
}

