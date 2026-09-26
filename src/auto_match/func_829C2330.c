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
extern unsigned int *auStack_94;
extern int fn_829C42D8();
extern int fn_829C4338();
extern int fn_829C4968();
extern int fn_829C4E20();
extern int fn_829C4F00();
extern int fn_829C50C0();
extern int fn_829C50F0();
extern int fn_82F68CC0();
extern unsigned int lbl_82055BE8;
extern unsigned int lbl_82057048;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_829C2330(uint *param_1,int *param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  byte *pbVar17;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 auStack_94 [37];
  
  uVar14 = param_1[0xd];
  pbVar17 = (byte *)*param_2;
  uVar12 = param_2[1];
  uVar8 = param_1[8];
  uVar15 = (ulonglong)uVar8;
  uVar16 = param_1[7];
  if (uVar14 < param_1[0xc]) {
    uVar4 = (param_1[0xc] - uVar14) - 1;
  }
  else {
    uVar4 = param_1[0xb] - uVar14;
  }
  uVar7 = *param_1;
  while (uVar7 < 10) {
    uVar8 = (uint)uVar15;
    lVar11 = param_3;
    switch(uVar7) {
    case 0:
      for (; uVar8 = (uint)uVar15, uVar16 < 3; uVar16 = uVar16 + 8) {
        if (uVar12 == 0) goto code_r0x829c2aac;
        param_3 = 0;
        uVar12 = uVar12 - 1;
        uVar15 = (uint)*pbVar17 << (uVar16 & 0x3f) | uVar15;
        pbVar17 = pbVar17 + 1;
      }
      uVar6 = uVar15 >> 1 & 3;
      param_1[6] = uVar8 & 1;
      if (uVar6 == 0) {
        uVar7 = uVar16 - 3 & 7;
        uVar15 = (ulonglong)((uVar8 >> 3) >> uVar7);
        uVar16 = (uVar16 - 3) - uVar7;
        *param_1 = 1;
      }
      else if (uVar6 == 1) {
        fn_829C50C0(&uStack_9c,&uStack_a0,&uStack_a4,&uStack_a8,param_2);
        uVar7 = fn_829C42D8(uStack_9c,uStack_a0,uStack_a4,uStack_a8,param_2);
        param_1[1] = uVar7;
        if (uVar7 == 0) goto code_r0x829c2ac0;
        uVar15 = uVar15 >> 3;
        *param_1 = 6;
        uVar16 = uVar16 - 3;
      }
      else {
        if (uVar6 < 3) {
          uVar8 = 3;
          uVar15 = uVar15 >> 3;
          uVar16 = uVar16 - 3;
          goto code_r0x829c2534;
        }
        if (uVar6 == 3) {
          *param_1 = 9;
          param_2[6] = (int)"invalid block type";
          param_3 = -3;
          param_1[7] = uVar16 - 3;
          param_1[8] = uVar8 >> 3;
          goto code_r0x829c2a78;
        }
      }
      break;
    case 1:
      for (; uVar8 = (uint)uVar15, uVar16 < 0x20; uVar16 = uVar16 + 8) {
        if (uVar12 == 0) goto code_r0x829c2aac;
        param_3 = 0;
        uVar12 = uVar12 - 1;
        uVar15 = (uint)*pbVar17 << (uVar16 & 0x3f) | uVar15;
        pbVar17 = pbVar17 + 1;
      }
      uVar6 = uVar15 & 0xffff;
      if ((~uVar15 & 0xffffffff) >> 0x10 != uVar6) {
        pcVar10 = "invalid stored block lengths";
code_r0x829c2ad0:
        *param_1 = 9;
        param_3 = -3;
        param_2[6] = (int)pcVar10;
        goto code_r0x829c2a70;
      }
      param_1[1] = (uint)uVar6;
      uVar16 = 0;
      uVar15 = 0;
      if (uVar6 == 0) goto code_r0x829c2524;
      uVar8 = 2;
code_r0x829c2534:
      *param_1 = uVar8;
      break;
    case 2:
      if (uVar12 == 0) {
code_r0x829c2aac:
        param_1[7] = uVar16;
        param_1[8] = uVar8;
        param_2[1] = 0;
        goto code_r0x829c2a7c;
      }
      if (uVar4 == 0) {
        if (uVar14 == param_1[0xb]) {
          uVar4 = param_1[0xc];
          uVar7 = param_1[10];
          if (uVar7 != uVar4) {
            if (uVar7 < uVar4) {
              uVar4 = (uVar4 - uVar7) - 1;
            }
            else {
              uVar4 = param_1[0xb] - uVar7;
            }
            uVar14 = uVar7;
            if (uVar4 != 0) goto code_r0x829c25fc;
          }
        }
        param_1[0xd] = uVar14;
        param_3 = fn_829C50F0(param_1,param_2,param_3);
        uVar14 = param_1[0xd];
        uVar7 = param_1[0xc];
        if (uVar14 < uVar7) {
          uVar4 = (uVar7 - uVar14) - 1;
        }
        else {
          uVar4 = param_1[0xb] - uVar14;
        }
        if (uVar14 == param_1[0xb]) {
          uVar9 = param_1[10];
          if (uVar9 != uVar7) {
            uVar14 = uVar9;
            if (uVar9 < uVar7) {
              uVar4 = (uVar7 - uVar9) - 1;
            }
            else {
              uVar4 = param_1[0xb] - uVar9;
            }
          }
        }
        if (uVar4 == 0) goto code_r0x829c2a70;
      }
code_r0x829c25fc:
      param_3 = 0;
      uVar8 = param_1[1];
      if (uVar12 < param_1[1]) {
        uVar8 = uVar12;
      }
      if (uVar4 < uVar8) {
        uVar8 = uVar4;
      }
      fn_82F68CC0(uVar14,pbVar17,uVar8);
      uVar7 = param_1[1];
      pbVar17 = pbVar17 + uVar8;
      uVar12 = uVar12 - uVar8;
      uVar14 = uVar8 + uVar14;
      param_1[1] = uVar7 - uVar8;
      uVar4 = uVar4 - uVar8;
      if (uVar7 - uVar8 == 0) {
code_r0x829c2524:
        uVar8 = -(uint)(param_1[6] != 0) & 7;
        goto code_r0x829c2534;
      }
      break;
    case 3:
      for (; uVar8 = (uint)uVar15, uVar16 < 0xe; uVar16 = uVar16 + 8) {
        if (uVar12 == 0) goto code_r0x829c2aac;
        param_3 = 0;
        uVar12 = uVar12 - 1;
        uVar15 = (uint)*pbVar17 << (uVar16 & 0x3f) | uVar15;
        pbVar17 = pbVar17 + 1;
      }
      param_1[1] = (uint)(uVar15 & 0x3fff);
      if ((0x1d < (uVar15 & 0x1f)) || (uVar6 = (uVar15 & 0x3fff) >> 5 & 0x1f, 0x1d < uVar6)) {
        pcVar10 = "too many length or distance symbols";
        goto code_r0x829c2ad0;
      }
      uVar4 = (*(code *)param_2[8])(param_2[10],uVar6 + (uVar15 & 0x1f) + 0x102,4);
      param_1[3] = uVar4;
      if (uVar4 != 0) {
        param_1[2] = 0;
        uVar15 = uVar15 >> 0xe;
        uVar16 = uVar16 - 0xe;
        *param_1 = 4;
        goto code_r0x829c2738;
      }
      goto code_r0x829c2ac0;
    case 4:
code_r0x829c2738:
      while (uVar8 = (uint)uVar15, param_1[2] < (param_1[1] >> 10) + 4) {
        for (; uVar8 = (uint)uVar15, uVar16 < 3; uVar16 = uVar16 + 8) {
          if (uVar12 == 0) goto code_r0x829c2aac;
          param_3 = 0;
          uVar12 = uVar12 - 1;
          uVar15 = (uint)*pbVar17 << (uVar16 & 0x3f) | uVar15;
          pbVar17 = pbVar17 + 1;
        }
        uVar15 = uVar15 >> 3;
        uVar16 = uVar16 - 3;
        *(uint *)(*(int *)(&lbl_82055BE8 + param_1[2] * 4) * 4 + param_1[3]) = uVar8 & 7;
        param_1[2] = param_1[2] + 1;
      }
      while (param_1[2] < 0x13) {
        *(undefined4 *)(*(int *)(&lbl_82055BE8 + param_1[2] * 4) * 4 + param_1[3]) = 0;
        param_1[2] = param_1[2] + 1;
      }
      param_1[4] = 7;
      lVar11 = fn_829C4E20(param_1[3],param_1 + 4,param_1 + 5,param_1[9],param_2);
      if (lVar11 == 0) {
        param_1[2] = 0;
        *param_1 = 5;
        goto code_r0x829c27b4;
      }
      iVar13 = (int)lVar11;
      param_3 = lVar11;
code_r0x829c2af0:
      if (iVar13 == -3) {
        (*(code *)param_2[9])(param_2[10],param_1[3]);
        *param_1 = 9;
      }
      goto code_r0x829c2a70;
    case 5:
code_r0x829c27b4:
      iVar13 = (param_1[1] >> 5 & 0x1f) + (param_1[1] & 0x1f);
      while (uVar8 = (uint)uVar15, param_1[2] < iVar13 + 0x102U) {
        for (; uVar8 = (uint)uVar15, uVar16 < param_1[4]; uVar16 = uVar16 + 8) {
          if (uVar12 == 0) goto code_r0x829c2aac;
          param_3 = 0;
          uVar12 = uVar12 - 1;
          uVar15 = (uint)*pbVar17 << (uVar16 & 0x3f) | uVar15;
          pbVar17 = pbVar17 + 1;
        }
        iVar13 = (int)((*(uint *)(&lbl_82057048 + param_1[4] * 4) & uVar15) << 3) + param_1[5];
        uVar4 = *(uint *)(iVar13 + 4);
        bVar1 = *(byte *)(iVar13 + 1);
        uVar7 = (uint)bVar1;
        if (uVar4 < 0x10) {
          uVar8 = uVar8 >> (bVar1 & 0x3f);
          uVar16 = uVar16 - uVar7;
          *(uint *)(param_1[3] + param_1[2] * 4) = uVar4;
          uVar4 = param_1[2] + 1;
        }
        else {
          if (uVar4 == 0x12) {
            uVar9 = 7;
            lVar11 = 0xb;
          }
          else {
            uVar9 = uVar4 - 0xe;
            lVar11 = 3;
          }
          for (; uVar8 = (uint)uVar15, uVar16 < uVar9 + uVar7; uVar16 = uVar16 + 8) {
            if (uVar12 == 0) goto code_r0x829c2aac;
            param_3 = 0;
            uVar12 = uVar12 - 1;
            uVar15 = (uint)*pbVar17 << (uVar16 & 0x3f) | uVar15;
            pbVar17 = pbVar17 + 1;
          }
          uVar3 = uVar8 >> (bVar1 & 0x3f);
          uVar8 = uVar3 >> (uVar9 & 0x3f);
          uVar2 = param_1[2];
          uVar15 = (ulonglong)uVar2;
          lVar11 = (ulonglong)(*(uint *)(&lbl_82057048 + uVar9 * 4) & uVar3) + lVar11;
          uVar16 = (uVar16 - uVar9) - uVar7;
          if (((ulonglong)(param_1[1] >> 5) & 0x1f) + ((ulonglong)param_1[1] & 0x1f) + 0x102 <
              (lVar11 + uVar15 & 0xffffffff)) {
code_r0x829c2b14:
            (*(code *)param_2[9])(param_2[10],param_1[3]);
            pcVar10 = "invalid bit length repeat";
            goto code_r0x829c2ad0;
          }
          if (uVar4 == 0x10) {
            if (uVar15 == 0) goto code_r0x829c2b14;
            uVar5 = *(undefined4 *)(uVar2 * 4 + param_1[3] + -4);
          }
          else {
            uVar5 = 0;
          }
          iVar13 = uVar2 << 2;
          do {
            lVar11 = lVar11 + -1;
            uVar15 = uVar15 + 1;
            uVar4 = (uint)uVar15;
            *(undefined4 *)(param_1[3] + iVar13) = uVar5;
            iVar13 = iVar13 + 4;
          } while (lVar11 != 0);
        }
        uVar15 = (ulonglong)uVar8;
        param_1[2] = uVar4;
        iVar13 = (param_1[1] >> 5 & 0x1f) + (param_1[1] & 0x1f);
      }
      param_1[5] = 0;
      uStack_ac = 9;
      uStack_b0 = 6;
      lVar11 = fn_829C4F00((param_1[1] & 0x1f) + 0x101,(param_1[1] >> 5 & 0x1f) + 1,param_1[3]
                                 ,&uStack_ac,&uStack_b0,auStack_94,&uStack_98,param_1[9]);
      if (lVar11 != 0) {
        iVar13 = (int)lVar11;
        param_3 = lVar11;
        goto code_r0x829c2af0;
      }
      uVar4 = fn_829C42D8(uStack_ac,uStack_b0,auStack_94[0],uStack_98,param_2);
      if (uVar4 != 0) {
        param_1[1] = uVar4;
        (*(code *)param_2[9])(param_2[10],param_1[3]);
        *param_1 = 6;
        goto code_r0x829c29c8;
      }
code_r0x829c2ac0:
      param_3 = -4;
      goto code_r0x829c2a70;
    case 6:
code_r0x829c29c8:
      param_1[8] = uVar8;
      param_1[7] = uVar16;
      param_2[1] = uVar12;
      iVar13 = *param_2;
      *param_2 = (int)pbVar17;
      param_2[2] = (int)(pbVar17 + (param_2[2] - iVar13));
      param_1[0xd] = uVar14;
      param_3 = fn_829C4338(param_1,param_2,param_3);
      if ((int)param_3 != 1) goto code_r0x829c2a9c;
      lVar11 = 0;
      fn_829C4968(param_1[1],param_2,param_3);
      uVar14 = param_1[0xd];
      pbVar17 = (byte *)*param_2;
      uVar12 = param_2[1];
      uVar8 = param_1[8];
      uVar15 = (ulonglong)uVar8;
      uVar16 = param_1[7];
      if (uVar14 < param_1[0xc]) {
        uVar4 = (param_1[0xc] - uVar14) - 1;
      }
      else {
        uVar4 = param_1[0xb] - uVar14;
      }
      if (param_1[6] != 0) {
        *param_1 = 7;
        goto code_r0x829c2b40;
      }
      *param_1 = 0;
      param_3 = lVar11;
      break;
    case 7:
code_r0x829c2b40:
      param_1[0xd] = uVar14;
      param_3 = fn_829C50F0(param_1,param_2,lVar11);
      uVar14 = param_1[0xd];
      if (param_1[0xc] == uVar14) {
        *param_1 = 8;
        goto code_r0x829c2b70;
      }
      goto code_r0x829c2a70;
    case 8:
code_r0x829c2b70:
      param_3 = 1;
      goto code_r0x829c2a70;
    case 9:
      param_3 = -3;
      goto code_r0x829c2a70;
    }
    uVar8 = (uint)uVar15;
    uVar7 = *param_1;
  }
  param_3 = -2;
code_r0x829c2a70:
  param_1[8] = uVar8;
  param_1[7] = uVar16;
code_r0x829c2a78:
  param_2[1] = uVar12;
code_r0x829c2a7c:
  iVar13 = *param_2;
  *param_2 = (int)pbVar17;
  param_2[2] = (int)(pbVar17 + (param_2[2] - iVar13));
  param_1[0xd] = uVar14;
code_r0x829c2a9c:
  fn_829C50F0(param_1,param_2,param_3);
  return;
}

