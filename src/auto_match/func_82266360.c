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
extern int fn_82266628();
extern int fn_82266990();
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_8255FA88();
extern unsigned int lbl_82194FE7;
extern unsigned int lbl_821CC160;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82266360(double param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 in_vs32 [16];
  undefined1 auVar10 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  float fVar19;
  float fVar20;
  float fVar21;
  float afStack_50 [4];
  float afStack_40 [10];
  
  iVar7 = *(int *)(param_2 + 0x52c);
  if (9 < iVar7 - 1U) {
    return;
  }
  uVar4 = (uint)(byte)(&lbl_82194FE7)[iVar7];
  iVar5 = uVar4 * 4;
  switch(iVar7) {
  case 1:
    fVar17 = (float)((double)*(float *)(param_2 + 0xfc) - param_1);
    *(float *)(param_2 + 0xfc) = fVar17;
    if (lbl_821CC160 < fVar17) {
      return;
    }
    uVar9 = 1;
    uVar8 = 2;
    break;
  case 2:
    iVar7 = *(int *)(param_2 + 0xdc);
    pfVar3 = (float *)(param_2 + 0x50U & 0xfffffff0);
    fVar18 = *pfVar3;
    fVar19 = pfVar3[1];
    fVar20 = pfVar3[2];
    fVar21 = pfVar3[3];
    uVar2 = param_2 + 0x80U & 0xfffffff0;
    fVar12 = *(float *)(uVar2 + 4);
    fVar14 = *(float *)(uVar2 + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs32,in_vs45); memcpy(auVar10, &_vt0, 16); }
    fVar17 = (0.0 - fVar18) * (0.0 - fVar18) + (fVar12 - fVar19) * (fVar12 - fVar19) +
             (fVar14 - fVar20) * (fVar14 - fVar20);
    fVar12 = fVar12 * fVar12 + 0.0 + fVar14 * fVar14;
    pfVar3 = (float *)((uint)(afStack_40 + uVar4) & 0xfffffff0);
    *pfVar3 = fVar17;
    pfVar3[1] = fVar17;
    pfVar3[2] = fVar17;
    pfVar3[3] = fVar17;
    pfVar3 = (float *)((uint)(afStack_50 + uVar4) & 0xfffffff0);
    *pfVar3 = fVar12;
    pfVar3[1] = fVar12;
    pfVar3[2] = fVar12;
    pfVar3[3] = fVar12;
    if (afStack_50[0] <= afStack_40[0]) {
      return;
    }
    iVar6 = fn_825279F8(iVar7);
    if ((iVar6 == 0) || (iVar6 == 3)) {
      pfVar3 = (float *)(iVar5 + iVar7 + 0x70 & 0xfffffff0);
      *pfVar3 = fVar18;
      pfVar3[1] = fVar19;
      pfVar3[2] = fVar20;
      pfVar3[3] = fVar21;
    }
    else {{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs40,auVar10); memcpy(auVar10, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar10); memcpy(auVar10, &_vt2, 16); }{ V16 _vt3 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs41,auVar10); memcpy(auVar10, &_vt3, 16); }
      vectorConditionalSelect(auVar10,in_vs45,in_vs44);
      puVar1 = (undefined4 *)(iVar5 + iVar7 + 0x70 & 0xfffffff0);
      *puVar1 = in_register_00010430;
      puVar1[1] = in_register_00010434;
      puVar1[2] = in_register_00010438;
      puVar1[3] = in_vr67;
    }
    puVar1 = (undefined4 *)(iVar5 + iVar7 + 0x70 & 0xfffffff0);
    uVar11 = *puVar1;
    uVar13 = puVar1[1];
    uVar15 = puVar1[2];
    uVar16 = puVar1[3];
    *(undefined4 *)(iVar7 + 0x170) = 0;
    puVar1 = (undefined4 *)(iVar7 + 0x60U & 0xfffffff0);
    *puVar1 = uVar11;
    puVar1[1] = uVar13;
    puVar1[2] = uVar15;
    puVar1[3] = uVar16;
    fn_82528948(iVar7);
    goto LAB_822665f8;
  case 3:
    if ((*(int *)(param_2 + 0x53c) == 0) ||
       (fVar17 = (float)((double)*(float *)(param_2 + 0x530) - param_1),
       *(float *)(param_2 + 0x530) = fVar17, lbl_821CC160 <= fVar17)) goto LAB_822664f4;
    uVar9 = 3;
    uVar8 = 4;
    goto LAB_822664ec;
  case 4:
    iVar7 = *(int *)(*(int *)(param_2 + 0xdc) + 400);
    if ((iVar7 == 0) || (*(int *)(**(int **)(iVar7 + 400) + 0x114) == 0)) {
      iVar7 = 1;
    }
    else {
      iVar7 = fn_8255FA88();
    }
    if (iVar7 == 0) goto LAB_822664f4;
    uVar9 = 2;
    uVar8 = 3;
LAB_822664ec:
    fn_82266628(param_2,uVar8,uVar9);
LAB_822664f4:
    fn_82266990(param_2);
    return;
  default:
    goto switchD_822663b4_caseD_5;
  case 6:
    fVar17 = (float)((double)*(float *)(param_2 + 0xfc) - param_1);
    *(float *)(param_2 + 0xfc) = fVar17;
    if (lbl_821CC160 < fVar17) {
      return;
    }
    uVar9 = 6;
    uVar8 = 7;
    break;
  case 7:
    uVar2 = param_2 + 0x50U & 0xfffffff0;
    fVar12 = *(float *)(uVar2 + 4);
    fVar14 = *(float *)(uVar2 + 8);
    uVar2 = param_2 + 0x90U & 0xfffffff0;
    fVar17 = *(float *)(uVar2 + 4);
    fVar18 = *(float *)(uVar2 + 8);
    vectorSubtractFloatingPoint(in_vs32,in_vs45);
    vectorSubtractFloatingPoint(in_vs32,in_vs44);
    fVar17 = fVar17 * fVar17 + 0.0 + fVar18 * fVar18;
    fVar12 = fVar12 * fVar12 + 0.0 + fVar14 * fVar14;
    pfVar3 = (float *)((uint)(afStack_40 + uVar4) & 0xfffffff0);
    *pfVar3 = fVar17;
    pfVar3[1] = fVar17;
    pfVar3[2] = fVar17;
    pfVar3[3] = fVar17;
    pfVar3 = (float *)((uint)(afStack_50 + uVar4) & 0xfffffff0);
    *pfVar3 = fVar12;
    pfVar3[1] = fVar12;
    pfVar3[2] = fVar12;
    pfVar3[3] = fVar12;
    if (afStack_50[0] <= afStack_40[0]) {
      return;
    }
    uVar9 = 7;
    uVar8 = 8;
    break;
  case 9:
  case 10:
    iVar7 = *(int *)(*(int *)(param_2 + 0xdc) + 400);
    if ((iVar7 == 0) || (*(int *)(**(int **)(iVar7 + 400) + 0x114) == 0)) {
      iVar7 = 1;
    }
    else {
      iVar7 = fn_8255FA88();
    }
    if (iVar7 == 0) {
      return;
    }
LAB_822665f8:
    uVar9 = 2;
    uVar8 = 3;
  }
  fn_82266628(param_2,uVar8,uVar9);
switchD_822663b4_caseD_5:
  return;
}

