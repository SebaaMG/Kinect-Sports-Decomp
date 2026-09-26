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
extern unsigned int *auStack_120;
extern unsigned int *auStack_160;
extern unsigned int *auStack_f0;
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82930940();
extern int fn_82930FC0();
extern int fn_82931D48();
extern int fn_82931F90();
extern int fn_82932548();
extern int fn_829334D8();
extern int fn_8297F458();
extern int fn_8297F800();
extern int fn_82981598();
extern int fn_82981738();
extern int fn_82981C40();
extern unsigned int iStack00000034;
extern unsigned int iStack_10c;
extern unsigned int uStack_144;
extern unsigned int uStack_164;
extern unsigned int uStack_184;
extern unsigned int uStack_dc;


undefined8
fn_82983718(undefined8 param_1,longlong param_2,ulonglong param_3,int *param_4,int param_5,
             int param_6,int *param_7,int *param_8)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar7;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  byte *pbVar17;
  ulonglong uVar16;
  undefined4 *puVar18;
  byte *pbVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  int *piVar25;
  int *piVar26;
  uint uVar27;
  longlong lVar28;
  int iStack00000034;
  int *piStack0000004c;
  undefined4 uStack_184;
  int aiStack_180 [7];
  undefined4 uStack_164;
  uint auStack_160 [7];
  undefined4 uStack_144;
  int aiStack_140 [8];
  undefined1 auStack_120 [20];
  int iStack_10c;
  undefined1 auStack_f0 [20];
  undefined4 uStack_dc;
  int aiStack_c0 [48];
  
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  iVar14 = param_6;
  if (param_6 != 0) {
    do {
      iVar8 = *(int *)(iVar14 + 8);
      if ((((iVar8 == 0) || (*(int *)(iVar8 + 4) != 0xe)) || (*(int *)(iVar8 + 0x10) == 0)) ||
         ((iVar8 = *(int *)(*(int *)(iVar8 + 0x10) + 4), iVar8 != 9 && (iVar8 != 1)))) break;
      iVar14 = *(int *)(iVar14 + 0xc);
    } while (iVar14 != 0);
    if (iVar14 != 0) {
      return 1;
    }
  }
  uVar13 = 0;
  uVar7 = param_3;
  if ((param_3 & 0xffffffff) != 0) {
    pbVar4 = *(byte **)(param_5 + 8);
    uVar24 = uVar13;
    do {
      uVar13 = (uVar7 + uVar24 & 0xffffffff) >> 1;
      lVar15 = uVar13 * 0xe4 + param_2;
      pbVar17 = *(byte **)((int)lVar15 + 4);
      pbVar19 = pbVar4;
      do {
        bVar2 = *pbVar19;
        bVar3 = *pbVar17;
        iVar14 = (uint)bVar2 - (uint)bVar3;
        if (bVar2 == 0) break;
        pbVar19 = pbVar19 + 1;
        pbVar17 = pbVar17 + 1;
      } while ((uint)bVar2 == (uint)bVar3);
      if (iVar14 < 1) {
        uVar7 = uVar13;
        if (-1 < iVar14) {
          uVar7 = uVar13 + 1;
          if (uVar13 == 0) goto LAB_8298388c;
          lVar15 = lVar15 + -0xe0;
          goto LAB_8298384c;
        }
      }
      else {
        uVar24 = uVar13 + 1;
      }
      uVar13 = uVar24;
      uVar24 = uVar13;
    } while (uVar13 < (uVar7 & 0xffffffff));
  }
  goto LAB_829838e4;
  while( true ) {
    uVar13 = uVar13 - 1;
    lVar15 = lVar15 + -0xe4;
    if (uVar13 == 0) break;
LAB_8298384c:
    pbVar17 = (byte *)*(undefined4 *)lVar15;
    pbVar19 = pbVar4;
    do {
      bVar2 = *pbVar19;
      bVar3 = *pbVar17;
      if (bVar2 == 0) break;
      pbVar19 = pbVar19 + 1;
      pbVar17 = pbVar17 + 1;
    } while (bVar2 == bVar3);
    if (bVar2 != bVar3) break;
  }
