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
extern int fn_829191A0();
extern unsigned int lbl_8202E370;
extern unsigned int lbl_8202E380;
extern unsigned int lbl_821AAD20;


uint fn_8291A458(int param_1,undefined8 param_2,uint *param_3,ulonglong param_4,longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  float fVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar20;
  uint *puVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar21;
  
  puVar3 = *(ushort **)(param_1 + 0x18);
  puVar22 = *(uint **)(param_1 + 0x20);
  uVar1 = *puVar3;
  puVar10 = puVar22;
  if (uVar1 == 0) {
    param_4 = (param_4 & 0xfffffff) << 4;
    if (puVar3[4] < param_4) {
      param_4 = (ulonglong)puVar3[4];
    }
    uVar20 = 0;
    if (param_4 != 0) {
      puVar11 = puVar22 + -1;
      uVar25 = param_4;
      do {
        uVar12 = uVar20 & 0xffffffff;
        uVar17 = (uint)uVar20;
        uVar16 = uVar20 & 0xffffffff;
        uVar20 = uVar20 + 1;
        puVar11 = puVar11 + 1;
        *puVar11 = param_3[(((uint)(uVar12 >> 2) & 0x3ffffffc) + (uVar17 & 3)) * 4 +
                           ((uint)(uVar16 >> 2) & 3)];
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  else if (uVar1 == 1) {
    param_4 = (param_4 & 0x3fffffff) << 2;
    if (puVar3[4] < param_4) {
      param_4 = (ulonglong)puVar3[4];
    }
    uVar20 = 0;
    if (param_4 != 0) {
      uVar17 = (uint)puVar3[3];
      puVar11 = puVar22 + -1;
      do {
        uVar21 = 0;
        if (uVar17 != 0) {
          do {
            if (uVar21 < 5) {
              uVar17 = param_3[(((uint)uVar20 & 0xfffffffc) + uVar21) * 4 + ((uint)uVar20 & 3)];
            }
            else {
              uVar17 = 0;
            }
            uVar21 = uVar21 + 1;
            puVar11 = puVar11 + 1;
            *puVar11 = uVar17;
            uVar17 = (uint)puVar3[3];
          } while (uVar21 < uVar17);
        }
        uVar20 = uVar20 + 1;
      } while ((uVar20 & 0xffffffff) < param_4);
    }
  }
  else if (uVar1 < 3) {
    if ((ulonglong)puVar3[4] < (param_4 & 0xffffffff)) {
      param_4 = (ulonglong)puVar3[4];
    }
    uVar17 = (uint)puVar3[2];
    if ((uVar17 == 4) && (puVar3[3] == 4)) {
      if ((param_4 & 0xffffffff) != 0) {
        puVar11 = puVar22 + -1;
        puVar19 = param_3 + 8;
        uVar20 = param_4;
        do {
          puVar11[1] = puVar19[-8];
          puVar11[2] = puVar19[-4];
          puVar11[3] = *puVar19;
          puVar11[4] = puVar19[4];
          puVar11[5] = puVar19[-7];
          puVar11[6] = puVar19[-3];
          puVar11[7] = puVar19[1];
          puVar11[8] = puVar19[5];
          *(uint *)(((int)puVar22 - (int)param_3) + (int)puVar19) = puVar19[-6];
          puVar11[10] = puVar19[-2];
          puVar11[0xb] = puVar19[2];
          puVar11[0xc] = puVar19[6];
          puVar11[0xd] = puVar19[-5];
          puVar11[0xe] = puVar19[-1];
          puVar11[0xf] = puVar19[3];
          puVar5 = puVar19 + 7;
          puVar19 = puVar19 + 0x10;
          puVar11 = puVar11 + 0x10;
          *puVar11 = *puVar5;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    else if ((param_4 & 0xffffffff) != 0) {
      iVar24 = 0;
      puVar11 = puVar22 + -1;
      uVar20 = param_4;
      do {
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar18 = (uint)puVar3[3];
          do {
            uVar17 = 0;
            if (uVar18 != 0) {
              do {
                if ((uVar21 < 5) && (uVar17 < 5)) {
                  uVar18 = param_3[(iVar24 + uVar17) * 4 + uVar21];
                }
                else {
                  uVar18 = 0;
                }
                uVar17 = uVar17 + 1;
                puVar11 = puVar11 + 1;
                *puVar11 = uVar18;
                uVar18 = (uint)puVar3[3];
              } while (uVar17 < uVar18);
            }
            uVar17 = (uint)puVar3[2];
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar17);
        }
        iVar24 = iVar24 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 != 5) {
        return 0x80004001;
      }
      uVar17 = *(uint *)(param_1 + 0x34);
      uVar20 = ((param_4 & 0xfffffff) << 4) / (ulonglong)uVar17;
      uVar21 = (uint)uVar20;
      trapWord(6,(ulonglong)uVar17,0);
      if (puVar3[4] < uVar20) {
        uVar21 = (uint)puVar3[4];
      }
      lVar14 = (longlong)(int)uVar17 * (longlong)(int)uVar21;
      uVar20 = 0;
      if (lVar14 != 0) {
        puVar10 = puVar22 + -1;
        do {
          uVar17 = (uint)uVar20;
          uVar25 = uVar20 & 0xffffffff;
          uVar12 = uVar20 & 0xffffffff;
          uVar20 = uVar20 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = param_3[(((uint)(uVar25 >> 2) & 0x3ffffffc) + (uVar17 & 3)) * 4 +
                             ((uint)(uVar12 >> 2) & 3)];
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      uVar17 = 0;
      if (uVar21 != 0) {
        do {
          uVar18 = 0;
          if (puVar3[5] != 0) {
            iVar24 = 0;
            do {
              iVar4 = *(int *)(iVar24 + *(int *)(param_1 + 0x38));
              uVar8 = fn_829191A0(iVar4,param_2,puVar22,*(undefined4 *)(iVar4 + 0x30),param_5);
              if ((int)uVar8 < 0) {
                return uVar8;
              }
              uVar18 = uVar18 + 1;
              iVar24 = iVar24 + 4;
              puVar22 = puVar22 + *(int *)(iVar4 + 0x30);
            } while (uVar18 < puVar3[5]);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar21);
      }
      return 0;
    }
    if ((ulonglong)puVar3[4] < (param_4 & 0xffffffff)) {
      param_4 = (ulonglong)puVar3[4];
    }
    uVar17 = (uint)puVar3[2];
    if (((uVar17 != 4) || (puVar10 = param_3, puVar3[3] != 4)) &&
       (puVar10 = puVar22, (param_4 & 0xffffffff) != 0)) {
      iVar24 = 0;
      puVar11 = puVar22 + -1;
      uVar20 = param_4;
      do {
        uVar21 = 0;
        if (puVar3[3] != 0) {
          do {
            uVar18 = 0;
            if (uVar17 != 0) {
              do {
                if ((uVar18 < 5) && (uVar21 < 5)) {
                  uVar17 = param_3[(iVar24 + uVar21) * 4 + uVar18];
                }
                else {
                  uVar17 = 0;
                }
                uVar18 = uVar18 + 1;
                puVar11 = puVar11 + 1;
                *puVar11 = uVar17;
                uVar17 = (uint)puVar3[2];
              } while (uVar18 < uVar17);
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < puVar3[3]);
        }
        iVar24 = iVar24 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  fVar7 = lbl_821AAD20;
  uVar1 = puVar3[1];
  iVar24 = (int)param_4;
  puVar11 = puVar10;
  if (uVar1 != 3) {
    uVar20 = (longlong)*(int *)(param_1 + 0x34) * (longlong)iVar24;
    puVar11 = puVar22;
    if (uVar1 == 1) {
      if ((uVar20 & 0xffffffff) != 0) {
        puVar19 = puVar22;
        do {
          *puVar19 = (uint)(*(float *)((int)puVar19 + ((int)puVar10 - (int)puVar22)) != fVar7);
          puVar19 = puVar19 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    else if ((uVar1 == 2) && ((uVar20 & 0xffffffff) != 0)) {
      puVar19 = puVar22;
      do {
        *puVar19 = (int)*(float *)(((int)puVar10 - (int)puVar22) + (int)puVar19);
        puVar19 = puVar19 + 1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  puVar10 = puVar11;
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar3 == 3) {
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
    }
    else {
      uVar1 = puVar3[3];
      uVar2 = puVar3[2];
    }
    uVar20 = (ulonglong)uVar1;
    if ((uVar1 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar9 = &lbl_8202E380;
      }
      else {
        puVar9 = &lbl_8202E370;
      }
      uVar12 = (longlong)(int)(uint)uVar2 * (longlong)iVar24;
      uVar25 = uVar20 + 3 & 0xfffffffc;
      puVar10 = puVar22;
      if (uVar12 != 0) {
        lVar13 = (longlong)(int)uVar12 * (longlong)(int)uVar25;
        lVar14 = (longlong)(int)uVar12 * (longlong)(int)(uint)uVar1;
        do {
          uVar12 = uVar12 - 1;
          lVar14 = lVar14 - uVar20;
          lVar13 = lVar13 - uVar25;
          uVar16 = uVar20;
          uVar6 = uVar20;
          if ((uint)uVar1 < uVar25) {
            lVar23 = uVar25 - uVar20;
            uVar15 = uVar25;
            do {
              uVar15 = uVar15 - 1;
              *(undefined4 *)((int)((uVar15 + lVar13 & 0xffffffff) << 2) + (int)puVar22) =
                   *(undefined4 *)(puVar9 + ((uint)((uVar15 & 0xffffffff) << 2) & 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar16 = uVar16 - 1;
            *(undefined4 *)((int)((uVar16 + lVar13 & 0xffffffff) << 2) + (int)puVar22) =
                 *(undefined4 *)((int)((uVar16 + lVar14 & 0xffffffff) << 2) + (int)puVar11);
          }
        } while ((uVar12 & 0xffffffff) != 0);
      }
    }
  }
  uVar20 = (longlong)*(int *)(param_1 + 0x2c) * (longlong)iVar24;
  if ((ulonglong)*(ushort *)(param_1 + 0xc) < (uVar20 & 0xffffffff)) {
    uVar20 = (ulonglong)*(ushort *)(param_1 + 0xc);
  }
  if (*(code **)(param_1 + 0x1c) == (code *)0x0) {
    uVar17 = 0x80004005;
  }
  else {
    uVar17 = (**(code **)(param_1 + 0x1c))
                       (param_2,(ulonglong)*(ushort *)(param_1 + 10) + param_5,puVar10,puVar22,
                        uVar20);
    uVar17 = (int)uVar17 >> 0x1f & uVar17;
  }
  return uVar17;
}

