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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_90;
extern unsigned int fStack_68;
extern unsigned int fStack_84;
extern int fn_822B33B0();
extern int fn_822B3488();
extern int fn_823C9098();
extern int fn_823CAAE8();
extern int fn_82F65018();
extern unsigned int lbl_82192480;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern V16 vectorConditionalSelect();


void fn_823C7618(int param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  int in_r0;
  int iVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  undefined1 in_vs33 [16];
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
  undefined4 auStack_90 [2];
  undefined4 uStack_88;
  float fStack_84;
  undefined4 uStack_80;
  float afStack_70 [2];
  float fStack_68;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [40];
  
  fn_823CAAE8(param_1,auStack_40,auStack_50,afStack_70,auStack_90);
  piVar2 = *(int **)(((uint)LZCOUNT(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c)) >> 3 & 4) +
                    **(int **)(*(int *)(param_1 + 0x240) + 8));
  dVar10 = (double)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x14);
  fn_823C9098((double)afStack_70[0],dVar10,(double)fStack_68);
  pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x240) + 0xe10) + 0x50U & 0xfffffff0);
  fVar18 = pfVar3[1];
  fVar19 = pfVar3[2];
  fVar20 = pfVar3[3];
  if (*(int *)(param_1 + 0x260) == 0) {
    pfVar5 = (float *)(param_1 + 0x1c0U & 0xfffffff0);
    fVar12 = pfVar5[1];
    fVar14 = pfVar5[2];
    fVar16 = pfVar5[3];
    pfVar6 = (float *)((int)afStack_70 + in_r0 & 0xfffffff0);
    *pfVar6 = *pfVar3 - *pfVar5;
    pfVar6[1] = fVar18 - fVar12;
    pfVar6[2] = fVar19 - fVar14;
    pfVar6[3] = fVar20 - fVar16;
    dVar10 = (double)fn_82F65018(-(double)afStack_70[0],-(double)fStack_68);
    dVar9 = (double)lbl_82192480;
  }
  else {
    dVar9 = (double)fn_822B3488((double)lbl_82192480,auStack_40,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(param_1 + 0x240) + 0x1c) + 4));
    vectorConditionalSelect(in_vs33,in_vs45,in_vs44);
    puVar4 = (undefined4 *)(param_1 + 0x1c0U & 0xfffffff0);
    *puVar4 = in_register_00010430;
    puVar4[1] = in_register_00010434;
    puVar4[2] = in_register_00010438;
    puVar4[3] = in_vr67;
  }
  fStack_84 = (float)dVar10;
  iVar1 = *(int *)(param_1 + 0x240);
  iVar7 = fn_822B3488(dVar9,auStack_40,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4));
  puVar4 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
  uVar11 = *puVar4;
  uVar13 = puVar4[1];
  uVar15 = puVar4[2];
  uVar17 = puVar4[3];
  cVar8 = fn_822B33B0((double)lbl_821CC160,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4));
  if (cVar8 != '\0') {
    puVar4 = (undefined4 *)(param_1 + 0x1a0U & 0xfffffff0);
    *puVar4 = uVar11;
    puVar4[1] = uVar13;
    puVar4[2] = uVar15;
    puVar4[3] = uVar17;
  }
  *(undefined4 *)(param_1 + 0x228) = auStack_90[0];
  *(undefined4 *)(param_1 + 0x214) = uStack_88;
  *(float *)(param_1 + 0x218) = fStack_84;
  *(undefined4 *)(param_1 + 0x21c) = uStack_80;
  return;
}

