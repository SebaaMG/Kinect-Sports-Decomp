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
extern int fn_827D1D80();
extern int fn_827D3AB8();
extern int fn_827D3EC0();
extern int fn_827D4370();
extern int fn_827D4EF8();
extern int fn_82F68CC0();
extern unsigned int iStack0000001c;
extern unsigned int lbl_82017F20;
extern unsigned int lbl_820187C8;
extern unsigned int uStack_a4;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_e9;
extern unsigned int uStack_ea;
extern unsigned int uStack_eb;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


ulonglong fn_827D1EB0(int *param_1,int param_2)

{
  byte bVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 uVar9;
  ulonglong uVar10;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar11;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  int iVar23;
  int iStack0000001c;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  uint uStack_e8;
  uint uStack_e4;
  undefined *puStack_e0;
  char *pcStack_dc;
  char *pcStack_d8;
  char *pcStack_d4;
  char *pcStack_d0;
  char *pcStack_cc;
  char *pcStack_c8;
  char *pcStack_c4;
  char *pcStack_c0;
  char *pcStack_bc;
  char *pcStack_b8;
  char *pcStack_b4;
  char *pcStack_b0;
  char *pcStack_ac;
  char *pcStack_a8;
  uint uStack_a4;
  
  if ((((param_1 != (int *)0x0) && (puVar2 = (uint *)param_1[7], puVar2 != (uint *)0x0)) &&
      (param_1[3] != 0)) && ((*param_1 != 0 || (param_1[1] == 0)))) {
    if (*puVar2 == 0xb) {
      *puVar2 = 0xc;
    }
    uVar7 = param_1[4];
    puVar19 = (undefined1 *)param_1[3];
    uVar17 = param_1[1];
    uVar13 = *puVar2;
    pbVar18 = (byte *)*param_1;
    uVar22 = (ulonglong)puVar2[0xe];
    uVar4 = puVar2[0xf];
    uStack_e4 = 0;
    if (uVar13 < 0x1d) {
      puStack_e0 = &lbl_82017F20;
      pcStack_cc = "invalid block type";
      pcStack_a8 = "incorrect length check";
      pcStack_ac = "incorrect data check";
      pcStack_b0 = "invalid distance too far back";
      pcStack_c8 = "invalid stored block lengths";
      pcStack_b4 = "invalid distance code";
      pcStack_b8 = "invalid literal/length code";
      pcStack_bc = "invalid distances set";
      pcStack_d8 = "invalid window size";
      pcStack_d4 = "unknown header flags set";
      pcStack_d0 = "header crc mismatch";
      pcStack_c0 = "invalid literal/lengths set";
      pcStack_dc = "invalid bit length repeat";
      pcStack_c4 = "invalid code lengths set";
      uVar20 = uVar7;
      iStack0000001c = param_2;
      uStack_e8 = uVar7;
      uStack_a4 = uVar17;
      do {
        uVar5 = (uint)uVar22;
        switch(*(ushort *)(&lbl_820187C8 + uVar13 * 2) + 0x827d2058) {
        case 0x827d2058:
          if (puVar2[2] == 0) {
            uVar13 = 0xc;
            goto code_r0x827d2068;
          }
          for (; uVar5 = (uint)uVar22, uVar4 < 0x10; uVar4 = uVar4 + 8) {
            if (uVar17 == 0) goto code_r0x827d33bc;
            bVar1 = *pbVar18;
            uVar17 = uVar17 - 1;
            pbVar18 = pbVar18 + 1;
            uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
          }
          if (((puVar2[2] & 2) == 0) || ((uVar22 & 0xffffffff) != 0x8b1f)) {
            puVar2[4] = 0;
            if (puVar2[8] != 0) {
              *(undefined4 *)(puVar2[8] + 0x30) = 0xffffffff;
            }
            if (((puVar2[2] & 1) == 0) ||
               (uVar10 = (uVar22 & 0xff) * 0x100 + ((uVar22 & 0xffffffff) >> 8),
               uVar10 != (uVar10 / 0x1f) * 0x1f)) {
              param_1[6] = (int)"incorrect header check";
              goto code_r0x827d3360;
            }
            if ((uVar22 & 0xf) != 8) goto code_r0x827d2140;
            uVar22 = (uVar22 & 0xffffffff) >> 4;
            uVar4 = uVar4 - 4;
            uVar10 = (uVar22 & 0xf) + 8;
            pcVar16 = pcStack_d8;
            if (puVar2[9] < uVar10) goto code_r0x827d335c;
            puVar2[5] = 1 << (int)uVar10;
            uVar4 = fn_827D4370(0,0,0);
            uVar13 = (uint)uVar22;
            puVar2[6] = uVar4;
            uVar22 = 0;
            param_1[0xc] = uVar4;
            uVar13 = ~uVar13 >> 8 & 2 | 9;
            uVar4 = 0;
            goto code_r0x827d21a0;
          }
          uVar13 = fn_827D4EF8(0,0,0);
          puVar2[6] = uVar13;
          uStack_eb = 0x8b;
          uStack_ec = 0x1f;
          uVar13 = fn_827D4EF8(puVar2[6],&uStack_ec,2);
          puVar2[6] = uVar13;
          uVar22 = 0;
          *puVar2 = 1;
          uVar4 = 0;
          goto code_r0x827d3364;
        case 0x827d21d0:
          for (; uVar5 = (uint)uVar22, uVar4 < 0x10; uVar4 = uVar4 + 8) {
            if (uVar17 == 0) goto code_r0x827d33bc;
            bVar1 = *pbVar18;
            uVar17 = uVar17 - 1;
            pbVar18 = pbVar18 + 1;
            uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
          }
          puVar2[4] = uVar5;
          if ((uVar5 & 0xff) == 8) {
            pcVar16 = pcStack_d4;
            if ((uVar22 & 0xe000) != 0) goto code_r0x827d335c;
            if ((uint *)puVar2[8] != (uint *)0x0) {
              *(uint *)puVar2[8] = uVar5 >> 8 & 1;
            }
            if ((puVar2[4] & 0x200) != 0) {
              uStack_eb = (undefined1)(uVar22 >> 8);
              uStack_ec = (undefined1)uVar22;
              uVar13 = fn_827D4EF8(puVar2[6],&uStack_ec,2);
              puVar2[6] = uVar13;
            }
            uVar22 = 0;
            uVar4 = 0;
            *puVar2 = 2;
            goto code_r0x827d226c;
          }
code_r0x827d2140:
          param_1[6] = (int)"unknown compression method";
          goto code_r0x827d3360;
        case 0x827d226c:
code_r0x827d226c:
          for (; uVar5 = (uint)uVar22, uVar4 < 0x20; uVar4 = uVar4 + 8) {
            if (uVar17 == 0) goto code_r0x827d33bc;
            bVar1 = *pbVar18;
            uVar17 = uVar17 - 1;
            pbVar18 = pbVar18 + 1;
            uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
          }
          if (puVar2[8] != 0) {
            *(uint *)(puVar2[8] + 4) = uVar5;
          }
          if ((puVar2[4] & 0x200) != 0) {
            uStack_e9 = (undefined1)(uVar22 >> 0x18);
            uStack_ec = (undefined1)uVar22;
            uStack_eb = (undefined1)(uVar22 >> 8);
            uStack_ea = (undefined1)(uVar22 >> 0x10);
            uVar13 = fn_827D4EF8(puVar2[6],&uStack_ec,4);
            puVar2[6] = uVar13;
          }
          uVar22 = 0;
          uVar4 = 0;
          *puVar2 = 3;
          break;
        case 0x827d2358:
          goto code_r0x827d2358;
        case 0x827d237c:
          goto code_r0x827d237c;
        case 0x827d2434:
          goto code_r0x827d2434;
        case 0x827d2560:
          goto code_r0x827d2560;
        case 0x827d2614:
          goto code_r0x827d2614;
        case 0x827d26cc:
          for (; uVar5 = (uint)uVar22, uVar4 < 0x20; uVar4 = uVar4 + 8) {
            if (uVar17 == 0) goto code_r0x827d33bc;
            bVar1 = *pbVar18;
            uVar17 = uVar17 - 1;
            pbVar18 = pbVar18 + 1;
            uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
          }
          uVar10 = uVar22 >> 0x18;
          uVar22 = 0;
          uVar13 = ((uVar5 & 0xff00) + uVar5 * 0x10000) * 0x100 + (uVar5 >> 8 & 0xff00) +
                   (uint)(byte)uVar10;
          uVar4 = 0;
          puVar2[6] = uVar13;
          param_1[0xc] = uVar13;
          *puVar2 = 10;
        case 0x827d270c:
          if (puVar2[3] == 0) {
            param_1[3] = (int)puVar19;
            param_1[4] = uVar20;
            *param_1 = (int)pbVar18;
            param_1[1] = uVar17;
            puVar2[0xe] = (uint)uVar22;
            puVar2[0xf] = uVar4;
            return 2;
          }
          uVar13 = fn_827D4370(0,0,0);
          puVar2[6] = uVar13;
          param_1[0xc] = uVar13;
          *puVar2 = 0xb;
code_r0x827d2738:
          uVar5 = (uint)uVar22;
          if (iStack0000001c == 5) goto code_r0x827d33bc;
code_r0x827d2744:
          if (puVar2[1] == 0) {
            for (; uVar5 = (uint)uVar22, uVar4 < 3; uVar4 = uVar4 + 8) {
              if (uVar17 == 0) goto code_r0x827d33bc;
              bVar1 = *pbVar18;
              uVar17 = uVar17 - 1;
              pbVar18 = pbVar18 + 1;
              uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
            }
            uVar10 = (uVar22 & 0xffffffff) >> 1 & 3;
            puVar2[1] = uVar5 & 1;
            if (uVar10 == 0) {
              uVar13 = 0xd;
code_r0x827d2800:
              *puVar2 = uVar13;
            }
            else if (uVar10 == 1) {
              puVar2[0x15] = 9;
              puVar2[0x16] = 5;
              puVar2[0x14] = (uint)(puStack_e0 + 0x800);
              puVar2[0x13] = (uint)puStack_e0;
              *puVar2 = 0x12;
            }
            else {
              if (uVar10 < 3) {
                uVar13 = 0xf;
                goto code_r0x827d2800;
              }
              if (uVar10 == 3) {
                param_1[6] = (int)pcStack_cc;
                *puVar2 = 0x1b;
              }
            }
            uVar22 = (uVar22 & 0xffffffff) >> 3;
            uVar4 = uVar4 - 3;
          }
          else {
            uVar13 = 0x18;
            uVar22 = (ulonglong)((uint)uVar22 >> (uVar4 & 7));
            uVar4 = uVar4 - (uVar4 & 7);
code_r0x827d21a0:
            *puVar2 = uVar13;
          }
          goto code_r0x827d3364;
        case 0x827d2738:
          goto code_r0x827d2738;
        case 0x827d2744:
          goto code_r0x827d2744;
        case 0x827d2810:
          uVar22 = (ulonglong)(uVar5 >> (uVar4 & 7));
          for (uVar4 = uVar4 - (uVar4 & 7); uVar5 = (uint)uVar22, uVar4 < 0x20; uVar4 = uVar4 + 8) {
            if (uVar17 == 0) goto code_r0x827d33bc;
            bVar1 = *pbVar18;
            uVar17 = uVar17 - 1;
            pbVar18 = pbVar18 + 1;
            uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
          }
          pcVar16 = pcStack_c8;
          if ((uVar22 & 0xffff) == (~uVar22 & 0xffffffff) >> 0x10) {
            puVar2[0x10] = (uint)(uVar22 & 0xffff);
            uVar22 = 0;
            uVar4 = 0;
            *puVar2 = 0xe;
            goto code_r0x827d2878;
          }
          goto code_r0x827d335c;
        case 0x827d2878:
code_r0x827d2878:
          uVar5 = (uint)uVar22;
          uVar13 = puVar2[0x10];
          if (uVar13 != 0) {
            if (uVar17 < uVar13) {
              uVar13 = uVar17;
            }
            if (uVar20 < uVar13) {
              uVar13 = uVar20;
            }
            if (uVar13 == 0) goto code_r0x827d33bc;
            fn_82F68CC0(puVar19,pbVar18,uVar13);
            uVar17 = uVar17 - uVar13;
            pbVar18 = pbVar18 + uVar13;
            uVar20 = uVar20 - uVar13;
            puVar2[0x10] = puVar2[0x10] - uVar13;
            puVar19 = puVar19 + uVar13;
            goto code_r0x827d3364;
          }
          goto code_r0x827d28d4;
        case 0x827d28fc:
          for (; uVar5 = (uint)uVar22, uVar4 < 0xe; uVar4 = uVar4 + 8) {
            if (uVar17 == 0) goto code_r0x827d33bc;
            bVar1 = *pbVar18;
            uVar17 = uVar17 - 1;
            pbVar18 = pbVar18 + 1;
            uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
          }
          uVar10 = uVar22 & 0xffffffff;
          puVar2[0x18] = (uVar5 & 0x1f) + 0x101;
          uVar8 = (uVar10 >> 5 & 0x1f) + 1;
          uVar22 = uVar10 >> 0xe;
          puVar2[0x19] = (uint)uVar8;
          puVar2[0x17] = ((uint)(uVar10 >> 10) & 0xf) + 4;
          uVar4 = uVar4 - 0xe;
          if ((0x11e < puVar2[0x18]) || (0x1e < uVar8)) {
            param_1[6] = (int)"too many length or distance symbols";
            goto code_r0x827d3360;
          }
          puVar2[0x1a] = 0;
          *puVar2 = 0x10;
        case 0x827d29c8:
          while (puVar2[0x1a] < puVar2[0x17]) {
            for (; uVar5 = (uint)uVar22, uVar4 < 3; uVar4 = uVar4 + 8) {
              if (uVar17 == 0) goto code_r0x827d33bc;
              bVar1 = *pbVar18;
              uVar17 = uVar17 - 1;
              pbVar18 = pbVar18 + 1;
              uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
            }
            uVar3 = (ushort)uVar22;
            uVar22 = (uVar22 & 0xffffffff) >> 3;
            uVar4 = uVar4 - 3;
            *(ushort *)
             ((*(ushort *)(puStack_e0 + puVar2[0x1a] * 2 + 0x880) + 0x38) * 2 + (int)puVar2) =
                 uVar3 & 7;
            puVar2[0x1a] = puVar2[0x1a] + 1;
          }
          while (puVar2[0x1a] < 0x13) {
            *(undefined2 *)
             ((*(ushort *)(puStack_e0 + puVar2[0x1a] * 2 + 0x880) + 0x38) * 2 + (int)puVar2) = 0;
            puVar2[0x1a] = puVar2[0x1a] + 1;
          }
          puVar2[0x13] = (uint)(puVar2 + 0x14c);
          puVar2[0x1b] = (uint)(puVar2 + 0x14c);
          puVar2[0x15] = 7;
          uStack_e4 = fn_827D3EC0(0,puVar2 + 0x1c,0x13,puVar2 + 0x1b,puVar2 + 0x15,
                                        puVar2 + 0xbc);
          pcVar16 = pcStack_c4;
          if (uStack_e4 != 0) goto code_r0x827d335c;
          puVar2[0x1a] = 0;
          *puVar2 = 0x11;
code_r0x827d2c88:
          while (puVar2[0x1a] < puVar2[0x19] + puVar2[0x18]) {
            uVar12 = *(undefined4 *)
                      ((int)(((ulonglong)(uint)(1 << (puVar2[0x15] & 0x3f)) - 1 & uVar22 &
                             0xffffffff) << 2) + puVar2[0x13]);
            while( true ) {
              uVar5 = (uint)uVar22;
              uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)((uint)uVar12 >> 0x10))) & ((U64)0xFF)) << 8));
              uVar13 = (uint)(((U64)(uStack_f0) >> 8) & 0xFF);
              if (uVar13 <= uVar4) break;
              if (uVar17 == 0) goto code_r0x827d33bc;
              bVar1 = *pbVar18;
              uVar17 = uVar17 - 1;
              pbVar18 = pbVar18 + 1;
              uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
              uVar4 = uVar4 + 8;
              uVar12 = *(undefined4 *)
                        ((int)(((ulonglong)(uint)(1 << (puVar2[0x15] & 0x3f)) - 1 & uVar22 &
                               0xffffffff) << 2) + puVar2[0x13]);
            }
            uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((ushort)uVar12)) & ((U64)0xFFFF)) << 16));
            uVar15 = (uint)(((U64)(uStack_f0) >> 8) & 0xFF);
            if ((((U64)(uStack_f0) >> 16) & 0xFFFF) < 0x10) {
              for (; uVar5 = (uint)uVar22, uVar4 < uVar13; uVar4 = uVar4 + 8) {
                if (uVar17 == 0) goto code_r0x827d33bc;
                bVar1 = *pbVar18;
                uVar17 = uVar17 - 1;
                pbVar18 = pbVar18 + 1;
                uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
              }
              uVar22 = (ulonglong)(uVar5 >> (uVar15 & 0x3f));
              uVar4 = uVar4 - uVar13;
              *(ushort *)((puVar2[0x1a] + 0x38) * 2 + (int)puVar2) = (((U64)(uStack_f0) >> 16) & 0xFFFF);
              puVar2[0x1a] = puVar2[0x1a] + 1;
            }
            else {
              if ((((U64)(uStack_f0) >> 16) & 0xFFFF) == 0x10) {
                for (; uVar5 = (uint)uVar22, uVar4 < uVar13 + 2; uVar4 = uVar4 + 8) {
                  if (uVar17 == 0) goto code_r0x827d33bc;
                  bVar1 = *pbVar18;
                  uVar17 = uVar17 - 1;
                  pbVar18 = pbVar18 + 1;
                  uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
                }
                uVar5 = uVar5 >> (uVar15 & 0x3f);
                uVar22 = (ulonglong)uVar5;
                uVar4 = uVar4 - uVar13;
                pcVar16 = pcStack_dc;
                if (puVar2[0x1a] == 0) goto code_r0x827d335c;
                lVar11 = ((ulonglong)uVar5 & 3) + 3;
                uVar15 = uVar5 >> 2;
                uVar4 = uVar4 - 2;
                uVar9 = *(undefined2 *)((puVar2[0x1a] + 0x37) * 2 + (int)puVar2);
              }
              else {
                if ((((U64)(uStack_f0) >> 16) & 0xFFFF) == 0x11) {
                  for (; uVar5 = (uint)uVar22, uVar4 < uVar13 + 3; uVar4 = uVar4 + 8) {
                    if (uVar17 == 0) goto code_r0x827d33bc;
                    bVar1 = *pbVar18;
                    uVar17 = uVar17 - 1;
                    pbVar18 = pbVar18 + 1;
                    uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
                  }
                  uVar5 = uVar5 >> (uVar15 & 0x3f);
                  uVar15 = uVar5 >> 3;
                  lVar11 = ((ulonglong)uVar5 & 7) + 3;
                  uVar4 = (uVar4 - uVar13) - 3;
                }
                else {
                  for (; uVar5 = (uint)uVar22, uVar4 < uVar13 + 7; uVar4 = uVar4 + 8) {
                    if (uVar17 == 0) goto code_r0x827d33bc;
                    bVar1 = *pbVar18;
                    uVar17 = uVar17 - 1;
                    pbVar18 = pbVar18 + 1;
                    uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
                  }
                  uVar5 = uVar5 >> (uVar15 & 0x3f);
                  uVar15 = uVar5 >> 7;
                  lVar11 = ((ulonglong)uVar5 & 0x7f) + 0xb;
                  uVar4 = (uVar4 - uVar13) - 7;
                }
                uVar9 = 0;
              }
              uVar22 = (ulonglong)uVar15;
              if (((ulonglong)puVar2[0x19] + (ulonglong)puVar2[0x18] & 0xffffffff) <
                  ((ulonglong)puVar2[0x1a] + lVar11 & 0xffffffff)) {
                param_1[6] = (int)pcStack_dc;
                *puVar2 = 0x1b;
                break;
              }
              for (; lVar11 != 0; lVar11 = lVar11 + -1) {
                *(undefined2 *)((puVar2[0x1a] + 0x38) * 2 + (int)puVar2) = uVar9;
                puVar2[0x1a] = puVar2[0x1a] + 1;
              }
            }
          }
          if (*puVar2 != 0x1b) {
            puVar2[0x13] = (uint)(puVar2 + 0x14c);
            puVar21 = puVar2 + 0x1b;
            puVar2[0x1b] = (uint)(puVar2 + 0x14c);
            puVar2[0x15] = 9;
            uStack_e4 = fn_827D3EC0(1,puVar2 + 0x1c,puVar2[0x18],puVar21,puVar2 + 0x15,
                                          puVar2 + 0xbc);
            pcVar16 = pcStack_c0;
            if (uStack_e4 == 0) {
              puVar2[0x16] = 6;
              puVar2[0x14] = *puVar21;
              uStack_e4 = fn_827D3EC0(2,(puVar2[0x18] + 0x38) * 2 + (int)puVar2,puVar2[0x19],
                                            puVar21,puVar2 + 0x16,puVar2 + 0xbc);
              pcVar16 = pcStack_bc;
              if (uStack_e4 != 0) goto code_r0x827d335c;
              *puVar2 = 0x12;
code_r0x827d2d64:
              if ((5 < uVar17) && (0x101 < uVar20)) {
                param_1[3] = (int)puVar19;
                param_1[4] = uVar20;
                *param_1 = (int)pbVar18;
                param_1[1] = uVar17;
                puVar2[0xe] = (uint)uVar22;
                puVar2[0xf] = uVar4;
                fn_827D3AB8(param_1,uVar7);
                puVar19 = (undefined1 *)param_1[3];
                uVar20 = param_1[4];
                pbVar18 = (byte *)*param_1;
                uVar17 = param_1[1];
                uVar22 = (ulonglong)puVar2[0xe];
                uVar4 = puVar2[0xf];
                goto code_r0x827d3364;
              }
              uVar13 = *(uint *)((int)(((ulonglong)(uint)(1 << (puVar2[0x15] & 0x3f)) - 1 & uVar22 &
                                       0xffffffff) << 2) + puVar2[0x13]);
              while( true ) {
                uVar5 = (uint)uVar22;
                uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)(uVar13 >> 0x10))) & ((U64)0xFF)) << 8));
                uVar15 = (uint)(((U64)(uStack_f0) >> 8) & 0xFF);
                if (uVar15 <= uVar4) break;
                if (uVar17 == 0) goto code_r0x827d33bc;
                bVar1 = *pbVar18;
                uVar17 = uVar17 - 1;
                pbVar18 = pbVar18 + 1;
                uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
                uVar4 = uVar4 + 8;
                uVar13 = *(uint *)((int)(((ulonglong)(uint)(1 << (puVar2[0x15] & 0x3f)) - 1 & uVar22
                                         & 0xffffffff) << 2) + puVar2[0x13]);
              }
              uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)(uVar13 >> 0x18))) & ((U64)0xFF)) << 0));
              uVar14 = uVar13;
              if (((((U64)(uStack_f0) >> 0) & 0xFF) != 0) && ((uVar13 & 0xf0000000) == 0)) {
                uVar14 = *(uint *)(((((1 << ((uint)(((U64)(uStack_f0) >> 0) & 0xFF) + (uint)(((U64)(uStack_f0) >> 8) & 0xFF) & 0x3f))
                                      - 1U & uVar5) >> ((((U64)(uStack_f0) >> 8) & 0xFF) & 0x3f)) + (uVar13 & 0xffff)
                                   ) * 4 + puVar2[0x13]);
                while( true ) {
                  uVar5 = (uint)uVar22;
                  uVar15 = uVar14 >> 0x10 & 0xff;
                  uStack_e8 = uVar13;
                  if ((((U64)(uStack_f0) >> 8) & 0xFF) + uVar15 <= uVar4) break;
                  if (uVar17 == 0) goto code_r0x827d33bc;
                  uVar17 = uVar17 - 1;
                  bVar1 = *pbVar18;
                  pbVar18 = pbVar18 + 1;
                  uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
                  uVar4 = uVar4 + 8;
                  uVar14 = *(uint *)(((((1 << ((uint)(((U64)(uStack_f0) >> 0) & 0xFF) + (uint)(((U64)(uStack_f0) >> 8) & 0xFF) & 0x3f)
                                        ) - 1U & (uint)uVar22) >> ((((U64)(uStack_f0) >> 8) & 0xFF) & 0x3f)) +
                                     (uVar13 & 0xffff)) * 4 + puVar2[0x13]);
                }
                uVar5 = uVar5 >> ((((U64)(uStack_f0) >> 8) & 0xFF) & 0x3f);
                uVar4 = uVar4 - (((U64)(uStack_f0) >> 8) & 0xFF);
              }
              uStack_f0 = uVar14;
              uVar22 = (ulonglong)(uVar5 >> (uVar15 & 0x3f));
              uVar4 = uVar4 - uVar15;
              puVar2[0x10] = uStack_f0 & 0xffff;
              if ((((U64)(uStack_f0) >> 0) & 0xFF) == 0) {
                uVar13 = 0x17;
              }
              else {
                if ((uStack_f0 & 0x20000000) == 0) {
                  pcVar16 = pcStack_b8;
                  if ((uStack_f0 & 0x40000000) == 0) {
                    puVar2[0x12] = (((U64)(uStack_f0) >> 0) & 0xFF) & 0xf;
                    *puVar2 = 0x13;
code_r0x827d2f20:
                    uVar5 = (uint)uVar22;
                    uVar13 = puVar2[0x12];
                    if (uVar13 != 0) {
                      uVar15 = uVar17;
                      if (uVar4 < uVar13) {
                        do {
                          uVar5 = (uint)uVar22;
                          uVar17 = 0;
                          if (uVar15 == 0) goto code_r0x827d33bc;
                          bVar1 = *pbVar18;
                          uVar17 = uVar15 - 1;
                          pbVar18 = pbVar18 + 1;
                          uVar5 = uVar4 & 0x3f;
                          uVar4 = uVar4 + 8;
                          uVar22 = ((uint)bVar1 << uVar5) + uVar22;
                          uVar5 = (uint)uVar22;
                          uVar15 = uVar17;
                        } while (uVar4 < puVar2[0x12]);
                      }
                      uVar4 = uVar4 - uVar13;
                      uVar22 = (ulonglong)(uVar5 >> (uVar13 & 0x3f));
                      puVar2[0x10] = ((1 << (uVar13 & 0x3f)) - 1U & uVar5) + puVar2[0x10];
                    }
                    *puVar2 = 0x14;
code_r0x827d2f88:
                    uVar13 = *(uint *)((int)(((ulonglong)(uint)(1 << (puVar2[0x16] & 0x3f)) - 1 &
                                              uVar22 & 0xffffffff) << 2) + puVar2[0x14]);
                    while( true ) {
                      uVar5 = (uint)uVar22;
                      uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)(uVar13 >> 0x10))) & ((U64)0xFF)) << 8));
                      uVar15 = (uint)(((U64)(uStack_f0) >> 8) & 0xFF);
                      if (uVar15 <= uVar4) break;
                      if (uVar17 == 0) goto code_r0x827d33bc;
                      bVar1 = *pbVar18;
                      uVar17 = uVar17 - 1;
                      pbVar18 = pbVar18 + 1;
                      uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
                      uVar4 = uVar4 + 8;
                      uVar13 = *(uint *)((int)(((ulonglong)(uint)(1 << (puVar2[0x16] & 0x3f)) - 1 &
                                                uVar22 & 0xffffffff) << 2) + puVar2[0x14]);
                    }
                    uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)(uVar13 >> 0x18))) & ((U64)0xFF)) << 0));
                    bVar1 = (((U64)(uStack_f0) >> 0) & 0xFF);
                    uVar14 = uVar13;
                    if ((uVar13 & 0xf0000000) == 0) {
                      uVar14 = *(uint *)(((((1 << ((uint)(((U64)(uStack_f0) >> 0) & 0xFF) + (uint)(((U64)(uStack_f0) >> 8) & 0xFF) &
                                                  0x3f)) - 1U & uVar5) >> ((((U64)(uStack_f0) >> 8) & 0xFF) & 0x3f))
                                         + (uVar13 & 0xffff)) * 4 + puVar2[0x14]);
                      while( true ) {
                        uVar5 = (uint)uVar22;
                        uVar15 = uVar14 >> 0x10 & 0xff;
                        uStack_e8 = uVar13;
                        if ((((U64)(uStack_f0) >> 8) & 0xFF) + uVar15 <= uVar4) break;
                        if (uVar17 == 0) goto code_r0x827d33bc;
                        uVar17 = uVar17 - 1;
                        bVar1 = *pbVar18;
                        pbVar18 = pbVar18 + 1;
                        uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
                        uVar4 = uVar4 + 8;
                        uVar14 = *(uint *)(((((1 << ((uint)(((U64)(uStack_f0) >> 0) & 0xFF) + (uint)(((U64)(uStack_f0) >> 8) & 0xFF) &
                                                    0x3f)) - 1U & (uint)uVar22) >>
                                            ((((U64)(uStack_f0) >> 8) & 0xFF) & 0x3f)) + (uVar13 & 0xffff)) * 4 +
                                          puVar2[0x14]);
                      }
                      uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)(uVar14 >> 0x18))) & ((U64)0xFF)) << 0));
                      uVar5 = uVar5 >> ((((U64)(uStack_f0) >> 8) & 0xFF) & 0x3f);
                      uVar4 = uVar4 - (((U64)(uStack_f0) >> 8) & 0xFF);
                      bVar1 = (((U64)(uStack_f0) >> 0) & 0xFF);
                    }
                    uStack_f0 = uVar14;
                    uVar22 = (ulonglong)(uVar5 >> (uVar15 & 0x3f));
                    uVar4 = uVar4 - uVar15;
                    pcVar16 = pcStack_b4;
                    if ((bVar1 & 0x40) == 0) {
                      puVar2[0x12] = bVar1 & 0xf;
                      *puVar2 = 0x15;
                      puVar2[0x11] = uStack_f0 & 0xffff;
code_r0x827d30dc:
                      uVar5 = (uint)uVar22;
                      uVar13 = puVar2[0x12];
                      if (uVar13 != 0) {
                        uVar15 = uVar17;
                        if (uVar4 < uVar13) {
                          do {
                            uVar5 = (uint)uVar22;
                            uVar17 = 0;
                            if (uVar15 == 0) goto code_r0x827d33bc;
                            bVar1 = *pbVar18;
                            uVar17 = uVar15 - 1;
                            pbVar18 = pbVar18 + 1;
                            uVar5 = uVar4 & 0x3f;
                            uVar4 = uVar4 + 8;
                            uVar22 = ((uint)bVar1 << uVar5) + uVar22;
                            uVar5 = (uint)uVar22;
                            uVar15 = uVar17;
                          } while (uVar4 < puVar2[0x12]);
                        }
                        uVar4 = uVar4 - uVar13;
                        uVar22 = (ulonglong)(uVar5 >> (uVar13 & 0x3f));
                        puVar2[0x11] = ((1 << (uVar13 & 0x3f)) - 1U & uVar5) + puVar2[0x11];
                      }
                      pcVar16 = pcStack_b0;
                      if (puVar2[0x11] <= (puVar2[0xb] - uVar20) + uVar7) {
                        *puVar2 = 0x16;
code_r0x827d3164:
                        uVar5 = (uint)uVar22;
                        if (uVar20 == 0) goto code_r0x827d33bc;
                        uVar13 = puVar2[0x11];
                        if (uVar7 - uVar20 < uVar13) {
                          uVar5 = puVar2[0xc];
                          uVar13 = uVar13 - (uVar7 - uVar20);
                          if (uVar5 < uVar13) {
                            uVar13 = uVar13 - uVar5;
                            iVar6 = (puVar2[0xd] + puVar2[10]) - uVar13;
                          }
                          else {
                            iVar6 = (puVar2[0xd] - uVar13) + uVar5;
                          }
                          uVar5 = puVar2[0x10];
                          if (uVar5 < uVar13) goto code_r0x827d31c4;
                        }
                        else {
                          iVar6 = (int)puVar19 - uVar13;
                          uVar5 = puVar2[0x10];
code_r0x827d31c4:
                          uVar13 = uVar5;
                          uVar5 = uVar13;
                        }
                        if (uVar20 < uVar13) {
                          uVar13 = uVar20;
                        }
                        uVar20 = uVar20 - uVar13;
                        puVar2[0x10] = uVar5 - uVar13;
                        iVar6 = iVar6 - (int)puVar19;
                        do {
                          uVar13 = uVar13 - 1;
                          *puVar19 = puVar19[iVar6];
                          puVar19 = puVar19 + 1;
                        } while (uVar13 != 0);
                        if (puVar2[0x10] != 0) goto code_r0x827d3364;
                        uVar13 = 0x12;
                        goto code_r0x827d2068;
                      }
                    }
                  }
                  goto code_r0x827d335c;
                }
