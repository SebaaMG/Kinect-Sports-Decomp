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


uint fn_82918E10(int param_1,undefined8 param_2,float *param_3,uint param_4,longlong param_5)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  longlong lVar11;
  uint uVar13;
  ulonglong uVar12;
  uint uVar15;
  longlong lVar14;
  int iVar18;
  float *pfVar19;
  ulonglong uVar16;
  ulonglong uVar17;
  float *pfVar20;
  float *pfVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  
  puVar4 = *(ushort **)(param_1 + 0x18);
  pfVar5 = *(float **)(param_1 + 0x20);
  uVar2 = *puVar4;
  if (uVar2 == 0) {
    uVar2 = puVar4[4];
    bVar1 = uVar2 < param_4;
  }
  else {
    if (uVar2 == 1) {
      uVar23 = (ulonglong)puVar4[3];
    }
    else {
      if (2 < uVar2) {
        if (uVar2 != 3) {
          if (uVar2 != 5) {
            return 0x80004001;
          }
          uVar23 = (ulonglong)param_4 / (ulonglong)*(uint *)(param_1 + 0x34);
          trapWord(6,(ulonglong)*(uint *)(param_1 + 0x34),0);
          if (puVar4[4] < uVar23) {
            uVar23 = (ulonglong)puVar4[4];
          }
          uVar22 = 0;
          if (uVar23 != 0) {
            do {
              uVar13 = 0;
              if (puVar4[5] != 0) {
                iVar18 = 0;
                do {
                  iVar6 = *(int *)(iVar18 + *(int *)(param_1 + 0x38));
                  uVar8 = fn_82918E10(iVar6,param_2,param_3,*(undefined4 *)(iVar6 + 0x30),param_5)
                  ;
                  if ((int)uVar8 < 0) {
                    return uVar8;
                  }
                  uVar13 = uVar13 + 1;
                  iVar18 = iVar18 + 4;
                  param_3 = param_3 + *(int *)(iVar6 + 0x30);
                } while (uVar13 < puVar4[5]);
              }
              uVar22 = uVar22 + 1;
            } while ((uVar22 & 0xffffffff) < uVar23);
          }
          return 0;
        }
        uVar13 = (uint)puVar4[3];
        uVar8 = (uint)puVar4[2];
        uVar22 = (longlong)(int)(uint)puVar4[2] * (longlong)(int)(uint)puVar4[3];
        uVar23 = param_4 / uVar22;
        trapWord(6,uVar22,0);
        if (puVar4[4] < uVar23) {
          uVar23 = (ulonglong)puVar4[4];
        }
        param_4 = (uint)uVar23;
        uVar9 = 0;
        pfVar20 = pfVar5;
        if (uVar23 != 0) {
          pfVar21 = pfVar5 + -1;
          do {
            uVar15 = 0;
            if (uVar13 != 0) {
              do {
                uVar13 = 0;
                if (uVar8 != 0) {
                  do {
                    iVar18 = uVar8 * uVar9 + uVar13;
                    uVar13 = uVar13 + 1;
                    pfVar21 = pfVar21 + 1;
                    *pfVar21 = param_3[iVar18 * (uint)puVar4[3] + uVar15];
                    uVar8 = (uint)puVar4[2];
                  } while (uVar13 < uVar8);
                }
                uVar13 = (uint)puVar4[3];
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar13);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar23);
        }
        goto LAB_82918fdc;
      }
      uVar23 = (longlong)(int)(uint)puVar4[3] * (longlong)(int)(uint)puVar4[2];
    }
    uVar2 = puVar4[4];
    uVar22 = (ulonglong)param_4;
    param_4 = (uint)(uVar22 / uVar23);
    trapWord(6,uVar23,0);
    bVar1 = (ulonglong)uVar2 < uVar22 / uVar23;
  }
  pfVar20 = param_3;
  if (bVar1) {
    param_4 = (uint)uVar2;
  }
LAB_82918fdc:
  uVar2 = puVar4[1];
  pfVar21 = pfVar20;
  if (uVar2 != 2) {
    uVar23 = (longlong)*(int *)(param_1 + 0x34) * (longlong)(int)param_4;
    pfVar21 = pfVar5;
    if (uVar2 == 1) {
      if ((uVar23 & 0xffffffff) != 0) {
        pfVar19 = pfVar5;
        do {
          *pfVar19 = (float)(uint)(*(int *)((int)pfVar19 + ((int)pfVar20 - (int)pfVar5)) != 0);
          pfVar19 = pfVar19 + 1;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    else if ((uVar2 == 3) && ((uVar23 & 0xffffffff) != 0)) {
      pfVar19 = pfVar5;
      do {
        *pfVar19 = (float)(longlong)*(int *)(((int)pfVar20 - (int)pfVar5) + (int)pfVar19);
        pfVar19 = pfVar19 + 1;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  pfVar20 = pfVar21;
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar4 == 3) {
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
    }
    else {
      uVar2 = puVar4[3];
      uVar3 = puVar4[2];
    }
    uVar23 = (ulonglong)uVar2;
    if ((uVar2 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar10 = &lbl_8202E380;
      }
      else {
        puVar10 = &lbl_8202E370;
      }
      uVar12 = (longlong)(int)(uint)uVar3 * (longlong)(int)param_4;
      uVar22 = uVar23 + 3 & 0xfffffffc;
      pfVar20 = pfVar5;
      if (uVar12 != 0) {
        lVar14 = (longlong)(int)uVar12 * (longlong)(int)uVar22;
        lVar11 = (longlong)(int)uVar12 * (longlong)(int)(uint)uVar2;
        do {
          uVar12 = uVar12 - 1;
          lVar11 = lVar11 - uVar23;
          lVar14 = lVar14 - uVar22;
          uVar17 = uVar23;
          uVar7 = uVar23;
          if ((uint)uVar2 < uVar22) {
            lVar24 = uVar22 - uVar23;
            uVar16 = uVar22;
            do {
              uVar16 = uVar16 - 1;
              *(undefined4 *)((int)((lVar14 + uVar16 & 0xffffffff) << 2) + (int)pfVar5) =
                   *(undefined4 *)(puVar10 + ((uint)((uVar16 & 0xffffffff) << 2) & 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar17 = uVar17 - 1;
            *(undefined4 *)((int)((lVar14 + uVar17 & 0xffffffff) << 2) + (int)pfVar5) =
                 *(undefined4 *)((int)((lVar11 + uVar17 & 0xffffffff) << 2) + (int)pfVar21);
          }
        } while ((uVar12 & 0xffffffff) != 0);
      }
    }
  }
  uVar23 = (longlong)*(int *)(param_1 + 0x2c) * (longlong)(int)param_4;
  if ((ulonglong)*(ushort *)(param_1 + 0xc) < (uVar23 & 0xffffffff)) {
    uVar23 = (ulonglong)*(ushort *)(param_1 + 0xc);
  }
  if (*(code **)(param_1 + 0x1c) == (code *)0x0) {
    uVar13 = 0x80004005;
  }
  else {
    uVar13 = (**(code **)(param_1 + 0x1c))
                       (param_2,(ulonglong)*(ushort *)(param_1 + 10) + param_5,pfVar20,pfVar5,uVar23
                       );
    uVar13 = (int)uVar13 >> 0x1f & uVar13;
  }
  return uVar13;
}

