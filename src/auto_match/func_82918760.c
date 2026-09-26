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
extern unsigned int lbl_8202E370;
extern unsigned int lbl_8202E380;


uint fn_82918760(int param_1,undefined8 param_2,int param_3,uint param_4,longlong param_5)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint uVar12;
  ulonglong uVar11;
  uint uVar14;
  longlong lVar13;
  int iVar17;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  
  puVar4 = *(ushort **)(param_1 + 0x18);
  iVar21 = *(int *)(param_1 + 0x20);
  uVar2 = *puVar4;
  if (uVar2 == 0) {
    uVar2 = puVar4[4];
    bVar1 = uVar2 < param_4;
  }
  else {
    if (uVar2 == 1) {
      uVar20 = (ulonglong)puVar4[3];
    }
    else {
      if (2 < uVar2) {
        if (uVar2 != 3) {
          if (uVar2 != 5) {
            return 0x80004001;
          }
          uVar20 = (ulonglong)param_4 / (ulonglong)*(uint *)(param_1 + 0x34);
          trapWord(6,(ulonglong)*(uint *)(param_1 + 0x34),0);
          if (puVar4[4] < uVar20) {
            uVar20 = (ulonglong)puVar4[4];
          }
          uVar19 = 0;
          if (uVar20 != 0) {
            do {
              uVar12 = 0;
              if (puVar4[5] != 0) {
                iVar21 = 0;
                do {
                  iVar18 = *(int *)(iVar21 + *(int *)(param_1 + 0x38));
                  uVar6 = fn_82918760(iVar18,param_2,param_3,*(undefined4 *)(iVar18 + 0x30),
                                        param_5);
                  if ((int)uVar6 < 0) {
                    return uVar6;
                  }
                  uVar12 = uVar12 + 1;
                  iVar21 = iVar21 + 4;
                  param_3 = *(int *)(iVar18 + 0x30) * 4 + param_3;
                } while (uVar12 < puVar4[5]);
              }
              uVar19 = uVar19 + 1;
            } while ((uVar19 & 0xffffffff) < uVar20);
          }
          return 0;
        }
        uVar12 = (uint)puVar4[3];
        uVar6 = (uint)puVar4[2];
        uVar19 = (longlong)(int)(uint)puVar4[2] * (longlong)(int)(uint)puVar4[3];
        uVar20 = param_4 / uVar19;
        trapWord(6,uVar19,0);
        if (puVar4[4] < uVar20) {
          uVar20 = (ulonglong)puVar4[4];
        }
        param_4 = (uint)uVar20;
        uVar7 = 0;
        iVar18 = iVar21;
        if (uVar20 != 0) {
          puVar10 = (undefined4 *)(iVar21 + -4);
          do {
            uVar14 = 0;
            if (uVar12 != 0) {
              do {
                uVar12 = 0;
                if (uVar6 != 0) {
                  do {
                    iVar17 = uVar6 * uVar7 + uVar12;
                    uVar12 = uVar12 + 1;
                    puVar10 = puVar10 + 1;
                    *puVar10 = *(undefined4 *)((iVar17 * (uint)puVar4[3] + uVar14) * 4 + param_3);
                    uVar6 = (uint)puVar4[2];
                  } while (uVar12 < uVar6);
                }
                uVar12 = (uint)puVar4[3];
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar12);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar20);
        }
        goto LAB_8291892c;
      }
      uVar20 = (longlong)(int)(uint)puVar4[3] * (longlong)(int)(uint)puVar4[2];
    }
    uVar2 = puVar4[4];
    uVar19 = (ulonglong)param_4;
    param_4 = (uint)(uVar19 / uVar20);
    trapWord(6,uVar20,0);
    bVar1 = (ulonglong)uVar2 < uVar19 / uVar20;
  }
  iVar18 = param_3;
  if (bVar1) {
    param_4 = (uint)uVar2;
  }
LAB_8291892c:
  iVar17 = iVar18;
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar4 == 3) {
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
    }
    else {
      uVar2 = puVar4[3];
      uVar3 = puVar4[2];
    }
    uVar20 = (ulonglong)uVar2;
    if ((uVar2 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar8 = &lbl_8202E380;
      }
      else {
        puVar8 = &lbl_8202E370;
      }
      uVar11 = (longlong)(int)(uint)uVar3 * (longlong)(int)param_4;
      uVar19 = uVar20 + 3 & 0xfffffffc;
      iVar17 = iVar21;
      if (uVar11 != 0) {
        lVar13 = (longlong)(int)uVar11 * (longlong)(int)uVar19;
        lVar9 = (longlong)(int)uVar11 * (longlong)(int)(uint)uVar2;
        do {
          uVar11 = uVar11 - 1;
          lVar9 = lVar9 - uVar20;
          lVar13 = lVar13 - uVar19;
          uVar16 = uVar20;
          uVar5 = uVar20;
          if ((uint)uVar2 < uVar19) {
            lVar22 = uVar19 - uVar20;
            uVar15 = uVar19;
            do {
              uVar15 = uVar15 - 1;
              *(undefined4 *)((int)((lVar13 + uVar15 & 0xffffffff) << 2) + iVar21) =
                   *(undefined4 *)(puVar8 + ((uint)((uVar15 & 0xffffffff) << 2) & 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            uVar16 = uVar16 - 1;
            *(undefined4 *)((int)((lVar13 + uVar16 & 0xffffffff) << 2) + iVar21) =
                 *(undefined4 *)((int)((lVar9 + uVar16 & 0xffffffff) << 2) + iVar18);
          }
        } while ((uVar11 & 0xffffffff) != 0);
      }
    }
  }
  uVar20 = (longlong)*(int *)(param_1 + 0x2c) * (longlong)(int)param_4;
  if ((ulonglong)*(ushort *)(param_1 + 0xc) < (uVar20 & 0xffffffff)) {
    uVar20 = (ulonglong)*(ushort *)(param_1 + 0xc);
  }
  if (*(code **)(param_1 + 0x1c) == (code *)0x0) {
    uVar12 = 0x80004005;
  }
  else {
    uVar12 = (**(code **)(param_1 + 0x1c))
                       (param_2,(ulonglong)*(ushort *)(param_1 + 10) + param_5,iVar17,iVar21,uVar20)
    ;
    uVar12 = (int)uVar12 >> 0x1f & uVar12;
  }
  return uVar12;
}

