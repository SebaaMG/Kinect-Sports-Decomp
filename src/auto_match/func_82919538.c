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


uint fn_82919538(int param_1,undefined8 param_2,uint *param_3,ulonglong param_4,longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar17;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar18;
  uint *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  
  puVar3 = *(ushort **)(param_1 + 0x18);
  puVar4 = *(uint **)(param_1 + 0x20);
  uVar1 = *puVar3;
  puVar18 = param_3;
  if (uVar1 == 0) {
    param_4 = (param_4 & 0x3fffffff) << 2;
    if (puVar3[4] < param_4) {
      param_4 = (ulonglong)puVar3[4];
    }
  }
  else {
    puVar18 = puVar4;
    if (uVar1 == 1) {
      if ((ulonglong)puVar3[4] < (param_4 & 0xffffffff)) {
        param_4 = (ulonglong)puVar3[4];
      }
      uVar10 = (uint)puVar3[3];
      puVar18 = param_3;
      if ((uVar10 != 4) && (puVar18 = puVar4, (param_4 & 0xffffffff) != 0)) {
        iVar9 = 0;
        puVar19 = puVar4 + -1;
        uVar21 = param_4;
        do {
          uVar8 = 0;
          if (uVar10 != 0) {
            do {
              if (uVar8 < 5) {
                uVar10 = param_3[iVar9 + uVar8];
              }
              else {
                uVar10 = 0;
              }
              uVar8 = uVar8 + 1;
              puVar19 = puVar19 + 1;
              *puVar19 = uVar10;
              uVar10 = (uint)puVar3[3];
            } while (uVar8 < uVar10);
          }
          iVar9 = iVar9 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
    }
    else if (uVar1 < 3) {
      uVar21 = (ulonglong)puVar3[2];
      param_4 = (param_4 & 0xffffffff) / uVar21;
      trapWord(6,uVar21,0);
      if (puVar3[4] < param_4) {
        param_4 = (ulonglong)puVar3[4];
      }
      uVar20 = (ulonglong)puVar3[3];
      puVar18 = param_3;
      if ((uVar20 != 4) && (uVar10 = 0, puVar18 = puVar4, param_4 != 0)) {
        puVar19 = puVar4 + -1;
        do {
          uVar14 = 0;
          if (uVar21 != 0) {
            do {
              uVar21 = 0;
              if (uVar20 != 0) {
                do {
                  if ((uVar21 & 0xffffffff) < 5) {
                    uVar8 = *(uint *)((int)((((longlong)(int)(uint)puVar3[2] * (longlong)(int)uVar10
                                              + uVar14 & 0x3fffffff) * 4 + uVar21 & 0xffffffff) << 2
                                           ) + (int)param_3);
                  }
                  else {
                    uVar8 = 0;
                  }
                  puVar19 = puVar19 + 1;
                  *puVar19 = uVar8;
                  uVar21 = uVar21 + 1;
                  uVar20 = (ulonglong)puVar3[3];
                } while ((uVar21 & 0xffffffff) < uVar20);
              }
              uVar21 = (ulonglong)puVar3[2];
              uVar14 = uVar14 + 1;
            } while ((uVar14 & 0xffffffff) < uVar21);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < param_4);
      }
    }
    else {
      if (uVar1 != 3) {
        if (uVar1 != 5) {
          return 0x80004001;
        }
        uVar21 = ((param_4 & 0x3fffffff) << 2) / (ulonglong)*(uint *)(param_1 + 0x34);
        trapWord(6,(ulonglong)*(uint *)(param_1 + 0x34),0);
        if (puVar3[4] < uVar21) {
          uVar21 = (ulonglong)puVar3[4];
        }
        uVar20 = 0;
        if (uVar21 != 0) {
          do {
            uVar10 = 0;
            if (puVar3[5] != 0) {
              iVar9 = 0;
              do {
                iVar5 = *(int *)(iVar9 + *(int *)(param_1 + 0x38));
                uVar8 = fn_829191A0(iVar5,param_2,param_3,*(undefined4 *)(iVar5 + 0x30),param_5);
                if ((int)uVar8 < 0) {
                  return uVar8;
                }
                uVar10 = uVar10 + 1;
                iVar9 = iVar9 + 4;
                param_3 = param_3 + *(int *)(iVar5 + 0x30);
              } while (uVar10 < puVar3[5]);
            }
            uVar20 = uVar20 + 1;
          } while ((uVar20 & 0xffffffff) < uVar21);
        }
        return 0;
      }
      uVar21 = (ulonglong)puVar3[3];
      param_4 = (param_4 & 0xffffffff) / uVar21;
      trapWord(6,uVar21,0);
      if (puVar3[4] < param_4) {
        param_4 = (ulonglong)puVar3[4];
      }
      uVar10 = 0;
      if (param_4 != 0) {
        puVar19 = puVar4 + -1;
        do {
          uVar20 = 0;
          if (uVar21 != 0) {
            uVar14 = (ulonglong)puVar3[2];
            do {
              uVar21 = 0;
              if (uVar14 != 0) {
                do {
                  if ((uVar20 & 0xffffffff) < 5) {
                    uVar8 = *(uint *)((int)((((longlong)(int)uVar14 * (longlong)(int)uVar10 + uVar21
                                             & 0x3fffffff) * 4 + uVar20 & 0xffffffff) << 2) +
                                     (int)param_3);
                  }
                  else {
                    uVar8 = 0;
                  }
                  uVar21 = uVar21 + 1;
                  puVar19 = puVar19 + 1;
                  *puVar19 = uVar8;
                  uVar14 = (ulonglong)puVar3[2];
                } while ((uVar21 & 0xffffffff) < uVar14);
              }
              uVar21 = (ulonglong)puVar3[3];
              uVar20 = uVar20 + 1;
            } while ((uVar20 & 0xffffffff) < uVar21);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < param_4);
      }
    }
  }
  fVar7 = lbl_821AAD20;
  uVar1 = puVar3[1];
  iVar9 = (int)param_4;
  puVar19 = puVar18;
  if (uVar1 != 3) {
    uVar21 = (longlong)*(int *)(param_1 + 0x34) * (longlong)iVar9;
    puVar19 = puVar4;
    if (uVar1 == 1) {
      if ((uVar21 & 0xffffffff) != 0) {
        puVar17 = puVar4;
        do {
          *puVar17 = (uint)(*(float *)((int)puVar17 + ((int)puVar18 - (int)puVar4)) != fVar7);
          puVar17 = puVar17 + 1;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
    }
    else if ((uVar1 == 2) && ((uVar21 & 0xffffffff) != 0)) {
      puVar17 = puVar4;
      do {
        *puVar17 = (int)*(float *)(((int)puVar18 - (int)puVar4) + (int)puVar17);
        puVar17 = puVar17 + 1;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  puVar18 = puVar19;
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar3 == 3) {
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
    }
    else {
      uVar1 = puVar3[3];
      uVar2 = puVar3[2];
    }
    uVar21 = (ulonglong)uVar1;
    if ((uVar1 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar11 = &lbl_8202E380;
      }
      else {
        puVar11 = &lbl_8202E370;
      }
      uVar14 = (longlong)(int)(uint)uVar2 * (longlong)iVar9;
      uVar20 = uVar21 + 3 & 0xfffffffc;
      puVar18 = puVar4;
      if (uVar14 != 0) {
        lVar13 = (longlong)(int)uVar14 * (longlong)(int)uVar20;
        lVar12 = (longlong)(int)uVar14 * (longlong)(int)(uint)uVar1;
        do {
          uVar14 = uVar14 - 1;
          lVar12 = lVar12 - uVar21;
          lVar13 = lVar13 - uVar20;
          uVar16 = uVar21;
          uVar6 = uVar21;
          if ((uint)uVar1 < uVar20) {
            lVar22 = uVar20 - uVar21;
            uVar15 = uVar20;
            do {
              uVar15 = uVar15 - 1;
              *(undefined4 *)((int)((lVar13 + uVar15 & 0xffffffff) << 2) + (int)puVar4) =
                   *(undefined4 *)(puVar11 + ((uint)((uVar15 & 0xffffffff) << 2) & 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar16 = uVar16 - 1;
            *(undefined4 *)((int)((lVar13 + uVar16 & 0xffffffff) << 2) + (int)puVar4) =
                 *(undefined4 *)((int)((lVar12 + uVar16 & 0xffffffff) << 2) + (int)puVar19);
          }
        } while ((uVar14 & 0xffffffff) != 0);
      }
    }
  }
  uVar21 = (longlong)*(int *)(param_1 + 0x2c) * (longlong)iVar9;
  if ((ulonglong)*(ushort *)(param_1 + 0xc) < (uVar21 & 0xffffffff)) {
    uVar21 = (ulonglong)*(ushort *)(param_1 + 0xc);
  }
  if (*(code **)(param_1 + 0x1c) == (code *)0x0) {
    uVar10 = 0x80004005;
  }
  else {
    uVar10 = (**(code **)(param_1 + 0x1c))
                       (param_2,(ulonglong)*(ushort *)(param_1 + 10) + param_5,puVar18,puVar4,uVar21
                       );
    uVar10 = (int)uVar10 >> 0x1f & uVar10;
  }
  return uVar10;
}