code_r0x827d28d4:
                uVar13 = 0xb;
              }
              goto code_r0x827d2068;
            }
            goto code_r0x827d335c;
          }
          goto code_r0x827d3364;
        case 0x827d2c88:
          goto code_r0x827d2c88;
        case 0x827d2d64:
          goto code_r0x827d2d64;
        case 0x827d2f20:
          goto code_r0x827d2f20;
        case 0x827d2f88:
          goto code_r0x827d2f88;
        case 0x827d30dc:
          goto code_r0x827d30dc;
        case 0x827d3164:
          goto code_r0x827d3164;
        case 0x827d320c:
          if (uVar20 == 0) goto code_r0x827d33bc;
          uVar13 = 0x12;
          uVar20 = uVar20 - 1;
          *puVar19 = (char)puVar2[0x10];
          puVar19 = puVar19 + 1;
          goto code_r0x827d21a0;
        case 0x827d322c:
          if (puVar2[2] != 0) {
            for (; uVar5 = (uint)uVar22, uVar4 < 0x20; uVar4 = uVar4 + 8) {
              if (uVar17 == 0) goto code_r0x827d33bc;
              bVar1 = *pbVar18;
              uVar17 = uVar17 - 1;
              pbVar18 = pbVar18 + 1;
              uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
            }
            iVar6 = uVar7 - uVar20;
            param_1[5] = iVar6 + param_1[5];
            puVar2[7] = iVar6 + puVar2[7];
            if (iVar6 != 0) {
              if (puVar2[4] == 0) {
                uVar7 = fn_827D4370(puVar2[6],(int)puVar19 - iVar6);
              }
              else {
                uVar7 = fn_827D4EF8();
              }
              puVar2[6] = uVar7;
              param_1[0xc] = uVar7;
            }
            uVar10 = uVar22;
            if (puVar2[4] == 0) {
              uVar10 = (((uVar22 & 0xff00) + (uVar22 & 0xffff) * 0x10000) * 0x100 & 0xffffff00) +
                       ((uVar22 & 0xffffffff) >> 8 & 0xff00) + ((uVar22 & 0xffffffff) >> 0x18);
            }
            pcVar16 = pcStack_ac;
            uVar7 = uVar20;
            if ((uVar10 & 0xffffffff) != (ulonglong)puVar2[6]) goto code_r0x827d335c;
            uVar22 = 0;
            uVar4 = 0;
          }
          *puVar2 = 0x19;
        case 0x827d3308:
          uVar5 = (uint)uVar22;
          if ((puVar2[2] == 0) || (puVar2[4] == 0)) {
code_r0x827d33a4:
            *puVar2 = 0x1a;
code_r0x827d33ac:
            uStack_e4 = 1;
            goto code_r0x827d33bc;
          }
          for (; uVar5 = (uint)uVar22, uVar4 < 0x20; uVar4 = uVar4 + 8) {
            if (uVar17 == 0) goto code_r0x827d33bc;
            bVar1 = *pbVar18;
            uVar17 = uVar17 - 1;
            pbVar18 = pbVar18 + 1;
            uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
          }
          pcVar16 = pcStack_a8;
          if ((uVar22 & 0xffffffff) == (ulonglong)puVar2[7]) {
            uVar5 = 0;
            uVar4 = 0;
            goto code_r0x827d33a4;
          }
          goto code_r0x827d335c;
        case 0x827d33ac:
          goto code_r0x827d33ac;
        case 0x827d33b4:
          uStack_e4 = 0xfffffffd;
          goto code_r0x827d33bc;
        case 0x827d350c:
          return 0xfffffffffffffffc;
        }
        for (; uVar5 = (uint)uVar22, uVar4 < 0x10; uVar4 = uVar4 + 8) {
          if (uVar17 == 0) goto code_r0x827d33bc;
          bVar1 = *pbVar18;
          uVar17 = uVar17 - 1;
          pbVar18 = pbVar18 + 1;
          uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
        }
        if (puVar2[8] != 0) {
          *(uint *)(puVar2[8] + 8) = uVar5 & 0xff;
          *(uint *)(puVar2[8] + 0xc) = uVar5 >> 8;
        }
        if ((puVar2[4] & 0x200) != 0) {
          uStack_eb = (undefined1)(uVar22 >> 8);
          uStack_ec = (undefined1)uVar22;
          uVar13 = fn_827D4EF8(puVar2[6],&uStack_ec,2);
          puVar2[6] = uVar13;
        }
        uVar22 = 0;
        uVar4 = 0;
        *puVar2 = 4;
