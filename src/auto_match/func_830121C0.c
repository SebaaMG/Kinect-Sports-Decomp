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
#define CONCAT41(h,l) ((U64)((((U32)(h)) << 8) | ((U8)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define CONCAT51(h,l) ((U64)((((U64)(h)) << 8) | ((U8)(l))))
#define CONCAT61(h,l) ((U64)((((U64)(h)) << 8) | ((U8)(l))))
#define CONCAT71(h,l) ((U64)((((U64)(h)) << 8) | ((U8)(l))))
extern unsigned int fStack_140;
extern unsigned int fStack_144;
extern unsigned int fStack_148;
extern unsigned int fStack_14c;
extern unsigned int fStack_150;
extern unsigned int fStack_154;
extern unsigned int fStack_158;
extern unsigned int fStack_15c;
extern int fn_82A1E810();
extern int fn_82F68CC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FAB9C0();
extern int fn_82FF2FF0();
extern int fn_82FF5198();
extern int fn_82FF6360();
extern int fn_82FF6CD0();
extern int fn_82FFBCA8();
extern int fn_830087C8();
extern int fn_83009E78();
extern int fn_8300DAE8();
extern int fn_8300DEB0();
extern int fn_8300E110();
extern int fn_8300F508();
extern int fn_8300FCF0();
extern int fn_8300FDB8();
extern int fn_83010288();
extern int fn_830120B8();
extern int fn_830142B8();
extern int fn_830148C8();
extern int fn_83014BF8();
extern int fn_83014C98();
extern int fn_83014CA0();
extern int fn_83014D58();
extern int fn_83014E68();
extern int fn_83015688();
extern int fn_830157D8();
extern int fn_83017020();
extern int fn_830171D8();
extern int fn_83017C20();
extern int fn_830189E8();
extern int fn_83018CD8();
extern int fn_8301A7B8();
extern int fn_8301A830();
extern int fn_8301A938();
extern int fn_8301A9D8();
extern int fn_8301AA90();
extern int fn_8301AB88();
extern int fn_8301AC00();
extern int fn_8301AC70();
extern int fn_8301ACE0();
extern int fn_8301AD50();
extern int fn_8301E4B8();
extern int fn_8301EC10();
extern int fn_8301EDA8();
extern int fn_8301EE38();
extern int fn_8301EF68();
extern int fn_8302C0F0();
extern int fn_83037A88();
extern int fn_83037B98();
extern int fn_83038078();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820145F8;
extern unsigned int lbl_8217C358;
extern unsigned int lbl_8217C35C;
extern unsigned int lbl_821968A4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E8;
extern unsigned int lbl_832642EC;
extern unsigned int lbl_832642FC;
extern unsigned int lbl_83264300;
extern unsigned int lbl_83264304;
extern unsigned int lbl_832643DC;
extern unsigned int lbl_832645D0;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_169;
extern unsigned int uStack_16a;
extern unsigned int uStack_16b;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_180;
extern unsigned int uStack_bc;


