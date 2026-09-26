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
extern unsigned int uStack_c8;


void fn_82CA00E8(int param_1,byte *param_2,int param_3,int param_4,byte *param_5,byte *param_6,
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
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte bVar21;
  byte *pbVar20;
  byte bVar22;
  int iVar23;
  byte *pbVar25;
  ulonglong uVar24;
  ulonglong uVar26;
  byte *pbVar27;
  int iVar28;
  byte *pbVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte *pbVar36;
  byte *pbStack00000024;
  byte *pbStack0000002c;
  byte *pbStack0000003c;
  byte *pbStack00000044;
  uint in_stack_00000054;
  uint uStack_c8;
  
  iVar12 = (int)(in_stack_00000054 + 1) >> 1;
  uVar13 = (int)in_stack_00000054 >> 2;
  uVar26 = (ulonglong)(int)uVar13;
  pbVar36 = param_5 + iVar12;
  pbVar29 = param_8;
  if (0 < (longlong)uVar26) {
    iVar28 = *(int *)(param_1 + 0x88) * 6;
    do {
      bVar32 = pbVar29[1];
      bVar21 = pbVar29[3];
      bVar34 = *pbVar29;
      bVar30 = pbVar29[4];
      bVar31 = pbVar29[5];
      bVar33 = pbVar29[2];
      pbVar29 = pbVar29 + iVar28;
      bVar22 = pbVar29[2];
      bVar35 = *pbVar29;
      bVar1 = pbVar29[3];
      bVar2 = pbVar29[1];
      bVar3 = pbVar29[4];
      bVar4 = pbVar29[5];
      pbVar29 = pbVar29 + iVar28;
      bVar11 = *pbVar29;
      bVar5 = pbVar29[1];
      bVar6 = pbVar29[3];
      bVar7 = pbVar29[4];
      bVar8 = pbVar29[5];
      bVar9 = pbVar29[2];
      pbVar29 = pbVar29 + iVar28;
      *param_2 = (bVar2 & 3) << 2 | bVar1 & 3 |
                 (byte)(((ulonglong)bVar32 << 2 | (ulonglong)bVar21 & 0xfffffffffffffc03) << 4);
      bVar10 = pbVar29[2];
      *param_5 = (char)((byte)((int)(bVar22 & 0x30) >> 2) | bVar35 & 0x30) >> 2 |
                 (bVar34 & 0xf0) << 2 | bVar33 & 0x30;
      *pbVar36 = (char)((byte)((int)(bVar1 & 0x30) >> 2) | bVar2 & 0x30) >> 2 |
                 (byte)(((ulonglong)bVar32 & 0xf0) << 2) | bVar21 & 0x30;
      bVar32 = *pbVar29;
      bVar21 = pbVar29[4];
      bVar34 = pbVar29[1];
      bVar33 = pbVar29[3];
      bVar22 = pbVar29[5];
      param_2[1] = (bVar34 & 3) << 2 | bVar33 & 3 |
                   (byte)(((ulonglong)bVar5 << 2 | (ulonglong)bVar6 & 0xfffffffffffffc03) << 4);
      param_5[1] = (char)((byte)((int)(bVar10 & 0x30) >> 2) | bVar32 & 0x30) >> 2 |
                   (bVar11 & 0xf0) << 2 | bVar9 & 0x30;
      pbVar36[1] = (char)((byte)((int)(bVar33 & 0x30) >> 2) | bVar34 & 0x30) >> 2 |
                   (byte)(((ulonglong)bVar5 & 0xf0) << 2) | bVar6 & 0x30;
      *param_6 = (byte)((int)(bVar21 & 0x30) >> 4) |
                 (byte)((int)(bVar7 & 0x30) >> 2) | bVar3 & 0x30 | (bVar30 & 0x30) << 2;
      pbVar29 = pbVar29 + iVar28;
      *param_7 = (byte)((int)(bVar22 & 0x30) >> 4) |
                 (byte)((int)(bVar8 & 0x30) >> 2) | bVar4 & 0x30 | (bVar31 & 0x30) << 2;
      param_5 = param_5 + 2;
      pbVar36 = pbVar36 + 2;
      param_2 = param_2 + 2;
      param_6 = param_6 + 1;
      param_7 = param_7 + 1;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
    uVar26 = (ulonglong)uVar13;
  }
  if ((in_stack_00000054 & 3) != 0) {
    iVar28 = *(int *)(param_1 + 0x88) * 6;
    bVar31 = (byte)(((ulonglong)pbVar29[1] & 0xf0) << 2) | pbVar29[3] & 0x30;
    bVar32 = (*pbVar29 & 0xf0) << 2 | pbVar29[2] & 0x30;
    bVar30 = (byte)((((ulonglong)pbVar29[1] & 3) << 2 | (ulonglong)pbVar29[3] & 0xfffffffffffffc03)
                   << 4);
    bVar21 = (pbVar29[4] & 0x30) << 2;
    bVar34 = (pbVar29[5] & 0x30) << 2;
    pbVar29 = pbVar29 + iVar28;
    if ((in_stack_00000054 & 2) == 2) {
      bVar30 = (pbVar29[1] & 3) << 2 | pbVar29[3] & 3 | bVar30;
      bVar32 = (char)((byte)((int)(pbVar29[2] & 0x30) >> 2) | *pbVar29 & 0x30) >> 2 | bVar32;
      bVar31 = (char)((byte)((int)(pbVar29[3] & 0x30) >> 2) | pbVar29[1] & 0x30) >> 2 | bVar31;
      bVar21 = pbVar29[4] & 0x30 | bVar21;
      bVar34 = pbVar29[5] & 0x30 | bVar34;
      pbVar29 = pbVar29 + iVar28;
    }
    *param_5 = bVar32;
    *pbVar36 = bVar31;
    *param_2 = bVar30;
    pbVar27 = param_2 + 1;
    pbVar25 = pbVar36 + 1;
    if ((in_stack_00000054 & 3) == 3) {
      bVar32 = pbVar29[1];
      bVar30 = pbVar29[3];
      bVar31 = pbVar29[4];
      bVar33 = pbVar29[5];
      param_5[1] = (*pbVar29 & 0xf0) << 2 | pbVar29[2] & 0x30;
      pbVar36[1] = (byte)(((ulonglong)bVar32 & 0xf0) << 2) | bVar30 & 0x30;
      param_2[1] = (byte)(((ulonglong)bVar32 << 2 | (ulonglong)bVar30 & 0xfffffffffffffc03) << 4);
      bVar21 = (byte)((int)(bVar31 & 0x30) >> 2) | bVar21;
      bVar34 = (byte)((int)(bVar33 & 0x30) >> 2) | bVar34;
      pbVar27 = param_2 + 2;
      pbVar25 = pbVar36 + 2;
    }
    pbVar36 = pbVar25;
    param_2 = pbVar27;
    *param_6 = bVar21;
    param_6 = param_6 + 1;
    *param_7 = bVar34;
    param_7 = param_7 + 1;
  }
  iVar28 = *(int *)(param_1 + 0x88);
  if (1 < iVar28) {
    uStack_c8 = iVar28 - 1;
    param_6 = param_6 + -1;
    pbVar29 = (byte *)(param_3 + -1);
    pbVar27 = (byte *)(param_4 + -1);
    param_7 = param_7 + -1;
    pbStack00000024 = pbVar29;
    pbStack0000002c = pbVar27;
    pbStack0000003c = param_6;
    pbStack00000044 = param_7;
    do {
      param_8 = param_8 + 6;
      pbVar18 = param_2 + iVar12;
      pbVar20 = pbVar36 + iVar12;
      pbVar25 = param_8;
      if (0 < (int)uVar26) {
        iVar23 = iVar28 * 6;
        do {
          bVar32 = *pbVar25;
          bVar21 = pbVar25[1];
          bVar34 = pbVar25[5];
          bVar30 = pbVar25[2];
          bVar31 = pbVar25[3];
          bVar33 = pbVar25[4];
          pbVar25 = pbVar25 + iVar23;
          bVar22 = pbVar25[2];
          bVar35 = *pbVar25;
          bVar1 = pbVar25[3];
          bVar2 = pbVar25[1];
          bVar3 = pbVar25[4];
          bVar4 = pbVar25[5];
          pbVar25 = pbVar25 + iVar23;
          bVar8 = *pbVar25;
          bVar5 = pbVar25[2];
          bVar6 = pbVar25[1];
          *param_2 = (bVar35 & 3) << 2 | bVar22 & 3 |
                     (byte)(((ulonglong)bVar32 << 2 | (ulonglong)bVar30 & 0xfffffffffffffc03) << 4);
          bRam00000000 = (char)((byte)((int)(bVar22 & 0x30) >> 2) | bVar35 & 0x30) >> 2 |
                         (byte)(((ulonglong)bVar32 & 0xf0) << 2) | bVar30 & 0x30;
          *pbVar20 = (char)((byte)((int)(bVar1 & 0x30) >> 2) | bVar2 & 0x30) >> 2 |
                     (byte)(((ulonglong)bVar21 & 0xf0) << 2) | bVar31 & 0x30;
          *pbVar18 = (bVar2 & 3) << 2 | bVar1 & 3 |
                     (byte)(((ulonglong)bVar21 << 2 | (ulonglong)bVar31 & 0xfffffffffffffc03) << 4);
          bVar32 = pbVar25[5];
          bVar21 = pbVar25[3];
          bVar30 = pbVar25[4];
          pbVar25 = pbVar25 + iVar23;
          bVar31 = pbVar25[2];
          bVar22 = *pbVar25;
          bVar35 = pbVar25[3];
          bVar1 = pbVar25[1];
          bVar2 = pbVar25[4];
          bVar7 = pbVar25[5];
          bRam00000001 = (char)((byte)((int)(bVar31 & 0x30) >> 2) | bVar22 & 0x30) >> 2 |
                         (byte)(((ulonglong)bVar8 & 0xf0) << 2) | bVar5 & 0x30;
          pbVar20[1] = (char)((byte)((int)(bVar35 & 0x30) >> 2) | bVar1 & 0x30) >> 2 |
                       (byte)(((ulonglong)bVar6 & 0xf0) << 2) | bVar21 & 0x30;
          pbVar36 = (byte *)0x2;
          pbStack0000002c[1] = bVar7 & 3 | (bVar32 & 3) << 2 | (bVar4 & 3) << 4 | bVar34 << 6;
          pbStack00000024[1] = bVar2 & 3 | (bVar30 & 3) << 2 | (bVar3 & 3) << 4 | bVar33 << 6;
          pbVar29 = pbStack00000024 + 1;
          pbVar27 = pbStack0000002c + 1;
          param_2[1] = (bVar22 & 3) << 2 | bVar31 & 3 |
                       (byte)(((ulonglong)bVar8 << 2 | (ulonglong)bVar5 & 0xfffffffffffffc03) << 4);
          pbVar18[1] = (bVar1 & 3) << 2 | bVar35 & 3 |
                       (byte)(((ulonglong)bVar6 << 2 | (ulonglong)bVar21 & 0xfffffffffffffc03) << 4)
          ;
          param_6 = pbStack0000003c + 1;
          pbVar25 = pbVar25 + iVar23;
          pbVar20 = pbVar20 + 2;
          param_2 = param_2 + 2;
          pbStack0000003c[1] =
               (byte)((int)(bVar2 & 0x30) >> 4) |
               (byte)((int)(bVar30 & 0x30) >> 2) | bVar3 & 0x30 | (bVar33 & 0x30) << 2;
          pbVar18 = pbVar18 + 2;
          pbStack00000044[1] =
               (byte)((int)(bVar7 & 0x30) >> 4) |
               (byte)((int)(bVar32 & 0x30) >> 2) | bVar4 & 0x30 | (bVar34 & 0x30) << 2;
          param_7 = pbStack00000044 + 1;
          uVar26 = uVar26 - 1;
          pbStack00000024 = pbVar29;
          pbStack0000002c = pbVar27;
          pbStack0000003c = param_6;
          pbStack00000044 = param_7;
        } while (uVar26 != 0);
        uVar26 = (ulonglong)uVar13;
      }
      if ((in_stack_00000054 & 3) != 0) {
        bVar22 = (byte)(((ulonglong)*pbVar25 & 0xf0) << 2) | pbVar25[2] & 0x30;
        bVar31 = (byte)((((ulonglong)*pbVar25 & 3) << 2 | (ulonglong)pbVar25[2] & 0xfffffffffffffc03
                        ) << 4);
        bVar33 = (byte)((((ulonglong)pbVar25[1] & 3) << 2 |
                        (ulonglong)pbVar25[3] & 0xfffffffffffffc03) << 4);
        bVar35 = (byte)(((ulonglong)pbVar25[1] & 0xf0) << 2) | pbVar25[3] & 0x30;
        bVar32 = (pbVar25[4] & 0x30) << 2;
        bVar21 = (pbVar25[5] & 0x30) << 2;
        bVar34 = pbVar25[4] << 6;
        bVar30 = pbVar25[5] << 6;
        pbVar25 = pbVar25 + iVar28 * 6;
        if ((in_stack_00000054 & 2) == 2) {
          pbVar14 = pbVar25 + 3;
          bVar1 = *pbVar25;
          pbVar19 = pbVar25 + 2;
          pbVar15 = pbVar25 + 1;
          pbVar16 = pbVar25 + 4;
          pbVar17 = pbVar25 + 5;
          pbVar25 = pbVar25 + iVar28 * 6;
          uVar26 = (ulonglong)uVar13;
          bVar31 = (bVar1 & 3) << 2 | *pbVar19 & 3 | bVar31;
          bVar33 = (*pbVar15 & 3) << 2 | *pbVar14 & 3 | bVar33;
          bVar34 = (*pbVar16 & 3) << 4 | bVar34;
          bVar30 = (*pbVar17 & 3) << 4 | bVar30;
          bVar22 = (char)((byte)((int)(*pbVar19 & 0x30) >> 2) | bVar1 & 0x30) >> 2 | bVar22;
          bVar35 = (char)((byte)((int)(uint)(*pbVar14 & 0x30) >> 2) | *pbVar15 & 0x30) >> 2 | bVar35
          ;
          bVar32 = *pbVar16 & 0x30 | bVar32;
          bVar21 = *pbVar17 & 0x30 | bVar21;
          param_7 = pbStack00000044;
        }
        *pbVar36 = bVar22;
        *param_2 = bVar31;
        *pbVar20 = bVar35;
        *pbVar18 = bVar33;
        pbVar19 = pbVar18 + 1;
        pbVar14 = pbVar20 + 1;
        if ((in_stack_00000054 & 3) == 3) {
          bVar31 = pbVar25[2];
          bVar33 = *pbVar25;
          bVar22 = pbVar25[3];
          bVar35 = pbVar25[1];
          bVar1 = pbVar25[4];
          bVar2 = pbVar25[5];
          uVar26 = (ulonglong)uVar13;
          param_2[1] = (byte)(((ulonglong)bVar33 << 2 | (ulonglong)bVar31 & 0xfffffffffffffc03) << 4
                             );
          pbVar36[1] = (byte)(((ulonglong)bVar33 & 0xf0) << 2) | bVar31 & 0x30;
          *pbVar19 = (byte)(((ulonglong)bVar35 << 2 | (ulonglong)bVar22 & 0xfffffffffffffc03) << 4);
          bVar34 = (bVar1 & 3) << 2 | bVar34;
          pbVar20[1] = (byte)(((ulonglong)bVar35 & 0xf0) << 2) | bVar22 & 0x30;
          bVar30 = (bVar2 & 3) << 2 | bVar30;
          bVar32 = (byte)((int)(bVar1 & 0x30) >> 2) | bVar32;
          bVar21 = (byte)((int)(bVar2 & 0x30) >> 2) | bVar21;
          pbVar19 = pbVar18 + 2;
          pbVar14 = pbVar20 + 2;
        }
        pbVar20 = pbVar14;
        pbVar29 = pbVar29 + 1;
        *pbVar29 = bVar34;
        pbVar27 = pbVar27 + 1;
        *pbVar27 = bVar30;
        param_6 = param_6 + 1;
        *param_6 = bVar32;
        param_7 = param_7 + 1;
        *param_7 = bVar21;
        pbStack00000024 = pbVar29;
        pbStack0000002c = pbVar27;
        pbStack0000003c = param_6;
        pbStack00000044 = param_7;
        pbVar18 = pbVar19;
      }
      param_2 = pbVar18;
      uVar24 = (ulonglong)uStack_c8;
      uStack_c8 = (uint)(uVar24 - 1);
      pbVar36 = pbVar20;
    } while (uVar24 - 1 != 0);
  }
  return;
}

