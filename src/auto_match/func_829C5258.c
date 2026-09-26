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
extern unsigned int lbl_82057048;


undefined8 fn_829C5258(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  bool bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  
  puVar10 = *(undefined1 **)(param_5 + 0x34);
  pbVar16 = (byte *)*param_6;
  uVar17 = (ulonglong)(uint)param_6[1];
  uVar21 = *(uint *)(param_5 + 0x20);
  uVar22 = (ulonglong)*(uint *)(param_5 + 0x1c);
  if (puVar10 < *(undefined1 **)(param_5 + 0x30)) {
    puVar19 = *(undefined1 **)(param_5 + 0x30) + (-1 - (int)puVar10);
  }
  else {
    puVar19 = (undefined1 *)(*(int *)(param_5 + 0x2c) - (int)puVar10);
  }
  uVar4 = *(uint *)(&lbl_82057048 + param_1 * 4);
  uVar5 = *(uint *)(&lbl_82057048 + param_2 * 4);
  do {
    if ((uVar22 & 0xffffffff) < 0x14) {
      lVar13 = ((0x13 - uVar22 & 0xffffffff) >> 3) + 1;
      do {
        bVar2 = *pbVar16;
        uVar17 = uVar17 - 1;
        pbVar16 = pbVar16 + 1;
        uVar21 = (uint)bVar2 << ((uint)uVar22 & 0x3f) | uVar21;
        uVar22 = uVar22 + 8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    iVar18 = (int)uVar17;
    iVar14 = (uVar4 & uVar21) * 8;
    pbVar8 = (byte *)(iVar14 + param_3);
    bVar2 = *(byte *)(iVar14 + param_3);
    uVar6 = (ulonglong)bVar2;
    if (uVar6 == 0) {
      bVar2 = pbVar8[1];
      uVar21 = uVar21 >> (bVar2 & 0x3f);
      *puVar10 = (char)*(undefined4 *)(pbVar8 + 4);
      uVar22 = uVar22 - bVar2;
LAB_829c5544:
      puVar10 = puVar10 + 1;
      puVar19 = puVar19 + -1;
    }
    else {
      uVar12 = uVar21 >> (pbVar8[1] & 0x3f);
      uVar22 = uVar22 - pbVar8[1];
      while ((bVar2 & 0x10) == 0) {
        iVar14 = (int)uVar22;
        if ((uVar6 & 0x40) != 0) {
          uVar22 = (uVar22 & 0xffffffff) >> 3;
          uVar9 = (uint)param_6[1] - uVar17;
          bVar1 = uVar22 < (uVar9 & 0xffffffff);
          if ((uVar6 & 0x20) != 0) {
            if (bVar1) {
              uVar9 = uVar22;
            }
            uVar7 = 1;
            goto LAB_829c55d4;
          }
          param_6[6] = (int)"invalid literal/length code";
          if (bVar1) {
            uVar9 = uVar22;
          }
          *(uint *)(param_5 + 0x20) = uVar12;
          iVar11 = (int)pbVar16 - (int)uVar9;
          *(int *)(param_5 + 0x1c) = iVar14 - (int)((uVar9 & 0xffffffff) << 3);
          uVar7 = 0xfffffffffffffffd;
          param_6[1] = (int)uVar9 + iVar18;
          iVar14 = *param_6;
          *param_6 = iVar11;
          iVar11 = (param_6[2] - iVar14) + iVar11;
          goto LAB_829c567c;
        }
        pbVar8 = pbVar8 + ((*(uint *)(&lbl_82057048 + (int)(uVar6 << 2)) & uVar12) +
                          *(int *)(pbVar8 + 4)) * 8;
        bVar2 = *pbVar8;
        uVar6 = (ulonglong)bVar2;
        if (uVar6 == 0) {
          bVar2 = pbVar8[1];
          uVar21 = uVar12 >> (bVar2 & 0x3f);
          *puVar10 = (char)*(undefined4 *)(pbVar8 + 4);
          uVar22 = uVar22 - bVar2;
          goto LAB_829c5544;
        }
        uVar12 = uVar12 >> (pbVar8[1] & 0x3f);
        uVar22 = uVar22 - pbVar8[1];
      }
      uVar6 = uVar6 & 0xf;
      uVar22 = uVar22 - uVar6;
      uVar20 = *(uint *)(&lbl_82057048 + (int)(uVar6 << 2)) & uVar12;
      uVar12 = uVar12 >> (int)uVar6;
      uVar20 = uVar20 + *(int *)(pbVar8 + 4);
      if ((uVar22 & 0xffffffff) < 0xf) {
        lVar13 = ((0xe - uVar22 & 0xffffffff) >> 3) + 1;
        do {
          bVar2 = *pbVar16;
          uVar17 = uVar17 - 1;
          pbVar16 = pbVar16 + 1;
          uVar12 = (uint)bVar2 << ((uint)uVar22 & 0x3f) | uVar12;
          uVar22 = uVar22 + 8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      iVar18 = (int)uVar17;
      pbVar8 = (byte *)((uVar5 & uVar12) * 8 + param_4);
      bVar2 = *pbVar8;
      while( true ) {
        uVar22 = uVar22 - pbVar8[1];
        iVar14 = (int)uVar22;
        uVar12 = uVar12 >> (pbVar8[1] & 0x3f);
        if ((bVar2 & 0x10) != 0) break;
        if ((bVar2 & 0x40) != 0) {
          uVar22 = (uVar22 & 0xffffffff) >> 3;
          param_6[6] = (int)"invalid distance code";
          uVar9 = (uint)param_6[1] - uVar17;
          if (uVar22 < ((uint)param_6[1] - uVar17 & 0xffffffff)) {
            uVar9 = uVar22;
          }
          uVar7 = 0xfffffffffffffffd;
LAB_829c55d4:
          *(uint *)(param_5 + 0x20) = uVar12;
          iVar11 = (int)pbVar16 - (int)uVar9;
          *(int *)(param_5 + 0x1c) = iVar14 - (int)((uVar9 & 0xffffffff) << 3);
          param_6[1] = (int)uVar9 + iVar18;
          iVar14 = *param_6;
          *param_6 = iVar11;
          param_6[2] = (param_6[2] - iVar14) + iVar11;
          goto LAB_829c5680;
        }
        pbVar8 = pbVar8 + ((*(uint *)(&lbl_82057048 + (uint)bVar2 * 4) & uVar12) +
                          *(int *)(pbVar8 + 4)) * 8;
        bVar2 = *pbVar8;
      }
      uVar6 = (ulonglong)bVar2 & 0xf;
      if ((uVar22 & 0xffffffff) < uVar6) {
        lVar13 = (((uVar6 - uVar22) - 1 & 0xffffffff) >> 3) + 1;
        do {
          bVar2 = *pbVar16;
          uVar17 = uVar17 - 1;
          pbVar16 = pbVar16 + 1;
          uVar12 = (uint)bVar2 << ((uint)uVar22 & 0x3f) | uVar12;
          uVar22 = uVar22 + 8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      uVar22 = uVar22 - uVar6;
      puVar3 = *(undefined1 **)(param_5 + 0x28);
      puVar19 = puVar19 + -uVar20;
      uVar21 = uVar12 >> (int)uVar6;
      puVar15 = puVar10 + -((*(uint *)(&lbl_82057048 + (int)(uVar6 << 2)) & uVar12) +
                           *(int *)(pbVar8 + 4));
      if (puVar15 < puVar3) {
        do {
          puVar15 = puVar15 + (*(int *)(param_5 + 0x2c) - (int)puVar3);
        } while (puVar15 < puVar3);
        uVar12 = *(int *)(param_5 + 0x2c) - (int)puVar15;
        if (uVar12 < uVar20) {
          iVar14 = uVar20 - uVar12;
          puVar15 = puVar15 + -1;
          do {
            puVar15 = puVar15 + 1;
            uVar12 = uVar12 - 1;
            *puVar10 = *puVar15;
            puVar10 = puVar10 + 1;
          } while (uVar12 != 0);
          puVar15 = (undefined1 *)(*(int *)(param_5 + 0x28) + -1);
          do {
            puVar15 = puVar15 + 1;
            iVar14 = iVar14 + -1;
            *puVar10 = *puVar15;
            puVar10 = puVar10 + 1;
          } while (iVar14 != 0);
        }
        else {
          iVar14 = uVar20 - 2;
          *puVar10 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar10[1] = *puVar15;
          puVar10 = puVar10 + 2;
          do {
            puVar15 = puVar15 + 1;
            iVar14 = iVar14 + -1;
            *puVar10 = *puVar15;
            puVar10 = puVar10 + 1;
          } while (iVar14 != 0);
        }
      }
      else {
        iVar14 = uVar20 - 2;
        *puVar10 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar10[1] = *puVar15;
        puVar10 = puVar10 + 2;
        do {
          puVar15 = puVar15 + 1;
          iVar14 = iVar14 + -1;
          *puVar10 = *puVar15;
          puVar10 = puVar10 + 1;
        } while (iVar14 != 0);
      }
    }
  } while (((undefined1 *)0x101 < puVar19) && (9 < (uVar17 & 0xffffffff)));
  uVar6 = (uVar22 & 0xffffffff) >> 3;
  uVar9 = (uint)param_6[1] - uVar17;
  if (uVar6 < ((uint)param_6[1] - uVar17 & 0xffffffff)) {
    uVar9 = uVar6;
  }
  *(uint *)(param_5 + 0x20) = uVar21;
  iVar11 = (int)pbVar16 - (int)uVar9;
  *(int *)(param_5 + 0x1c) = (int)uVar22 - (int)((uVar9 & 0xffffffff) << 3);
  uVar7 = 0;
  param_6[1] = (int)uVar9 + (int)uVar17;
  iVar14 = *param_6;
  *param_6 = iVar11;
  iVar11 = (param_6[2] - iVar14) + iVar11;
LAB_829c567c:
  param_6[2] = iVar11;
LAB_829c5680:
  *(undefined1 **)(param_5 + 0x34) = puVar10;
  return uVar7;
}

