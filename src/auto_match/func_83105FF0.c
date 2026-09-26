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
extern int fn_82CC3F68();
extern int fn_830BF860();
extern int fn_830BF8B0();
extern int fn_830BF900();
extern int fn_830BF950();
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int uRam8329f07c;
extern unsigned int uRam8329f088;
extern unsigned int uStack_ac;
extern unsigned int uStack_cc;


undefined8 fn_83105FF0(int param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar16;
  int iVar17;
  ulonglong uVar15;
  short *psVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  int iVar24;
  short *psVar25;
  short *psVar26;
  uint *puVar27;
  short *psVar28;
  int iVar29;
  longlong lVar30;
  uint uStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint *puStack_b0;
  uint uStack_ac;
  
  uVar2 = *(ushort *)(param_2 + 0x34);
  uStack_cc = 0;
  iVar10 = *(int *)(param_1 + 0x88) << 4;
  uStack_ac = *(uint *)(param_1 + 0xb0b4);
  uVar9 = *(ushort *)(param_2 + 0x32) >> 1;
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x56fc);
  uVar2 = uVar2 >> 1;
  puStack_b0 = *(uint **)(param_1 + 0x5708);
  *(uint **)(param_3 + 0x20) = puStack_b0;
  cVar1 = *(char *)(param_2 + 0x21);
  iStack_c4 = *(int *)(param_1 + 0xec4) + *(int *)(param_1 + 0xe0);
  iStack_c0 = *(int *)(param_1 + 0xec8) + *(int *)(param_1 + 0xe0);
  iStack_bc = *(int *)(param_1 + 0xec0) + *(int *)(param_1 + 0xdc);
  puVar23 = *(uint **)(param_1 + 0x110);
  uVar16 = *puStack_b0 & 0xffff;
  uVar13 = *puStack_b0 >> 0x10 & 0xfff;
  if (uVar2 != 0) {
    do {
      iVar20 = 0;
      uVar21 = 0;
      if (uVar9 != 0) {
        iStack_c8 = 0;
        iVar22 = iStack_bc;
        iVar24 = iStack_c4;
        do {
          if ((uStack_cc == uVar13) && (uVar21 == uVar16)) {
            iVar29 = 0;
            lVar30 = 0;
            puVar27 = (uint *)(param_2 + 0x22c);
            do {
              puVar27 = puVar27 + 1;
              uVar16 = *puVar27;
              lVar11 = (ulonglong)*(uint *)(param_3 + 0x1c) - 0x80;
              uVar13 = *(uint *)(((iVar29 >> 2) + 2) * 4 + param_3);
              dataCacheBlockTouch((ulonglong)*(uint *)(param_3 + 0x1c) - 0x100);
              *(int *)(param_3 + 0x1c) = (int)lVar11;
              fn_82CC3F68(lVar11,lVar30 + (ulonglong)*(uint *)(param_2 + 0x568),
                              (ulonglong)*(byte *)(puVar23 + 1) * 0x40 +
                              (ulonglong)*(uint *)(param_2 + 0x188),uRam8329f07c,
                              (ulonglong)uVar13 + (ulonglong)uVar16,
                              *(undefined2 *)(((iVar29 >> 2) + 0x2d) * 2 + param_2),uRam8329f088);
              lVar30 = lVar30 + 0x80;
              iVar29 = iVar29 + 1;
            } while ((int)lVar30 < 0x300);
            if ((cVar1 == '\0') || ((*puVar23 & 0x800) == 0)) {
              if ((*puVar23 & 0x10000) == 0) {
                fn_830BF900();
              }
              else {
                fn_830BF950(*(undefined4 *)(param_2 + 0x568),iVar22,iVar24,
                                (iStack_c0 - iStack_c4) + iVar24,*(undefined2 *)(param_2 + 0x4a),
                                *(undefined2 *)(param_2 + 0x4c));
              }
            }
            else {
              psVar28 = (short *)(*(int *)(param_1 + 0x50d8) + iStack_c8);
              psVar26 = (short *)(*(int *)(param_1 + 0x50dc) + iVar20);
              psVar25 = (short *)(*(int *)(param_1 + 0x50e0) + iVar20);
              if ((*puVar23 & 0x10000) == 0) {
                fn_830BF860();
              }
              else {
                fn_830BF8B0(*(undefined4 *)(param_2 + 0x568),psVar28,psVar26,psVar25,iVar10,
                                iVar10 >> 1);
              }
              uVar3 = *(ushort *)(param_2 + 0x32);
              if ((uVar21 != 0) && ((puVar23[-6] & 0x800) != 0)) {
                uVar16 = 1;
                lVar30 = 0x10;
                psVar18 = psVar28;
                do {
                  sVar4 = psVar18[-1];
                  sVar5 = *psVar18;
                  sVar6 = psVar18[-2];
                  sVar7 = psVar18[1];
                  iVar29 = (sVar7 * 8 - (int)sVar7) - uVar16;
                  psVar18[-2] = (short)((int)((sVar6 * 8 - (int)sVar6) + (int)sVar7 + uVar16 + 3) >>
                                       3);
                  psVar18[-1] = (short)((int)((((sVar4 * 8 - (int)sVar4) - (int)sVar6) - uVar16) +
                                              (int)sVar5 + (int)sVar7 + 4) >> 3);
                  *psVar18 = (short)((int)(((sVar5 * 8 - (int)sVar5) - (int)sVar7) + (int)sVar4 +
                                           (int)sVar6 + uVar16 + 3) >> 3);
                  uVar16 = uVar16 ^ 1;
                  psVar18[1] = (short)(iVar29 + sVar6 + 4 >> 3);
                  psVar18 = psVar18 + (uint)uVar3 * 8;
                  lVar30 = lVar30 + -1;
                } while (lVar30 != 0);
              }
              psVar18 = psVar28 + 8;
              uVar16 = 1;
              lVar30 = 0x10;
              do {
                sVar4 = psVar18[-1];
                sVar5 = *psVar18;
                sVar6 = psVar18[-2];
                sVar7 = psVar18[1];
                iVar29 = (sVar7 * 8 - (int)sVar7) - uVar16;
                psVar18[-2] = (short)((int)((sVar6 * 8 - (int)sVar6) + uVar16 + (int)sVar7 + 3) >> 3
                                     );
                psVar18[-1] = (short)((int)((((sVar4 * 8 - (int)sVar4) - uVar16) - (int)sVar6) +
                                            (int)sVar5 + (int)sVar7 + 4) >> 3);
                *psVar18 = (short)((int)(((sVar5 * 8 - (int)sVar5) - (int)sVar7) + uVar16 +
                                         (int)sVar4 + (int)sVar6 + 3) >> 3);
                uVar16 = uVar16 ^ 1;
                psVar18[1] = (short)(iVar29 + sVar6 + 4 >> 3);
                psVar18 = psVar18 + (uint)uVar3 * 8;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
              uVar3 = *(ushort *)(param_2 + 0x32);
              if (uVar21 != 0) {
                if ((puVar23[-6] & 0x800) != 0) {
                  uVar16 = 1;
                  lVar30 = 8;
                  psVar18 = psVar26;
                  do {
                    sVar4 = psVar18[-1];
                    sVar5 = *psVar18;
                    sVar6 = psVar18[-2];
                    sVar7 = psVar18[1];
                    iVar29 = (sVar7 * 8 - (int)sVar7) - uVar16;
                    psVar18[-2] = (short)((int)((sVar6 * 8 - (int)sVar6) + (int)sVar7 + uVar16 + 3)
                                         >> 3);
                    psVar18[-1] = (short)((int)((((sVar4 * 8 - (int)sVar4) - (int)sVar6) - uVar16) +
                                                (int)sVar5 + (int)sVar7 + 4) >> 3);
                    *psVar18 = (short)((int)(((sVar5 * 8 - (int)sVar5) - (int)sVar7) + (int)sVar4 +
                                             (int)sVar6 + uVar16 + 3) >> 3);
                    uVar16 = uVar16 ^ 1;
                    psVar18[1] = (short)(iVar29 + sVar6 + 4 >> 3);
                    psVar18 = psVar18 + (uint)uVar3 * 4;
                    lVar30 = lVar30 + -1;
                  } while (lVar30 != 0);
                }
                if ((puVar23[-6] & 0x800) != 0) {
                  uVar16 = 1;
                  lVar30 = 8;
                  psVar18 = psVar25;
                  do {
                    sVar4 = psVar18[-1];
                    sVar5 = *psVar18;
                    sVar6 = psVar18[-2];
                    sVar7 = psVar18[1];
                    iVar29 = (sVar7 * 8 - (int)sVar7) - uVar16;
                    psVar18[-2] = (short)((int)((sVar6 * 8 - (int)sVar6) + (int)sVar7 + uVar16 + 3)
                                         >> 3);
                    psVar18[-1] = (short)((int)((((sVar4 * 8 - (int)sVar4) - (int)sVar6) - uVar16) +
                                                (int)sVar5 + (int)sVar7 + 4) >> 3);
                    *psVar18 = (short)((int)(((sVar5 * 8 - (int)sVar5) - (int)sVar7) + (int)sVar4 +
                                             (int)sVar6 + uVar16 + 3) >> 3);
                    uVar16 = uVar16 ^ 1;
                    psVar18[1] = (short)(iVar29 + sVar6 + 4 >> 3);
                    psVar18 = psVar18 + (uint)uVar3 * 4;
                    lVar30 = lVar30 + -1;
                  } while (lVar30 != 0);
                }
              }
              uVar3 = *(ushort *)(param_2 + 0x32);
              iVar29 = 0;
              if ((uVar21 != 0) && ((puVar23[-6] & 0x800) != 0)) {
                iVar29 = -2;
              }
              iVar14 = 0;
              iVar12 = 0;
              do {
                if (iVar29 < 0x10) {
                  iVar17 = 0x10 - iVar29;
                  iVar19 = iVar29;
                  do {
                    uVar15 = (ulonglong)psVar28[iVar12 + iVar19];
                    if (0xff < (ushort)psVar28[iVar12 + iVar19]) {
                      uVar15 = ((uVar15 & 0xffffffff) >> 0x1f) - 1 & 0xff;
                    }
                    iVar8 = (uint)*(ushort *)(param_2 + 0x4a) * iVar14 + iVar19;
                    iVar19 = iVar19 + 1;
                    *(char *)(iVar8 + iVar22) = (char)uVar15;
                    iVar17 = iVar17 + -1;
                  } while (iVar17 != 0);
                }
                iVar14 = iVar14 + 1;
                iVar12 = iVar12 + (uint)uVar3 * 8;
              } while (iVar14 < 0x10);
              iVar29 = 0;
              if ((uVar21 != 0) && ((puVar23[-6] & 0x800) != 0)) {
                iVar29 = -2;
              }
              uVar3 = *(ushort *)(param_2 + 0x32);
              iVar14 = 0;
              iVar12 = 0;
              do {
                if (iVar29 < 8) {
                  iVar17 = 8 - iVar29;
                  iVar19 = iVar29;
                  do {
                    uVar15 = (ulonglong)psVar26[iVar12 + iVar19];
                    if (0xff < (ushort)psVar26[iVar12 + iVar19]) {
                      uVar15 = ((uVar15 & 0xffffffff) >> 0x1f) - 1 & 0xff;
                    }
                    iVar8 = (uint)*(ushort *)(param_2 + 0x4c) * iVar14 + iVar19;
                    iVar19 = iVar19 + 1;
                    *(char *)(iVar8 + iVar24) = (char)uVar15;
                    iVar17 = iVar17 + -1;
                  } while (iVar17 != 0);
                }
                iVar14 = iVar14 + 1;
                iVar12 = iVar12 + (uint)uVar3 * 4;
              } while (iVar14 < 8);
              iVar29 = 0;
              if ((uVar21 != 0) && ((puVar23[-6] & 0x800) != 0)) {
                iVar29 = -2;
              }
              uVar3 = *(ushort *)(param_2 + 0x32);
              iVar14 = 0;
              iVar12 = 0;
              do {
                if (iVar29 < 8) {
                  iVar17 = 8 - iVar29;
                  iVar19 = iVar29;
                  do {
                    uVar15 = (ulonglong)psVar25[iVar12 + iVar19];
                    if (0xff < (ushort)psVar25[iVar12 + iVar19]) {
                      uVar15 = ((uVar15 & 0xffffffff) >> 0x1f) - 1 & 0xff;
                    }
                    iVar8 = (uint)*(ushort *)(param_2 + 0x4c) * iVar14 + (iStack_c0 - iStack_c4) +
                            iVar19;
                    iVar19 = iVar19 + 1;
                    *(char *)(iVar8 + iVar24) = (char)uVar15;
                    iVar17 = iVar17 + -1;
                  } while (iVar17 != 0);
                }
                iVar14 = iVar14 + 1;
                iVar12 = iVar12 + (uint)uVar3 * 4;
              } while (iVar14 < 8);
            }
            uVar15 = (ulonglong)uStack_ac;
            puStack_b0 = puStack_b0 + 1;
            uVar16 = *puStack_b0 & 0xffff;
            uVar13 = *puStack_b0 >> 0x10 & 0xfff;
            uStack_ac = (uint)(uVar15 - 1);
            if ((longlong)(uVar15 - 1) < 1) {
              uStack_cc = uVar2 + 1;
              break;
            }
          }
          uVar21 = uVar21 + 1;
          iVar22 = iVar22 + 0x10;
          iStack_c8 = iStack_c8 + 0x20;
          iVar24 = iVar24 + 8;
          puVar23 = puVar23 + 6;
          iVar20 = iVar20 + 0x10;
        } while ((int)uVar21 < (int)(uint)uVar9);
      }
      uStack_cc = uStack_cc + 1;
      iStack_c4 = *(int *)(param_1 + 0xe8) + iStack_c4;
      iStack_c0 = *(int *)(param_1 + 0xe8) + iStack_c0;
      iStack_bc = *(int *)(param_1 + 0xe4) + iStack_bc;
    } while ((int)uStack_cc < (int)(uint)uVar2);
  }
  return 0;
}

