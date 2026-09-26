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
extern unsigned int *auStack_a4;
extern int fn_82E95BB0();
extern int fn_82F19330();
extern int fn_82F65350();
extern unsigned int iStack_ac;
extern unsigned int lbl_8215F808;
extern unsigned int lbl_82162860;
extern unsigned int uStack0000001c;
extern unsigned int uStack_a8;


void fn_82E99258(int param_1,ulonglong param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar10;
  longlong lVar9;
  int *piVar12;
  undefined4 *puVar13;
  longlong lVar11;
  uint uVar14;
  int iVar17;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uStack0000001c;
  int iStack_ac;
  uint uStack_a8;
  uint auStack_a4 [41];
  
  uStack0000001c = (uint)param_2;
  if (*(int *)(param_1 + 0x76dc) == 0) {
    fn_82F19330();
  }
  else {
    iVar6 = *(int *)(param_1 + 0x1e54);
    if ((*(int *)(param_1 + 0x6d54) == 0) || (iVar8 = 4, *(int *)(param_1 + 0x7b38) == 0)) {
      iVar8 = 1;
    }
    iVar19 = *(int *)(param_1 + 0x2d8);
    uVar29 = 0;
    iVar27 = 4;
    iVar25 = iVar19 + 3;
    iVar24 = 4;
    iVar26 = 4;
    iVar22 = 4;
    if ((param_2 & 0xffffffff) < 6) {
      bVar1 = uStack0000001c != 0;
      if (param_2 == 1 && bVar1) {
        uVar3 = *(uint *)(param_1 + 0x1b84);
        uVar28 = (ulonglong)uVar3;
        uVar18 = 0;
        iVar8 = 0;
        if (0 < iVar19) {
          pcVar10 = (char *)(iVar6 + 0x58);
          do {
            cVar2 = *pcVar10;
            if (((cVar2 == '\x01') || (cVar2 == '\x05')) || (bVar1 = false, cVar2 == '\x06')) {
              bVar1 = true;
            }
            pcVar10 = pcVar10 + 0x114;
            *(char *)(iVar8 + uVar3) = -1 - !bVar1;
            iVar8 = iVar8 + 1;
            uVar18 = (longlong)(char)(-1 - !bVar1) + uVar18;
          } while (iVar8 < *(int *)(param_1 + 0x2d8));
        }
      }
      else if (param_2 == 2 && bVar1) {
        uVar3 = *(uint *)(param_1 + 0x5290);
        uVar28 = (ulonglong)uVar3;
        if (*(int *)(param_1 + 0x6d54) == 0) {
          uVar18 = 0;
          iVar8 = 0;
          if (0 < iVar19) {
            pcVar10 = (char *)(iVar6 + -0xbc);
            do {
              pcVar10 = pcVar10 + 0x114;
              cVar2 = *pcVar10;
              *(bool *)(iVar8 + uVar3) = cVar2 == '\x02';
              iVar8 = iVar8 + 1;
              uVar18 = (longlong)(cVar2 == '\x02') + uVar18;
            } while (iVar8 < *(int *)(param_1 + 0x2d8));
          }
        }
        else if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
          uVar18 = 0;
          iVar8 = 0;
          if (0 < iVar19) {
            pcVar10 = (char *)(iVar6 + -0xbb);
            do {
              pcVar10 = pcVar10 + 0x114;
              cVar2 = *pcVar10;
              *(bool *)(iVar8 + uVar3) = cVar2 == '\x01';
              iVar8 = iVar8 + 1;
              uVar18 = (longlong)(cVar2 == '\x01') + uVar18;
            } while (iVar8 < *(int *)(param_1 + 0x2d8));
          }
        }
        else {
          uVar18 = 0;
          iVar8 = 0;
          if (0 < iVar19) {
            pcVar10 = (char *)(iVar6 + -0xbc);
            do {
              pcVar10 = pcVar10 + 0x114;
              cVar2 = *pcVar10;
              *(bool *)(iVar8 + uVar3) = cVar2 == '\x02';
              iVar8 = iVar8 + 1;
              uVar18 = (longlong)(cVar2 == '\x02') + uVar18;
            } while (iVar8 < *(int *)(param_1 + 0x2d8));
          }
        }
      }
      else if (param_2 == 3 && bVar1) {
        uVar3 = *(uint *)(param_1 + 0x1e9c);
        uVar28 = (ulonglong)uVar3;
        uVar18 = 0;
        iVar17 = 0;
        if (0 < iVar19) {
          piVar12 = (int *)(iVar6 + -0xb8);
          do {
            piVar12 = piVar12 + 0x45;
            bVar1 = iVar8 == *piVar12 >> 0x1c;
            *(bool *)(iVar17 + uVar3) = bVar1;
            iVar17 = iVar17 + 1;
            uVar18 = (longlong)bVar1 + uVar18;
          } while (iVar17 < *(int *)(param_1 + 0x2d8));
        }
      }
      else if (param_2 == 4 && bVar1) {
        uVar3 = *(uint *)(param_1 + 0x1b84);
        uVar28 = (ulonglong)uVar3;
        uVar18 = 0;
        iVar8 = 0;
        if (0 < iVar19) {
          puVar13 = (undefined4 *)(iVar6 + -0xf8);
          do {
            puVar13 = puVar13 + 0x45;
            uVar4 = *puVar13;
            *(char *)(iVar8 + uVar3) = (char)uVar4;
            iVar8 = iVar8 + 1;
            uVar18 = (longlong)(char)uVar4 + uVar18;
          } while (iVar8 < *(int *)(param_1 + 0x2d8));
        }
      }
      else if (bVar1) {
        uVar3 = *(uint *)(param_1 + 0x1b84);
        uVar28 = (ulonglong)uVar3;
        uVar18 = 0;
        iVar8 = 0;
        if (0 < iVar19) {
          puVar13 = (undefined4 *)(iVar6 + -0x98);
          do {
            puVar13 = puVar13 + 0x45;
            uVar4 = *puVar13;
            *(char *)(iVar8 + uVar3) = (char)uVar4;
            iVar8 = iVar8 + 1;
            uVar18 = (longlong)(char)uVar4 + uVar18;
          } while (iVar8 < *(int *)(param_1 + 0x2d8));
        }
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x1b84);
        uVar28 = (ulonglong)uVar3;
        uVar18 = 0;
        iVar8 = 0;
        if (0 < iVar19) {
          puVar13 = (undefined4 *)(iVar6 + -0x114);
          do {
            puVar13 = puVar13 + 0x45;
            bVar5 = (byte)((uint)*puVar13 >> 0x1f);
            *(byte *)(iVar8 + uVar3) = bVar5;
            iVar8 = iVar8 + 1;
            uVar18 = (longlong)(char)bVar5 + uVar18;
          } while (iVar8 < *(int *)(param_1 + 0x2d8));
        }
      }
    }
    else {
      uVar28 = (ulonglong)auStack_a4[0];
      uVar18 = (ulonglong)auStack_a4[0];
    }
    uVar15 = (ulonglong)*(uint *)(param_1 + 0x2d8);
    uVar18 = (uVar18 & 0x7fffffff) << 1;
    uVar18 = ((~(uVar18 ^ uVar15) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar18 <= uVar15) & 1;
    auStack_a4[0] = (uint)uVar18;
    if (*(int *)(param_1 + 0x1a74) != 0) {
      fn_82F65350();
      uVar18 = 0;
      auStack_a4[0] = 0;
    }
    lVar9 = 0;
    if (0 < *(int *)(param_1 + 0x2d4)) {
      lVar11 = uVar15 + uVar28 + -1;
      do {
        lVar16 = 0;
        if (0 < *(int *)(param_1 + 0x2d0)) {
          do {
            pcVar10 = (char *)uVar28;
            if (lVar16 + lVar9 == 0) {
LAB_82e99608:
              uVar15 = uVar18;
            }
            else if ((int)lVar9 == 0) {
              uVar15 = (longlong)pcVar10[-1];
            }
            else if ((int)lVar16 == 0) {
              uVar15 = (longlong)pcVar10[-*(int *)(param_1 + 0x2d0)];
            }
            else {
              uVar15 = (longlong)pcVar10[-1];
              if (pcVar10[-1] != pcVar10[-*(int *)(param_1 + 0x2d0)]) goto LAB_82e99608;
            }
            lVar16 = lVar16 + 1;
            uVar28 = uVar28 + 1;
            lVar11 = lVar11 + 1;
            *(char *)lVar11 = '\x01' - ((longlong)*pcVar10 == uVar15);
          } while ((int)lVar16 < *(int *)(param_1 + 0x2d0));
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(param_1 + 0x2d4));
    }
    iVar19 = 0;
    iVar8 = (int)uVar28;
    iVar6 = iVar8 - *(int *)(param_1 + 0x2d8);
    if (0 < *(int *)(param_1 + 0x2d8)) {
      do {
        *(byte *)(iVar19 + iVar6) = *(byte *)(iVar19 + iVar6) ^ (byte)uVar18;
        iVar19 = iVar19 + 1;
      } while (iVar19 < *(int *)(param_1 + 0x2d8));
    }
    uVar3 = *(uint *)(param_1 + 0x2d8);
    uVar15 = (ulonglong)uVar3 & 1;
    if ((uVar3 & 1) != 0) {
      iVar26 = 2;
      iVar27 = 2;
    }
    if ((int)uVar15 < (int)uVar3) {
      lVar9 = uVar28 + uVar15;
      do {
        iVar19 = (int)uVar15;
        pcVar10 = (char *)lVar9;
        uVar15 = uVar15 + 2;
        lVar9 = lVar9 + 2;
        iVar27 = *(int *)(&lbl_82162860 +
                         ((int)*(char *)(iVar6 + 1 + iVar19) + (int)pcVar10[iVar6 - iVar8]) * 4) +
                 iVar27;
        iVar26 = *(int *)(&lbl_82162860 + ((int)*(char *)(iVar8 + 1 + iVar19) + (int)*pcVar10) * 4)
                 + iVar26;
      } while ((int)uVar15 < *(int *)(param_1 + 0x2d8));
    }
    iStack_ac = iVar25;
    if (iVar27 < iVar25) {
      iStack_ac = iVar27;
    }
    uStack_a8 = (uint)(iVar27 < iVar25);
    if (iVar26 < iStack_ac) {
      uStack_a8 = 2;
      iStack_ac = iVar26;
    }
    uVar3 = *(uint *)(param_1 + 0x2d4);
    if ((uVar3 % 3 == 0) && (uVar7 = *(uint *)(param_1 + 0x2d0), uVar7 % 3 != 0)) {
      uVar23 = uVar7 & 1;
      if (0 < (int)uVar3) {
        iVar19 = (uVar3 - 1) / 3 + 1;
        iVar25 = 0;
        do {
          if ((int)uVar23 < (int)uVar7) {
            iVar26 = iVar6 + 1;
            iVar27 = iVar8 + 1;
            uVar14 = uVar23;
            do {
              iVar20 = iVar25 + uVar14;
              uVar14 = uVar14 + 2;
              iVar21 = uVar7 + iVar20;
              iVar17 = uVar7 + iVar21;
              iVar24 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar26 + iVar17) + (int)*(char *)(iVar17 + iVar6) +
                               (int)*(char *)(iVar26 + iVar21) + (int)*(char *)(iVar21 + iVar6) +
                               (int)*(char *)(iVar26 + iVar20) + (int)*(char *)(iVar20 + iVar6)) * 4
                               ) + iVar24;
              iVar22 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar27 + iVar17) + (int)*(char *)(iVar17 + iVar8) +
                               (int)*(char *)(iVar27 + iVar21) + (int)*(char *)(iVar21 + iVar8) +
                               (int)*(char *)(iVar27 + iVar20) + (int)*(char *)(iVar20 + iVar8)) * 4
                               ) + iVar22;
            } while ((int)uVar14 < *(int *)(param_1 + 0x2d0));
          }
          iVar25 = uVar7 * 3 + iVar25;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x2d0);
      uVar29 = uVar3 & 1;
      uVar23 = uVar7 % 3;
      if ((int)uVar29 < (int)uVar3) {
        iVar19 = uVar7 * uVar29;
        lVar9 = (ulonglong)((*(int *)(param_1 + 0x2d4) - uVar29) - 1 >> 1) + 1;
        do {
          if ((int)uVar23 < (int)uVar7) {
            uVar14 = uVar23;
            do {
              iVar25 = iVar19 + uVar14;
              uVar14 = uVar14 + 3;
              iVar26 = uVar7 + iVar25;
              iVar24 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar6 + 2 + iVar26) +
                                (int)*(char *)(iVar6 + 1 + iVar26) + (int)*(char *)(iVar26 + iVar6)
                               + (int)*(char *)(iVar6 + 2 + iVar25) +
                                 (int)*(char *)(iVar6 + 1 + iVar25) + (int)*(char *)(iVar25 + iVar6)
                               ) * 4) + iVar24;
              iVar22 = *(int *)(&lbl_8215F808 +
                               ((int)*(char *)(iVar8 + 2 + iVar26) +
                                (int)*(char *)(iVar8 + 1 + iVar26) + (int)*(char *)(iVar26 + iVar8)
                               + (int)*(char *)(iVar8 + 2 + iVar25) +
                                 (int)*(char *)(iVar8 + 1 + iVar25) + (int)*(char *)(iVar25 + iVar8)
                               ) * 4) + iVar22;
            } while ((int)uVar14 < *(int *)(param_1 + 0x2d0));
            uVar18 = (ulonglong)auStack_a4[0];
          }
          iVar19 = uVar7 * 2 + iVar19;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
    iVar19 = 0;
    if (uVar23 != 0) {
      do {
        iVar25 = 0;
        if (0 < (int)uVar3) {
          do {
            if (*(char *)(uVar7 * iVar25 + iVar19 + iVar6) != '\0') {
              iVar24 = uVar3 + iVar24;
              break;
            }
            iVar25 = iVar25 + 1;
          } while (iVar25 < *(int *)(param_1 + 0x2d4));
        }
        iVar25 = 0;
        if (0 < (int)uVar3) {
          do {
            if (*(char *)(uVar7 * iVar25 + iVar8 + iVar19) != '\0') {
              iVar22 = uVar3 + iVar22;
              break;
            }
            iVar25 = iVar25 + 1;
          } while (iVar25 < *(int *)(param_1 + 0x2d4));
        }
        iVar19 = iVar19 + 1;
        iVar24 = iVar24 + 1;
        iVar22 = iVar22 + 1;
      } while (iVar19 < (int)uVar23);
    }
    if (uVar29 != 0) {
      uVar29 = uVar23;
      if ((int)uVar23 < (int)uVar7) {
        do {
          if (*(char *)(uVar29 + iVar6) != '\0') {
            iVar24 = (uVar7 - uVar23) + iVar24;
            break;
          }
          uVar29 = uVar29 + 1;
        } while ((int)uVar29 < *(int *)(param_1 + 0x2d0));
      }
      uVar29 = uVar23;
      if ((int)uVar23 < (int)uVar7) {
        do {
          if (*(char *)(iVar8 + uVar29) != '\0') {
            iVar22 = (uVar7 - uVar23) + iVar22;
            break;
          }
          uVar29 = uVar29 + 1;
        } while ((int)uVar29 < *(int *)(param_1 + 0x2d0));
      }
    }
    if (iVar24 < iStack_ac) {
      uStack_a8 = 3;
      iStack_ac = iVar24;
    }
    if (iVar22 < iStack_ac) {
      uStack_a8 = 4;
      iStack_ac = iVar22;
    }
    iVar8 = uVar3 + 4;
    if (0 < (int)uVar3) {
      uVar28 = (ulonglong)*(uint *)(param_1 + 0x2d4);
      iVar19 = 0;
      do {
        iVar24 = 0;
        iVar22 = iVar19;
        if (0 < (int)uVar7) {
          do {
            if (*(char *)(iVar22 + iVar6) != '\0') {
              iVar8 = uVar7 + iVar8;
              break;
            }
            iVar24 = iVar24 + 1;
            iVar22 = iVar19 + iVar24;
          } while (iVar24 < *(int *)(param_1 + 0x2d0));
        }
        iVar19 = iVar19 + uVar7;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    if (iVar8 < iStack_ac) {
      uStack_a8 = 5;
      iStack_ac = iVar8;
    }
    iVar8 = uVar7 + 4;
    iVar19 = 0;
    if (0 < (int)uVar7) {
      do {
        iVar22 = 0;
        if (0 < (int)uVar3) {
          do {
            if (*(char *)(uVar7 * iVar22 + iVar19 + iVar6) != '\0') {
              iVar8 = uVar3 + iVar8;
              break;
            }
            iVar22 = iVar22 + 1;
          } while (iVar22 < *(int *)(param_1 + 0x2d4));
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < *(int *)(param_1 + 0x2d0));
    }
    if (iVar8 < iStack_ac) {
      uStack_a8 = 6;
      iStack_ac = iVar8;
    }
    fn_82E95BB0(param_1,param_1 + 0x8cc,auStack_a4);
    if ((int)(auStack_a4[0] + 4) < iStack_ac) {
      uStack_a8 = 7;
    }
    if (*(int *)(param_1 + 0x1a74) != 0) {
      iVar6 = fn_82F65350();
      uStack_a8 = iVar6 % 7;
    }
    if (((*(int *)(param_1 + 0x8d4) == 0) && (*(int *)(param_1 + 0x8e0) == 0)) &&
       (*(int *)(param_1 + 0xb08) == 0)) {
      uVar29 = 0;
      if (uStack_a8 != 0) {
        uVar29 = uStack_a8 << 1 | (uint)uVar18;
      }
    }
    else {
      uVar29 = 0;
    }
    if (uStack0000001c < 6) {
      if (uStack0000001c == 1) {
        *(uint *)(param_1 + 0x8c8) = uVar29;
      }
      else if (uStack0000001c == 2) {
        *(uint *)(param_1 + 0x6efc) = uVar29;
      }
      else if (uStack0000001c == 3) {
        *(uint *)(param_1 + 0x8d0) = uVar29;
      }
      else if (uStack0000001c == 4) {
        *(uint *)(param_1 + 0x6ef8) = uVar29;
      }
      else if (uStack0000001c == 0) {
        *(uint *)(param_1 + 0x8c4) = uVar29;
      }
      else {
        *(uint *)(param_1 + 0x6f04) = uVar29;
      }
    }
  }
  return;
}

