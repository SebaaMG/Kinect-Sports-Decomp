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
extern unsigned char bRam00000000;
extern unsigned char bRam00000001;
extern unsigned int uStack_b4;


void fn_82C9F760(int param_1,byte *param_2,int param_3,int param_4,byte *param_5,byte *param_6,
                  byte *param_7,byte *param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte bVar19;
  byte *pbVar18;
  ulonglong uVar20;
  byte *pbVar21;
  byte bVar22;
  byte bVar23;
  longlong lVar24;
  byte bVar26;
  byte *pbVar25;
  byte *pbVar27;
  byte *pbVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte *pbStack00000024;
  byte *pbStack0000002c;
  byte *pbStack0000003c;
  byte *pbStack00000044;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  byte *pbStack_dc;
  uint uStack_b4;
  
  uVar13 = *(uint *)(param_1 + 0x88);
  uVar15 = uVar13 + 1 >> 1;
  pbVar16 = param_5 + uVar15;
  uVar14 = (int)uVar13 >> 2;
  pbStack_dc = param_2;
  if (in_stack_00000064 != 0) {
    lVar24 = (longlong)(int)uVar14;
    in_stack_00000054 = 1;
    if (0 < lVar24) {
      do {
        bVar26 = param_8[9];
        bVar19 = param_8[8];
        bVar29 = param_8[3];
        bVar30 = param_8[0xd];
        bVar32 = param_8[0x12];
        bVar22 = param_8[0x13];
        bVar23 = param_8[0x15];
        bVar31 = param_8[0x14];
        bVar1 = param_8[0xf];
        bVar2 = param_8[2];
        bVar3 = param_8[0xe];
        bVar4 = param_8[0xc];
        bVar5 = param_8[4];
        *param_5 = *param_8 & 0xc0 |
                   (char)param_8[7] >> 6 & 3U |
                   (char)param_8[6] >> 4 & 0xcU | (char)param_8[1] >> 2 & 0x30U;
        bVar6 = param_8[0x16];
        bVar7 = param_8[0x17];
        bVar8 = param_8[10];
        *pbVar16 = bVar2 & 0xc0 |
                   (char)bVar29 >> 2 & 0x30U | (char)bVar19 >> 4 & 0xcU | (char)bVar26 >> 6 & 3U;
        *param_2 = (((bVar2 & 0xfc) << 2 | bVar29 & 0xf) & 0x3c) << 2 |
                   (byte)((int)(bVar26 & 0xc) >> 2) | bVar19 & 0xc;
        bVar26 = param_8[0x10];
        param_5[1] = bVar4 & 0xc0 |
                     (char)bVar22 >> 6 & 3U | (char)bVar32 >> 4 & 0xcU | (char)bVar30 >> 2 & 0x30U;
        bVar19 = param_8[0xb];
        bVar29 = param_8[0x11];
        param_5 = param_5 + 2;
        pbVar16[1] = bVar3 & 0xc0 |
                     (char)bVar1 >> 2 & 0x30U | (char)bVar31 >> 4 & 0xcU | (char)bVar23 >> 6 & 3U;
        bVar30 = param_8[5];
        param_2[1] = (((bVar3 & 0xfc) << 2 | bVar1 & 0xf) & 0x3c) << 2 |
                     (byte)((int)(bVar23 & 0xc) >> 2) | bVar31 & 0xc;
        *param_6 = bVar5 & 0xc0 |
                   (char)bVar6 >> 6 & 3U | (char)bVar26 >> 4 & 0xcU | (char)bVar8 >> 2 & 0x30U;
        pbVar16 = pbVar16 + 2;
        *param_7 = bVar30 & 0xc0 |
                   (char)bVar7 >> 6 & 3U | (char)bVar29 >> 4 & 0xcU | (char)bVar19 >> 2 & 0x30U;
        param_2 = param_2 + 2;
        param_6 = param_6 + 1;
        param_7 = param_7 + 1;
        param_8 = param_8 + 0x18;
        lVar24 = lVar24 + -1;
        pbStack_dc = param_2;
      } while (lVar24 != 0);
    }
    if ((uVar13 & 3) != 0) {
      bVar32 = *param_8 & 0xc0 | (char)param_8[1] >> 2 & 0x30U;
      bVar29 = (((param_8[2] & 0xfc) << 2 | param_8[3] & 0xf) & 0x3c) << 2;
      bVar30 = (char)param_8[3] >> 2 & 0x30U | param_8[2] & 0xc0;
      bVar26 = param_8[4] & 0xc0;
      bVar19 = param_8[5] & 0xc0;
      pbVar28 = param_8 + 6;
      if ((uVar13 & 2) == 2) {
        bVar32 = (char)*pbVar28 >> 4 & 0xcU | (char)param_8[7] >> 6 & 3U | bVar32;
        bVar30 = (char)param_8[9] >> 6 & 3U | (char)param_8[8] >> 4 & 0xcU | bVar30;
        bVar29 = (byte)((int)(param_8[9] & 0xc) >> 2) | param_8[8] & 0xc | bVar29;
        bVar26 = (char)param_8[10] >> 2 & 0x30U | bVar26;
        bVar19 = (char)param_8[0xb] >> 2 & 0x30U | bVar19;
        pbVar28 = param_8 + 0xc;
      }
      *pbStack_dc = bVar29;
      *param_5 = bVar32;
      *pbVar16 = bVar30;
      pbVar17 = pbVar16 + 1;
      pbVar27 = pbStack_dc + 1;
      param_8 = pbVar28;
      if ((uVar13 & 3) == 3) {
        bVar29 = pbVar28[1];
        bVar30 = pbVar28[3];
        bVar32 = pbVar28[2];
        bVar22 = pbVar28[4];
        bVar23 = *pbVar28;
        bVar31 = pbVar28[5];
        pbStack_dc[1] = (((bVar32 & 0xfc) << 2 | bVar30 & 0xf) & 0x3c) << 2;
        param_5[1] = bVar23 & 0xc0 | (char)bVar29 >> 2 & 0x30U;
        *pbVar17 = (char)bVar30 >> 2 & 0x30U | bVar32 & 0xc0;
        bVar26 = (char)bVar22 >> 4 & 0xcU | bVar26;
        bVar19 = (char)bVar31 >> 4 & 0xcU | bVar19;
        param_8 = pbVar28 + 6;
        pbVar17 = pbVar16 + 2;
        pbVar27 = pbStack_dc + 2;
      }
      pbStack_dc = pbVar27;
      *param_6 = bVar26;
      param_6 = param_6 + 1;
      *param_7 = bVar19;
      param_7 = param_7 + 1;
      pbVar16 = pbVar17;
    }
    param_5 = pbVar16;
    pbVar16 = param_5 + uVar15;
  }
  if (in_stack_00000054 < in_stack_0000005c) {
    uStack_b4 = in_stack_0000005c - in_stack_00000054;
    uVar20 = (ulonglong)(int)uVar14;
    pbVar28 = (byte *)(param_3 + -1);
    pbVar27 = (byte *)(param_4 + -1);
    param_6 = param_6 + -1;
    param_7 = param_7 + -1;
    param_8 = param_8 + -1;
    pbStack00000024 = pbVar28;
    pbStack0000002c = pbVar27;
    pbStack0000003c = param_6;
    pbStack00000044 = param_7;
    while( true ) {
      pbVar17 = pbStack_dc + uVar15;
      pbVar21 = param_5;
      if (0 < (int)uVar20) {
        do {
          bVar26 = param_8[8];
          bVar19 = param_8[7];
          bVar29 = param_8[2];
          bVar30 = param_8[10];
          bVar32 = param_8[9];
          bVar22 = param_8[4];
          bVar23 = param_8[0x13];
          bVar31 = param_8[0x14];
          bVar1 = param_8[3];
          bVar2 = param_8[0xe];
          bVar3 = param_8[1];
          bVar4 = param_8[0xd];
          bVar5 = param_8[0x16];
          bVar6 = param_8[0x15];
          bVar7 = param_8[0x10];
          bVar8 = param_8[0xf];
          *param_5 = bVar3 & 0xc0 |
                     (char)bVar29 >> 2 & 0x30U | (char)bVar19 >> 4 & 0xcU | (char)bVar26 >> 6 & 3U;
          bVar9 = param_8[5];
          bVar10 = param_8[0xb];
          bVar11 = param_8[0x18];
          bVar12 = param_8[0x11];
          bRam00000000 = (((bVar1 & 0xfc) << 2 | bVar22 & 0xf) & 0x3c) << 2 |
                         (byte)((int)(bVar30 & 0xc) >> 2) | bVar32 & 0xc;
          param_5[1] = bVar4 & 0xc0 |
                       (char)bVar2 >> 2 & 0x30U | (char)bVar23 >> 4 & 0xcU | (char)bVar31 >> 6 & 3U;
          *pbStack_dc = (((bVar3 & 0xfc) << 2 | bVar29 & 0xf) & 0x3c) << 2 |
                        (byte)((int)(bVar26 & 0xc) >> 2) | bVar19 & 0xc;
          bVar26 = param_8[0x17];
          bVar19 = param_8[6];
          pbVar21 = param_5 + 2;
          bVar29 = param_8[0xc];
          bVar30 = param_8[0x12];
          pbStack00000024[1] =
               (((bVar9 & 0xfc) << 2 | bVar10 & 0xf) & 0x3c) << 2 | (byte)((int)(bVar26 & 0xc) >> 2)
               | bVar12 & 0xc;
          pbStack0000002c[1] =
               (((bVar19 & 0xfc) << 2 | bVar29 & 0xf) & 0x3c) << 2 |
               (byte)((int)(bVar11 & 0xc) >> 2) | bVar30 & 0xc;
          pbStack_dc[1] =
               (((bVar4 & 0xfc) << 2 | bVar2 & 0xf) & 0x3c) << 2 | (byte)((int)(bVar31 & 0xc) >> 2)
               | bVar23 & 0xc;
          pbStack_dc = pbStack_dc + 2;
          bRam00000001 = (((bVar8 & 0xfc) << 2 | bVar7 & 0xf) & 0x3c) << 2 |
                         (byte)((int)(bVar5 & 0xc) >> 2) | bVar6 & 0xc;
          pbStack0000003c[1] =
               bVar9 & 0xc0 |
               (char)bVar10 >> 2 & 0x30U | (char)bVar12 >> 4 & 0xcU | (char)bVar26 >> 6 & 3U;
          param_6 = pbStack0000003c + 1;
          pbVar16 = (byte *)0x2;
          pbVar28 = pbStack00000024 + 1;
          pbVar17 = (byte *)0x2;
          pbVar27 = pbStack0000002c + 1;
          param_7 = pbStack00000044 + 1;
          param_8 = param_8 + 0x18;
          pbStack00000044[1] =
               bVar19 & 0xc0 |
               (char)bVar29 >> 2 & 0x30U | (char)bVar30 >> 4 & 0xcU | (char)bVar11 >> 6 & 3U;
          uVar20 = uVar20 - 1;
          pbStack00000024 = pbVar28;
          pbStack0000002c = pbVar27;
          pbStack0000003c = param_6;
          pbStack00000044 = param_7;
          param_5 = pbVar21;
        } while (uVar20 != 0);
      }
      param_5 = pbVar16;
      if ((uVar13 & 3) != 0) {
        bVar32 = (char)param_8[2] >> 2 & 0x30U | param_8[1] & 0xc0;
        bVar31 = (char)param_8[4] >> 2 & 0x30U | param_8[3] & 0xc0;
        bVar29 = (((param_8[1] & 0xfc) << 2 | param_8[2] & 0xf) & 0x3c) << 2;
        bVar30 = (((param_8[3] & 0xfc) << 2 | param_8[4] & 0xf) & 0x3c) << 2;
        bVar23 = param_8[5] & 0xc0;
        bVar22 = param_8[6] & 0xc0;
        bVar26 = (param_8[5] & 0xc) << 4;
        bVar19 = (param_8[6] & 0xc) << 4;
        pbVar25 = param_8 + 6;
        if ((uVar13 & 2) == 2) {
          bVar29 = (byte)((int)(param_8[8] & 0xc) >> 2) | param_8[7] & 0xc | bVar29;
          bVar31 = (char)param_8[10] >> 6 & 3U | (byte)((int)(uint)param_8[9] >> 4) & 0xfc | bVar31;
          bVar30 = (byte)((int)(param_8[10] & 0xc) >> 2) | param_8[9] & 0xc | bVar30;
          bVar26 = (param_8[0xb] & 0xc) << 2 | bVar26;
          bVar19 = (param_8[0xc] & 0xc) << 2 | bVar19;
          bVar32 = (char)param_8[8] >> 6 & 3U | (char)param_8[7] >> 4 & 0xcU | bVar32;
          bVar23 = (char)param_8[0xb] >> 2 & 0x30U | bVar23;
          bVar22 = (char)param_8[0xc] >> 2 & 0x30U | bVar22;
          pbVar25 = param_8 + 0xc;
          param_6 = pbStack0000003c;
          param_7 = pbStack00000044;
        }
        *pbVar21 = bVar32;
        *pbStack_dc = bVar29;
        *pbVar16 = bVar31;
        *pbVar17 = bVar30;
        param_5 = pbVar16 + 1;
        pbVar18 = pbVar17 + 1;
        if ((uVar13 & 3) == 3) {
          bVar29 = pbVar25[2];
          bVar30 = pbVar25[4];
          bVar32 = pbVar25[1];
          bVar31 = pbVar25[3];
          bVar1 = pbVar25[5];
          pbVar25 = pbVar25 + 6;
          bVar2 = *pbVar25;
          pbVar21[1] = (char)bVar29 >> 2 & 0x30U | bVar32 & 0xc0;
          pbStack_dc[1] = (((bVar32 & 0xfc) << 2 | bVar29 & 0xf) & 0x3c) << 2;
          *pbVar18 = (((bVar31 & 0xfc) << 2 | bVar30 & 0xf) & 0x3c) << 2;
          *param_5 = (char)bVar30 >> 2 & 0x30U | bVar31 & 0xc0;
          bVar23 = (char)bVar1 >> 4 & 0xcU | bVar23;
          bVar22 = (char)bVar2 >> 4 & 0xcU | bVar22;
          bVar26 = bVar1 & 0xc | bVar26;
          bVar19 = bVar2 & 0xc | bVar19;
          param_5 = pbVar16 + 2;
          pbVar18 = pbVar17 + 2;
        }
        pbVar28 = pbVar28 + 1;
        *pbVar28 = bVar26;
        pbVar27 = pbVar27 + 1;
        *pbVar27 = bVar19;
        param_6 = param_6 + 1;
        *param_6 = bVar23;
        param_7 = param_7 + 1;
        *param_7 = bVar22;
        pbStack00000024 = pbVar28;
        pbStack0000002c = pbVar27;
        pbStack0000003c = param_6;
        pbStack00000044 = param_7;
        pbVar17 = pbVar18;
        param_8 = pbVar25;
      }
      pbStack_dc = pbVar17;
      uVar20 = (ulonglong)uStack_b4;
      pbVar16 = param_5 + uVar15;
      uStack_b4 = (uint)(uVar20 - 1);
      if (uVar20 - 1 == 0) break;
      uVar20 = (ulonglong)uVar14;
    }
  }
  return;
}

