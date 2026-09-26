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
extern unsigned int *auStack_110;
extern unsigned int *auStack_150;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1d0;
extern int fn_82250A18();
extern int fn_8225F670();
extern int fn_8225FCE8();
extern int fn_8225FDE0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82291C30();
extern int fn_82291DD0();
extern int fn_82292268();
extern int fn_822ABA88();
extern int fn_8233E6F8();
extern int fn_8233E7C0();
extern int fn_82340AF0();
extern int fn_823571B0();
extern int fn_82358FD8();
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_8242C410();
extern int fn_8242E3E0();
extern int fn_824329A8();
extern int fn_82436190();
extern int fn_82436648();
extern int fn_824395F8();
extern int fn_8243D2D8();
extern int fn_8243E700();
extern int fn_824508A8();
extern int fn_824CD030();
extern int fn_824E17D8();
extern int fn_82528EE0();
extern int fn_82560708();
extern int fn_82672C20();
extern int fn_8288B760();
extern int fn_82E1CAD0();
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82F64988();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int iStack_218;
extern unsigned int lbl_82005748;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192510;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D37A4;
extern unsigned int lbl_8328D41C;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_1ec;
extern unsigned int uStack_1f0;
extern unsigned int uStack_20c;


void fn_8244E5A0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar4;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined8 uVar5;
  char cVar14;
  int iVar13;
  byte bVar15;
  ulonglong uVar16;
  int *piVar17;
  int *piVar18;
  uint *puVar19;
  int iVar20;
  double extraout_f1;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  char cStack_220;
  uint *puStack_21c;
  int iStack_218;
  char *pcStack_210;
  uint uStack_20c;
  longlong lStack_208;
  longlong lStack_200;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double dStack_1e8;
  longlong lStack_1e0;
  undefined1 auStack_1d0 [64];
  undefined1 auStack_190 [64];
  undefined1 auStack_150 [64];
  undefined1 auStack_110 [272];
  
  iVar6 = fn_82F6A544();
  cStack_220 = '\x01';
  bVar3 = true;
  iStack_218 = 0;
  dVar23 = extraout_f1;
  iVar7 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar7 = fn_82250A18();
  }
  pcVar12 = (char *)0x0;
  cVar14 = *(char *)(iVar7 + 4);
  uVar16 = (ulonglong)**(uint **)(iVar6 + 0x40);
  iVar7 = fn_8242C410(uVar16);
  dVar22 = (double)lbl_821CC160;
  dVar24 = (double)lbl_82193AF0;
  if (iVar7 < 1) {
LAB_8244ebf0:
    if (cVar14 == '\0') {
      *(float *)(*(int *)(iVar6 + 0x44) + 0xac) =
           (float)((double)*(float *)(*(int *)(iVar6 + 0x44) + 0xac) + dVar23);
      fn_823598B0(**(undefined4 **)(iVar6 + 0x40),0);
      fn_82359928(**(undefined4 **)(iVar6 + 0x40),0);
      if ((*(float *)(*(int *)(iVar6 + 0x44) + 0xac) <= *(float *)(*(int *)(iVar6 + 0x44) + 0xa8))
         && (iVar7 = fn_8242E3E0(**(undefined4 **)(iVar6 + 0x40)), iVar7 == 0))
      goto LAB_8244edbc;
      iVar13 = 0;
      cStack_220 = '\x01';
      uVar16 = (ulonglong)**(uint **)(iVar6 + 0x40);
      iVar7 = fn_8242C410(uVar16);
      if (iVar7 < 1) goto LAB_8244edbc;
      iVar7 = 0;
      do {
        piVar17 = *(int **)(**(int **)((int)uVar16 + 8) + iVar7);
        iVar10 = fn_822ABA88(*(undefined4 *)(piVar17[4] * 4 + *piVar17),0);
        if ((**(float **)(iVar10 + 0x1a0) <= **(float **)(iVar6 + 0x44)) &&
           (iVar8 = *(int *)(*(int *)(iVar10 + 0x2c) * 0x18 + (int)(*(float **)(iVar6 + 0x44))[0x2e]
                            + 4),
           fn_82436648(iVar6,*(int *)(iVar10 + 0x2c),iVar10 + 0x30,0,lbl_831D37A4,iVar8,0),
           iVar8 != 0)) {
          fn_82340AF0((ulonglong)*(uint *)(iVar10 + 0x1a0) + 0x194,0xc,1);
        }
        iVar13 = iVar13 + 1;
        iVar7 = iVar7 + 4;
        uVar16 = (ulonglong)**(uint **)(iVar6 + 0x40);
        iVar10 = fn_8242C410(uVar16);
      } while (iVar13 < iVar10);
      goto LAB_8244ed24;
    }
  }
  else {
    dVar25 = (double)lbl_82192510;
    iVar7 = 0;
    dVar26 = (double)lbl_82005748;
    iVar13 = 0;
    do {
      iVar10 = *(int *)(iVar6 + 0x44);
      puVar19 = (uint *)(*(int *)(iVar10 + 0xb8) + iVar13);
      piVar17 = *(int **)(**(int **)((int)uVar16 + 8) + iVar7);
      iVar8 = fn_822ABA88(*(undefined4 *)(piVar17[4] * 4 + *piVar17),0);
      if ((*(char *)(iVar10 + 0x114) == '\0') && (*(int *)(iVar8 + 0x24) != 0)) {
        if (*(int *)(iVar8 + 0x168) == 0) {
          uVar9 = *(uint *)(iVar8 + 0x16c);
        }
        else {
          uVar9 = fn_8288B760();
          uVar9 = uVar9 & 0xff;
        }
        if ((uVar9 != 0) &&
           ((float)((double)**(float **)(iVar6 + 0x44) - dVar25) < **(float **)(iVar8 + 0x1a0))) {
          *(undefined1 *)(*(float **)(iVar6 + 0x44) + 0x45) = 1;
          if ((*(int **)(iVar6 + 0x40))[0x45] == 1) {
            fn_824395F8(dVar22,(ulonglong)*(uint *)(**(int **)(iVar6 + 0x40) + 0x174) + 0x1c,3
                              ,0);
          }
        }
      }
      if (*puVar19 == 0) {
        if ((**(float **)(iVar6 + 0x44) < **(float **)(iVar8 + 0x1a0)) ||
           ((*(float **)(iVar6 + 0x44))[0x29] < *(float *)(iVar6 + 0x38))) {
          piVar17 = *(int **)(iVar8 + 0x168);
          if (piVar17 == (int *)0x0) {
            uVar9 = *(uint *)(iVar8 + 0x16c);
          }
          else {
            uVar9 = fn_8288B760(piVar17);
            uVar9 = uVar9 & 0xff;
          }
          if (uVar9 == 0) {
            if (piVar17 != (int *)0x0) {
              lVar4 = (**(code **)(*piVar17 + 8))(piVar17);
              uVar9 = fn_8233E6F8(lVar4 + 0x48c,0);
              puVar19[5] = uVar9;
              lVar4 = fn_8233E6F8(lVar4 + 0x48c,1);
              *puVar19 = (uint)(lVar4 != 0);
            }
          }
          else {
            *puVar19 = 1;
            if ((double)*(float *)(iVar6 + 0x38) <=
                (double)*(float *)(*(int *)(iVar6 + 0x44) + 0xa4)) {
              uVar9 = (uint)((double)*(float *)(iVar6 + 0x38) * dVar26);
              lStack_1e0 = (longlong)(int)uVar9;
              puVar19[5] = uVar9;
              if (puVar19[1] != 0) {
                lStack_208 = (longlong)(int)uVar9;
                puVar19[5] = (int)((double)(float)((double)lStack_208 * dVar24 +
                                                  (double)*(float *)(*(int *)(iVar6 + 0x44) + 0x38))
                                  * dVar26);
              }
            }
            else {
              puVar19[5] = lbl_831D37A4;
            }
            if (piVar17 != (int *)0x0) {
              uVar9 = puVar19[5];
              lVar4 = (**(code **)(*piVar17 + 8))(piVar17);
              fn_8233E7C0(lVar4 + 0x48c,uVar9,0);
              fn_8233E7C0(lVar4 + 0x48c,1,1);
            }
            iVar10 = fn_82560708();
            if ((iVar10 == 0) && (*(int *)(iVar8 + 0x24) != 0)) {
              fn_823598B0(**(undefined4 **)(iVar6 + 0x40),0);
              fn_82359928(**(undefined4 **)(iVar6 + 0x40),0);
            }
          }
        }
        if (*(int *)(*(int *)(iVar8 + 0x14) + 0x1d0) == 0) {
          if (*(int *)(iVar8 + 0x24) != 0) {
            bVar3 = (bool)(*puVar19 != 0 & bVar3);
          }
          if (*puVar19 == 0) {
            cStack_220 = '\0';
          }
          else {
            uVar9 = puVar19[5];
            uVar9 = fn_82436648(iVar6,*(undefined4 *)(iVar8 + 0x2c),iVar8 + 0x30,
                                      (((~(ulonglong)(uVar9 ^ lbl_8328D41C) & 0xffffffff) >> 0x1f) +
                                       (ulonglong)(uVar9 <= lbl_8328D41C) & 1) != 0,uVar9,puVar19[1]
                                      ,puVar19 + 3);
            puVar19[2] = uVar9;
            if (uVar9 != 0) {
              uVar9 = puVar19[5];
              fn_82291DD0(*(undefined4 *)(**(int **)(iVar6 + 0x40) + 0xd4),(int)uVar9 / 100,
                                (ulonglong)uVar9 + (longlong)((int)uVar9 / 100) * -100);
            }
            if (*(int *)(iVar8 + 0x24) != 0) {
              uVar9 = *(uint *)(iVar8 + 0x2c);
              iVar20 = uVar9 + (((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0) &
                               0x7fffffff) * -2;
              iVar10 = iVar20 + 0x1d;
              puVar1 = *(undefined4 **)(*(int *)(**(int **)(iVar6 + 0x40) + 0xd4) + 0xc);
              if (puVar1[iVar10] != 0) {
                uStack_1f0 = 0;
                uStack_1ec = 0;
                fn_82273CD8(&uStack_1f0,3);
                lStack_200 = (longlong)(iVar20 + 1);
                dStack_1e8 = (double)lStack_200;
                fn_82672C20(*puVar1,0xffffffff821ab7b8,&uStack_1f0,1);
                puVar1[iVar10] = 0;
                fn_82273C88(&uStack_1f0);
              }
              fn_82292268(*(undefined4 *)(**(int **)(iVar6 + 0x40) + 0xd4));
            }
            if ((*(int *)(iVar8 + 0x24) != 0) && (*(int *)(*(int *)(iVar6 + 0x44) + 0x8c) == 0)) {
              *(undefined4 *)(*(int *)(iVar6 + 0x44) + 0x8c) = 1;
              uVar9 = puVar19[5];
              if ((int)lbl_8328D41C < (int)uVar9) {
                uVar27 = **(undefined4 **)(iVar6 + 0x40);
                fn_82528EE0(auStack_1d0,0x20,0xffffffff821b96c0,(int)uVar9 / 100,
                                  (ulonglong)uVar9 + (longlong)((int)uVar9 / 100) * -100);
                fn_82358FD8(uVar27,auStack_190,0x20,0xffffffff821b96d0);
                fn_82528EE0(auStack_1d0,0x20,0xffffffff821b96ec,auStack_1d0,auStack_190);
                uVar9 = puVar19[2];
                iVar10 = **(int **)(iVar6 + 0x40);
                *(undefined4 *)(*(int *)(iVar10 + 0x174) + 0x120) = 1;
                *(uint *)(*(int *)(iVar10 + 0x174) + 0x124) = uVar9;
                *(undefined4 *)(*(int *)(iVar10 + 0x174) + 0x128) = 0;
                fn_82F64988((ulonglong)*(uint *)(iVar10 + 0x174) + 0x130,0x20,auStack_1d0);
              }
            }
            uStack_20c = puVar19[5];
            pcStack_210 = pcVar12;
            fn_823571B0((ulonglong)*(uint *)(iVar6 + 0x44) + 200,&pcStack_210);
            if (*(int *)(iVar8 + 0x24) != 0) {
              if (*(int *)(iVar8 + 0x168) == 0) {
                uVar9 = *(uint *)(iVar8 + 0x16c);
              }
              else {
                uVar9 = fn_8288B760();
                uVar9 = uVar9 & 0xff;
              }
              if ((uVar9 != 0) &&
                 ((puVar19[2] != 0 ||
                  ((uint)(*(int *)(*(int *)(iVar6 + 0x44) + 0xcc) -
                          *(int *)(*(int *)(iVar6 + 0x44) + 200) >> 3) < 4)))) {
                *(undefined4 *)(*(int *)(iVar6 + 0x40) + 0x1a4) = 1;
              }
            }
          }
        }
        if ((**(float **)(iVar6 + 0x44) < **(float **)(iVar8 + 0x1a0)) &&
           ((*(float **)(iVar6 + 0x44))[0x22] == 0.0)) {
          if (*(int *)(iVar8 + 0x24) == 0) {
            bVar15 = 7;
LAB_8244eba4:
            fn_824329A8((ulonglong)*(uint *)(**(int **)(iVar6 + 0x40) + 0x174) + 0x60,bVar15);
          }
          else {
            bVar15 = (-(puVar19[2] != 0) & 2U) + 6;
            if (bVar15 < 0x14) goto LAB_8244eba4;
          }
          *(undefined4 *)(*(int *)(iVar6 + 0x44) + 0x88) = 1;
        }
      }
      pcVar12 = pcVar12 + 1;
      iVar13 = iVar13 + 0x18;
      iVar7 = iVar7 + 4;
      uVar16 = (ulonglong)**(uint **)(iVar6 + 0x40);
      iVar10 = fn_8242C410(uVar16);
    } while ((int)pcVar12 < iVar10);
    if (bVar3) goto LAB_8244ebf0;
LAB_8244ed24:
    if (cVar14 == '\0') goto LAB_8244edbc;
  }
  iVar7 = *(int *)(*(int *)(iVar6 + 0x44) + 0xcc);
  iVar13 = *(int *)(*(int *)(iVar6 + 0x44) + 200);
  fn_824508A8(iVar13,iVar7,iVar7 - iVar13 >> 3,cStack_220);
  iVar7 = *(int *)(iVar6 + 0x44);
  bVar3 = false;
  uVar9 = lbl_8328D41C;
  for (piVar17 = *(int **)(iVar7 + 200); piVar17 != *(int **)(iVar7 + 0xcc); piVar17 = piVar17 + 2)
  {
    iVar7 = *piVar17 * 0x18 + *(int *)(iVar7 + 0xb8);
    if (*(int *)(iVar7 + 8) != 0) {
      if (bVar3) {
        if ((int)uVar9 < piVar17[1]) {
          *(undefined4 *)(iVar7 + 8) = 0;
        }
      }
      else {
        uVar9 = piVar17[1];
        bVar3 = true;
      }
    }
    iVar7 = *(int *)(iVar6 + 0x44);
  }
LAB_8244edbc:
  if ((cStack_220 != '\0') || (cVar14 == '\0')) {
    iVar7 = *(int *)(iVar6 + 0x44);
    puStack_21c = *(uint **)(iVar7 + 200);
    if (puStack_21c != *(uint **)(iVar7 + 0xcc)) {
      dVar23 = (double)lbl_821916FC;
      pcStack_210 = "event_race_greatfinish";
      do {
        uVar9 = *puStack_21c;
        piVar18 = (int *)(*(int *)(iVar7 + 0xb8) + uVar9 * 0x18);
        piVar17 = *(int **)(**(int **)(**(int **)(iVar6 + 0x40) + 8) + uVar9 * 4);
        iVar7 = fn_822ABA88(*(undefined4 *)(piVar17[4] * 4 + *piVar17),0);
        if (((*piVar18 != 0) && (piVar18[4] == 0)) &&
           (*(int *)(*(int *)(iVar7 + 0x14) + 0x1d0) == 0)) {
          piVar18[4] = 1;
          uVar16 = fn_8243E700((ulonglong)*(uint *)(*(int *)(iVar6 + 0x40) + 0x148) * 0x18 +
                                     (ulonglong)*(uint *)(*(int *)(iVar6 + 0x40) + 0x138),
                                     *(undefined4 *)(iVar7 + 0x2c),0);
          if (*(int *)(iVar7 + 0x24) != 0) {
            if (*(int *)(iVar7 + 0x168) == 0) {
              uVar11 = *(uint *)(iVar7 + 0x16c);
            }
            else {
              uVar11 = fn_8288B760();
              uVar11 = uVar11 & 0xff;
            }
            if (uVar11 != 0) {
              piVar17 = *(int **)(iVar6 + 0x40);
              uVar27 = *(undefined4 *)(iVar7 + 0x2c);
              lVar4 = (longlong)piVar18[5];
              if (*(int *)(*(int *)(iVar6 + 0x40) + 0x114) == 1) {
                iVar13 = *(int *)(*(int *)(*piVar17 + 0x174) + 0xc4);
                uVar28 = *(undefined4 *)(*(int *)(piVar17[1] + 0x40) + 0x1ec);
                dVar25 = (double)(float)((double)lVar4 * dVar24);
                lStack_200 = lVar4;
                uVar21 = fn_824E17D8(*(undefined4 *)(iVar7 + 0x24));
                pcVar12 = (char *)fn_8225F670();
                if ((*pcVar12 != '\0') && (iVar10 = fn_8225FDE0(0x3b,1), iVar10 == 0)) {
                  uVar5 = 0x3b;
LAB_8244eff8:
                  cVar14 = fn_82E1CAD0(uVar5);
                  if (cVar14 != '\0') {
                    fn_82E1CB88(0xffffffff821a6d50,uVar28);
                    fn_82E1CB40(0xffffffff821a6ea8,iVar13 != 0);
                    fn_82E1CB88(0xffffffff821a6eb4,uVar27);
                    fn_82E1CC60(uVar21,0xffffffff821a6ec0);
                    fn_82E1CC60(dVar25,0xffffffff821a6ed4);
                    fn_82E1CB88(0xffffffff821a6edc,uVar16);
                    fn_8225FCE8(0xffffffff821a6940);
                    fn_82E1CCA8();
                  }
                }
              }
              else {
                iVar13 = *(int *)(*(int *)(*piVar17 + 0x174) + 0xc4);
                uVar28 = *(undefined4 *)(*(int *)(piVar17[1] + 0x40) + 0x1ec);
                dVar25 = (double)(float)((double)lVar4 * dVar24);
                lStack_208 = lVar4;
                uVar21 = fn_824E17D8(*(undefined4 *)(iVar7 + 0x24));
                pcVar12 = (char *)fn_8225F670();
                if ((*pcVar12 != '\0') && (iVar10 = fn_8225FDE0(0x3e,1), iVar10 == 0)) {
                  uVar5 = 0x3e;
                  goto LAB_8244eff8;
                }
              }
            }
          }
          if (*(int *)(*(int *)(iVar6 + 0x44) + 0x84) == 0) {
            *(undefined4 *)(*(int *)(iVar6 + 0x44) + 0x84) = 1;
            if (piVar18[2] == 0) {
              pcVar12 = pcStack_210;
              if (1099 < piVar18[5]) {
                pcVar12 = "event_race_normalfinish";
              }
              fn_8243D2D8((ulonglong)*(uint *)(**(int **)(iVar6 + 0x40) + 0x174) + 8,pcVar12,0
                                ,0);
            }
            else {
              fn_8243D2D8((ulonglong)*(uint *)(**(int **)(iVar6 + 0x40) + 0x174) + 8,
                                0xffffffff821b9268,0,0);
              piVar17 = *(int **)(iVar6 + 0x40);
              puVar1 = (undefined4 *)((uint)(piVar17 + 0x7c) & 0xfffffff0);
              uVar27 = *puVar1;
              uVar28 = puVar1[1];
              uVar29 = puVar1[2];
              uVar30 = puVar1[3];
              puVar1 = (undefined4 *)((uint)(piVar17 + 0x78) & 0xfffffff0);
              uVar31 = puVar1[1];
              uVar32 = puVar1[2];
              uVar33 = puVar1[3];
              iVar13 = *(int *)(*piVar17 + 0x174);
              puVar2 = (undefined4 *)(*(int *)(iVar13 + 0x5c) + 0x300U & 0xfffffff0);
              *puVar2 = *puVar1;
              puVar2[1] = uVar31;
              puVar2[2] = uVar32;
              puVar2[3] = uVar33;
              puVar1 = (undefined4 *)(*(int *)(iVar13 + 0x5c) + 0x310U & 0xfffffff0);
              *puVar1 = uVar27;
              puVar1[1] = uVar28;
              puVar1[2] = uVar29;
              puVar1[3] = uVar30;
              *(undefined4 *)(*(int *)(iVar13 + 0x5c) + 0x2e0) = 1;
              *(float *)(*(int *)(iVar13 + 0x5c) + 0x2e4) = (float)dVar22;
            }
          }
          if (*(int *)(iVar7 + 0x24) != 0) {
            if (*(int *)(iVar7 + 0x168) == 0) {
              uVar11 = *(uint *)(iVar7 + 0x16c);
            }
            else {
              uVar11 = fn_8288B760();
              uVar11 = uVar11 & 0xff;
            }
            if ((uVar11 != 0) && (*(char *)(*(int *)(iVar6 + 0x44) + 0xfc) == '\0')) {
              *(int *)(*(int *)(iVar6 + 0x44) + 0x100) = (int)uVar16;
              *(int *)(*(int *)(iVar6 + 0x44) + 0x10c) = piVar18[2];
              *(int *)(*(int *)(iVar6 + 0x44) + 0x110) = piVar18[3];
              *(float *)(*(int *)(iVar6 + 0x44) + 0x108) = (float)dVar22;
            }
          }
          iVar13 = *(int *)(iVar7 + 0x24);
          if (iVar13 != 0) {
            *(undefined1 *)(*(int *)(iVar6 + 0x44) + 4) = 1;
            *(undefined4 *)(**(int **)(iVar6 + 0x40) + 0xf0) = 0;
            iVar10 = fn_824CD030(iVar13);
            if (iVar10 != 0) {
              iVar10 = **(int **)(iVar13 + 0xfc);
              *(undefined4 *)(*(int *)(iVar10 + 0x3c) + 0x28) = 0;
              *(undefined4 *)(*(int *)(iVar10 + 0x3c) + 0x24) = 0;
            }
            *(undefined4 *)(*(int *)(iVar13 + 0xfc) + 100) = 3;
            if (piVar18[5] < (int)lbl_8328D41C) {
              lVar4 = 0x10;
            }
            else {
              lVar4 = 0x1b;
              if (piVar18[1] == 0) {
                lVar4 = uVar16 + 7;
              }
            }
            if ((uVar16 & 0xffffffff) < (ulonglong)*(uint *)(*(int *)(iVar6 + 0x44) + 0xa0)) {
              fn_82436190(iVar6,1);
            }
            bVar15 = 1;
            iVar13 = fn_82560708();
            if (iVar13 != 0) {
              bVar15 = -(uVar9 != (((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0)) *
                                  2) & 2;
            }
            if (*(int *)(iVar7 + 0x168) == 0) {
              uVar9 = *(uint *)(iVar7 + 0x16c);
            }
            else {
              uVar9 = fn_8288B760();
              uVar9 = uVar9 & 0xff;
            }
            if (uVar9 != 0) {
              if (piVar18[2] == 0) {
                if (piVar18[3] == 0) {
                  uVar21 = 0;
                }
                else {
                  uVar9 = piVar18[5];
                  fn_82528EE0(auStack_110,0x20,L"%i.%.2i",(int)uVar9 / 100,
                                    (ulonglong)uVar9 + (longlong)((int)uVar9 / 100) * -100);
                  uVar21 = 0x12;
                }
              }
              else {
                uVar9 = piVar18[5];
                fn_82528EE0(auStack_150,0x20,L"%i.%.2i",(int)uVar9 / 100,
                                  (ulonglong)uVar9 + (longlong)((int)uVar9 / 100) * -100);
                uVar21 = 0x11;
              }
              fn_82291C30(*(undefined4 *)(**(int **)(iVar6 + 0x40) + 0xd4),lVar4,uVar21,bVar15
                                ,iVar7 + 0x30,0);
            }
          }
        }
        if ((*(int *)(iVar7 + 0x24) != 0) && (dVar25 = (double)fn_824E17D8(), dVar23 < dVar25)
           ) {
          iStack_218 = iStack_218 + 1;
        }
        iVar7 = *(int *)(iVar6 + 0x44);
        puStack_21c = puStack_21c + 2;
      } while (puStack_21c != *(uint **)(iVar7 + 0xcc));
      if (iStack_218 != 0) {
        iVar7 = *(int *)(**(int **)(iVar6 + 0x40) + 0x174);
        *(uint *)(iVar7 + 0x68) = *(uint *)(iVar7 + 0x68) | 0x100;
      }
    }
  }
  fn_82F6A590(cStack_220);
  return;
}