code_r0x827d2358:
        if ((puVar2[4] & 0x400) == 0) {
          if (puVar2[8] != 0) {
            *(undefined4 *)(puVar2[8] + 0x10) = 0;
          }
        }
        else {
          for (; uVar5 = (uint)uVar22, uVar4 < 0x10; uVar4 = uVar4 + 8) {
            if (uVar17 == 0) goto code_r0x827d33bc;
            bVar1 = *pbVar18;
            uVar17 = uVar17 - 1;
            pbVar18 = pbVar18 + 1;
            uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
          }
          puVar2[0x10] = uVar5;
          if (puVar2[8] != 0) {
            *(uint *)(puVar2[8] + 0x14) = uVar5;
          }
          if ((puVar2[4] & 0x200) != 0) {
            uStack_eb = (undefined1)(uVar22 >> 8);
            uStack_ec = (undefined1)uVar22;
            uVar13 = fn_827D4EF8(puVar2[6],&uStack_ec,2);
            puVar2[6] = uVar13;
          }
          uVar22 = 0;
          uVar4 = 0;
        }
        *puVar2 = 5;
code_r0x827d237c:
        uVar5 = (uint)uVar22;
        if ((puVar2[4] & 0x400) != 0) {
          uVar13 = puVar2[0x10];
          uVar15 = uVar13;
          if (uVar17 < uVar13) {
            uVar15 = uVar17;
          }
          if (uVar15 != 0) {
            uVar14 = puVar2[8];
            if ((uVar14 != 0) && (*(int *)(uVar14 + 0x10) != 0)) {
              iVar6 = *(int *)(uVar14 + 0x14) - uVar13;
              uVar13 = *(uint *)(uVar14 + 0x18) - iVar6;
              if (uVar15 + iVar6 <= *(uint *)(uVar14 + 0x18)) {
                uVar13 = uVar15;
              }
              fn_82F68CC0(*(int *)(uVar14 + 0x10) + iVar6,pbVar18,uVar13);
            }
            if ((puVar2[4] & 0x200) != 0) {
              uVar13 = fn_827D4EF8(puVar2[6],pbVar18,uVar15);
              puVar2[6] = uVar13;
            }
            uVar17 = uVar17 - uVar15;
            pbVar18 = pbVar18 + uVar15;
            puVar2[0x10] = puVar2[0x10] - uVar15;
          }
          if (puVar2[0x10] != 0) goto code_r0x827d33bc;
        }
        puVar2[0x10] = 0;
        *puVar2 = 6;
