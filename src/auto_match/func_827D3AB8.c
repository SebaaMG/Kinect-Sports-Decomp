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
extern unsigned int uStack_90;


void fn_827D3AB8(int *param_1,longlong param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 *puVar18;
  undefined1 uVar20;
  char *pcVar19;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  byte *pbVar26;
  longlong lVar27;
  ulonglong uVar28;
  byte *pbVar29;
  undefined4 uStack_90;
  
  puVar2 = (undefined4 *)param_1[7];
  pbVar29 = (byte *)(*param_1 + -1);
  uVar21 = (ulonglong)(uint)param_1[3] - 1;
  uVar14 = puVar2[0x15];
  uVar3 = puVar2[0x16];
  uVar4 = puVar2[10];
  uVar5 = puVar2[0xb];
  uVar28 = (ulonglong)(uint)puVar2[0xc];
  uVar6 = puVar2[0xd];
  pbVar26 = pbVar29 + param_1[1] + -5;
  uVar22 = (ulonglong)(uint)puVar2[0xe];
  lVar27 = ((ulonglong)(uint)param_1[4] - param_2) + uVar21;
  uVar24 = puVar2[0xf];
  uVar25 = ((uint)param_1[4] + uVar21) - 0x101;
  iVar7 = puVar2[0x13];
  iVar8 = puVar2[0x14];
LAB_827d3b30:
  if (uVar24 < 0xf) {
    pbVar10 = pbVar29 + 1;
    pbVar29 = pbVar29 + 2;
    uVar22 = (ulonglong)((uint)*pbVar29 << (uVar24 + 8 & 0x3f)) +
             ((uint)*pbVar10 << (uVar24 & 0x3f)) + uVar22;
    uVar24 = uVar24 + 0x10;
  }
  uVar15 = (ulonglong)(uint)(1 << (uVar14 & 0x3f)) - 1 & uVar22;
  while( true ) {
    uVar9 = *(uint *)((int)((uVar15 & 0xffffffff) << 2) + iVar7);
    uStack_90 = ((((U64)(uStack_90)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)(uVar9 >> 0x18))) & ((U64)0xFF)) << 0));
    uStack_90 = ((((U64)(uStack_90)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)(uVar9 >> 0x10))) & ((U64)0xFF)) << 8));
    uVar24 = uVar24 - (((U64)(uStack_90) >> 8) & 0xFF);
    uVar23 = (uint)uVar22 >> ((((U64)(uStack_90) >> 8) & 0xFF) & 0x3f);
    uVar22 = (ulonglong)uVar23;
    uStack_90 = ((((U64)(uStack_90)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((ushort)uVar9)) & ((U64)0xFFFF)) << 16));
    if ((((U64)(uStack_90) >> 0) & 0xFF) == 0) break;
    if ((uVar9 & 0x10000000) != 0) {
      uVar15 = (ulonglong)(((U64)(uStack_90) >> 16) & 0xFFFF);
      uVar23 = (((U64)(uStack_90) >> 0) & 0xFF) & 0xf;
      if ((uVar9 & 0xf000000) != 0) {
        if (uVar24 < uVar23) {
          pbVar29 = pbVar29 + 1;
          uVar22 = ((uint)*pbVar29 << (uVar24 & 0x3f)) + uVar22;
          uVar24 = uVar24 + 8;
        }
        uVar24 = uVar24 - uVar23;
        uVar13 = (ulonglong)(uint)(1 << uVar23) - 1 & uVar22;
        uVar22 = (ulonglong)((uint)uVar22 >> uVar23);
        uVar15 = uVar13 + uVar15;
      }
      if (uVar24 < 0xf) {
        pbVar10 = pbVar29 + 1;
        pbVar29 = pbVar29 + 2;
        uVar22 = (ulonglong)((uint)*pbVar29 << (uVar24 + 8 & 0x3f)) +
                 ((uint)*pbVar10 << (uVar24 & 0x3f)) + uVar22;
        uVar24 = uVar24 + 0x10;
      }
      uVar9 = *(uint *)((int)(((ulonglong)(uint)(1 << (uVar3 & 0x3f)) - 1 & uVar22 & 0xffffffff) <<
                             2) + iVar8);
      uStack_90 = ((((U64)(uStack_90)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)(uVar9 >> 0x10))) & ((U64)0xFF)) << 8));
      bVar1 = (((U64)(uStack_90) >> 8) & 0xFF);
      uStack_90 = uVar9;
      goto LAB_827d3c5c;
    }
    if ((uVar9 & 0x40000000) != 0) {
      if ((uVar9 & 0x20000000) == 0) {
        pcVar19 = "invalid literal/length code";
        goto LAB_827d3e5c;
      }
      *puVar2 = 0xb;
      goto LAB_827d3e68;
    }
    uVar15 = ((ulonglong)(uint)(1 << ((((U64)(uStack_90) >> 0) & 0xFF) & 0x3f)) - 1 & uVar22) +
             (ulonglong)(((U64)(uStack_90) >> 16) & 0xFFFF);
  }
  uVar20 = (undefined1)uVar9;
  goto LAB_827d3e10;
