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
extern int fn_829C50F0();
extern int fn_829C5258();
extern unsigned int lbl_82057048;


void fn_829C4338(int param_1,int *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  
  puVar11 = *(undefined1 **)(param_1 + 0x34);
  puVar3 = *(uint **)(param_1 + 4);
  pbVar16 = (byte *)*param_2;
  uVar13 = param_2[1];
  uVar15 = *(uint *)(param_1 + 0x20);
  uVar17 = *(uint *)(param_1 + 0x1c);
  if (puVar11 < *(undefined1 **)(param_1 + 0x30)) {
    puVar6 = *(undefined1 **)(param_1 + 0x30) + (-1 - (int)puVar11);
  }
  else {
    puVar6 = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)puVar11);
  }
  uVar9 = *puVar3;
  while (puVar12 = puVar11, uVar9 < 10) {
    switch(uVar9) {
    case 0:
      if ((puVar6 < (undefined1 *)0x102) || (uVar13 < 10)) {
code_r0x829c4474:
        *puVar3 = 1;
        puVar3[3] = (uint)*(byte *)(puVar3 + 4);
        puVar3[2] = puVar3[5];
        goto code_r0x829c448c;
      }
      *(uint *)(param_1 + 0x20) = uVar15;
      *(uint *)(param_1 + 0x1c) = uVar17;
      iVar5 = *param_2;
      param_2[1] = uVar13;
      *param_2 = (int)pbVar16;
      param_2[2] = (int)(pbVar16 + (param_2[2] - iVar5));
      *(undefined1 **)(param_1 + 0x34) = puVar11;
      param_3 = fn_829C5258(*(undefined1 *)(puVar3 + 4),*(undefined1 *)((int)puVar3 + 0x11),
                                  puVar3[5],puVar3[6],param_1,param_2);
      puVar11 = *(undefined1 **)(param_1 + 0x34);
      pbVar16 = (byte *)*param_2;
      uVar13 = param_2[1];
      uVar15 = *(uint *)(param_1 + 0x20);
      uVar17 = *(uint *)(param_1 + 0x1c);
      if (puVar11 < *(undefined1 **)(param_1 + 0x30)) {
        puVar6 = *(undefined1 **)(param_1 + 0x30) + (-1 - (int)puVar11);
      }
      else {
        puVar6 = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)puVar11);
      }
      if ((int)param_3 == 0) goto code_r0x829c4474;
      uVar9 = 7;
      if ((int)param_3 != 1) {
        uVar9 = 9;
      }
code_r0x829c446c:
      *puVar3 = uVar9;
      goto code_r0x829c48a4;
    case 1:
code_r0x829c448c:
      for (; puVar12 = puVar11, uVar17 < puVar3[3]; uVar17 = uVar17 + 8) {
        if (uVar13 == 0) goto code_r0x829c48f0;
        param_3 = 0;
        uVar13 = uVar13 - 1;
        uVar15 = (uint)*pbVar16 << (uVar17 & 0x3f) | uVar15;
        pbVar16 = pbVar16 + 1;
      }
      pbVar8 = (byte *)((*(uint *)(&lbl_82057048 + puVar3[3] * 4) & uVar15) * 8 + puVar3[2]);
      bVar1 = *pbVar8;
      uVar15 = uVar15 >> (pbVar8[1] & 0x3f);
      uVar17 = uVar17 - pbVar8[1];
      if (bVar1 != 0) {
        if ((bVar1 & 0x10) != 0) {
          puVar3[2] = bVar1 & 0xf;
          puVar3[1] = *(uint *)(pbVar8 + 4);
          *puVar3 = 2;
          goto code_r0x829c48a4;
        }
        if ((bVar1 & 0x40) != 0) {
          if ((bVar1 & 0x20) != 0) {
            uVar9 = 7;
            goto code_r0x829c446c;
          }
          pcVar10 = "invalid literal/length code";
          goto code_r0x829c4908;
        }
        goto code_r0x829c4530;
      }
      pbVar8 = *(byte **)(pbVar8 + 4);
      *puVar3 = 6;
      goto code_r0x829c44fc;
    case 2:
      uVar9 = puVar3[2];
      for (; uVar17 < uVar9; uVar17 = uVar17 + 8) {
        if (uVar13 == 0) goto code_r0x829c48f0;
        param_3 = 0;
        uVar13 = uVar13 - 1;
        uVar15 = (uint)*pbVar16 << (uVar17 & 0x3f) | uVar15;
        pbVar16 = pbVar16 + 1;
      }
      uVar17 = uVar17 - uVar9;
      uVar7 = *(uint *)(&lbl_82057048 + uVar9 * 4);
      puVar3[3] = (uint)*(byte *)((int)puVar3 + 0x11);
      uVar7 = uVar7 & uVar15;
      puVar3[2] = puVar3[6];
      uVar15 = uVar15 >> (uVar9 & 0x3f);
      *puVar3 = 3;
      puVar3[1] = uVar7 + puVar3[1];
    case 3:
      for (; uVar17 < puVar3[3]; uVar17 = uVar17 + 8) {
        if (uVar13 == 0) goto code_r0x829c48f0;
        param_3 = 0;
        uVar13 = uVar13 - 1;
        uVar15 = (uint)*pbVar16 << (uVar17 & 0x3f) | uVar15;
        pbVar16 = pbVar16 + 1;
      }
      pbVar8 = (byte *)((*(uint *)(&lbl_82057048 + puVar3[3] * 4) & uVar15) * 8 + puVar3[2]);
      bVar1 = *pbVar8;
      uVar15 = uVar15 >> (pbVar8[1] & 0x3f);
      uVar17 = uVar17 - pbVar8[1];
      if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) != 0) {
          pcVar10 = "invalid distance code";
code_r0x829c4908:
          *puVar3 = 9;
          param_3 = 0xfffffffffffffffd;
          param_2[6] = (int)pcVar10;
          goto code_r0x829c48b4;
        }
