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
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8255AE78();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern V16 vectorSubtractFloatingPoint();


int fn_825BC0E0(int param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  uVar2 = *(uint *)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 0x3c);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  dVar10 = (double)lbl_821CC160;
  puVar3 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  dVar11 = dVar10;
  if ((double)fVar1 != dVar10) {
    fn_8255AE78(-(double)fVar1);
    puVar3 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
  }
  dVar9 = (double)(fStack_50 - *(float *)(param_1 + 0x30));
  dVar8 = (double)(fStack_48 - *(float *)(param_1 + 0x38));
  iVar5 = 1;
  dVar6 = (double)(-*(float *)(param_1 + 0x30) - fStack_50);
  dVar7 = (double)(-*(float *)(param_1 + 0x38) - fStack_48);
  if ((((dVar11 < dVar6) || (dVar11 < dVar9)) || (dVar11 < dVar7)) || (dVar11 < dVar8)) {
    iVar5 = 0;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar6 < dVar11) << 2) | (uint)(NAN(dVar6) || NAN(dVar11)) << 2)) <
        0.0) {
      dVar6 = dVar11;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar7 < dVar11) << 2) | (uint)(NAN(dVar7) || NAN(dVar11)) << 2)) <
        0.0) {
      dVar7 = dVar11;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(dVar9 - dVar6) < dVar11) << 2) |
                  (uint)(NAN((double)(float)(dVar9 - dVar6)) || NAN(dVar11)) << 2)) < 0.0) {
      dVar9 = dVar6;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(dVar8 - dVar7) < dVar11) << 2) |
                  (uint)(NAN((double)(float)(dVar8 - dVar7)) || NAN(dVar11)) << 2)) < 0.0) {
      dVar8 = dVar7;
    }
    dVar10 = (double)SQRT((float)(dVar8 * dVar8 + (double)(float)(dVar9 * dVar9)));
  }
  if ((uVar2 & 0x80) == 0) {
    puVar3 = (undefined4 *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
    uVar12 = puVar3[1];
    uVar13 = puVar3[2];
    uVar14 = puVar3[3];
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    fVar1 = *(float *)(param_1 + 0x34);
    puVar4 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar12;
    puVar4[2] = uVar13;
    puVar4[3] = uVar14;
    dVar9 = (double)fVar1;
    if ((double)fVar1 == dVar11) {
      dVar6 = (double)(float)((double)*(float *)(param_1 + 0x30) -
                             (double)*(float *)(param_1 + 0x38));
      dVar9 = (double)*(float *)(param_1 + 0x30);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar6 < dVar11) << 2) | (uint)(NAN(dVar6) || NAN(dVar11)) << 2))
          < 0.0) {
        dVar9 = (double)*(float *)(param_1 + 0x38);
      }
    }
    dVar6 = (double)(float)(ABS((double)fStack_4c) - dVar9);
    dVar9 = dVar11;
    if (dVar11 < dVar6) {
      dVar9 = dVar6;
    }
    if ((iVar5 == 0) || (dVar11 < dVar6)) {
      iVar5 = 0;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar10 < dVar11) << 2) | (uint)(NAN(dVar10) || NAN(dVar11)) << 2)
                    ) < 0.0) {
        dVar10 = dVar11;
      }
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar9 < dVar11) << 2) | (uint)(NAN(dVar9) || NAN(dVar11)) << 2))
          < 0.0) {
        dVar9 = dVar11;
      }
      *param_3 = SQRT((float)(dVar9 * dVar9 + (double)(float)(dVar10 * dVar10)));
    }
    else {
      iVar5 = 1;
    }
  }
  else {
    *param_3 = (float)dVar10;
  }
  return iVar5;
}

