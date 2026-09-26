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
extern unsigned int *auStack_138;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82683F88();
extern int fn_82687270();
extern int fn_8268C210();
extern int fn_8268CD40();
extern int fn_8268D280();
extern int fn_8269D7D8();
extern int fn_826C6368();
extern int fn_826D6630();
extern int fn_827249B8();
extern int fn_82755510();
extern int fn_827A84D0();
extern int fn_827A9B80();
extern int fn_827A9C58();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005718;
extern unsigned int lbl_82005730;
extern unsigned int lbl_8200DBF8;
extern unsigned int lbl_820143E0;
extern unsigned int lbl_820143E4;
extern unsigned int lbl_820143F0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_100;
extern unsigned int uStack_130;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_82756540(undefined8 param_1,longlong param_2,int param_3)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  undefined4 *puVar8;
  longlong lVar7;
  uint *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ushort *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  uint uStack_150;
  uint uStack_14c;
  undefined4 uStack_144;
  uint uStack_140;
  uint auStack_138 [2];
  undefined8 uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
  puVar8 = (undefined4 *)fn_82F6A540();
  fn_8269D7D8();
  *puVar8 = &lbl_820143F0;
  puVar8[3] = &lbl_820143E4;
  fn_827A9B80(puVar8 + 0x1b);
  puVar8[0x4f] = 1;
  puVar8[0x4e] = &lbl_8200DBF8;
  *(undefined1 *)((int)puVar8 + 0x143) = 0x80;
  *(undefined1 *)(puVar8 + 0x50) = 0;
  *(undefined1 *)((int)puVar8 + 0x141) = 0;
  *(undefined1 *)((int)puVar8 + 0x142) = 0x10;
  *(undefined1 *)(puVar8 + 0x51) = 0x40;
  *(undefined1 *)((int)puVar8 + 0x145) = 0x40;
  *(undefined1 *)((int)puVar8 + 0x146) = 0x10;
  *(undefined1 *)((int)puVar8 + 0x147) = 0xff;
  *(undefined2 *)(puVar8 + 0x52) = 0x1c2;
  *(undefined2 *)((int)puVar8 + 0x14a) = 0x50;
  *(undefined2 *)(puVar8 + 0x53) = 0x39;
  *(undefined2 *)((int)puVar8 + 0x14e) = 0x39;
  puVar8[0x54] = 0;
  puVar8[0x55] = 0;
  *(undefined1 *)(puVar8 + 0x56) = 0;
  iVar5 = (int)param_2;
  uStack_f8 = *(undefined4 *)(iVar5 + 0x28);
  uStack_f4 = *(undefined4 *)(iVar5 + 0x2c);
  uStack_f0 = *(undefined4 *)(iVar5 + 0x30);
  uStack_ec = *(undefined4 *)(iVar5 + 0x34);
  uStack_100 = *(undefined4 *)(iVar5 + 0x20);
  uStack_fc = *(undefined4 *)(iVar5 + 0x24);
  uStack_e0 = uStack_100;
  uStack_dc = uStack_fc;
  uStack_d8 = uStack_f8;
  uStack_d4 = uStack_f4;
  uStack_d0 = uStack_f0;
  uStack_cc = uStack_ec;
  fn_8268CD40(&uStack_100,&uStack_e0);
  dVar29 = (double)lbl_821AAD20;
  fStack_110 = lbl_821AAD20;
  fStack_10c = lbl_821AAD20;
  fStack_108 = lbl_821AAD20;
  fStack_104 = lbl_821AAD20;
  fn_8268D280(&uStack_100,&fStack_110,param_2 + 0x10);
  uStack_150 = 0;
  if (dVar29 <= (double)fStack_110) {
    fStack_110 = (float)dVar29;
  }
  if (dVar29 <= (double)fStack_10c) {
    fStack_10c = (float)dVar29;
  }
  if ((double)fStack_108 <= dVar29) {
    fStack_108 = (float)dVar29;
  }
  if ((double)fStack_104 <= dVar29) {
    fStack_104 = (float)dVar29;
  }
  uStack_140 = *(uint *)(iVar5 + 0x3c);
  uStack_14c = 0;
  if (uStack_140 != 0) {
    dVar25 = (double)lbl_82005718;
    dVar27 = (double)lbl_820143E0;
    dVar26 = (double)lbl_82002AE0;
    dVar28 = lbl_82005730;
    do {
      piVar4 = *(int **)(uStack_14c * 4 + *(int *)(iVar5 + 0x38));
      fn_827249B8(auStack_138,(ulonglong)*(uint *)(param_3 + 0x1c) + 0x18,piVar4 + 3);
      uVar13 = auStack_138[0];
      if (auStack_138[0] == 0) {
        lVar7 = (**(code **)(*(int *)(param_3 + 0xc) + 0xc))(param_3 + 0xc,4);
        if (lVar7 != 0) {
          fn_8267C4F0(lVar7);
          fn_82683F88(lVar7 + 0xc,0xffffffff82014360,*(undefined2 *)(piVar4 + 9));
        }
        if (auStack_138[0] != 0) {
          fn_82687270();
        }
        goto LAB_82756d2c;
      }
      if ((*(byte *)(iVar5 + 0x44) & 2) == 0) {
        for (piVar10 = *(int **)(*(int *)(*(int *)(*(int *)(param_3 + 0x1c) + 0xc) + 0x20) + 0x90);
            sync(1), piVar10 != (int *)0x0; piVar10 = (int *)piVar10[6]) {
          uVar17 = 0;
          if (piVar10[1] != 0) {
            iVar15 = 0;
            do {
              if ((*(int *)(iVar15 + *piVar10 + 8) == piVar4[4]) &&
                 (lVar7 = (**(code **)(*(int *)(param_3 + 0xc) + 0xc))(param_3 + 0xc,4), lVar7 != 0)
                 ) {
                fn_8267C4F0(lVar7);
                fn_826D6630(lVar7 + 0xc,
                                  "Warning: static text uses imported font! FontId = %d, import name = %s\n"
                                  ,*(undefined2 *)(piVar4 + 9),
                                  ((ulonglong)*(uint *)(iVar15 + *piVar10) & 0xfffffffc) + 8);
              }
              uVar17 = uVar17 + 1;
              iVar15 = iVar15 + 0xc;
            } while (uVar17 < (uint)piVar10[1]);
          }
        }
      }
      uStack_144 = 0x146;
      puVar9 = (uint *)fn_8267BED0(puVar8,0x1c,&uStack_144);
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)0x0;
      }
      else {
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 1;
        fn_8268C210(puVar9 + 3);
        puVar9[4] = (uint)(float)dVar26;
        fn_8267C4C8(uVar13);
        puVar9[5] = uVar13;
        puVar9[6] = 0;
      }
      uVar17 = piVar4[1];
      if ((0xff < uVar17) ||
         (uVar12 = 0, (*(uint *)(*(int *)(uVar13 + 0xc) + 0x14) >> 0xd & 1) != 0)) {
        uVar12 = 1;
      }
      piVar10 = (int *)fn_827A9C58(puVar8 + 0x1b,uStack_14c,uVar17,2,uVar12);
      if (*piVar10 < 0) {
        piVar10[2] = piVar10[2] & 0xff000000U | uStack_150 & 0xffffff;
      }
      else {
        piVar10[2] = uStack_150;
      }
      uStack_150 = uVar17 + uStack_150;
      fVar2 = (float)piVar4[6];
      if ((*(uint *)(*(int *)(uVar13 + 0xc) + 0x14) >> 0xd & 1) == 0) {
        fVar1 = (float)(-(double)fStack_10c + (double)(float)piVar4[7]);
        dVar22 = dVar29;
      }
      else {
        dVar22 = (double)(float)piVar4[8];
        fVar1 = -fStack_10c + (float)((double)(float)piVar4[7] - dVar22);
        uStack_130 = ((((U64)(uStack_130)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)(longlong)(float)piVar4[8])) & ((U64)0xFFFF)) << 48));
        if (*piVar10 < 0) {
          *(undefined2 *)((int)piVar10 + 0x1a) = (((U64)(uStack_130) >> 48) & 0xFFFF);
        }
        else {
          *(undefined2 *)((int)piVar10 + 0x26) = (((U64)(uStack_130) >> 48) & 0xFFFF);
        }
        dVar22 = (double)(*(float *)(*(int *)(uVar13 + 0xc) + 0xc) * (float)(dVar22 * dVar27) +
                         (float)piVar4[8]);
      }
      dVar24 = (double)fVar1;
      dVar23 = (double)(-fStack_110 + fVar2);
      if (dVar24 <= dVar29) {
        dVar24 = dVar24 - dVar28;
      }
      else {
        dVar24 = dVar24 + dVar28;
      }
      if (dVar23 <= dVar29) {
        dVar23 = dVar23 - dVar28;
      }
      else {
        dVar23 = dVar23 + dVar28;
      }
      uStack_130 = (longlong)(int)dVar23;
      piVar10[3] = (int)dVar23;
      piVar10[4] = (int)dVar24;
      if (*piVar10 < 0) {
        *(undefined2 *)((int)piVar10 + 0x16) = 0;
        *(undefined2 *)(piVar10 + 5) = 0;
      }
      else {
        piVar10[6] = 0;
        piVar10[5] = 0;
      }
      iVar15 = (int)piVar10 + 0x1e;
      if (-1 < *piVar10) {
        iVar15 = (int)piVar10 + 0x2a;
      }
      puVar11 = (undefined4 *)fn_827A84D0(piVar10);
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      if (uVar17 != 0) {
        puVar21 = (ushort *)(iVar15 + 6);
        do {
          iVar16 = uVar20 * 8;
          *puVar21 = 0;
          puVar21[-1] = 0x1000;
          puVar21[-3] = (ushort)*(undefined4 *)(iVar16 + *piVar4);
          uVar14 = (uint)*(float *)(iVar16 + *piVar4 + 4);
          if ((int)uVar14 < 0) {
            *puVar21 = 0x40;
            uVar14 = (uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f);
          }
          else {
            *puVar21 = 0;
          }
          puVar21[-2] = (ushort)uVar14;
          uVar14 = (uint)*(float *)(iVar16 + *piVar4 + 4);
          uStack_130 = (longlong)(int)uVar14;
          uVar19 = uVar14 + uVar19;
          fn_82755510((double)(float)((double)(float)piVar4[8] * dVar25),puVar21 + -3);
          if (uVar20 == 0) {
            uVar3 = *puVar21;
            *puVar21 = uVar3 | 0x4000;
            *puVar21 = uVar3 | 0x6000;
            *puVar11 = puVar9;
            *puVar9 = *puVar9 + 1;
            iVar16 = piVar4[5];
            uVar3 = *puVar21;
            *puVar21 = uVar3 | 0x4000;
            *puVar21 = uVar3 | 0x5000;
            puVar11[1] = iVar16;
            puVar11 = puVar11 + 2;
          }
          uVar20 = uVar20 + 1;
          if ((iVar15 == 0) || (bVar6 = false, uVar17 <= uVar18)) {
            bVar6 = true;
          }
          if (!bVar6) {
            uVar18 = uVar18 + 1;
            puVar21 = puVar21 + 4;
          }
        } while (uVar20 < uVar17);
      }
      if ((*(uint *)(*(int *)(uVar13 + 0xc) + 0x14) >> 0xd & 1) != 0) {
        if (dVar22 <= dVar29) {
          dVar22 = dVar22 - dVar28;
        }
        else {
          dVar22 = dVar22 + dVar28;
        }
        iVar15 = (int)dVar22;
        uStack_130 = (longlong)iVar15;
        uVar19 = ((uVar19 & 0xffffffff) >> 0x1f) - 1 & uVar19;
        if (*piVar10 < 0) {
          *(short *)(piVar10 + 5) = (short)uVar19;
          *(short *)((int)piVar10 + 0x16) = (short)iVar15;
        }
        else {
          piVar10[5] = (int)uVar19;
          piVar10[6] = iVar15;
        }
        if (*piVar10 < 0) {
          *(char *)(piVar10 + 2) = (char)uVar17;
        }
        else {
          piVar10[8] = uVar17;
        }
        if (*piVar10 < 0) {
          uVar13 = (uint)*(ushort *)((int)piVar10 + 0x16);
        }
        else {
          uVar13 = piVar10[6];
        }
        if (*piVar10 < 0) {
          uVar17 = (uint)*(ushort *)(piVar10 + 5);
        }
        else {
          uVar17 = piVar10[5];
        }
        lStack_128 = (longlong)(int)(uVar17 + piVar10[3]);
        lStack_120 = (longlong)(int)(uVar13 + piVar10[4]);
        fVar2 = (float)lStack_120;
        fVar1 = (float)lStack_128;
        if (fVar1 <= fStack_110) {
          fStack_110 = fVar1;
        }
        if (fVar2 <= fStack_10c) {
          fStack_10c = fVar2;
        }
        if (fStack_108 <= fVar1) {
          fStack_108 = fVar1;
        }
        if (fStack_104 <= fVar2) {
          fStack_104 = fVar2;
        }
      }
      if ((puVar9 != (uint *)0x0) &&
         (uVar13 = *puVar9, *puVar9 = (uint)((ulonglong)uVar13 - 1), (ulonglong)uVar13 - 1 == 0)) {
        fn_826C6368(puVar9);
        fn_8267BE38(puVar9);
      }
      if (auStack_138[0] != 0) {
        fn_82687270();
      }
      uStack_14c = uStack_14c + 1;
    } while (uStack_14c < uStack_140);
  }
  puVar8[0x21] = fStack_110;
  puVar8[0x22] = fStack_10c;
  puVar8[0x23] = fStack_108;
  puVar8[0x24] = fStack_104;
  *(byte *)(puVar8 + 0x38) = *(byte *)(puVar8 + 0x38) | 4;
  *(undefined1 *)(puVar8 + 0x50) = 0;
  *(undefined1 *)((int)puVar8 + 0x141) = 0;
  *(undefined1 *)((int)puVar8 + 0x142) = 0x10;
  *(undefined1 *)((int)puVar8 + 0x143) = 0x80;
  *(undefined1 *)(puVar8 + 0x51) = 0x40;
  *(undefined1 *)((int)puVar8 + 0x145) = 0x40;
  *(undefined1 *)((int)puVar8 + 0x146) = 0x10;
  *(undefined1 *)((int)puVar8 + 0x147) = 0xff;
  *(undefined2 *)(puVar8 + 0x52) = 0x1c2;
  *(undefined2 *)((int)puVar8 + 0x14a) = 0x50;
  *(undefined2 *)(puVar8 + 0x53) = 0x39;
  *(undefined2 *)((int)puVar8 + 0x14e) = 0x39;
  puVar8[0x54] = 0;
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) | 2;
LAB_82756d2c:
  fn_82F6A58C(puVar8);
  return;
}

