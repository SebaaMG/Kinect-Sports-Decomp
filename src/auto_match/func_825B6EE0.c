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
#define NAN(x) ((x) != (x))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_48;
extern int fn_82539560();
extern int fn_8255A160();
extern int fn_82809D40();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954B0;
extern unsigned int lbl_82195854;
extern unsigned int lbl_82195858;
extern unsigned int lbl_8219585C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F894;


void fn_825B6EE0(undefined8 param_1,double param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  int in_r0;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  float *pfVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  float afStack_50 [2];
  float fStack_48;
  
  iVar5 = fn_82F6A548();
  fVar4 = lbl_82191FC8;
  puVar6 = &lbl_821954B0;
  dVar17 = (double)lbl_821CC160;
  if (((((double)lbl_82195854 < ABS(extraout_f1)) || ((double)lbl_82195854 < ABS(param_2))) ||
      (iVar7 = (int)param_7 * 0x18 + iVar5, extraout_f1 != (double)*(float *)(iVar7 + 0x10))) ||
     (param_2 != (double)*(float *)(iVar7 + 0x14))) {
    iVar7 = (int)param_7 * 0x18 + iVar5;
    *(float *)(iVar7 + 0x18) = lbl_821CC160;
  }
  else {
    fVar1 = *(float *)(iVar7 + 0x18) + lbl_8327F894;
    *(float *)(iVar7 + 0x18) = fVar1;
    uVar3 = lbl_821917C0;
    if (fVar4 <= fVar1) {
      *(float *)(iVar7 + 8) = (float)extraout_f1;
      *(float *)(iVar7 + 0xc) = (float)param_2;
      *(undefined4 *)(iVar7 + 4) = uVar3;
    }
  }
  dVar16 = (double)lbl_82195858;
  dVar21 = (double)(float)((double)*(float *)(iVar7 + 4) * dVar16);
  dVar15 = (double)lbl_8219585C;
  dVar20 = (double)(float)((double)*(float *)(iVar7 + 4) * dVar15);
  dVar19 = (double)lbl_82192734;
  *(float *)(iVar7 + 0x10) = (float)extraout_f1;
  *(float *)(iVar7 + 0x14) = (float)param_2;
  dVar18 = (double)lbl_821CA460;
  dVar12 = (double)(float)((double)*(float *)(iVar7 + 8) + dVar21);
  dVar11 = (double)(float)(dVar20 + (double)*(float *)(iVar7 + 8));
  dVar13 = dVar16;
  dVar9 = dVar19;
  dVar14 = dVar17;
  dVar10 = dVar17;
  if ((extraout_f1 < dVar12) ||
     (dVar13 = dVar11, dVar12 = dVar15, dVar9 = dVar17, dVar14 = dVar18, dVar11 < extraout_f1)) {
    puVar6 = &lbl_821954B0;
    dVar9 = (double)fn_82539560(extraout_f1,dVar13,dVar12,dVar9,dVar14);
  }
  dVar13 = (double)(float)((double)*(float *)(iVar7 + 0xc) + dVar21);
  dVar11 = (double)(float)((double)*(float *)(iVar7 + 0xc) + dVar20);
  dVar12 = dVar19;
  dVar14 = dVar10;
  if ((param_2 < dVar13) ||
     (dVar16 = dVar11, dVar13 = dVar15, dVar12 = dVar10, dVar14 = dVar18, dVar11 < param_2)) {
    dVar17 = (double)fn_82539560(param_2,dVar16,dVar13,dVar12,dVar14);
  }
  dVar16 = (double)SQRT((float)(dVar17 * dVar17 + (double)(float)(dVar9 * dVar9)));
  if (dVar16 != dVar10) {
    if (*(float *)((int)puVar6 +
                  ((uint)(byte)(((double)(float)(dVar16 - dVar19) < dVar10) << 2) |
                  (uint)(NAN((double)(float)(dVar16 - dVar19)) || NAN(dVar10)) << 2) + 0x28) < 0.0)
    {
      dVar16 = dVar19;
    }
    if (*(float *)((int)puVar6 +
                  ((uint)(byte)(((double)(float)(dVar16 - dVar18) < dVar10) << 2) |
                  (uint)(NAN((double)(float)(dVar16 - dVar18)) || NAN(dVar10)) << 2) + 0x28) < 0.0)
    {
      dVar18 = dVar16;
    }
    if ((dVar9 != dVar10) || (dVar17 != dVar10)) {
      dVar10 = (double)fn_82809D40(dVar17,dVar9);
    }
    fn_8255A160(dVar10,dVar18);
    puVar2 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    dVar9 = (double)fStack_48;
    dVar17 = (double)afStack_50[0];
  }
  pfVar8 = (float *)((int)((param_7 + 2U & 0xffffffff) << 3) + param_4);
  *pfVar8 = (float)dVar9;
  pfVar8[1] = (float)dVar17;
  fn_82F6A594();
  return;
}

