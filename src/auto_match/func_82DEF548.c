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
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_190;
extern unsigned int *auStack_80;
extern unsigned int fStack_b0;
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D3C628();
extern int fn_82D81078();
extern int fn_82D81240();
extern int fn_82D8B168();
extern int fn_82D8C258();
extern int fn_82DEA600();
extern int fn_82DEF8C8();
extern int fn_82DF0778();
extern int fn_82DF0890();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_82021544;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_13c;
extern unsigned int uStack_89;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();


void fn_82DEF548(undefined8 param_1,longlong param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  int iVar10;
  longlong lVar9;
  ulonglong uVar11;
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [4];
  undefined4 uStack_13c;
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [96];
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_89;
  undefined1 auStack_80 [128];
  
  iVar6 = (int)in_r0;
  pfVar2 = (float *)(iVar6 + param_3 & 0xfffffff0);
  fVar19 = *pfVar2;
  fVar20 = pfVar2[1];
  fVar21 = pfVar2[2];
  fVar22 = pfVar2[3];
  pfVar2 = (float *)(param_3 + 0x30U & 0xfffffff0);
  fVar12 = *pfVar2;
  fVar13 = pfVar2[1];
  fVar15 = pfVar2[2];
  fVar17 = pfVar2[3];
  pfVar2 = (float *)((uint)(auStack_160 + iVar6) & 0xfffffff0);
  *pfVar2 = fVar12;
  pfVar2[1] = fVar13;
  pfVar2[2] = fVar15;
  pfVar2[3] = fVar17;
  fVar12 = fVar12 + fVar19;
  fVar13 = fVar13 + fVar20;
  fVar15 = fVar15 + fVar21;
  fVar17 = fVar17 + fVar22;
  pfVar2 = (float *)((uint)(auStack_180 + iVar6) & 0xfffffff0);
  *pfVar2 = fVar12;
  pfVar2[1] = fVar13;
  pfVar2[2] = fVar15;
  pfVar2[3] = fVar17;
  loadVectorLeftIndexed128(in_r0,0xffffffff8207a328);
  pfVar2 = (float *)((uint)(auStack_150 + iVar6) & 0xfffffff0);
  *pfVar2 = fVar19 * in_register_000100d0 + fVar12;
  pfVar2[1] = fVar20 * in_register_000100d4 + fVar13;
  pfVar2[2] = fVar21 * in_register_000100d8 + fVar15;
  pfVar2[3] = fVar22 * in_vr13 + fVar17;
  fn_82D8B168(auStack_140);
  iVar8 = (int)in_r0;
  iVar6 = fn_82CE5410();
  iVar6 = (**(code **)(**(int **)(iVar6 + 0x10) + 4))(*(int **)(iVar6 + 0x10),0x20);
  *(undefined2 *)(iVar6 + 4) = 0x20;
  iVar6 = (int)param_1;
  uVar5 = fn_82D3C628((double)*(float *)(iVar6 + 0x20));
  uStack_90 = lbl_82021544;
  fStack_b0 = *(float *)(iVar6 + 0x28);
  uStack_13c = (undefined4)uVar5;
  uStack_8c = 2;
  uStack_89 = 6;
  uStack_9c = lbl_82002C2C;
  uStack_a0 = lbl_82002AE0;
  fn_82DEA600((double)(fStack_b0 * lbl_82005344),uVar5,0xffffffff82000000,auStack_140);
  fStack_b0 = *(float *)(iVar6 + 0x28);
  fVar12 = *(float *)(iVar6 + 0x20);
  vectorAddFloatingPoint(in_vs43,in_vs44);
  uStack_ac = lbl_821AAD20;
  uStack_a8 = lbl_820162A0;
  puVar3 = (undefined4 *)((uint)(auStack_130 + iVar8) & 0xfffffff0);
  *puVar3 = in_register_000100a0;
  puVar3[1] = in_register_000100a4;
  puVar3[2] = in_register_000100a8;
  puVar3[3] = in_vr10;
  iVar7 = fn_82DF0890((double)fVar12,param_2,auStack_180,auStack_130,auStack_150,auStack_80);
  if (iVar7 == 0) {
    fn_82DF0778((double)*(float *)(iVar6 + 0x24),auStack_130,auStack_80,param_2 + 0x10);
  }
  else {
    loadVectorLeftIndexed128(param_1,0x24);
    pfVar2 = (float *)((uint)(auStack_110 + iVar8) & 0xfffffff0);
    *pfVar2 = fVar19 * in_register_000100d0;
    pfVar2[1] = fVar20 * in_register_000100d4;
    pfVar2[2] = fVar21 * in_register_000100d8;
    pfVar2[3] = fVar22 * in_vr13;
  }
  iVar7 = *(int *)(iVar6 + 0x18);
  iVar10 = 0;
  puVar3 = (undefined4 *)((uint)(auStack_80 + iVar8) & 0xfffffff0);
  uVar14 = puVar3[1];
  uVar16 = puVar3[2];
  uVar18 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(auStack_170 + iVar8) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar14;
  puVar4[2] = uVar16;
  puVar4[3] = uVar18;
  if (0 < iVar7) {
    iVar8 = 0;
    do {
      piVar1 = *(int **)(iVar8 + *(int *)(iVar6 + 0x14));
      (**(code **)(*piVar1 + 0x14))(piVar1,auStack_160,auStack_170);
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar10 < *(int *)(iVar6 + 0x18));
  }
  iVar8 = fn_82CE5410();
  iVar8 = (**(code **)(**(int **)(iVar8 + 0x10) + 4))(*(int **)(iVar8 + 0x10),0x220);
  *(undefined2 *)(iVar8 + 4) = 0x220;
  iVar8 = fn_82D8C258(iVar8,auStack_140);
  fn_82CE4118(uStack_13c);
  iVar7 = 0;
  *(undefined4 *)(iVar8 + 0x9c) = *(undefined4 *)(iVar6 + 0x2c);
  if (0 < *(int *)(iVar6 + 0x18)) {
    iVar10 = 0;
    do {
      piVar1 = *(int **)(iVar10 + *(int *)(iVar6 + 0x14));
      (**(code **)(*piVar1 + 0xc))(piVar1,iVar8);
      iVar7 = iVar7 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar7 < *(int *)(iVar6 + 0x18));
  }
  fn_82D81078(param_2,iVar8,1);
  piVar1 = *(int **)(iVar6 + 0x50);
  iVar7 = piVar1[1];
  if (iVar7 <= piVar1[4]) {
    iVar10 = 8;
    if (iVar7 != 0) {
      iVar10 = iVar7 << 1;
    }
    fn_82DEF8C8(piVar1,iVar10);
  }
  if (piVar1[3] == piVar1[1]) {
    piVar1[3] = 0;
  }
  *(int *)(piVar1[3] * 4 + *piVar1) = iVar8;
  piVar1[3] = piVar1[3] + 1;
  piVar1[4] = piVar1[4] + 1;
  piVar1 = *(int **)(iVar6 + 0x50);
  if (*(int *)(iVar6 + 0x30) < piVar1[4]) {
    iVar7 = piVar1[2] + 1;
    iVar8 = *(int *)(piVar1[2] * 4 + *piVar1);
    piVar1[2] = iVar7;
    if (iVar7 == piVar1[1]) {
      piVar1[2] = 0;
    }
    piVar1[4] = piVar1[4] + -1;
    uVar11 = (ulonglong)*(uint *)(iVar6 + 0x18) - 1;
    if (-1 < (longlong)uVar11) {
      lVar9 = (uVar11 & 0x3fffffff) << 2;
      do {
        piVar1 = *(int **)((int)lVar9 + *(int *)(iVar6 + 0x14));
        (**(code **)(*piVar1 + 0x10))(piVar1,iVar8);
        uVar11 = uVar11 - 1;
        lVar9 = lVar9 + -4;
      } while (-1 < (longlong)uVar11);
    }
    if (*(int *)(iVar8 + 8) != 0) {
      fn_82D81240(auStack_190,param_2,iVar8);
    }
    fn_82CE4118(iVar8);
  }
  return;
}

