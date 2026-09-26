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
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82463578();
extern int fn_82F4EBC0();
extern int fn_82F4EEC0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195530;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_82463328(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  int in_r0;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  uVar8 = fn_82F4EBC0(0);
  fn_82F4EEC0(&fStack_30,uVar8);
  fVar1 = *(float *)(param_1 + 0x2c8);
  fVar2 = *(float *)(param_1 + 0x2cc);
  fVar3 = *(float *)(param_1 + 0x2d4);
  fVar4 = *(float *)(param_1 + 0x2d0);
  puVar5 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  uVar14 = puVar5[1];
  uVar15 = puVar5[2];
  uVar16 = puVar5[3];
  puVar6 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar14;
  puVar6[2] = uVar15;
  puVar6[3] = uVar16;
  bVar7 = true;
  dVar10 = (double)fStack_28;
  dVar11 = (double)fStack_30;
  dVar13 = (double)lbl_821CC160;
  dVar12 = (double)lbl_82195530;
  fStack_2c = lbl_821CC160;
  dVar9 = dVar12;
  if ((double)((float)(dVar10 - (double)fVar2) * (float)((double)fVar4 - (double)fVar1) -
              (float)(dVar11 - (double)fVar1) * (float)((double)fVar3 - (double)fVar2)) <= dVar13) {
    bVar7 = false;
    dVar9 = (double)fn_82463578(*(undefined8 *)(param_1 + 0x2b0),*(undefined8 *)(param_1 + 0x2b8),
                                  *(undefined8 *)(param_1 + 0x2c8),*(undefined8 *)(param_1 + 0x2d0))
    ;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(dVar12 - dVar9) < dVar13) << 2) |
                  (uint)(NAN((double)(float)(dVar12 - dVar9)) || NAN(dVar13)) << 2)) < 0.0) {
      dVar9 = dVar12;
    }
  }
  dVar12 = dVar9;
  if ((double)((float)(dVar10 - (double)*(float *)(param_1 + 0x2d4)) *
               (float)((double)*(float *)(param_1 + 0x2d8) - (double)*(float *)(param_1 + 0x2d0)) -
              (float)((double)*(float *)(param_1 + 0x2dc) - (double)*(float *)(param_1 + 0x2d4)) *
              (float)(dVar11 - (double)*(float *)(param_1 + 0x2d0))) <= dVar13) {
    bVar7 = false;
    dVar12 = (double)fn_82463578(*(undefined8 *)(param_1 + 0x2b8),*(undefined8 *)(param_1 + 0x2c0)
                                   ,*(undefined8 *)(param_1 + 0x2d0),
                                   *(undefined8 *)(param_1 + 0x2d8));
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(dVar9 - dVar12) < dVar13) << 2) |
                  (uint)(NAN((double)(float)(dVar9 - dVar12)) || NAN(dVar13)) << 2)) < 0.0) {
      dVar12 = dVar9;
    }
  }
  dVar9 = dVar12;
  if ((double)((float)(dVar10 - (double)*(float *)(param_1 + 0x2dc)) *
               (float)((double)*(float *)(param_1 + 0x2c8) - (double)*(float *)(param_1 + 0x2d8)) -
              (float)((double)*(float *)(param_1 + 0x2cc) - (double)*(float *)(param_1 + 0x2dc)) *
              (float)(dVar11 - (double)*(float *)(param_1 + 0x2d8))) <= dVar13) {
    bVar7 = false;
    dVar9 = (double)fn_82463578(*(undefined8 *)(param_1 + 0x2c0),*(undefined8 *)(param_1 + 0x2b0),
                                  *(undefined8 *)(param_1 + 0x2d8),*(undefined8 *)(param_1 + 0x2c8))
    ;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(dVar12 - dVar9) < dVar13) << 2) |
                  (uint)(NAN((double)(float)(dVar12 - dVar9)) || NAN(dVar13)) << 2)) < 0.0) {
      dVar9 = dVar12;
    }
  }
  if (bVar7) {
    dVar10 = (double)lbl_821CA460;
  }
  else {
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar9 < dVar13) << 2) | (uint)(NAN(dVar9) || NAN(dVar13)) << 2)) <
        0.0) {
      dVar9 = dVar13;
    }
    dVar11 = (double)(float)(dVar9 - (double)lbl_821CA460);
    dVar10 = (double)lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar11 < dVar13) << 2) | (uint)(NAN(dVar11) || NAN(dVar13)) << 2))
        < 0.0) {
      dVar10 = dVar9;
    }
  }
  return dVar10;
}

