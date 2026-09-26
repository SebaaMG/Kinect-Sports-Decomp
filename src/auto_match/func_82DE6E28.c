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
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_5c;
extern int fn_82DE51D8();
extern int fn_82DE5CE0();
extern int fn_82DE5E38();
extern int fn_82DE6970();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern V16 vectorAddFloatingPoint();


void fn_82DE6E28(double param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  int in_r0;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  undefined1 in_vs32 [16];
  undefined1 in_vs58 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100c0;
  undefined4 uVar19;
  undefined4 in_register_000100c4;
  undefined4 uVar20;
  undefined4 in_register_000100c8;
  undefined4 uVar21;
  undefined4 in_vr12;
  undefined4 uVar22;
  undefined4 in_register_000100d0;
  undefined4 uVar23;
  undefined4 in_register_000100d4;
  undefined4 uVar24;
  undefined4 in_register_000100d8;
  undefined4 uVar25;
  undefined4 in_vr13;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_130 [16];
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_110 [16];
  float afStack_100 [4];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined4 auStack_d0 [4];
  undefined1 auStack_c0 [100];
  float fStack_5c;
  
  dVar14 = (double)lbl_821AAD20;
  if (param_1 <= dVar14) {
    param_1 = (double)lbl_82002AE0;
  }
  fn_82DE5E38(*param_2,param_2[1],auStack_d0,auStack_130);
  fStack_120 = (float)dVar14;
  puVar1 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  fStack_11c = (float)dVar14;
  puVar1 = (undefined4 *)((int)afStack_100 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  fn_82DE51D8(param_1,auStack_130);
  puVar1 = (undefined4 *)((int)auStack_d0 + in_r0 & 0xfffffff0);
  uVar27 = *puVar1;
  uVar28 = puVar1[1];
  uVar29 = puVar1[2];
  uVar30 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
  *puVar1 = uVar27;
  puVar1[1] = uVar28;
  puVar1[2] = uVar29;
  puVar1[3] = uVar30;
  puVar1 = (undefined4 *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  fn_82DE6970(auStack_c0,param_2,auStack_130);
  pfVar2 = (float *)param_4;
  if (dVar14 < (double)fStack_5c) {
    *pfVar2 = fStack_5c;
    param_4 = param_4 + 0x20;
    pfVar2[1] = (float)param_1;
    pfVar8 = pfVar2 + 4;
    fn_82DE5CE0(param_1,(double)(float)(param_1 / (double)fStack_5c),auStack_c0);
    lVar10 = param_4 + 8;
    iVar4 = (int)param_4;
    lVar12 = 3;
    lVar11 = param_4 + 0x10;
    iVar9 = 0;
    puVar7 = auStack_d0;
    vectorAddFloatingPoint(in_vs32,in_vs58);
    puVar1 = (undefined4 *)(in_r0 + (int)pfVar8 & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    fVar6 = lbl_82186E6C;
    do {
      pfVar8 = (float *)param_4;
      fVar3 = *(float *)(((int)afStack_100 - iVar4) + (int)pfVar8) * fVar6;
      if (*pfVar8 < fVar3) {
        uVar27 = *puVar7;
        *pfVar8 = fVar3;
        pfVar8 = (float *)lVar11;
        *(undefined4 *)(((int)pfVar2 - iVar4) + (int)pfVar8) = uVar27;
        pfVar5 = (float *)lVar10;
        if (iVar9 != 0) {
          dVar13 = dVar14;
          if (-(double)pfVar5[-2] < 0.0) {
            dVar13 = (double)pfVar5[-2];
          }
          pfVar8[-4] = (float)dVar13;
          pfVar5[-2] = (float)dVar13;
        }
        if (iVar9 != 1) {
          dVar13 = dVar14;
          if (-(double)pfVar5[-1] < 0.0) {
            dVar13 = (double)pfVar5[-1];
          }
          *pfVar8 = (float)dVar13;
          pfVar5[-1] = (float)dVar13;
        }
        if (iVar9 != 2) {
          dVar13 = dVar14;
          if (-(double)*pfVar5 < 0.0) {
            dVar13 = (double)*pfVar5;
          }
          pfVar8[4] = (float)dVar13;
          *pfVar5 = (float)dVar13;
        }
      }
      iVar9 = iVar9 + 1;
      param_4 = param_4 + 0x14;
      puVar7 = puVar7 + 1;
      lVar11 = lVar11 + 4;
      lVar10 = lVar10 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  else {
    *pfVar2 = fStack_120;
    pfVar2[1] = fStack_11c;
    puVar1 = (undefined4 *)((int)afStack_100 + in_r0 & 0xfffffff0);
    uVar15 = *puVar1;
    uVar16 = puVar1[1];
    uVar17 = puVar1[2];
    uVar18 = puVar1[3];
    puVar1 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
    uVar23 = *puVar1;
    uVar24 = puVar1[1];
    uVar25 = puVar1[2];
    uVar26 = puVar1[3];
    puVar1 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
    uVar19 = *puVar1;
    uVar20 = puVar1[1];
    uVar21 = puVar1[2];
    uVar22 = puVar1[3];
    puVar1 = (undefined4 *)((uint)(pfVar2 + 4) & 0xfffffff0);
    *puVar1 = uVar27;
    puVar1[1] = uVar28;
    puVar1[2] = uVar29;
    puVar1[3] = uVar30;
    puVar1 = (undefined4 *)((int)pfVar2 + in_r0 + 0x20 & 0xfffffff0);
    *puVar1 = uVar15;
    puVar1[1] = uVar16;
    puVar1[2] = uVar17;
    puVar1[3] = uVar18;
    puVar1 = (undefined4 *)((uint)(pfVar2 + 0xc) & 0xfffffff0);
    *puVar1 = uVar23;
    puVar1[1] = uVar24;
    puVar1[2] = uVar25;
    puVar1[3] = uVar26;
    puVar1 = (undefined4 *)((uint)(pfVar2 + 0x10) & 0xfffffff0);
    *puVar1 = uVar19;
    puVar1[1] = uVar20;
    puVar1[2] = uVar21;
    puVar1[3] = uVar22;
  }
  return;
}

