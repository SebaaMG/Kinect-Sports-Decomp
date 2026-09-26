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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern unsigned int fStack_68;
extern unsigned int fStack_88;
extern unsigned int fStack_a0;
extern unsigned int fStack_b4;
extern int fn_822B33B0();
extern int fn_8236C340();
extern int fn_823C7AF0();
extern int fn_823C9098();
extern int fn_823CA870();
extern int fn_823CA978();
extern int fn_82F65018();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern V16 vectorSubtractFloatingPoint();


void fn_823C7FE8(undefined8 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int in_r0;
  ulonglong uVar8;
  char cVar9;
  double dVar10;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float in_register_000107f0;
  float in_register_000107f4;
  float in_register_000107f8;
  float in_vr127;
  undefined4 auStack_c0 [2];
  undefined4 uStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  float afStack_a8 [2];
  float fStack_a0;
  float afStack_90 [2];
  float fStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  float fStack_68;
  
  uVar12 = *(undefined4 *)(param_2 + 0x240);
  fn_8236C340(uVar12,0xe);
  uVar8 = fn_8236C340(uVar12,0xf);
  iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x2c);
  if (uVar8 == 0) {
    fn_823CA870(param_2,auStack_80,auStack_70,afStack_a8,auStack_c0);
  }
  else {
    fn_823CA978(param_2,uVar8,auStack_80,auStack_70,afStack_a8,auStack_c0);
  }
  puVar3 = *(ushort **)(((iVar2 == 0) + 0xa1) * 4 + *(int *)(param_2 + 0x240));
  uVar1 = *puVar3;
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
    pfVar4 = (float *)((uint)(puVar3 + 0x10) & 0xfffffff0);
    in_register_000107f0 = *pfVar4;
    in_register_000107f4 = pfVar4[1];
    in_register_000107f8 = pfVar4[2];
    in_vr127 = pfVar4[3];
  }
  pfVar4 = (float *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  fVar15 = pfVar4[1];
  fVar16 = pfVar4[2];
  fVar17 = pfVar4[3];
  pfVar5 = (float *)((int)afStack_90 + in_r0 & 0xfffffff0);
  *pfVar5 = in_register_000107f0 - *pfVar4;
  pfVar5[1] = in_register_000107f4 - fVar15;
  pfVar5[2] = in_register_000107f8 - fVar16;
  pfVar5[3] = in_vr127 - fVar17;
  dVar10 = (double)fn_82F65018(-(double)afStack_90[0],-(double)fStack_88);
  fn_823C9098((double)afStack_a8[0],(double)(float)dVar10,(double)fStack_a0);
  pfVar4 = (float *)(*(int *)(*(int *)(param_2 + 0x240) + 0xe10) + 0x50U & 0xfffffff0);
  fVar11 = *pfVar4;
  fVar17 = pfVar4[1];
  fVar16 = pfVar4[2];
  fVar15 = pfVar4[3];
  pfVar4 = (float *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *pfVar4 = fVar11;
  pfVar4[1] = fVar17;
  pfVar4[2] = fVar16;
  pfVar4[3] = fVar15;
  if ((uVar8 & 0xffffffff) != 0) {
    fVar15 = in_vr127;
    fVar16 = in_register_000107f8;
    fVar17 = in_register_000107f4;
    fVar11 = in_register_000107f0;
  }
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  pfVar4 = (float *)((int)afStack_90 + in_r0 & 0xfffffff0);
  *pfVar4 = fVar11;
  pfVar4[1] = fVar17;
  pfVar4[2] = fVar16;
  pfVar4[3] = fVar15;
  dVar10 = (double)fn_82F65018(-(double)afStack_90[0],-(double)fStack_88);
  puVar6 = (undefined4 *)(in_r0 + param_2 + 0x1c0 & 0xfffffff0);
  uVar12 = puVar6[1];
  uVar13 = puVar6[2];
  uVar14 = puVar6[3];
  fStack_b4 = (float)dVar10;
  puVar7 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar7 = *puVar6;
  puVar7[1] = uVar12;
  puVar7[2] = uVar13;
  puVar7[3] = uVar14;
  fStack_68 = fStack_68 - fStack_68;
  if (iVar2 != 0) {
    fStack_68 = fStack_68 * lbl_82192734;
  }
  if (lbl_821916FC <= fStack_68) {
    *(undefined4 *)(param_2 + 0x2a8) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x2a8) = 1;
  }
  fn_823C7AF0(param_1,param_2);
  uVar8 = (ulonglong)*(uint *)(*(int *)(*(int *)(param_2 + 0x240) + 0x1c) + 4);
  cVar9 = fn_822B33B0((double)lbl_821CC160,uVar8);
  if (((cVar9 != '\0') && (cVar9 = fn_822B33B0(uVar8), cVar9 != '\0')) ||
     (*(int *)(param_2 + 0x368) != 0)) {
    puVar6 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    uVar12 = puVar6[1];
    uVar13 = puVar6[2];
    uVar14 = puVar6[3];
    puVar7 = (undefined4 *)(param_2 + 0x1a0U & 0xfffffff0);
    *puVar7 = *puVar6;
    puVar7[1] = uVar12;
    puVar7[2] = uVar13;
    puVar7[3] = uVar14;
  }
  *(undefined4 *)(param_2 + 0x228) = auStack_c0[0];
  *(undefined4 *)(param_2 + 0x214) = uStack_b8;
  *(float *)(param_2 + 0x218) = fStack_b4;
  *(undefined4 *)(param_2 + 0x21c) = uStack_b0;
  return;
}

