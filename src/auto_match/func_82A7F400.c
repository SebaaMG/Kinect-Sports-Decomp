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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int lbl_82002AE0;


undefined8 fn_82A7F400(int param_1,uint param_2,ushort param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  int in_r0;
  int iVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  ushort uVar17;
  uint uVar16;
  float *pfVar18;
  int iVar19;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [144];
  
  uVar17 = *(ushort *)(param_1 + 0x22);
  sVar13 = 0;
  iVar15 = 0;
  fVar9 = lbl_82002AE0 / (float)(longlong)(1 << (*(ushort *)(param_1 + 0x6e) - 1 & 0x3f));
  if (uVar17 == 1) {
    uVar17 = param_3 & 0xfff0;
    if (((param_2 & 0xf) == 0) && (sVar13 = 0, 0 < (short)uVar17)) {
      sVar13 = 0;
      pfVar18 = (float *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
      fVar28 = *pfVar18;
      fVar29 = pfVar18[1];
      fVar30 = pfVar18[2];
      fVar31 = pfVar18[3];
      do {
        pfVar18 = (float *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
        fVar1 = *pfVar18 * fVar28 + in_register_00010000;
        fVar2 = pfVar18[1] * fVar29 + in_ACC;
        fVar24 = pfVar18[2] * fVar30 + in_register_00010008;
        fVar3 = pfVar18[3] * fVar31 + in_vr0;
        pfVar18 = (float *)(in_r0 + param_2 & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar2;
        pfVar18[2] = fVar24;
        pfVar18[3] = fVar3;
        pfVar18 = (float *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar2;
        pfVar18[2] = fVar24;
        pfVar18[3] = fVar3;
        pfVar18 = (float *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
        fVar1 = *pfVar18 * fVar28 + in_register_00010000;
        fVar2 = pfVar18[1] * fVar29 + in_ACC;
        fVar24 = pfVar18[2] * fVar30 + in_register_00010008;
        fVar3 = pfVar18[3] * fVar31 + in_vr0;
        pfVar18 = (float *)(param_2 + 0x10 & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar2;
        pfVar18[2] = fVar24;
        pfVar18[3] = fVar3;
        pfVar18 = (float *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar2;
        pfVar18[2] = fVar24;
        pfVar18[3] = fVar3;
        sVar13 = sVar13 + 0x10;
        pfVar18 = (float *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
        fVar1 = *pfVar18 * fVar28 + in_register_00010000;
        fVar2 = pfVar18[1] * fVar29 + in_ACC;
        fVar24 = pfVar18[2] * fVar30 + in_register_00010008;
        fVar3 = pfVar18[3] * fVar31 + in_vr0;
        pfVar18 = (float *)(param_2 + 0x20 & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar2;
        pfVar18[2] = fVar24;
        pfVar18[3] = fVar3;
        pfVar18 = (float *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar2;
        pfVar18[2] = fVar24;
        pfVar18[3] = fVar3;
        pfVar18 = (float *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
        fVar1 = *pfVar18 * fVar28 + in_register_00010000;
        fVar2 = pfVar18[1] * fVar29 + in_ACC;
        fVar24 = pfVar18[2] * fVar30 + in_register_00010008;
        fVar3 = pfVar18[3] * fVar31 + in_vr0;
        pfVar18 = (float *)(param_2 + 0x30 & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar2;
        pfVar18[2] = fVar24;
        pfVar18[3] = fVar3;
        param_2 = param_2 + 0x40;
        pfVar18 = (float *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar2;
        pfVar18[2] = fVar24;
        pfVar18[3] = fVar3;
      } while (sVar13 < (short)uVar17);
    }
    iVar12 = (int)(short)(param_3 - uVar17) + (int)(short)uVar17;
    if (sVar13 < iVar12) {
      uVar16 = (uint)*(ushort *)(param_1 + 0x22);
      do {
        if (uVar16 != 0) {
          iVar19 = 0;
          pfVar18 = (float *)(iVar15 * 4 + param_2 + -4);
          do {
            iVar10 = iVar19 * 0x6f0;
            sVar14 = (short)iVar19 + 1;
            iVar15 = iVar15 + 1;
            iVar19 = (int)sVar14;
            pfVar18 = pfVar18 + 1;
            *pfVar18 = *(float *)(*(int *)(iVar10 + *(int *)(param_1 + 0x140) + 0x3c) + sVar13 * 4)
                       * fVar9;
            uVar16 = (uint)*(ushort *)(param_1 + 0x22);
          } while ((int)sVar14 < (int)uVar16);
        }
        sVar13 = sVar13 + 1;
      } while (sVar13 < iVar12);
    }
  }
  else if (uVar17 == 2) {
    uVar17 = param_3 & 0xfff8;
    if (((param_2 & 0xf) == 0) && (sVar13 = 0, 0 < (short)uVar17)) {
      sVar13 = 0;
      pfVar18 = (float *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
      fVar28 = *pfVar18;
      fVar29 = pfVar18[1];
      fVar30 = pfVar18[2];
      fVar31 = pfVar18[3];
      do {
        sVar13 = sVar13 + 8;
        pfVar18 = (float *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
        fVar20 = *pfVar18;
        fVar21 = pfVar18[1];
        fVar22 = pfVar18[2];
        fVar23 = pfVar18[3];
        pfVar18 = (float *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
        fVar24 = *pfVar18;
        fVar25 = pfVar18[1];
        fVar26 = pfVar18[2];
        fVar27 = pfVar18[3];
        pfVar18 = (float *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
        pfVar11 = (float *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
        fVar1 = *pfVar11 * fVar28 + in_register_00010000;
        fVar3 = pfVar11[1] * fVar29 + in_ACC;
        fVar5 = pfVar11[2] * fVar30 + in_register_00010008;
        fVar7 = pfVar11[3] * fVar31 + in_vr0;
        fVar2 = *pfVar18 * fVar28 + in_register_00010000;
        fVar4 = pfVar18[1] * fVar29 + in_ACC;
        fVar6 = pfVar18[2] * fVar30 + in_register_00010008;
        fVar8 = pfVar18[3] * fVar31 + in_vr0;
        pfVar18 = (float *)(param_2 + 0x20 & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar3;
        pfVar18[2] = fVar5;
        pfVar18[3] = fVar7;
        fVar24 = fVar24 * fVar28 + in_register_00010000;
        fVar25 = fVar25 * fVar29 + in_ACC;
        fVar26 = fVar26 * fVar30 + in_register_00010008;
        fVar27 = fVar27 * fVar31 + in_vr0;
        pfVar18 = (float *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar3;
        pfVar18[2] = fVar5;
        pfVar18[3] = fVar7;
        fVar1 = fVar20 * fVar28 + in_register_00010000;
        fVar3 = fVar21 * fVar29 + in_ACC;
        fVar5 = fVar22 * fVar30 + in_register_00010008;
        fVar7 = fVar23 * fVar31 + in_vr0;
        pfVar18 = (float *)(param_2 + 0x10 & 0xfffffff0);
        *pfVar18 = fVar2;
        pfVar18[1] = fVar4;
        pfVar18[2] = fVar6;
        pfVar18[3] = fVar8;
        pfVar18 = (float *)(in_r0 + param_2 & 0xfffffff0);
        *pfVar18 = fVar24;
        pfVar18[1] = fVar25;
        pfVar18[2] = fVar26;
        pfVar18[3] = fVar27;
        pfVar18 = (float *)(param_2 + 0x30 & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar3;
        pfVar18[2] = fVar5;
        pfVar18[3] = fVar7;
        param_2 = param_2 + 0x40;
        pfVar18 = (float *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
        *pfVar18 = fVar2;
        pfVar18[1] = fVar4;
        pfVar18[2] = fVar6;
        pfVar18[3] = fVar8;
        pfVar18 = (float *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
        *pfVar18 = fVar24;
        pfVar18[1] = fVar25;
        pfVar18[2] = fVar26;
        pfVar18[3] = fVar27;
        pfVar18 = (float *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
        *pfVar18 = fVar1;
        pfVar18[1] = fVar3;
        pfVar18[2] = fVar5;
        pfVar18[3] = fVar7;
      } while (sVar13 < (short)uVar17);
    }
    iVar12 = (int)(short)(param_3 - uVar17) + (int)(short)uVar17;
    if (sVar13 < iVar12) {
      uVar16 = (uint)*(ushort *)(param_1 + 0x22);
      do {
        if (uVar16 != 0) {
          iVar19 = 0;
          pfVar18 = (float *)(iVar15 * 4 + param_2 + -4);
          do {
            iVar10 = iVar19 * 0x6f0;
            sVar14 = (short)iVar19 + 1;
            iVar15 = iVar15 + 1;
            iVar19 = (int)sVar14;
            pfVar18 = pfVar18 + 1;
            *pfVar18 = *(float *)(*(int *)(iVar10 + *(int *)(param_1 + 0x140) + 0x3c) + sVar13 * 4)
                       * fVar9;
            uVar16 = (uint)*(ushort *)(param_1 + 0x22);
          } while ((int)sVar14 < (int)uVar16);
        }
        sVar13 = sVar13 + 1;
      } while (sVar13 < iVar12);
    }
  }
  else if (param_3 != 0) {
    iVar12 = 0;
    do {
      if (uVar17 != 0) {
        iVar19 = 0;
        pfVar18 = (float *)(iVar15 * 4 + param_2 + -4);
        do {
          iVar10 = iVar19 * 0x6f0;
          sVar13 = (short)iVar19 + 1;
          iVar15 = iVar15 + 1;
          iVar19 = (int)sVar13;
          pfVar18 = pfVar18 + 1;
          *pfVar18 = *(float *)(*(int *)(iVar10 + *(int *)(param_1 + 0x140) + 0x3c) + iVar12 * 4) *
                     fVar9;
          uVar17 = *(ushort *)(param_1 + 0x22);
        } while ((int)sVar13 < (int)(uint)uVar17);
      }
      sVar13 = (short)iVar12 + 1;
      iVar12 = (int)sVar13;
    } while ((int)sVar13 < (int)(uint)param_3);
  }
  return 0;
}