code_r0x827d2434:
        uVar5 = (uint)uVar22;
        if ((puVar2[4] & 0x800) == 0) {
          if (puVar2[8] != 0) {
            *(undefined4 *)(puVar2[8] + 0x1c) = 0;
          }
        }
        else {
          if (uVar17 == 0) goto code_r0x827d33bc;
          uVar13 = 0;
          do {
            uVar15 = puVar2[8];
            bVar1 = pbVar18[uVar13];
            uVar13 = uVar13 + 1;
            if (((uVar15 != 0) && (*(int *)(uVar15 + 0x1c) != 0)) &&
               (puVar2[0x10] < *(uint *)(uVar15 + 0x20))) {
              *(byte *)(*(int *)(uVar15 + 0x1c) + puVar2[0x10]) = bVar1;
              puVar2[0x10] = puVar2[0x10] + 1;
            }
          } while ((bVar1 != 0) && (uVar13 < uVar17));
          if ((puVar2[4] & 0x200) != 0) {
            uVar15 = fn_827D4EF8(puVar2[6],pbVar18,uVar13);
            puVar2[6] = uVar15;
          }
          uVar17 = uVar17 - uVar13;
          pbVar18 = pbVar18 + uVar13;
          if (bVar1 != 0) goto code_r0x827d33bc;
        }
        puVar2[0x10] = 0;
        *puVar2 = 7;