LAB_827d3c5c:
  uVar24 = uVar24 - bVar1;
  uVar23 = (uint)uVar22 >> (bVar1 & 0x3f);
  uVar22 = (ulonglong)uVar23;
  if ((uStack_90 & 0x10000000) != 0) goto code_r0x827d3c70;
  if ((uStack_90 & 0x40000000) != 0) {
    pcVar19 = "invalid distance code";
    goto LAB_827d3e5c;
  }
  uVar9 = *(uint *)((int)((((ulonglong)(uint)(1 << ((((U64)(uStack_90) >> 0) & 0xFF) & 0x3f)) - 1 & uVar22) +
                           (ulonglong)(((U64)(uStack_90) >> 16) & 0xFFFF) & 0xffffffff) << 2) + iVar8);
  uStack_90 = ((((U64)(uStack_90)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)(uVar9 >> 0x10))) & ((U64)0xFF)) << 8));
  bVar1 = (((U64)(uStack_90) >> 8) & 0xFF);
  uStack_90 = uVar9;
  goto LAB_827d3c5c;
code_r0x827d3c70:
  uVar9 = (((U64)(uStack_90) >> 0) & 0xFF) & 0xf;
  pbVar10 = pbVar29;
  uVar23 = uVar24;
  if (uVar24 < uVar9) {
    uVar23 = uVar24 + 8;
    uVar22 = ((uint)pbVar29[1] << (uVar24 & 0x3f)) + uVar22;
    pbVar10 = pbVar29 + 1;
    if (uVar23 < uVar9) {
      uVar22 = ((uint)pbVar29[2] << (uVar23 & 0x3f)) + uVar22;
      uVar23 = uVar24 + 0x10;
      pbVar10 = pbVar29 + 2;
    }
  }
  pbVar29 = pbVar10;
  uVar24 = uVar23 - uVar9;
  uVar13 = (ulonglong)(uint)(1 << uVar9) - 1 & uVar22;
  uVar23 = (uint)uVar22 >> uVar9;
  uVar22 = (ulonglong)uVar23;
  uVar13 = uVar13 + (((U64)(uStack_90) >> 16) & 0xFFFF);
  uVar16 = uVar21 - lVar27;
  if ((uVar13 & 0xffffffff) <= (uVar16 & 0xffffffff)) {
    lVar12 = uVar21 - uVar13;
    do {
      uVar15 = uVar15 - 3;
      *(undefined1 *)((int)uVar21 + 1) = *(undefined1 *)((int)lVar12 + 1);
      *(undefined1 *)((int)uVar21 + 2) = *(undefined1 *)((int)lVar12 + 2);
      lVar12 = lVar12 + 3;
      puVar18 = (undefined1 *)lVar12;
      uVar21 = uVar21 + 3;
      *(undefined1 *)uVar21 = *puVar18;
    } while (2 < (uVar15 & 0xffffffff));
    goto LAB_827d3df4;
  }
  uVar16 = uVar13 - uVar16;
  if ((ulonglong)uVar5 < (uVar16 & 0xffffffff)) {
    pcVar19 = "invalid distance too far back";
LAB_827d3e5c:
    param_1[6] = (int)pcVar19;
    *puVar2 = 0x1b;
LAB_827d3e68:
    uVar14 = uVar24 - (uVar24 & 0xfffffff8);
    iVar7 = (int)pbVar29 - (uVar24 >> 3);
    *param_1 = iVar7 + 1;
    param_1[1] = (int)(pbVar26 + (5 - iVar7));
    param_1[3] = (int)uVar21 + 1;
    param_1[4] = ((int)uVar25 - (int)uVar21) + 0x101;
    puVar2[0xe] = (1 << (uVar14 & 0x3f)) - 1U & uVar23;
    puVar2[0xf] = uVar14;
    return;
  }
  lVar12 = (ulonglong)uVar6 - 1;
  if (uVar28 == 0) {
    lVar17 = (lVar12 - uVar16) + (ulonglong)uVar4;
    if ((uVar16 & 0xffffffff) < (uVar15 & 0xffffffff)) {
      uVar15 = uVar15 - uVar16;
      do {
        lVar17 = lVar17 + 1;
        uVar16 = uVar16 - 1;
        uVar21 = uVar21 + 1;
        *(undefined1 *)uVar21 = *(undefined1 *)lVar17;
      } while (uVar16 != 0);
LAB_827d3d88:
      lVar17 = uVar21 - uVar13;
    }
  }
  else {
    lVar17 = (lVar12 - uVar16) + uVar28;
    if (uVar28 < (uVar16 & 0xffffffff)) {
      uVar16 = uVar16 - uVar28;
      lVar17 = lVar17 + (ulonglong)uVar4;
      if ((uVar16 & 0xffffffff) < (uVar15 & 0xffffffff)) {
        uVar15 = uVar15 - uVar16;
        iVar11 = (int)uVar21;
        do {
          uVar21 = uVar21 + 1;
          uVar16 = uVar16 - 1;
          *(undefined1 *)uVar21 = ((undefined1 *)uVar21)[(int)lVar17 - iVar11];
        } while (uVar16 != 0);
        lVar17 = lVar12;
        if (uVar28 < (uVar15 & 0xffffffff)) {
          uVar15 = uVar15 - uVar28;
          uVar16 = uVar28;
          do {
            lVar12 = lVar12 + 1;
            uVar16 = uVar16 - 1;
            uVar21 = uVar21 + 1;
            *(undefined1 *)uVar21 = *(undefined1 *)lVar12;
          } while (uVar16 != 0);
          goto LAB_827d3d88;
        }
      }
    }
    else if ((uVar16 & 0xffffffff) < (uVar15 & 0xffffffff)) {
      uVar15 = uVar15 - uVar16;
      do {
        lVar17 = lVar17 + 1;
        uVar16 = uVar16 - 1;
        uVar21 = uVar21 + 1;
        *(undefined1 *)uVar21 = *(undefined1 *)lVar17;
      } while (uVar16 != 0);
      goto LAB_827d3d88;
    }
  }
  puVar18 = (undefined1 *)lVar17;
  if (2 < (uVar15 & 0xffffffff)) {
    lVar12 = (uVar15 - 3 & 0xffffffff) / 3 + 1;
    do {
      uVar15 = uVar15 - 3;
      *(undefined1 *)((int)uVar21 + 1) = *(undefined1 *)((int)lVar17 + 1);
      *(undefined1 *)((int)uVar21 + 2) = *(undefined1 *)((int)lVar17 + 2);
      lVar17 = lVar17 + 3;
      puVar18 = (undefined1 *)lVar17;
      uVar21 = uVar21 + 3;
      *(undefined1 *)uVar21 = *puVar18;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
LAB_827d3df4:
  if ((uVar15 & 0xffffffff) != 0) {
    uVar21 = uVar21 + 1;
    *(undefined1 *)uVar21 = puVar18[1];
    if (1 < (uVar15 & 0xffffffff)) {
      uVar20 = puVar18[2];
LAB_827d3e10:
      uVar21 = uVar21 + 1;
      *(undefined1 *)uVar21 = uVar20;
    }
  }
  uVar23 = (uint)uVar22;
  if ((pbVar26 <= pbVar29) || ((uVar25 & 0xffffffff) <= (uVar21 & 0xffffffff))) goto LAB_827d3e68;
  goto LAB_827d3b30;
}