void fn_830121C0(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar12;
  ushort *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int *piVar16;
  ulonglong uVar10;
  undefined4 *puVar17;
  int iVar18;
  undefined ***pppuVar19;
  undefined8 uVar11;
  ushort *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  double extraout_f1;
  double extraout_f1_00;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined4 uStack_180;
  undefined4 *puStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined1 uStack_16c;
  undefined1 uStack_16b;
  undefined1 uStack_16a;
  undefined1 uStack_169;
  undefined4 uStack_164;
  uint uStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined **ppuStack_130;
  undefined **ppuStack_12c;
  undefined4 *puStack_fc;
  undefined **ppuStack_f0;
  undefined **ppuStack_ec;
  undefined4 uStack_bc;
  
  iVar12 = fn_82F6A548();
  if ((*(char *)(iVar12 + 0x44) != '\0') || (*(int *)(iVar12 + 0x94) != *(int *)(iVar12 + 0x98))) {
    bVar8 = false;
    RtlEnterCriticalSection(iVar12 + 4);
    dVar25 = (double)lbl_820145F8;
    dVar26 = (double)lbl_82002AE0;
    dVar27 = (double)lbl_821AAD20;
    do {
      uVar21 = 0;
      uStack_160 = 0;
      if (((*(int *)(iVar12 + 0x30) != *(int *)(iVar12 + 0x38)) ||
          (*(int *)(iVar12 + 0x34) != *(int *)(iVar12 + 0x3c))) ||
         (bVar9 = true, *(char *)(iVar12 + 0x40) != '\0')) {
        bVar9 = false;
      }
      if (bVar9) break;
      puVar13 = (ushort *)fn_83037B98(iVar12 + 0x20,&uStack_160);
      piVar14 = (int *)RtlLeaveCriticalSection(iVar12 + 4);
      do {
        piVar16 = lbl_832645D0;
        switch(puVar13[1]) {
        case 0:
          iVar18 = *(int *)(iVar12 + 0x98) + 1;
          *(int *)(iVar12 + 0x98) = iVar18;
          bVar8 = *(int *)(iVar12 + 0x94) == iVar18;
          break;
        case 1:
          puVar17 = (undefined4 *)fn_8301A7B8(lbl_832642EC,*(undefined4 *)(puVar13 + 2));
          piVar14 = *(int **)(*(int *)(puVar13 + 0xe) + 0x10);
          if (piVar14 != *(int **)(*(int *)(puVar13 + 0xe) + 0x14)) {
            do {
              iVar18 = *piVar14;
              if ((*(uint *)(iVar18 + 0x14) & 0x100) == 0) {
                puVar15 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x38);
                if (puVar15 != (undefined4 *)0x0) {
                  puVar15[1] = &lbl_821968A4;
                  *puVar15 = &lbl_8217C35C;
                  puVar15[1] = &lbl_8217C358;
                  puVar15[0xd] = 0;
                  goto LAB_83012428;
                }
              }
              else if ((puVar17 != (undefined4 *)0x0) &&
                      (puVar15 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x38),
                      puVar15 != (undefined4 *)0x0)) {
                puVar15[1] = &lbl_821968A4;
                *puVar15 = &lbl_8217C35C;
                puVar15[1] = &lbl_8217C358;
                puVar15[0xd] = puVar17;
                puVar17[0x17] = puVar17[0x17] + 1;
LAB_83012428:
                if (puVar15 != (undefined4 *)0x0) {
                  puVar15[2] = iVar18;
                  fn_82F68CC0(puVar15 + 6,puVar13 + 6,0x10);
                  puVar15[10] = *(undefined4 *)(puVar13 + 4);
                  fn_8300FCF0(iVar12,puVar15);
                }
              }
              piVar14 = piVar14 + 1;
            } while (piVar14 != *(int **)(*(int *)(puVar13 + 0xe) + 0x14));
          }
          if ((puVar17 != (undefined4 *)0x0) &&
             (uVar23 = puVar17[0x17], puVar17[0x17] = (int)((ulonglong)uVar23 - 1),
             uVar7 = lbl_831BC768, (longlong)((ulonglong)uVar23 - 1) < 1)) {
            (**(code **)*puVar17)(puVar17,0);
            fn_82FA5190(uVar7,puVar17);
          }
          fn_82FF5198(lbl_83264304,*(undefined4 *)(puVar13 + 4));
          piVar14 = (int *)(**(code **)(**(int **)(puVar13 + 0xe) + 8))();
          break;
        case 2:
          if (*(int *)(puVar13 + 6) == -1) {
            fStack_14c = *(float *)(puVar13 + 4);
            piVar14 = (int *)fn_83018CD8((double)fStack_14c,lbl_832642FC,
                                               *(undefined4 *)(puVar13 + 2));
          }
          else {
            piVar16 = (int *)fn_8301A7B8(lbl_832642EC);
            piVar14 = piVar16;
            if (piVar16 != (int *)0x0) {
              fStack_148 = *(float *)(puVar13 + 4);
              piVar14 = (int *)fn_83018CD8((double)fStack_148,lbl_832642FC,
                                                 *(undefined4 *)(puVar13 + 2));
              uVar23 = piVar16[0x17];
              piVar16[0x17] = (int)((ulonglong)uVar23 - 1);
              uVar7 = lbl_831BC768;
              if ((longlong)((ulonglong)uVar23 - 1) < 1) {
                (**(code **)*piVar16)(piVar16,0);
                piVar14 = (int *)fn_82FA5190(uVar7,piVar16);
              }
            }
          }
          break;
        case 3:
          piVar14 = (int *)fn_82FF6CD0(lbl_832642E8,*(undefined4 *)(puVar13 + 2),
                                         *(undefined4 *)(puVar13 + 4),*(undefined1 *)(puVar13 + 6),
                                         *(undefined1 *)((int)puVar13 + 0xd));
          break;
        case 4:
          piVar16 = (int *)fn_8301A7B8(lbl_832642EC,*(undefined4 *)(puVar13 + 2));
          piVar14 = piVar16;
          if (piVar16 != (int *)0x0) {
            piVar14 = (int *)fn_83017020(lbl_832642FC,*(undefined4 *)(puVar13 + 4),
                                               *(undefined4 *)(puVar13 + 6),piVar16);
            uVar23 = piVar16[0x17];
            piVar16[0x17] = (int)((ulonglong)uVar23 - 1);
            uVar7 = lbl_831BC768;
            if ((longlong)((ulonglong)uVar23 - 1) < 1) {
              (**(code **)*piVar16)(piVar16,0);
              piVar14 = (int *)fn_82FA5190(uVar7,piVar16);
            }
          }
          break;
        case 5:
          if (*(int *)(puVar13 + 2) == -1) {
            piVar14 = (int *)fn_82FF6360(lbl_832642E8,*(undefined4 *)(puVar13 + 4),0);
          }
          else {
            piVar16 = (int *)fn_8301A7B8(lbl_832642EC);
            piVar14 = piVar16;
            if (piVar16 != (int *)0x0) {
              piVar14 = (int *)fn_82FF6360(lbl_832642E8,*(undefined4 *)(puVar13 + 4),piVar16);
              uVar23 = piVar16[0x17];
              piVar16[0x17] = (int)((ulonglong)uVar23 - 1);
              uVar7 = lbl_831BC768;
              if ((longlong)((ulonglong)uVar23 - 1) < 1) {
                (**(code **)*piVar16)(piVar16,0);
                piVar14 = (int *)fn_82FA5190(uVar7,piVar16);
              }
            }
          }
          break;
        case 6:
          piVar14 = (int *)fn_8301A830(lbl_832642EC,*(undefined4 *)(puVar13 + 2),
                                             *(undefined4 *)(puVar13 + 4));
          break;
        case 7:
          if (*(int *)(puVar13 + 2) == -1) {
            piVar14 = (int *)fn_8301AD50();
          }
          else {
            piVar14 = (int *)fn_8301A938(lbl_832642EC);
          }
          break;
        case 8:
          piVar14 = (int *)fn_8301A9D8(lbl_832642EC,*(undefined4 *)(puVar13 + 2),puVar13 + 4,1
                                             ,0,*(undefined4 *)(puVar13 + 0x10));
          break;
        case 9:
          piVar14 = (int *)fn_8301AA90(lbl_832642EC,*(undefined4 *)(puVar13 + 2),
                                             *(undefined4 *)(puVar13 + 4));
          break;
        case 0xb:
          piVar14 = (int *)fn_8301EC10(*(undefined4 *)(puVar13 + 2),puVar13 + 4);
          break;
        case 0xc:
          puVar20 = puVar13 + 4;
          if (*(char *)((int)puVar13 + 0x21) == '\0') {
            puVar20 = (ushort *)0x0;
          }
          piVar14 = (int *)fn_8301EE38(*(undefined4 *)(puVar13 + 2),*(undefined1 *)(puVar13 + 0x10)
                                        ,puVar20);
          break;
        case 0xd:
          piVar14 = (int *)fn_8301AB88(lbl_832642EC,*(undefined4 *)(puVar13 + 2),puVar13 + 6,
                                        *(undefined4 *)(puVar13 + 4));
          break;
        case 0xe:
          fStack_154 = *(float *)(puVar13 + 4);
          piVar14 = (int *)fn_8301AC00((double)fStack_154,lbl_832642EC,*(undefined4 *)(puVar13 + 2)
                                       );
          break;
        case 0xf:
          piVar14 = (int *)fn_83015688(lbl_83264300,*(undefined4 *)(puVar13 + 2),puVar13 + 4);
          break;
        case 0x10:
          piVar14 = (int *)fn_830157D8(lbl_83264300,*(undefined4 *)(puVar13 + 2),
                                             *(undefined1 *)(puVar13 + 4));
          break;
        case 0x11:
          fStack_140 = *(float *)(puVar13 + 6);
          fStack_158 = *(float *)(puVar13 + 8);
          piVar14 = (int *)fn_8301ACE0((double)fStack_140,(double)fStack_158,lbl_832642EC,
                                        *(undefined4 *)(puVar13 + 2),*(undefined4 *)(puVar13 + 4));
          break;
        case 0x12:
          if (*(int *)(puVar13 + 2) == -1) {
            piVar14 = (int *)fn_830171D8(lbl_832642FC,0);
          }
          else {
            piVar16 = (int *)fn_8301A7B8(lbl_832642EC);
            piVar14 = piVar16;
            if (piVar16 != (int *)0x0) {
              piVar14 = (int *)fn_830171D8(lbl_832642FC,piVar16);
              uVar23 = piVar16[0x17];
              piVar16[0x17] = (int)((ulonglong)uVar23 - 1);
              uVar7 = lbl_831BC768;
              if ((longlong)((ulonglong)uVar23 - 1) < 1) {
                (**(code **)*piVar16)(piVar16,0);
                piVar14 = (int *)fn_82FA5190(uVar7,piVar16);
              }
            }
          }
          break;
        case 0x13:
          if (*(int *)(puVar13 + 2) == -1) {
            piVar14 = (int *)fn_83017C20(lbl_832642FC,0);
          }
          else {
            piVar16 = (int *)fn_8301A7B8(lbl_832642EC);
            piVar14 = piVar16;
            if (piVar16 != (int *)0x0) {
              piVar14 = (int *)fn_83017C20(lbl_832642FC,piVar16);
              uVar23 = piVar16[0x17];
              piVar16[0x17] = (int)((ulonglong)uVar23 - 1);
              uVar7 = lbl_831BC768;
              if ((longlong)((ulonglong)uVar23 - 1) < 1) {
                (**(code **)*piVar16)(piVar16,0);
                piVar14 = (int *)fn_82FA5190(uVar7,piVar16);
              }
            }
          }
          break;
        case 0x14:
          if (*(int *)(puVar13 + 4) == -1) {
            piVar14 = (int *)fn_830189E8(lbl_832642FC,*(undefined4 *)(puVar13 + 2),0);
          }
          else {
            piVar16 = (int *)fn_8301A7B8(lbl_832642EC);
            piVar14 = piVar16;
            if (piVar16 != (int *)0x0) {
              piVar14 = (int *)fn_830189E8(lbl_832642FC,*(undefined4 *)(puVar13 + 2),piVar16);
              uVar23 = piVar16[0x17];
              piVar16[0x17] = (int)((ulonglong)uVar23 - 1);
              uVar7 = lbl_831BC768;
              if ((longlong)((ulonglong)uVar23 - 1) < 1) {
                (**(code **)*piVar16)(piVar16,0);
                piVar14 = (int *)fn_82FA5190(uVar7,piVar16);
              }
            }
          }
          break;
        case 0x16:
          piVar16 = (int *)fn_8301A7B8(lbl_832642EC,*(undefined4 *)(puVar13 + 2));
          piVar14 = piVar16;
          if (piVar16 != (int *)0x0) {
            piVar14 = (int *)fn_830142B8(*(undefined4 *)(puVar13 + 0xe),piVar16);
            uVar23 = piVar16[0x17];
            piVar16[0x17] = (int)((ulonglong)uVar23 - 1);
            uVar7 = lbl_831BC768;
            if ((longlong)((ulonglong)uVar23 - 1) < 1) {
              (**(code **)*piVar16)(piVar16,0);
              piVar14 = (int *)fn_82FA5190(uVar7,piVar16);
            }
          }
          break;
        case 0x17:
          uVar23 = *(uint *)(puVar13 + 4);
          if (uVar23 < 7) {
            if (uVar23 == 1) {
              fn_830148C8(*(undefined4 *)(puVar13 + 2));
            }
            else if (uVar23 == 2) {
              fn_83014D58(*(undefined4 *)(puVar13 + 2));
            }
            else if (uVar23 == 3) {
              *(undefined1 *)(*(int *)(puVar13 + 2) + 0x58) = 1;
              fn_82FF5198(lbl_83264304,*(undefined4 *)(*(int *)(puVar13 + 2) + 0x50));
              (**(code **)(**(int **)(puVar13 + 2) + 8))();
            }
            else if (uVar23 == 4) {
              fn_83014C98(*(undefined4 *)(puVar13 + 2));
            }
            else if (uVar23 == 5) {
              fn_83014CA0(*(undefined4 *)(puVar13 + 2));
            }
            else if (uVar23 == 0) {
              fn_83014BF8(*(undefined4 *)(puVar13 + 2));
            }
            else {
              fn_83014E68(*(undefined4 *)(puVar13 + 2));
            }
          }
          piVar14 = (int *)(**(code **)(**(int **)(puVar13 + 2) + 8))();
          break;
        case 0x18:
          uVar7 = *(undefined4 *)(puVar13 + 2);
          fn_82FF2FF0(uVar7);
          piVar14 = (int *)fn_82FFBCA8(uVar7,0);
          break;
        case 0x19:
          iVar18 = *(int *)(puVar13 + 2);
          piVar14 = (int *)fn_83038078(((ulonglong)(iVar18 == -1) ^ 1) + 0x1020,0);
          if (piVar14 != (int *)0x0) {
            if (iVar18 == -1) {
              uStack_bc = 0;
              ppuStack_f0 = &lbl_8217C35C;
              ppuStack_ec = &lbl_8217C358;
              (**(code **)(*piVar14 + 0x18))(piVar14,&ppuStack_f0);
              pppuVar19 = &ppuStack_f0;
LAB_83012f20:
              fn_8300F508(pppuVar19);
            }
            else {
              puVar17 = (undefined4 *)fn_8301A7B8(lbl_832642EC,iVar18);
              if (puVar17 != (undefined4 *)0x0) {
                ppuStack_130 = &lbl_8217C35C;
                ppuStack_12c = &lbl_8217C358;
                puVar17[0x17] = puVar17[0x17] + 1;
                puStack_fc = puVar17;
                (**(code **)(*piVar14 + 0x18))(piVar14,&ppuStack_130);
                uVar23 = puVar17[0x17];
                puVar17[0x17] = (int)((ulonglong)uVar23 - 1);
                uVar7 = lbl_831BC768;
                if ((longlong)((ulonglong)uVar23 - 1) < 1) {
                  (**(code **)*puVar17)(puVar17,0);
                  fn_82FA5190(uVar7,puVar17);
                }
                pppuVar19 = &ppuStack_130;
                goto LAB_83012f20;
              }
            }
            piVar14 = (int *)(**(code **)(*piVar14 + 8))(piVar14);
          }
          break;
        case 0x1a:
          piVar14 = (int *)fn_8301EF68(*(undefined4 *)(puVar13 + 2),*(undefined1 *)(puVar13 + 4),
                                        *(undefined1 *)((int)puVar13 + 9));
          break;
        case 0x1b:
          if (lbl_832645D0 != (int *)0x0) {
            bVar2 = *(byte *)(puVar13 + 2);
            bVar3 = *(byte *)((int)puVar13 + 5);
            uVar23 = 1 << (bVar2 & 0x3f);
            bVar4 = *(byte *)((int)lbl_832645D0 + bVar2 + 0x3c);
            piVar14 = (int *)((uint)*(byte *)((int)lbl_832645D0 + bVar4 + 0x40) & ~uVar23);
            *(char *)((int)lbl_832645D0 + bVar4 + 0x40) = (char)piVar14;
            *(byte *)((int)piVar16 + bVar2 + 0x3c) = bVar3;
            *(byte *)((int)piVar16 + bVar3 + 0x40) =
                 *(byte *)((int)piVar16 + bVar3 + 0x40) | (byte)uVar23;
          }
          break;
        case 0x1c:
          if (*(char *)(puVar13 + 8) == '\0') {
            piVar14 = lbl_832645D0;
            if (lbl_832645D0 != (int *)0x0) {
              piVar14 = (int *)fn_8300DEB0(lbl_832645D0,*(undefined1 *)(puVar13 + 2),
                                                 puVar13[3],puVar13[4]);
            }
          }
          else {
            uVar7 = *(undefined4 *)(puVar13 + 6);
            uVar5 = puVar13[4];
            uVar6 = puVar13[3];
            uVar1 = *(undefined1 *)(puVar13 + 2);
            uVar11 = fn_8300DAE8();
            piVar14 = (int *)fn_8300E110(uVar11,uVar1,uVar6,uVar5,uVar7);
          }
          break;
        case 0x1d:
          if (lbl_832645D0 != (int *)0x0) {
            fStack_150 = *(float *)(puVar13 + 2);
            uVar23 = *(uint *)(puVar13 + 4);
            if ((double)fStack_150 <= dVar27) {
              piVar14 = (int *)fn_8301E4B8(piVar14);
              dVar28 = extraout_f1_00;
            }
            else {
              piVar14 = (int *)fn_8301E4B8(-(double)fStack_150,piVar14);
              dVar28 = dVar25;
              if (dVar27 < extraout_f1) {
                dVar28 = (double)(float)(dVar26 / extraout_f1);
              }
            }
            iVar18 = (uVar23 & 0xff) + 1;
            piVar24 = piVar16 + iVar18 * 3;
            iVar18 = piVar16[iVar18 * 3];
            if (piVar24[1] - iVar18 >> 3 != 0) {
              uVar23 = 0;
              do {
                piVar14 = (int *)(**(code **)(**(int **)(uVar23 * 8 + iVar18 + 4) + 0x3c))(dVar28);
                iVar18 = *piVar24;
                uVar23 = uVar23 + 1 & 0xff;
              } while (uVar23 < (uint)(piVar24[1] - iVar18 >> 3));
            }
          }
          break;
        case 0x1e:
          fn_83010288(iVar12,*(undefined4 *)(puVar13 + 2));
          piVar14 = (int *)fn_83009E78();
          if (piVar14 != (int *)0x0) {
            uStack_178 = *(undefined4 *)(puVar13 + 2);
            uStack_16c = 0;
            uStack_16a = 0;
            uStack_170 = 4;
            uStack_180 = 0;
            puStack_17c = (undefined4 *)0x0;
            uStack_174 = 0;
            uStack_16b = 0;
            (**(code **)(*piVar14 + 0x1c))(piVar14,&uStack_180);
            piVar14 = (int *)(**(code **)(*piVar14 + 8))(piVar14);
          }
          break;
        case 0x1f:
          puVar17 = (undefined4 *)fn_8301A7B8(lbl_832642EC,*(undefined4 *)(puVar13 + 4));
          if ((puVar17 != (undefined4 *)0x0) || (*(int *)(puVar13 + 4) == -1)) {
            piVar14 = *(int **)(*(int *)(puVar13 + 2) + 0x10);
            if (piVar14 != *(int **)(*(int *)(puVar13 + 2) + 0x14)) {
              do {
                if ((*(uint *)(*piVar14 + 0x14) & 0xffffff00) == 0x401100) {
                  fn_830120B8(iVar12,*(undefined4 *)(*piVar14 + 0x10),puVar17,
                                    *(undefined4 *)(puVar13 + 6),*(undefined4 *)(puVar13 + 8),
                                    *(undefined4 *)(puVar13 + 10));
                }
                piVar14 = piVar14 + 1;
              } while (piVar14 != *(int **)(*(int *)(puVar13 + 2) + 0x14));
            }
            if ((puVar17 != (undefined4 *)0x0) &&
               (uVar23 = puVar17[0x17], puVar17[0x17] = (int)((ulonglong)uVar23 - 1),
               uVar7 = lbl_831BC768, (longlong)((ulonglong)uVar23 - 1) < 1)) {
              (**(code **)*puVar17)(puVar17,0);
              fn_82FA5190(uVar7,puVar17);
            }
          }
          piVar14 = (int *)(**(code **)(**(int **)(puVar13 + 2) + 8))();
          break;
        case 0x20:
          fStack_144 = *(float *)(puVar13 + 4);
          piVar14 = (int *)fn_8301AC70((double)fStack_144,lbl_832642EC,*(undefined4 *)(puVar13 + 2)
                                       );
          break;
        case 0x21:
          piVar14 = (int *)fn_8301A9D8(lbl_832642EC,*(undefined4 *)(puVar13 + 2),puVar13 + 8,
                                             puVar13[4],*(undefined4 *)(puVar13 + 6),
                                             0xffffffffffffffff);
          break;
        case 0x22:
          fStack_15c = *(float *)(puVar13 + 4);
          piVar14 = (int *)fn_8301EDA8((double)fStack_15c,*(undefined4 *)(puVar13 + 2));
          break;
        case 0x23:
          puVar17 = (undefined4 *)fn_8301A7B8(lbl_832642EC,*(undefined4 *)(puVar13 + 4));
          if ((puVar17 != (undefined4 *)0x0) || (*(int *)(puVar13 + 4) == -1)) {
            piVar14 = *(int **)(*(int *)(puVar13 + 2) + 0x10);
            if (piVar14 != *(int **)(*(int *)(puVar13 + 2) + 0x14)) {
              do {
                if ((((*(uint *)(*piVar14 + 0x14) & 0xffffff00) == 0x401100) &&
                    (piVar16 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,
                                                        *(undefined4 *)(*piVar14 + 0x10)),
                    piVar16 != (int *)0x0)) &&
                   ((iVar18 = (**(code **)(*piVar16 + 0x14))(), iVar18 == 3 ||
                    (iVar18 = (**(code **)(*piVar16 + 0x14))(piVar16), iVar18 == 7)))) {
                  uStack_164 = *(undefined4 *)(puVar13 + 6);
                  uStack_16c = 0;
                  uStack_16a = 0;
                  uStack_170 = 4;
                  uStack_178 = 0;
                  uStack_174 = 0;
                  uStack_16b = 0;
                  uStack_180 = 4;
                  puStack_17c = puVar17;
                  (**(code **)(*piVar16 + 0x1c))(piVar16,&uStack_180);
                  (**(code **)(*piVar16 + 8))(piVar16);
                }
                piVar14 = piVar14 + 1;
              } while (piVar14 != *(int **)(*(int *)(puVar13 + 2) + 0x14));
            }
            if ((puVar17 != (undefined4 *)0x0) &&
               (uVar23 = puVar17[0x17], puVar17[0x17] = (int)((ulonglong)uVar23 - 1),
               uVar7 = lbl_831BC768, (longlong)((ulonglong)uVar23 - 1) < 1)) {
              (**(code **)*puVar17)(puVar17,0);
              fn_82FA5190(uVar7,puVar17);
            }
          }
          piVar14 = (int *)(**(code **)(**(int **)(puVar13 + 2) + 8))();
          break;
        case 0x24:
          uStack_170 = *(undefined4 *)(puVar13 + 4);
          uStack_178 = 0;
          uVar23 = (*(int *)(puVar13 + 0xe) * 0x1000 + *(int *)(puVar13 + 0x10)) * 0x10 + 2;
          uVar22 = uVar23 | 0x80000000;
          if (*(int *)(puVar13 + 0x12) == 0) {
            piVar16 = (int *)fn_8301A7B8(lbl_832642EC,*(undefined4 *)(puVar13 + 2));
            piVar14 = piVar16;
            if (piVar16 != (int *)0x0) {
              piVar14 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,uVar22);
              if (piVar14 == (int *)0x0) {
                uVar10 = fn_8302C0F0(uVar22);
                if ((uVar10 & 0xffffffff) != 0) {
                  fn_830087C8(uVar10 + 0x88,0,uVar23,0,0);
                }
              }
              else {
                (**(code **)(*piVar14 + 8))();
              }
              piVar14 = (int *)fn_8300FDB8(iVar12,uVar22,piVar16,0,
                                                 CONCAT44(uStack_178,uStack_174),
                                                 CONCAT71(CONCAT61(CONCAT51(CONCAT41(uStack_170,
                                                                                     uStack_16c),
                                                                            uStack_16b),uStack_16a),
                                                          uStack_169));
              uVar23 = piVar16[0x17];
              piVar16[0x17] = (int)((ulonglong)uVar23 - 1);
              uVar7 = lbl_831BC768;
              if ((longlong)((ulonglong)uVar23 - 1) < 1) {
                (**(code **)*piVar16)(piVar16,0);
                piVar14 = (int *)fn_82FA5190(uVar7,piVar16);
              }
            }
          }
          else if ((*(int *)(puVar13 + 0x12) == 1) &&
                  (piVar14 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,uVar22),
                  piVar14 != (int *)0x0)) {
            uStack_178 = *(undefined4 *)(puVar13 + 4);
            uStack_16c = 0;
            uStack_16a = 0;
            uStack_170 = 4;
            puStack_17c = (undefined4 *)0x0;
            uStack_174 = 0;
            uStack_16b = 0;
            uStack_180 = 0;
            (**(code **)(*piVar14 + 0x1c))(piVar14,&uStack_180);
            piVar14 = (int *)(**(code **)(*piVar14 + 8))(piVar14);
          }
        }
        uVar21 = *puVar13 + uVar21;
        puVar13 = (ushort *)((uint)*puVar13 + (int)puVar13);
        lbl_832643DC = lbl_832643DC + 1;
      } while ((uVar21 < uStack_160) && (!bVar8));
      RtlEnterCriticalSection(iVar12 + 4);
      fn_83037A88(iVar12 + 0x20,uVar21);
    } while (!bVar8);
    RtlLeaveCriticalSection(iVar12 + 4);
    *(undefined1 *)(iVar12 + 0x44) = 0;
    fn_82A1E810(*(undefined4 *)(iVar12 + 0xb0));
  }
  fn_82F6A594(1);
  return;
}