code_r0x829c4530:
        puVar3[3] = (uint)bVar1;
        pbVar8 = pbVar8 + *(int *)(pbVar8 + 4) * 8;
code_r0x829c44fc:
        puVar3[2] = (uint)pbVar8;
      }
      else {
        puVar3[2] = bVar1 & 0xf;
        uVar9 = *(uint *)(pbVar8 + 4);
        *puVar3 = 4;
        puVar3[3] = uVar9;
      }
code_r0x829c48a4:
      uVar9 = *puVar3;
      break;
    case 4:
      uVar9 = puVar3[2];
      for (; uVar17 < uVar9; uVar17 = uVar17 + 8) {
        if (uVar13 == 0) goto code_r0x829c48f0;
        param_3 = 0;
        uVar13 = uVar13 - 1;
        uVar15 = (uint)*pbVar16 << (uVar17 & 0x3f) | uVar15;
        pbVar16 = pbVar16 + 1;
      }
      uVar17 = uVar17 - uVar9;
      uVar7 = *(uint *)(&lbl_82057048 + uVar9 * 4);
      *puVar3 = 5;
      uVar7 = uVar7 & uVar15;
      uVar15 = uVar15 >> (uVar9 & 0x3f);
      puVar3[3] = uVar7 + puVar3[3];
    case 5:
      puVar12 = *(undefined1 **)(param_1 + 0x28);
      puVar14 = puVar11 + -puVar3[3];
      if (puVar14 < puVar12) {
        do {
          puVar14 = puVar14 + (*(int *)(param_1 + 0x2c) - (int)puVar12);
        } while (puVar14 < puVar12);
      }
      while (puVar3[1] != 0) {
        puVar12 = puVar11;
        if (puVar6 == (undefined1 *)0x0) {
          if (puVar11 == *(undefined1 **)(param_1 + 0x2c)) {
            puVar6 = *(undefined1 **)(param_1 + 0x30);
            puVar12 = *(undefined1 **)(param_1 + 0x28);
            if (puVar12 != puVar6) {
              if (puVar12 < puVar6) {
                puVar6 = puVar6 + (-1 - (int)puVar12);
              }
              else {
                puVar6 = *(undefined1 **)(param_1 + 0x2c) + -(int)puVar12;
              }
              puVar11 = puVar12;
              if (puVar6 != (undefined1 *)0x0) goto code_r0x829c4794;
            }
          }
          *(undefined1 **)(param_1 + 0x34) = puVar11;
          param_3 = fn_829C50F0(param_1,param_2,param_3);
          puVar12 = *(undefined1 **)(param_1 + 0x34);
          puVar11 = *(undefined1 **)(param_1 + 0x30);
          if (puVar12 < puVar11) {
            puVar6 = puVar11 + (-1 - (int)puVar12);
          }
          else {
            puVar6 = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)puVar12);
          }
          if (puVar12 == *(undefined1 **)(param_1 + 0x2c)) {
            puVar4 = *(undefined1 **)(param_1 + 0x28);
            if (puVar4 != puVar11) {
              puVar12 = puVar4;
              if (puVar4 < puVar11) {
                puVar6 = puVar11 + (-1 - (int)puVar4);
              }
              else {
                puVar6 = *(undefined1 **)(param_1 + 0x2c) + -(int)puVar4;
              }
            }
          }
          if (puVar6 == (undefined1 *)0x0) goto code_r0x829c48b4;
        }
