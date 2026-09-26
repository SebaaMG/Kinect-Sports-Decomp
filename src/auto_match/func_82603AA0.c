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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_40;
extern int fn_8240DE60();
extern int fn_82603CC0();
extern int fn_82603ED8();
extern int fn_826044A0();
extern int fn_82D93128();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA460;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82603AA0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 in_r0;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float in_register_000104d0;
  float in_register_000104d4;
  float in_register_000104d8;
  float in_vr77;
  undefined1 auStack_40 [64];
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x104) == 0) {
    iVar3 = *(int *)(param_1 + 0x120);
    puVar4 = (undefined4 *)(iVar2 + 0x1b0U & 0xfffffff0);
    uVar14 = puVar4[1];
    uVar15 = puVar4[2];
    uVar16 = puVar4[3];
    puVar5 = (undefined4 *)(param_1 + 0x60U & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar14;
    puVar5[2] = uVar15;
    puVar5[3] = uVar16;
    puVar4 = (undefined4 *)(iVar2 + 0x1c0U & 0xfffffff0);
    uVar14 = puVar4[1];
    uVar15 = puVar4[2];
    uVar16 = puVar4[3];
    puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar14;
    puVar5[2] = uVar15;
    puVar5[3] = uVar16;
    pfVar6 = (float *)(param_1 + 0x50U & 0xfffffff0);
    *pfVar6 = in_register_000104d0;
    pfVar6[1] = in_register_000104d4;
    pfVar6[2] = in_register_000104d8;
    pfVar6[3] = in_vr77;
    pfVar6 = (float *)(param_1 + 0xd0U & 0xfffffff0);
    *pfVar6 = in_register_000104d0;
    pfVar6[1] = in_register_000104d4;
    pfVar6[2] = in_register_000104d8;
    pfVar6[3] = in_vr77;
    pfVar6 = (float *)(param_1 + 0x40U & 0xfffffff0);
    *pfVar6 = in_register_000104d0;
    pfVar6[1] = in_register_000104d4;
    pfVar6[2] = in_register_000104d8;
    pfVar6[3] = in_vr77;
    pfVar6 = (float *)(param_1 + 0xc0U & 0xfffffff0);
    *pfVar6 = in_register_000104d0;
    pfVar6[1] = in_register_000104d4;
    pfVar6[2] = in_register_000104d8;
    pfVar6[3] = in_vr77;
    if (iVar3 != 0) {
      fn_82D93128(iVar2 + 0xe0);
      fVar1 = *(float *)(param_2 + 8);
      pfVar6 = (float *)(*(int *)(iVar2 + 8) + 0x10U & 0xfffffff0);
      fVar11 = pfVar6[1];
      fVar12 = pfVar6[2];
      fVar13 = pfVar6[3];
      loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x50);
      pfVar7 = (float *)((uint)(auStack_40 + (int)in_r0) & 0xfffffff0);
      *pfVar7 = *pfVar6 * in_register_000104d0;
      pfVar7[1] = fVar11 * in_register_000104d4;
      pfVar7[2] = fVar12 * in_register_000104d8;
      pfVar7[3] = fVar13 * in_vr77;
      fn_8240DE60((double)fVar1,iVar2);
    }
  }
  else {
    if (*(int *)(param_1 + 0x114) != 0) {
      fn_826044A0(param_1);
    }
    dVar9 = (double)lbl_821916FC;
    dVar10 = (double)lbl_821CA460;
    if (*(int *)(param_1 + 0x10c) == 0) {
      puVar4 = (undefined4 *)(iVar2 + 0x1b0U & 0xfffffff0);
      uVar14 = puVar4[1];
      uVar15 = puVar4[2];
      uVar16 = puVar4[3];
      puVar5 = (undefined4 *)(param_1 + 0x60U & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar14;
      puVar5[2] = uVar15;
      puVar5[3] = uVar16;
      pfVar6 = (float *)(param_1 + 0x50U & 0xfffffff0);
      *pfVar6 = in_register_000104d0;
      pfVar6[1] = in_register_000104d4;
      pfVar6[2] = in_register_000104d8;
      pfVar6[3] = in_vr77;
      pfVar6 = (float *)(param_1 + 0x40U & 0xfffffff0);
      *pfVar6 = in_register_000104d0;
      pfVar6[1] = in_register_000104d4;
      pfVar6[2] = in_register_000104d8;
      pfVar6[3] = in_vr77;
    }
    else {
      if ((double)(float)((double)*(float *)(param_2 + 8) * dVar9) <=
          (double)*(float *)(param_1 + 0x88)) {
        fVar1 = *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88);
        *(float *)(param_1 + 0x90) = (float)(dVar10 / (double)*(float *)(param_1 + 0x88));
      }
      else {
        fVar1 = (float)((double)*(float *)(param_2 + 8) * dVar9);
        dVar8 = (double)fVar1;
        *(float *)(param_1 + 0x88) = fVar1;
        *(float *)(param_1 + 0x90) = (float)(dVar10 / dVar8);
        fVar1 = (float)(dVar8 * dVar8);
      }
      *(float *)(param_1 + 0x8c) = (float)(dVar10 / (double)fVar1);
      fn_82603CC0(param_1,param_2);
    }
    if (*(int *)(param_1 + 0x110) == 0) {
      puVar4 = (undefined4 *)(iVar2 + 0x1c0U & 0xfffffff0);
      uVar14 = puVar4[1];
      uVar15 = puVar4[2];
      uVar16 = puVar4[3];
      puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar14;
      puVar5[2] = uVar15;
      puVar5[3] = uVar16;
      pfVar6 = (float *)(param_1 + 0xd0U & 0xfffffff0);
      *pfVar6 = in_register_000104d0;
      pfVar6[1] = in_register_000104d4;
      pfVar6[2] = in_register_000104d8;
      pfVar6[3] = in_vr77;
      pfVar6 = (float *)(param_1 + 0xc0U & 0xfffffff0);
      *pfVar6 = in_register_000104d0;
      pfVar6[1] = in_register_000104d4;
      pfVar6[2] = in_register_000104d8;
      pfVar6[3] = in_vr77;
    }
    else {
      if ((double)(float)((double)*(float *)(param_2 + 8) * dVar9) <=
          (double)*(float *)(param_1 + 0xf8)) {
        fVar1 = *(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xf8);
        *(float *)(param_1 + 0x100) = (float)(dVar10 / (double)*(float *)(param_1 + 0xf8));
      }
      else {
        fVar1 = (float)((double)*(float *)(param_2 + 8) * dVar9);
        dVar9 = (double)fVar1;
        *(float *)(param_1 + 0xf8) = fVar1;
        *(float *)(param_1 + 0x100) = (float)(dVar10 / dVar9);
        fVar1 = (float)(dVar9 * dVar9);
      }
      *(float *)(param_1 + 0xfc) = (float)(dVar10 / (double)fVar1);
      fn_82603ED8(param_1,param_2);
    }
  }
  return;
}