code_r0x827d2560:
        uVar5 = (uint)uVar22;
        if ((puVar2[4] & 0x1000) == 0) {
          if (puVar2[8] != 0) {
            *(undefined4 *)(puVar2[8] + 0x24) = 0;
          }
        }
        else {
          if (uVar17 == 0) {
code_r0x827d33bc:
            *param_1 = (int)pbVar18;
            param_1[1] = uVar17;
            param_1[4] = uVar20;
            param_1[3] = (int)puVar19;
            puVar2[0xe] = uVar5;
            puVar2[0xf] = uVar4;
            if (((puVar2[10] != 0) || (((int)*puVar2 < 0x18 && (uVar7 != param_1[4])))) &&
               (iVar6 = fn_827D1D80(param_1,uVar7), iVar6 != 0)) {
              *puVar2 = 0x1c;
              return 0xfffffffffffffffc;
            }
            iVar6 = uStack_a4 - param_1[1];
            iVar23 = uVar7 - param_1[4];
            param_1[2] = param_1[2] + iVar6;
            param_1[5] = iVar23 + param_1[5];
            puVar2[7] = iVar23 + puVar2[7];
            if ((puVar2[2] != 0) && (iVar23 != 0)) {
              if (puVar2[4] == 0) {
                uVar7 = fn_827D4370(puVar2[6],param_1[3] - iVar23,iVar23);
              }
              else {
                uVar7 = fn_827D4EF8();
              }
              puVar2[6] = uVar7;
              param_1[0xc] = uVar7;
            }
            param_1[0xb] = (-(uint)(puVar2[1] != 0) & 0x40) + (-(uint)(*puVar2 == 0xb) & 0x80) +
                           puVar2[0xf];
            if (((iVar6 != 0) || (iVar23 != 0)) && (iStack0000001c != 4)) {
              return (ulonglong)uStack_e4;
            }
            if (uStack_e4 != 0) {
              return (ulonglong)uStack_e4;
            }
            return 0xfffffffffffffffb;
          }
          uVar13 = 0;
          do {
            uVar15 = puVar2[8];
            bVar1 = pbVar18[uVar13];
            uVar13 = uVar13 + 1;
            if (((uVar15 != 0) && (*(int *)(uVar15 + 0x24) != 0)) &&
               (puVar2[0x10] < *(uint *)(uVar15 + 0x28))) {
              *(byte *)(*(int *)(uVar15 + 0x24) + puVar2[0x10]) = bVar1;
              puVar2[0x10] = puVar2[0x10] + 1;
            }
          } while ((bVar1 != 0) && (uVar13 < uVar17));
          if ((puVar2[4] & 0x200) != 0) {
            uVar15 = fn_827D4EF8(puVar2[6],pbVar18,uVar13);
            puVar2[6] = uVar15;
          }
          uVar17 = uVar17 - uVar13;
          pbVar18 = pbVar18 + uVar13;
          if (bVar1 != 0) goto code_r0x827d33bc;
        }
        *puVar2 = 8;
