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


uint fn_82919F58(int param_1,undefined8 param_2,int *param_3,ulonglong param_4,longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar19;
  undefined4 *puVar20;
  int *piVar21;
  uint *puVar22;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar23;
  undefined4 uVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  
  puVar3 = *(ushort **)(param_1 + 0x18);
  iVar26 = *(int *)(param_1 + 0x20);
  uVar1 = *puVar3;
  if (uVar1 == 0) {
    param_4 = (param_4 & 0xfffffff) << 4;
    if (puVar3[4] < param_4) {
      param_4 = (ulonglong)puVar3[4];
    }
    uVar12 = 0;
    if (param_4 != 0) {
      puVar20 = (undefined4 *)(iVar26 + -4);
      uVar25 = param_4;
      do {
        uVar19 = uVar12 & 0xc;
        uVar10 = uVar12 & 3;
        uVar23 = uVar12 >> 2;
        uVar12 = uVar12 + 1;
        puVar20 = puVar20 + 1;
        *puVar20 = *(undefined4 *)
                    ((uVar19 + uVar10) * 4 + *(int *)((uVar23 & 0x3ffffffc) + (int)param_3));
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  else if (uVar1 == 1) {
    param_4 = (param_4 & 0x3fffffff) << 2;
    if (puVar3[4] < param_4) {
      param_4 = (ulonglong)puVar3[4];
    }
    uVar12 = 0;
    if (param_4 != 0) {
      uVar23 = (uint)puVar3[3];
      puVar20 = (undefined4 *)(iVar26 + -4);
      do {
        uVar19 = 0;
        if (uVar23 != 0) {
          do {
            if (uVar19 < 5) {
              uVar24 = *(undefined4 *)
                        (((uVar12 & 3) * 4 + uVar19) * 4 +
                        *(int *)((uVar12 & 0xfffffffc) + (int)param_3));
            }
            else {
              uVar24 = 0;
            }
            puVar20 = puVar20 + 1;
            *puVar20 = uVar24;
            uVar19 = uVar19 + 1;
            uVar23 = (uint)puVar3[3];
          } while (uVar19 < uVar23);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_4);
    }
  }
  else if (uVar1 < 3) {
    if ((ulonglong)puVar3[4] < (param_4 & 0xffffffff)) {
      param_4 = (ulonglong)puVar3[4];
    }
    if ((param_4 & 0xffffffff) != 0) {
      puVar20 = (undefined4 *)(iVar26 + -4);
      uVar25 = param_4;
      do {
        uVar12 = 0;
        if (puVar3[2] != 0) {
          uVar19 = (uint)puVar3[3];
          uVar23 = 0;
          do {
            uVar10 = 0;
            if (uVar19 != 0) {
              do {
                if ((uVar23 < 0x11) && (uVar10 < 5)) {
                  uVar24 = *(undefined4 *)((uVar23 + uVar10) * 4 + *param_3);
                }
                else {
                  uVar24 = 0;
                }
                uVar10 = uVar10 + 1;
                puVar20 = puVar20 + 1;
                *puVar20 = uVar24;
                uVar19 = (uint)puVar3[3];
              } while (uVar10 < uVar19);
            }
            uVar12 = uVar12 + 1;
            uVar23 = uVar23 + 4;
          } while (uVar12 < puVar3[2]);
        }
        param_3 = param_3 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 != 5) {
        return 0x80004001;
      }
      uVar12 = *(uint *)(param_1 + 0x34);
      uVar25 = ((param_4 & 0xfffffff) << 4) / (ulonglong)uVar12;
      uVar23 = (uint)uVar25;
      trapWord(6,(ulonglong)uVar12,0);
      if (puVar3[4] < uVar25) {
        uVar23 = (uint)puVar3[4];
      }
      lVar16 = (longlong)(int)uVar12 * (longlong)(int)uVar23;
      uVar12 = 0;
      if (lVar16 != 0) {
        puVar20 = (undefined4 *)(iVar26 + -4);
        do {
          uVar10 = uVar12 & 0xc;
          uVar6 = uVar12 & 3;
          uVar19 = uVar12 >> 2;
          uVar12 = uVar12 + 1;
          puVar20 = puVar20 + 1;
          *puVar20 = *(undefined4 *)
                      ((uVar10 + uVar6) * 4 + *(int *)((uVar19 & 0x3ffffffc) + (int)param_3));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      uVar12 = 0;
      if (uVar23 != 0) {
        do {
          uVar19 = 0;
          if (puVar3[5] != 0) {
            iVar27 = 0;
            do {
              iVar4 = *(int *)(*(int *)(param_1 + 0x38) + iVar27);
              uVar10 = fn_829191A0(iVar4,param_2,iVar26,*(undefined4 *)(iVar4 + 0x30),param_5);
              if ((int)uVar10 < 0) {
                return uVar10;
              }
              uVar19 = uVar19 + 1;
              iVar27 = iVar27 + 4;
              iVar26 = *(int *)(iVar4 + 0x30) * 4 + iVar26;
            } while (uVar19 < puVar3[5]);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar23);
      }
      return 0;
    }
    if ((ulonglong)puVar3[4] < (param_4 & 0xffffffff)) {
      param_4 = (ulonglong)puVar3[4];
    }
    if ((param_4 & 0xffffffff) != 0) {
      puVar20 = (undefined4 *)(iVar26 + -4);
      uVar25 = param_4;
      do {
        uVar12 = 0;
        if (puVar3[3] != 0) {
          uVar23 = (uint)puVar3[2];
          do {
            uVar19 = 0;
            if (uVar23 != 0) {
              iVar27 = uVar12 << 2;
              do {
                if ((uVar19 < 5) && (uVar12 < 5)) {
                  uVar24 = *(undefined4 *)(*param_3 + iVar27);
                }
                else {
                  uVar24 = 0;
                }
                uVar19 = uVar19 + 1;
                puVar20 = puVar20 + 1;
                *puVar20 = uVar24;
                uVar23 = (uint)puVar3[2];
                iVar27 = iVar27 + 0x10;
              } while (uVar19 < uVar23);
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < puVar3[3]);
        }
        param_3 = param_3 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  fVar9 = lbl_821AAD20;
  uVar1 = puVar3[1];
  iVar27 = (int)param_4;
  if (uVar1 != 3) {
    uVar25 = (longlong)*(int *)(param_1 + 0x34) * (longlong)iVar27;
    if (uVar1 == 1) {
      if ((uVar25 & 0xffffffff) != 0) {
        puVar22 = (uint *)(iVar26 + -4);
        do {
          pfVar5 = (float *)(puVar22 + 1);
          puVar22 = puVar22 + 1;
          *puVar22 = (uint)(*pfVar5 != fVar9);
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    else if ((uVar1 == 2) && ((uVar25 & 0xffffffff) != 0)) {
      piVar21 = (int *)(iVar26 + -4);
      do {
        pfVar5 = (float *)(piVar21 + 1);
        piVar21 = piVar21 + 1;
        *piVar21 = (int)*pfVar5;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar3 == 3) {
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
    }
    else {
      uVar1 = puVar3[3];
      uVar2 = puVar3[2];
    }
    uVar25 = (ulonglong)uVar1;
    if ((uVar1 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar11 = &lbl_8202E380;
      }
      else {
        puVar11 = &lbl_8202E370;
      }
      uVar15 = (longlong)(int)(uint)uVar2 * (longlong)iVar27;
      uVar7 = uVar25 + 3 & 0xfffffffc;
      if (uVar15 != 0) {
        lVar14 = (longlong)(int)uVar15 * (longlong)(int)uVar7;
        lVar16 = (longlong)(int)uVar15 * (longlong)(int)(uint)uVar1;
        do {
          uVar15 = uVar15 - 1;
          lVar16 = lVar16 - uVar25;
          lVar14 = lVar14 - uVar7;
          uVar18 = uVar25;
          uVar8 = uVar25;
          if ((uint)uVar1 < uVar7) {
            lVar13 = uVar7 - uVar25;
            uVar17 = uVar7;
            do {
              uVar17 = uVar17 - 1;
              *(undefined4 *)((int)((uVar17 + lVar14 & 0xffffffff) << 2) + iVar26) =
                   *(undefined4 *)(puVar11 + ((uint)((uVar17 & 0xffffffff) << 2) & 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            uVar18 = uVar18 - 1;
            *(undefined4 *)((int)((uVar18 + lVar14 & 0xffffffff) << 2) + iVar26) =
                 *(undefined4 *)((int)((uVar18 + lVar16 & 0xffffffff) << 2) + iVar26);
          }
        } while ((uVar15 & 0xffffffff) != 0);
      }
    }
  }
  uVar25 = (longlong)*(int *)(param_1 + 0x2c) * (longlong)iVar27;
  if ((ulonglong)*(ushort *)(param_1 + 0xc) < (uVar25 & 0xffffffff)) {
    uVar25 = (ulonglong)*(ushort *)(param_1 + 0xc);
  }
  if (*(code **)(param_1 + 0x1c) == (code *)0x0) {
    uVar12 = 0x80004005;
  }
  else {
    uVar12 = (**(code **)(param_1 + 0x1c))
                       (param_2,(ulonglong)*(ushort *)(param_1 + 10) + param_5,iVar26,iVar26,uVar25)
    ;
    uVar12 = (int)uVar12 >> 0x1f & uVar12;
  }
  return uVar12;
}

