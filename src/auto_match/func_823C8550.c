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
extern unsigned int *auStack_b0;
extern unsigned int fStack_78;
extern unsigned int fStack_88;
extern unsigned int fStack_a4;
extern int fn_822B33B0();
extern int fn_822B3488();
extern int fn_8236C340();
extern int fn_823C7AF0();
extern int fn_823C9098();
extern int fn_823CAAE8();
extern int fn_82F65018();
extern unsigned int lbl_82192480;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern V16 vectorConditionalSelect();


void fn_823C8550(undefined8 param_1,int param_2)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  int in_r0;
  int iVar7;
  int iVar8;
  char cVar9;
  double dVar10;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 auStack_b0 [2];
  undefined4 uStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  float afStack_90 [2];
  float fStack_88;
  float afStack_80 [2];
  float fStack_78;
  undefined1 auStack_70 [112];
  
  fn_823CAAE8(param_2,auStack_70,afStack_80,afStack_90,auStack_b0);
  piVar1 = *(int **)(((uint)LZCOUNT(*(undefined4 *)(*(int *)(param_2 + 0x10) + 0x2c)) >> 3 & 4) +
                    **(int **)(*(int *)(param_2 + 0x240) + 8));
  dVar10 = (double)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x14);
  fn_823C9098((double)afStack_90[0],dVar10,(double)fStack_88);
  pfVar2 = (float *)(*(int *)(*(int *)(param_2 + 0x240) + 0xe10) + 0x50U & 0xfffffff0);
  fVar18 = pfVar2[1];
  fVar19 = pfVar2[2];
  fVar20 = pfVar2[3];
  if (*(int *)(param_2 + 0x260) == 0) {
    pfVar5 = (float *)(param_2 + 0x1c0U & 0xfffffff0);
    fVar12 = pfVar5[1];
    fVar14 = pfVar5[2];
    fVar16 = pfVar5[3];
    pfVar6 = (float *)((int)afStack_80 + in_r0 & 0xfffffff0);
    *pfVar6 = *pfVar2 - *pfVar5;
    pfVar6[1] = fVar18 - fVar12;
    pfVar6[2] = fVar19 - fVar14;
    pfVar6[3] = fVar20 - fVar16;
    dVar10 = (double)fn_82F65018(-(double)afStack_80[0],-(double)fStack_78);
  }
  else {
    iVar7 = fn_822B3488((double)lbl_82192480,auStack_70,
                          *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x240) + 0x1c) + 4));
    puVar3 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
    uVar11 = puVar3[1];
    uVar13 = puVar3[2];
    uVar15 = puVar3[3];
    vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
    puVar4 = (undefined4 *)((int)afStack_90 + in_r0 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar11;
    puVar4[2] = uVar13;
    puVar4[3] = uVar15;
    puVar3 = (undefined4 *)(param_2 + 0x1c0U & 0xfffffff0);
    *puVar3 = in_register_00010430;
    puVar3[1] = in_register_00010434;
    puVar3[2] = in_register_00010438;
    puVar3[3] = in_vr67;
  }
  fStack_a4 = (float)dVar10;
  uVar11 = *(undefined4 *)(param_2 + 0x240);
  iVar7 = fn_8236C340(uVar11,0xe);
  if (iVar7 == 0) {
    fn_8236C340(uVar11,0xf);
  }
  fn_823C7AF0(param_1,param_2);
  iVar7 = *(int *)(param_2 + 0x240);
  iVar8 = fn_822B3488((double)lbl_82192480,auStack_70,*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 4))
  ;
  puVar3 = (undefined4 *)(in_r0 + iVar8 & 0xfffffff0);
  uVar11 = *puVar3;
  uVar13 = puVar3[1];
  uVar15 = puVar3[2];
  uVar17 = puVar3[3];
  cVar9 = fn_822B33B0((double)lbl_821CC160,*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 4));
  if (cVar9 != '\0') {
    puVar3 = (undefined4 *)(param_2 + 0x1a0U & 0xfffffff0);
    *puVar3 = uVar11;
    puVar3[1] = uVar13;
    puVar3[2] = uVar15;
    puVar3[3] = uVar17;
  }
  *(undefined4 *)(param_2 + 0x228) = auStack_b0[0];
  *(undefined4 *)(param_2 + 0x214) = uStack_a8;
  *(float *)(param_2 + 0x218) = fStack_a4;
  *(undefined4 *)(param_2 + 0x21c) = uStack_a0;
  return;
}

