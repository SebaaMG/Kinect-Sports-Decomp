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


uint fn_829199E0(int param_1,undefined8 param_2,uint *param_3,ulonglong param_4,longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  
  puVar3 = *(ushort **)(param_1 + 0x18);
  puVar4 = *(uint **)(param_1 + 0x20);
  uVar1 = *puVar3;
  puVar20 = param_3;
  if (uVar1 == 0) {
    param_4 = (param_4 & 0xfffffff) << 4;
    if (puVar3[4] < param_4) {
      param_4 = (ulonglong)puVar3[4];
    }
  }
  else {
    puVar20 = puVar4;
    if (uVar1 == 1) {
      param_4 = (param_4 & 0x3fffffff) << 2;
      if (puVar3[4] < param_4) {
        param_4 = (ulonglong)puVar3[4];
      }
      uVar23 = (ulonglong)puVar3[3];
      puVar20 = param_3;
      if ((uVar23 != 4) && (uVar22 = 0, puVar20 = puVar4, param_4 != 0)) {
        puVar21 = puVar4 + -1;
        do {
          uVar13 = 0;
          if (uVar23 != 0) {
            do {
              if ((uVar13 & 0xffffffff) < 5) {
                uVar17 = *(uint *)((int)(((((uVar22 & 0xfffffffc) + (uVar22 & 3)) * 4 & 0xfffffffc)
                                          + uVar13 & 0xffffffff) << 2) + (int)param_3);
              }
              else {
                uVar17 = 0;
              }
              puVar21 = puVar21 + 1;
              *puVar21 = uVar17;
              uVar13 = uVar13 + 1;
              uVar23 = (ulonglong)puVar3[3];
            } while ((uVar13 & 0xffffffff) < uVar23);
          }
          uVar22 = uVar22 + 1;
        } while ((uVar22 & 0xffffffff) < param_4);
      }
    }
    else if (uVar1 < 3) {
      if ((ulonglong)puVar3[4] < (param_4 & 0xffffffff)) {
        param_4 = (ulonglong)puVar3[4];
      }
      uVar17 = (uint)puVar3[2];
      if (((uVar17 != 4) || (puVar20 = param_3, puVar3[3] != 4)) &&
         (puVar20 = puVar4, (param_4 & 0xffffffff) != 0)) {
        iVar10 = 0;
        puVar21 = puVar4 + -1;
        uVar23 = param_4;
        do {
          uVar9 = 0;
          if (uVar17 != 0) {
            uVar18 = (uint)puVar3[3];
            do {
              uVar17 = 0;
              if (uVar18 != 0) {
                do {
                  if ((uVar9 < 5) && (uVar17 < 5)) {
                    uVar18 = param_3[(iVar10 + uVar9) * 4 + uVar17];
                  }
                  else {
                    uVar18 = 0;
                  }
                  uVar17 = uVar17 + 1;
                  puVar21 = puVar21 + 1;
                  *puVar21 = uVar18;
                  uVar18 = (uint)puVar3[3];
                } while (uVar17 < uVar18);
              }
              uVar17 = (uint)puVar3[2];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar17);
          }
          iVar10 = iVar10 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    else {
      if (uVar1 != 3) {
        if (uVar1 != 5) {
          return 0x80004001;
        }
        uVar23 = ((param_4 & 0xfffffff) << 4) / (ulonglong)*(uint *)(param_1 + 0x34);
        trapWord(6,(ulonglong)*(uint *)(param_1 + 0x34),0);
        if (puVar3[4] < uVar23) {
          uVar23 = (ulonglong)puVar3[4];
        }
        uVar22 = 0;
        if (uVar23 != 0) {
          do {
            uVar17 = 0;
            if (puVar3[5] != 0) {
              iVar10 = 0;
              do {
                iVar5 = *(int *)(*(int *)(param_1 + 0x38) + iVar10);
                uVar9 = fn_829191A0(iVar5,param_2,param_3,*(undefined4 *)(iVar5 + 0x30),param_5);
                if ((int)uVar9 < 0) {
                  return uVar9;
                }
                uVar17 = uVar17 + 1;
                iVar10 = iVar10 + 4;
                param_3 = param_3 + *(int *)(iVar5 + 0x30);
              } while (uVar17 < puVar3[5]);
            }
            uVar22 = uVar22 + 1;
          } while ((uVar22 & 0xffffffff) < uVar23);
        }
        return 0;
      }
      if ((ulonglong)puVar3[4] < (param_4 & 0xffffffff)) {
        param_4 = (ulonglong)puVar3[4];
      }
      uVar17 = (uint)puVar3[2];
      if ((uVar17 == 4) && (puVar3[3] == 4)) {
        if ((param_4 & 0xffffffff) != 0) {
          puVar21 = puVar4 + -1;
          puVar19 = param_3 + 8;
          uVar23 = param_4;
          do {
            puVar21[1] = puVar19[-8];
            puVar21[2] = puVar19[-4];
            puVar21[3] = *puVar19;
            puVar21[4] = puVar19[4];
            puVar21[5] = puVar19[-7];
            puVar21[6] = puVar19[-3];
            puVar21[7] = puVar19[1];
            puVar21[8] = puVar19[5];
            *(uint *)(((int)puVar4 - (int)param_3) + (int)puVar19) = puVar19[-6];
            puVar21[10] = puVar19[-2];
            puVar21[0xb] = puVar19[2];
            puVar21[0xc] = puVar19[6];
            puVar21[0xd] = puVar19[-5];
            puVar21[0xe] = puVar19[-1];
            puVar21[0xf] = puVar19[3];
            puVar6 = puVar19 + 7;
            puVar19 = puVar19 + 0x10;
            puVar21 = puVar21 + 0x10;
            *puVar21 = *puVar6;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      else if ((param_4 & 0xffffffff) != 0) {
        iVar10 = 0;
        puVar21 = puVar4 + -1;
        uVar23 = param_4;
        do {
          uVar9 = 0;
          if (puVar3[3] != 0) {
            do {
              uVar18 = 0;
              if (uVar17 != 0) {
                do {
                  if ((uVar18 < 5) && (uVar9 < 5)) {
                    uVar17 = param_3[(iVar10 + uVar18) * 4 + uVar9];
                  }
                  else {
                    uVar17 = 0;
                  }
                  uVar18 = uVar18 + 1;
                  puVar21 = puVar21 + 1;
                  *puVar21 = uVar17;
                  uVar17 = (uint)puVar3[2];
                } while (uVar18 < uVar17);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < puVar3[3]);
          }
          iVar10 = iVar10 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
  }
  fVar8 = lbl_821AAD20;
  uVar1 = puVar3[1];
  iVar10 = (int)param_4;
  puVar21 = puVar20;
  if (uVar1 != 3) {
    uVar23 = (longlong)*(int *)(param_1 + 0x34) * (longlong)iVar10;
    puVar21 = puVar4;
    if (uVar1 == 1) {
      if ((uVar23 & 0xffffffff) != 0) {
        puVar19 = puVar4;
        do {
          *puVar19 = (uint)(*(float *)(((int)puVar20 - (int)puVar4) + (int)puVar19) != fVar8);
          puVar19 = puVar19 + 1;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    else if ((uVar1 == 2) && ((uVar23 & 0xffffffff) != 0)) {
      puVar19 = puVar4;
      do {
        *puVar19 = (int)*(float *)(((int)puVar20 - (int)puVar4) + (int)puVar19);
        puVar19 = puVar19 + 1;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  puVar20 = puVar21;
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar3 == 3) {
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
    }
    else {
      uVar1 = puVar3[3];
      uVar2 = puVar3[2];
    }
    uVar23 = (ulonglong)uVar1;
    if ((uVar1 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar11 = &lbl_8202E380;
      }
      else {
        puVar11 = &lbl_8202E370;
      }
      uVar13 = (longlong)(int)(uint)uVar2 * (longlong)iVar10;
      uVar22 = uVar23 + 3 & 0xfffffffc;
      puVar20 = puVar4;
      if (uVar13 != 0) {
        lVar14 = (longlong)(int)uVar13 * (longlong)(int)uVar22;
        lVar12 = (longlong)(int)uVar13 * (longlong)(int)(uint)uVar1;
        do {
          uVar13 = uVar13 - 1;
          lVar12 = lVar12 - uVar23;
          lVar14 = lVar14 - uVar22;
          uVar16 = uVar23;
          uVar7 = uVar23;
          if ((uint)uVar1 < uVar22) {
            lVar24 = uVar22 - uVar23;
            uVar15 = uVar22;
            do {
              uVar15 = uVar15 - 1;
              *(undefined4 *)((int)((uVar15 + lVar14 & 0xffffffff) << 2) + (int)puVar4) =
                   *(undefined4 *)(puVar11 + ((uint)((uVar15 & 0xffffffff) << 2) & 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar16 = uVar16 - 1;
            *(undefined4 *)((int)((uVar16 + lVar14 & 0xffffffff) << 2) + (int)puVar4) =
                 *(undefined4 *)((int)((uVar16 + lVar12 & 0xffffffff) << 2) + (int)puVar21);
          }
        } while ((uVar13 & 0xffffffff) != 0);
      }
    }
  }
  uVar23 = (longlong)*(int *)(param_1 + 0x2c) * (longlong)iVar10;
  if ((ulonglong)*(ushort *)(param_1 + 0xc) < (uVar23 & 0xffffffff)) {
    uVar23 = (ulonglong)*(ushort *)(param_1 + 0xc);
  }
  if (*(code **)(param_1 + 0x1c) == (code *)0x0) {
    uVar17 = 0x80004005;
  }
  else {
    uVar17 = (**(code **)(param_1 + 0x1c))
                       (param_2,(ulonglong)*(ushort *)(param_1 + 10) + param_5,puVar20,puVar4,uVar23
                       );
    uVar17 = (int)uVar17 >> 0x1f & uVar17;
  }
  return uVar17;
}

