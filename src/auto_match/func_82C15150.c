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
extern int fn_82C038C8();
extern int fn_82C130C0();
extern int fn_82C13690();
extern unsigned int iStack_a0;
extern unsigned int lbl_820ED098;
extern unsigned int lbl_820ED0A8;
extern unsigned int lbl_820ED0C8;
extern unsigned int lbl_820ED0D8;
extern unsigned int lbl_82154B18;
extern unsigned int lbl_82154B28;


undefined8 fn_82C15150(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar4;
  byte *pbVar8;
  longlong lVar9;
  byte *pbVar11;
  longlong lVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  byte *apbStack_b0 [4];
  int iStack_a0;
  short sStack_9c;
  short sStack_9a;
  byte bStack_98;
  byte bStack_97;
  byte bStack_96;
  byte bStack_95;
  byte bStack_94;
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  byte abStack_90 [144];
  
  apbStack_b0[0] = (byte *)0x0;
  if (param_1 == (longlong *)0x0) {
    return 2;
  }
  uVar13 = param_2 - 0x18;
  uVar12 = param_4 + 0x18;
  if ((uVar13 & 0xffffffff) < 0x32) {
    return 3;
  }
  uVar3 = uVar12 & 0xffffffff;
  iVar5 = fn_82C038C8(param_1,uVar3 + *param_1 + 0x30,2,apbStack_b0);
  if (iVar5 != 2) {
    return 3;
  }
  if (apbStack_b0[0] == (byte *)0x0) {
    return 3;
  }
  bVar1 = apbStack_b0[0][1];
  bVar2 = *apbStack_b0[0];
  if ((uVar13 & 0xffffffff) < 0x40) {
    return 3;
  }
  apbStack_b0[0] = apbStack_b0[0] + 2;
  iVar5 = fn_82C038C8(param_1,uVar3 + *param_1 + 0x3c,4,apbStack_b0);
  if (iVar5 != 4) {
    return 3;
  }
  if (apbStack_b0[0] == (byte *)0x0) {
    return 3;
  }
  uVar14 = 0x40;
  pbVar8 = apbStack_b0[0] + 4;
  iVar5 = (uint)apbStack_b0[0][1] * 0x100 + (uint)*apbStack_b0[0];
  uVar6 = (uint)apbStack_b0[0][3] * 0x100 + (uint)apbStack_b0[0][2];
  apbStack_b0[0] = pbVar8;
  if ((iVar5 != 0) && (iVar15 = 0, iVar5 != 0)) {
    do {
      if ((uVar13 & 0xffffffff) < (uVar14 + 4 & 0xffffffff)) {
        return 3;
      }
      iVar7 = fn_82C038C8(param_1,(uVar14 + 2 & 0xffffffff) + uVar3 + *param_1,2,apbStack_b0);
      if (iVar7 != 2) {
        return 3;
      }
      if (apbStack_b0[0] == (byte *)0x0) {
        return 3;
      }
      pbVar8 = apbStack_b0[0] + 2;
      iVar15 = iVar15 + 1;
      uVar14 = (ulonglong)apbStack_b0[0][1] * 0x100 + (ulonglong)*apbStack_b0[0] + uVar14 + 2 + 2;
      apbStack_b0[0] = pbVar8;
    } while (iVar15 < iVar5);
  }
  if (uVar6 != 0) {
    if (*(ushort *)(param_1 + 0x1e) == 4) {
      return 1;
    }
    if (4 < uVar6) {
      return 1;
    }
    iVar5 = 0;
    *(ushort *)((int)param_1 + (uint)*(ushort *)(param_1 + 0x1e) * 0x24 + 0xf4) =
         (ushort)bVar1 * 0x100 + (ushort)bVar2;
    if (uVar6 != 0) {
      iVar15 = 0;
      do {
        if ((uVar13 & 0xffffffff) < (uVar14 + 0x16 & 0xffffffff)) {
          return 3;
        }
        iVar7 = fn_82C038C8(param_1,(uVar14 & 0xffffffff) + uVar3 + *param_1,0x16,apbStack_b0);
        if (iVar7 != 0x16) {
          return 3;
        }
        if (apbStack_b0[0] == (byte *)0x0) {
          return 3;
        }
        pbVar11 = (byte *)&iStack_a0;
        iStack_a0 = (((uint)apbStack_b0[0][3] * 0x100 + (uint)apbStack_b0[0][2]) * 0x100 +
                    (uint)apbStack_b0[0][1]) * 0x100 + (uint)*apbStack_b0[0];
        sStack_9c = (ushort)apbStack_b0[0][5] * 0x100 + (ushort)apbStack_b0[0][4];
        bStack_98 = apbStack_b0[0][8];
        sStack_9a = (ushort)apbStack_b0[0][7] * 0x100 + (ushort)apbStack_b0[0][6];
        bStack_97 = apbStack_b0[0][9];
        bStack_96 = apbStack_b0[0][10];
        bStack_95 = apbStack_b0[0][0xb];
        bStack_94 = apbStack_b0[0][0xc];
        bStack_93 = apbStack_b0[0][0xd];
        bStack_92 = apbStack_b0[0][0xe];
        bStack_91 = apbStack_b0[0][0xf];
        pbVar8 = &lbl_820ED0C8;
        do {
          bVar1 = *pbVar8;
          bVar2 = *pbVar11;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar8 = pbVar8 + 1;
          pbVar11 = pbVar11 + 1;
        } while (pbVar8 != &lbl_820ED0D8);
        iVar5 = iVar5 + 1;
        *(uint *)((*(ushort *)(param_1 + 0x1e) + 7) * 0x24 + iVar15 + (int)param_1) =
             (uint)LZCOUNT((int)((ulonglong)bVar1 - (ulonglong)bVar2)) >> 5;
        iVar7 = (uint)*(ushort *)(param_1 + 0x1e) * 0x24 + iVar15;
        iVar15 = iVar15 + 8;
        *(ushort *)((int)param_1 + iVar7 + 0xf8) =
             (ushort)apbStack_b0[0][0x11] * 0x100 + (ushort)apbStack_b0[0][0x10];
        *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + 1;
        pbVar8 = apbStack_b0[0] + 0x16;
        uVar14 = (((ulonglong)apbStack_b0[0][0x15] * 0x100 + (ulonglong)apbStack_b0[0][0x14]) *
                  0x100 + (ulonglong)apbStack_b0[0][0x13]) * 0x100 + (ulonglong)apbStack_b0[0][0x12]
                 + uVar14 + 0x16;
        apbStack_b0[0] = pbVar8;
      } while (iVar5 < (int)uVar6);
    }
  }
  if ((uVar14 + 0x18 & 0xffffffff) < (uVar13 & 0xffffffff)) {
    uVar4 = fn_82C130C0(param_1,abStack_90,&iStack_a0,uVar14 + uVar12);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    pbVar8 = abStack_90;
    pbVar11 = &lbl_82154B18;
    do {
      bVar1 = *pbVar11;
      bVar2 = *pbVar8;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar11 = pbVar11 + 1;
      pbVar8 = pbVar8 + 1;
    } while (pbVar11 != &lbl_82154B28);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar8 = abStack_90;
      pbVar11 = &lbl_820ED098;
      do {
        bVar1 = *pbVar11;
        bVar2 = *pbVar8;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar8 = pbVar8 + 1;
      } while (pbVar11 != &lbl_820ED0A8);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        return 0;
      }
    }
    lVar9 = *param_1;
    lVar10 = (uVar14 + 0x18 + uVar12 & 0xffffffff) + lVar9;
    *param_1 = lVar10;
    if ((ulonglong)param_1[5] < (ulonglong)(iStack_a0 - 0x18) + lVar10) {
      return 1;
    }
    uVar4 = fn_82C13690(param_1,iStack_a0,param_3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *param_1 = lVar9;
  }
  return 0;
}