code_r0x829c4794:
        uVar2 = *puVar14;
        puVar14 = puVar14 + 1;
        param_3 = 0;
        puVar6 = puVar6 + -1;
        *puVar12 = uVar2;
        puVar11 = puVar12 + 1;
        if (puVar14 == *(undefined1 **)(param_1 + 0x2c)) {
          puVar14 = *(undefined1 **)(param_1 + 0x28);
        }
        puVar3[1] = puVar3[1] - 1;
      }
code_r0x829c48a0:
      *puVar3 = 0;
      goto code_r0x829c48a4;
    case 6:
      if (puVar6 == (undefined1 *)0x0) {
        if (puVar11 == *(undefined1 **)(param_1 + 0x2c)) {
          puVar6 = *(undefined1 **)(param_1 + 0x30);
          puVar12 = *(undefined1 **)(param_1 + 0x28);
          if (puVar12 != puVar6) {
            if (puVar12 < puVar6) {
              puVar6 = puVar6 + (-1 - (int)puVar12);
            }
            else {
              puVar6 = *(undefined1 **)(param_1 + 0x2c) + -(int)puVar12;
            }
            puVar11 = puVar12;
            if (puVar6 != (undefined1 *)0x0) goto code_r0x829c488c;
          }
        }
        *(undefined1 **)(param_1 + 0x34) = puVar11;
        param_3 = fn_829C50F0(param_1,param_2,param_3);
        puVar12 = *(undefined1 **)(param_1 + 0x34);
        puVar11 = *(undefined1 **)(param_1 + 0x30);
        if (puVar12 < puVar11) {
          puVar6 = puVar11 + (-1 - (int)puVar12);
        }
        else {
          puVar6 = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)puVar12);
        }
        if (puVar12 == *(undefined1 **)(param_1 + 0x2c)) {
          puVar14 = *(undefined1 **)(param_1 + 0x28);
          if (puVar14 != puVar11) {
            puVar12 = puVar14;
            if (puVar14 < puVar11) {
              puVar6 = puVar11 + (-1 - (int)puVar14);
            }
            else {
              puVar6 = *(undefined1 **)(param_1 + 0x2c) + -(int)puVar14;
            }
          }
        }
        if (puVar6 == (undefined1 *)0x0) goto code_r0x829c48b4;
      }
code_r0x829c488c:
      param_3 = 0;
      puVar6 = puVar6 + -1;
      *puVar12 = (char)puVar3[2];
      puVar11 = puVar12 + 1;
      goto code_r0x829c48a0;
    case 7:
      if (7 < uVar17) {
        uVar17 = uVar17 - 8;
        uVar13 = uVar13 + 1;
        pbVar16 = pbVar16 + -1;
      }
      *(undefined1 **)(param_1 + 0x34) = puVar11;
      param_3 = fn_829C50F0(param_1,param_2,param_3);
      puVar12 = *(undefined1 **)(param_1 + 0x34);
      if (*(undefined1 **)(param_1 + 0x30) == puVar12) {
        *puVar3 = 8;
        goto code_r0x829c4958;
      }
      goto code_r0x829c48b4;
    case 8:
code_r0x829c4958:
      param_3 = 1;
      goto code_r0x829c48b4;
    case 9:
      param_3 = 0xfffffffffffffffd;
      goto code_r0x829c48b4;
    }
  }
  param_3 = 0xfffffffffffffffe;
code_r0x829c48b4:
  *(uint *)(param_1 + 0x20) = uVar15;
  *(uint *)(param_1 + 0x1c) = uVar17;
  param_2[1] = uVar13;
code_r0x829c48c0:
  iVar5 = *param_2;
  *param_2 = (int)pbVar16;
  param_2[2] = (int)(pbVar16 + (param_2[2] - iVar5));
  *(undefined1 **)(param_1 + 0x34) = puVar12;
  fn_829C50F0(param_1,param_2,param_3);
  return;
code_r0x829c48f0:
  *(uint *)(param_1 + 0x20) = uVar15;
  *(uint *)(param_1 + 0x1c) = uVar17;
  param_2[1] = 0;
  goto code_r0x829c48c0;
}