code_r0x827d2614:
        if ((puVar2[4] & 0x200) == 0) {
code_r0x827d2668:
          if (puVar2[8] != 0) {
            *(uint *)(puVar2[8] + 0x2c) = (int)puVar2[4] >> 9 & 1;
            *(undefined4 *)(puVar2[8] + 0x30) = 1;
          }
          uVar5 = fn_827D4EF8(0,0,0);
          puVar2[6] = uVar5;
          uVar13 = 0xb;
          param_1[0xc] = uVar5;
code_r0x827d2068:
          *puVar2 = uVar13;
        }
        else {
          for (; uVar5 = (uint)uVar22, uVar4 < 0x10; uVar4 = uVar4 + 8) {
            if (uVar17 == 0) goto code_r0x827d33bc;
            bVar1 = *pbVar18;
            uVar17 = uVar17 - 1;
            pbVar18 = pbVar18 + 1;
            uVar22 = ((uint)bVar1 << (uVar4 & 0x3f)) + uVar22;
          }
          pcVar16 = pcStack_d0;
          if ((uVar22 & 0xffffffff) == (ulonglong)*(ushort *)((int)puVar2 + 0x1a)) {
            uVar22 = 0;
            uVar4 = 0;
            goto code_r0x827d2668;
          }
code_r0x827d335c:
          param_1[6] = (int)pcVar16;
code_r0x827d3360:
          *puVar2 = 0x1b;
        }
code_r0x827d3364:
        uVar13 = *puVar2;
      } while (uVar13 < 0x1d);
    }
  }
  return 0xfffffffffffffffe;
}