LAB_8298388c:
  if (uVar7 < (param_3 & 0xffffffff)) {
    lVar15 = uVar7 * 0xe4 + param_2 + 4;
    do {
      pbVar17 = (byte *)*(undefined4 *)lVar15;
      pbVar19 = pbVar4;
      do {
        bVar2 = *pbVar19;
        bVar3 = *pbVar17;
        if (bVar2 == 0) break;
        pbVar19 = pbVar19 + 1;
        pbVar17 = pbVar17 + 1;
      } while (bVar2 == bVar3);
      if (bVar2 != bVar3) break;
      uVar7 = uVar7 + 1;
      lVar15 = lVar15 + 0xe4;
    } while ((uVar7 & 0xffffffff) < (param_3 & 0xffffffff));
  }
LAB_829838e4:
  if ((uVar13 & 0xffffffff) == (uVar7 & 0xffffffff)) {
    return 1;
  }
  iStack00000034 = param_5;
  piStack0000004c = param_8;
  if ((uVar13 & 0xffffffff) < (uVar7 & 0xffffffff)) {
    lVar15 = uVar13 * 0xe4 + param_2 + 0xc;
    do {
      puVar18 = &uStack_164;
      piVar26 = (int *)lVar15;
      lVar28 = 7;
      do {
        puVar18 = puVar18 + 1;
        *puVar18 = 0xffffffff;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      puVar18 = &uStack_184;
      lVar28 = 7;
      do {
        puVar18 = puVar18 + 1;
        *puVar18 = 0x37;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      puVar18 = &uStack_144;
      lVar28 = 7;
      do {
        puVar18 = puVar18 + 1;
        *puVar18 = 5;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      fn_82931D48(auStack_120);
      fn_82931D48(auStack_f0);
      uVar24 = 1;
      if (param_6 == 0) {
LAB_82983bb8:
        iVar14 = (int)((uVar24 & 0xffffffff) << 5);
        if ((*(int *)((int)piVar26 + iVar14 + -8) == 0) || (*(int *)((int)piVar26 + iVar14) == -2))
        goto LAB_82983bd8;
      }
      else {
        lVar28 = lVar15 + 0x18;
        iVar14 = param_6;
        do {
          if ((6 < (uVar24 & 0xffffffff)) || (piVar25 = (int *)lVar28, *piVar25 == 0)) break;
          iVar8 = piVar25[2];
          if (iVar8 == -1) {
LAB_82983b6c:
            lVar28 = lVar28 + 0x20;
            uVar24 = uVar24 + 1;
          }
          else {
            iVar20 = *(int *)(*(int *)(iVar14 + 8) + 0x10);
            if (*(int *)(iVar20 + 4) != 9) break;
            if (iVar8 != -2) {
              iVar8 = aiStack_140[iVar8];
              if ((iVar8 == 5) ||
                 ((iVar8 == 0 && ((*(int *)(iVar20 + 0x10) == 1 || (*(int *)(iVar20 + 0x10) == 2))))
                 )) {
                iVar8 = piVar25[2];
                iVar5 = piVar25[3];
                aiStack_140[iVar8] = *(int *)(iVar20 + 0x10);
                aiStack_c0[iVar8] = iVar5;
              }
              else {
                if (*(int *)(iVar20 + 0x10) == 0) {
                  if ((iVar8 == 0) || (iVar8 == 1)) goto LAB_82983a34;
                  bVar1 = iVar8 == 2;
                }
                else {
                  bVar1 = *(int *)(iVar20 + 0x10) == iVar8;
                }
                if (!bVar1) break;
              }
LAB_82983a34:
              if (aiStack_180[piVar25[4]] == 0x37) {
                iVar8 = piVar25[4];
                iVar5 = piVar25[5];
                aiStack_180[iVar8] = *(int *)(iVar20 + 0x14);
                aiStack_c0[iVar8] = iVar5;
              }
              else {
                iStack_10c = aiStack_180[piVar25[4]];
                uStack_dc = *(undefined4 *)(iVar20 + 0x14);
                iVar8 = fn_8297F800(param_1,auStack_120,auStack_f0,aiStack_180 + piVar25[4]);
                if (iVar8 < 0) break;
              }
            }
            iVar8 = *(int *)(iVar20 + 0x10);
            if (iVar8 != 0) {
              uVar27 = piVar25[6];
              if ((int)uVar27 < 0) {
                if (*(uint *)(iVar20 + 0x1c) < auStack_160[~uVar27]) {
                  auStack_160[~uVar27] = *(uint *)(iVar20 + 0x1c);
                }
              }
              else if (*(uint *)(iVar20 + 0x1c) < uVar27) break;
              if (iVar8 != 0) {
                uVar27 = piVar25[7];
                if ((int)uVar27 < 0) {
                  if (*(uint *)(iVar20 + 0x20) < auStack_160[~uVar27]) {
                    auStack_160[~uVar27] = *(uint *)(iVar20 + 0x20);
                  }
                }
                else if (*(uint *)(iVar20 + 0x20) < uVar27) break;
              }
            }
            if (((piVar25[1] & 0x20U) != 0) && (iVar8 = fn_82981598(param_1,iVar20), iVar8 != 0))
            break;
            if (piVar25[2] != -2) goto LAB_82983b6c;
          }
          iVar14 = *(int *)(iVar14 + 0xc);
        } while (iVar14 != 0);
        if (iVar14 == 0) {
          if ((uVar24 & 0xffffffff) < 7) {
            iVar14 = (int)((uVar24 & 0xffffffff) << 5);
            if ((*(int *)((int)piVar26 + iVar14 + -8) != 0) &&
               (*(int *)((int)piVar26 + iVar14) != -2)) goto LAB_82983d78;
            if ((uVar24 & 0xffffffff) < 7) goto LAB_82983bb8;
          }
LAB_82983bd8:
          if ((piVar26[-1] != 0) && (iVar14 = *piVar26, iVar14 != -1)) {
            if (aiStack_140[iVar14] == 5) {
              aiStack_140[iVar14] = *(int *)piVar26[1];
            }
            if (aiStack_180[piVar26[2]] == 0x37) {
              aiStack_180[piVar26[2]] = *(int *)piVar26[3];
            }
          }
          uVar24 = 0;
          lVar28 = lVar15 + 0xc;
          uVar16 = 0;
          do {
            piVar25 = (int *)lVar28;
            piVar26 = (int *)piVar25[-2];
            if (piVar25[-3] != -1) {
              iVar14 = (int)uVar16;
              if (piVar26 != (int *)0x0) {
                iVar8 = *(int *)((int)aiStack_140 + iVar14);
                if (iVar8 == 5) {
                  *(int *)((int)aiStack_140 + iVar14) = *piVar26;
                }
                else {
                  if ((iVar8 == 0) && ((iVar20 = *piVar26, iVar20 == 1 || (iVar20 == 2)))) {
                    *(int *)((int)aiStack_140 + iVar14) = iVar20;
                  }
                  else {
                    iVar20 = *piVar26;
                    while ((iVar20 != 5 && (iVar8 != iVar20))) {
                      piVar26 = piVar26 + 1;
                      iVar20 = *piVar26;
                    }
                  }
                  if (iVar20 == 5) break;
                }
              }
              piVar25 = (int *)*piVar25;
              if (piVar25 != (int *)0x0) {
                piVar26 = aiStack_180;
                iVar8 = *(int *)((int)piVar26 + iVar14);
                if (iVar8 == 0x37) {
                  iVar14 = *piVar25;
                }
                else {
                  iVar20 = *piVar25;
                  piVar21 = piVar25;
                  while (iVar20 != 0x37) {
                    if (iVar20 == 0x36) goto LAB_82983d70;
                    if (iVar8 == iVar20) break;
                    piVar21 = piVar21 + 1;
                    iVar20 = *piVar21;
                  }
                  if (iVar20 == 0x36) break;
                  if (*(int *)((int)aiStack_140 + iVar14) == 3) {
                    if (iVar20 != 0x37) goto LAB_82983d48;
                    iVar14 = fn_8297F458(iVar8,*piVar25);
                    if (iVar14 == 0) break;
                  }
                  if (iVar20 != 0x37) goto LAB_82983d48;
                  iVar14 = *piVar25;
                }
                *(int *)((int)piVar26 + (int)uVar16) = iVar14;
              }
LAB_82983d48:
              if (*(int *)((int)auStack_160 + (int)uVar16) == -1) {
                *(undefined4 *)((int)auStack_160 + (int)uVar16) = 1;
              }
            }
            uVar16 = uVar16 + 4;
            uVar24 = uVar24 + 1;
            lVar28 = lVar28 + 0x20;
          } while ((uVar16 & 0xffffffff) < 0x1c);
LAB_82983d70:
          if ((uVar24 & 0xffffffff) == 7) break;
        }
      }
LAB_82983d78:
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0xe4;
    } while ((uVar13 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  piVar26 = piStack0000004c;
  if ((uVar13 & 0xffffffff) == (uVar7 & 0xffffffff)) {
    return 1;
  }
  iVar14 = (int)param_2;
  if (param_7 != (int *)0x0) {
    iVar8 = fn_82930318(0x50);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = fn_82931F90();
    }
    if (iVar8 == 0) {
      return 0xffffffff8007000e;
    }
    piVar25 = (int *)(iVar8 + 0x2c);
    iVar20 = (int)uVar13 * 0xe4;
    uVar27 = 0;
    do {
      iVar5 = uVar27 * 0x20 + iVar20 + iVar14;
      uVar23 = uVar27 + 1;
      if (((*(int *)(iVar5 + 0xc) == -2) && (uVar23 = uVar27, param_6 == 0)) ||
         (*(int *)(iVar5 + 4) == 0)) break;
      iVar22 = param_6;
      if (uVar27 != 0) {
        iVar22 = *(int *)(param_6 + 0xc);
      }
      if (*(int *)(iVar5 + 8) != 0) {
        if (*(int *)(iVar5 + 0xc) == -1) {
          if ((*(int *)(iVar5 + 0x1c) == 0) || (*(int *)(iVar5 + 0x20) == 0)) {
            iVar9 = *param_4;
            piVar26 = param_4;
LAB_82983f50:
            iVar9 = (**(code **)(iVar9 + 4))(piVar26);
            if (iVar9 == 0) {
              return 0xffffffff8007000e;
            }
          }
          else {
            iVar9 = fn_82930318(0x28);
            if (iVar9 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = fn_82931D48();
            }
            if (iVar9 == 0) {
              return 0xffffffff8007000e;
            }
            uVar6 = *(uint *)(iVar5 + 0x1c);
            if ((int)uVar6 < 0) {
              uVar6 = auStack_160[~uVar6];
              *(uint *)(iVar9 + 0x1c) = uVar6;
              if (uVar6 == 0xffffffff) {
                *(undefined4 *)(iVar9 + 0x1c) = 1;
              }
            }
            else if (uVar6 != 0) {
              *(uint *)(iVar9 + 0x1c) = uVar6;
            }
            uVar6 = *(uint *)(iVar5 + 0x20);
            if ((int)uVar6 < 0) {
              uVar6 = auStack_160[~uVar6];
              *(uint *)(iVar9 + 0x20) = uVar6;
              if (uVar6 == 0xffffffff) {
                *(undefined4 *)(iVar9 + 0x20) = 1;
              }
            }
            else if (uVar6 != 0) {
              *(uint *)(iVar9 + 0x20) = uVar6;
            }
            if (*(int *)(iVar9 + 0x20) != 1) {
              return 1;
            }
            if (*(int *)(iVar9 + 0x1c) != 1) {
              return 1;
            }
            iVar10 = fn_82981C40(param_1,param_4,0,iVar9);
            if (iVar10 < 0) {
              return 1;
            }
          }
        }
        else {
          if (*(int *)(iVar5 + 0xc) == -2) {
            piVar26 = *(int **)(*(int *)(param_6 + 8) + 0x10);
            iVar9 = *piVar26;
            goto LAB_82983f50;
          }
          iVar9 = fn_82930318(0x28);
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = fn_82931D48();
          }
          if (iVar9 == 0) {
            return 0xffffffff8007000e;
          }
          *(int *)(iVar9 + 0x10) = aiStack_140[*(int *)(iVar5 + 0xc)];
          *(int *)(iVar9 + 0x14) = aiStack_180[*(int *)(iVar5 + 0x14)];
          uVar6 = *(uint *)(iVar5 + 0x1c);
          if ((int)uVar6 < 0) {
            uVar6 = auStack_160[~uVar6];
            *(uint *)(iVar9 + 0x1c) = uVar6;
            if (uVar6 == 0xffffffff) {
              *(undefined4 *)(iVar9 + 0x1c) = 1;
            }
          }
          else {
            *(uint *)(iVar9 + 0x1c) = uVar6;
          }
          uVar6 = *(uint *)(iVar5 + 0x20);
          if ((int)uVar6 < 0) {
            uVar6 = auStack_160[~uVar6];
            *(uint *)(iVar9 + 0x20) = uVar6;
            if (uVar6 == 0xffffffff) {
              *(undefined4 *)(iVar9 + 0x20) = 1;
            }
          }
          else {
            *(uint *)(iVar9 + 0x20) = uVar6;
          }
          *(uint *)(iVar9 + 0x24) = *(uint *)(iVar5 + 8) & 0xc00;
          if ((uVar27 == 0) || ((*(uint *)(iVar5 + 8) & 0x20) == 0)) {
            *(uint *)(iVar9 + 0x24) = *(uint *)(iVar9 + 0x24) | 0x200;
          }
          if (((*(int *)(iVar9 + 0x10) == 1) || (*(int *)(iVar9 + 0x10) == 2)) &&
             ((*(int *)(iVar9 + 0x20) == 1 && (*(int *)(iVar9 + 0x1c) == 1)))) {
            *(undefined4 *)(iVar9 + 0x10) = 0;
          }
        }
        if (uVar27 == 0) {
          if ((*(int *)(iVar20 + iVar14 + 8) != 0) && (*(int *)(iVar8 + 0x28) = iVar9, iVar9 == 0))
          {
            return 0xffffffff8007000e;
          }
        }
        else {
          uVar7 = fn_82930318(0x14);
          if ((uVar7 & 0xffffffff) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = fn_829304E0(uVar7,0,0,0xffffffff8204e25c);
          }
          *piVar25 = iVar10;
          if (iVar10 == 0) {
            return 0xffffffff8007000e;
          }
          uVar7 = fn_82930318(0x34);
          if ((uVar7 & 0xffffffff) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = fn_82930FC0(uVar7,1,0,0,0,0);
          }
          if (iVar10 == 0) {
            return 0xffffffff8007000e;
          }
          *(int *)(*piVar25 + 8) = iVar10;
          uVar7 = fn_82930318(0x30);
          if ((uVar7 & 0xffffffff) == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = fn_82930940(uVar7,iStack00000034);
          }
          *(int *)(iVar10 + 0x14) = iVar11;
          if (iVar11 == 0) {
            return 0xffffffff8007000e;
          }
          *(int *)(iVar11 + 0x18) = *(int *)(iVar5 + 4);
          iVar11 = fn_82930318(0x58);
          if (iVar11 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = fn_82932548();
          }
          if (iVar11 == 0) {
            return 0xffffffff8007000e;
          }
          *(int *)(iVar10 + 0x18) = iVar11;
          *(undefined4 *)(iVar11 + 0x10) = 0xffffffff;
          uVar12 = fn_82981738(param_1,iVar9);
          *(undefined4 *)(iVar11 + 0x14) = uVar12;
          *(undefined4 *)(iVar11 + 0x28) = 2;
          *(undefined4 *)(iVar11 + 0x2c) = *(undefined4 *)(iVar5 + 8);
          *(int *)(iVar11 + 0x30) = iVar9;
          if (iVar9 == 0) {
            return 0xffffffff8007000e;
          }
          piVar25 = (int *)(*piVar25 + 0xc);
        }
      }
      piVar26 = piStack0000004c;
      param_6 = iVar22;
      uVar27 = uVar23;
    } while (uVar23 < 7);
    *param_7 = iVar8;
  }
  if (piVar26 == (int *)0x0) {
    return 0;
  }
  uVar7 = fn_82930318(0x14);
  if ((uVar7 & 0xffffffff) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = fn_829304E0(uVar7,0,0,0xffffffff8204e254);
  }
  if (iVar8 != 0) {
    uVar7 = fn_82930318(0x40);
    if ((uVar7 & 0xffffffff) == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = fn_829334D8(uVar7,2,*(undefined4 *)((int)uVar13 * 0xe4 + iVar14),iStack00000034);
    }
    *(int *)(iVar8 + 8) = iVar14;
    if (iVar14 != 0) {
      *piVar26 = iVar8;
      return 0;
    }
  }
  return 0xffffffff8007000e;
}

