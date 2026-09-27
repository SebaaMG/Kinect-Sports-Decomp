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
extern int fn_82539560();
extern int fn_8255A0D0();
extern int fn_8255A1C8();
extern int fn_8255A470();
extern int fn_82621418();
extern int fn_82621460();
extern int fn_826214A8();
extern int fn_82621500();
extern int fn_82621548();
extern int fn_82621870();
extern int fn_82F68CC0();
extern int fn_82F6A534();
extern int fn_82F6A580();
extern unsigned int lbl_8218E210;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191118;
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82193D04;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195590;
extern unsigned int lbl_82195598;
extern float lbl_821955A0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825DFC70(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  double extraout_f1;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 auVar17 [16];
  float afStack_80;
  
  piVar3 = (int *)fn_82F6A534();
  dVar10 = lbl_821955A0;
  dVar9 = lbl_82195598;
  iVar5 = piVar3[0x10];
  dVar14 = (double)lbl_821CC160;
  dVar12 = extraout_f1;
  if ((*(int *)(iVar5 + 0x58) != 0) &&
     (dVar12 = extraout_f1, *(float *)(iVar5 + 0x70) < lbl_8218E8E8)) {
    dVar12 = dVar14;
  }
  dVar11 = (double)*(float *)(iVar5 + 0x3c);
  dVar16 = (double)lbl_82195590;
  dVar7 = (double)*(float *)(piVar3[2] + 8);
  dVar13 = dVar14;
  if (dVar11 != dVar14) {
    dVar7 = (double)(float)((double)*(float *)(piVar3[2] + 8) - dVar11) * dVar16;
    dVar13 = (double)(float)(((double)(float)dVar7 - (double)(longlong)dVar7) * lbl_821955A0);
    dVar7 = dVar11;
  }
  dVar7 = (double)(float)(dVar7 - (double)*(float *)(piVar3[7] + 8)) * dVar16;
  dVar7 = (double)(float)((double)(float)((double)(float)(((double)(float)dVar7 -
                                                          (double)(longlong)dVar7) * lbl_821955A0) *
                                          (double)*(float *)(piVar3[0xc] + 4) +
                                         (double)*(float *)(piVar3[7] + 8)) * dVar16);
  dVar7 = (double)(float)((dVar7 - (double)(longlong)(dVar7 - lbl_82195598)) * lbl_821955A0) *
          dVar16;
  *(float *)(piVar3[3] + 8) =
       (float)(((double)(float)dVar7 - (double)(longlong)dVar7) * lbl_821955A0);
  dVar7 = (double)((float)((double)*(float *)(piVar3[2] + 0xc) + dVar13) -
                  *(float *)(piVar3[7] + 0xc)) * dVar16;
  dVar7 = (double)(float)((double)((float)(((double)(float)dVar7 - (double)(longlong)dVar7) * dVar10
                                          ) * *(float *)(piVar3[0xc] + 4) +
                                  *(float *)(piVar3[7] + 0xc)) * dVar16);
  dVar7 = (double)(float)((dVar7 - (double)(longlong)(dVar7 - dVar9)) * dVar10) * dVar16;
  *(float *)(piVar3[3] + 0xc) = (float)(((double)(float)dVar7 - (double)(longlong)dVar7) * dVar10);
  iVar5 = piVar3[8];
  dVar13 = (double)*(float *)(*piVar3 + 0xa0);
  dVar15 = (double)*(float *)(iVar5 + 0xc0);
  dVar7 = (double)fn_82539560(dVar13,(double)*(float *)(iVar5 + 0x90),
                               (double)*(float *)(iVar5 + 0x94),(double)*(float *)(iVar5 + 0x98),
                               (double)*(float *)(iVar5 + 0x9c));
  iVar5 = piVar3[8];
  uVar8 = fn_82539560(dVar13,(double)*(float *)(iVar5 + 0xb0),(double)*(float *)(iVar5 + 0xb4),
                       (double)*(float *)(iVar5 + 0xb8),(double)*(float *)(iVar5 + 0xbc));
  fn_82539560(dVar13,(double)*(float *)(iVar5 + 0xa0),(double)*(float *)(iVar5 + 0xa4),
               (double)*(float *)(iVar5 + 0xa8),(double)*(float *)(iVar5 + 0xac),
               (ulonglong)(uint)piVar3[0xc] + 0x118);
  fn_82621500();
  dVar13 = (double)fn_82621548(param_2);
  iVar5 = *piVar3;
  dVar11 = (double)*(float *)(iVar5 + 0x94);
  if (*(int *)(piVar3[0x10] + 0x5c) != 0) {
    dVar11 = -dVar11;
  }
  dVar1 = (double)*(float *)(iVar5 + 0x50) * dVar16;
  dVar15 = (double)(float)((double)(float)((double)(float)(((double)(float)dVar1 -
                                                           (double)(longlong)dVar1) * dVar10) *
                                          dVar15) * dVar16);
  dVar15 = (double)(float)((dVar15 - (double)(longlong)(dVar15 - dVar9)) * dVar10) * dVar16;
  dVar15 = (double)(float)(((double)(float)dVar15 - (double)(longlong)dVar15) * dVar10);
  dVar11 = (double)(float)(dVar11 - dVar15) * dVar16;
  dVar7 = (double)(float)((double)(float)((double)(float)(((double)(float)dVar11 -
                                                          (double)(longlong)dVar11) * dVar10) *
                                          dVar7 + dVar15) * dVar16);
  dVar7 = (double)(float)((dVar7 - (double)(longlong)(dVar7 - dVar9)) * dVar10) * dVar16;
  dVar7 = (double)(float)(((double)(float)dVar7 - (double)(longlong)dVar7) * dVar10) * dVar16;
  dVar7 = (double)(float)((double)(float)((double)(float)(((double)(float)dVar7 -
                                                          (double)(longlong)dVar7) * dVar10) *
                                         dVar13) * dVar16);
  dVar9 = (double)(float)((dVar7 - (double)(longlong)(dVar7 - dVar9)) * dVar10) * dVar16;
  dVar9 = (double)(float)(((double)(float)dVar9 - (double)(longlong)dVar9) * dVar10);
  if (dVar9 < dVar14) {
    dVar9 = (double)(float)((double)*(float *)(piVar3[8] + 200) * dVar9);
  }
  iVar4 = piVar3[0xc];
  dVar7 = (double)lbl_821CA460;
  if (*(float *)(iVar4 + 0x2fc) < lbl_82191118) {
    dVar13 = (double)fn_82539560((double)(*(float *)(piVar3[0x10] + 0xc) - *(float *)(iVar5 + 4)),
                                  (double)lbl_82192604,(double)lbl_82192F70,dVar14,dVar7);
    dVar9 = (double)(float)(dVar13 * dVar9);
  }
  iVar5 = piVar3[1];
  dVar9 = (double)(float)((double)(*(float *)(piVar3[8] + 0xd0) * *(float *)(piVar3[0xd] + 0x2c8) +
                                  *(float *)(iVar4 + 0xa4)) + dVar9) * dVar16;
  dVar13 = (double)(float)(((double)(float)dVar9 - (double)(longlong)dVar9) * dVar10);
  fn_8255A1C8((double)*(float *)(iVar5 + 0x30),(double)*(float *)(iVar5 + 0x34),
                    (double)*(float *)(iVar5 + 0x38));{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs33,in_vs32); memcpy(auVar17, &_vt0, 16); }
  fn_8255A0D0(&afStack_80);
  dVar9 = (double)*(float *)(piVar3[8] + 0xc4);
  if ((*(char *)(piVar3[8] + 0xe) != '\0') && (*(int *)(piVar3[0x10] + 0x58) != 0)) {
    dVar9 = (double)lbl_8218E8E8;
  }
  dVar9 = (double)fn_82621870(dVar13,(double)afStack_80,param_2,dVar9);
  if (*(int *)(piVar3[0xf] + 0xc) == 0) {
    dVar13 = (double)fn_82621870((double)*(float *)(piVar3[1] + 0x30),dVar9,param_2,uVar8);
    *(float *)(piVar3[1] + 0x30) = (float)dVar13;
  }
  else {
    *(float *)(piVar3[1] + 0x30) = (float)dVar9;
  }
  fn_82621418((double)lbl_82193AF0,(ulonglong)(uint)piVar3[0xc] + 0xf0);
  fn_82621460((ulonglong)(uint)piVar3[0xc] + 0xf0);
  if (*(int *)(piVar3[8] + 0xd4) != 0) {
    uVar6 = (ulonglong)(uint)piVar3[0xc];
    if (*(int *)(piVar3[8] + 0xe0) == 0) {
      dVar9 = (double)(float)(dVar9 + dVar12) * dVar16;
      dVar9 = (double)fn_82621500((double)(float)(((double)(float)dVar9 - (double)(longlong)dVar9)
                                                  * dVar10),uVar6 + 0x280);
    }
    else {
      fn_82F68CC0(uVar6 + 0x2a8,uVar6 + 0x280,0x28);
      iVar5 = piVar3[0xc];
      fn_8255A470((double)(float)((double)*(float *)(piVar3[8] + 0xe4) * dVar12 +
                                  (double)*(float *)(iVar5 + 0x280)),
                   (double)*(float *)(iVar5 + 0x29c),(double)*(float *)(iVar5 + 0x2a0));
      fn_82621500((ulonglong)(uint)piVar3[0xc] + 0x280);
      fn_82621460((double)*(float *)(piVar3[8] + 0xf0),(ulonglong)(uint)piVar3[0xc] + 0x280);
      fn_82621418((ulonglong)(uint)piVar3[0xc] + 0x280);
      fn_82621460((ulonglong)(uint)piVar3[0xc] + 0xf0);
      fn_82621418((ulonglong)(uint)piVar3[0xc] + 0xf0);
      fn_82621548(param_2,(ulonglong)(uint)piVar3[0xc] + 0x280);
      dVar9 = (double)*(float *)(piVar3[0xc] + 0x280);
    }
  }
  if (*(int *)(piVar3[0xf] + 0xc) == 0) {
    fn_82621500();
  }
  else {
    fn_826214A8(dVar9,(ulonglong)(uint)piVar3[0xc] + 0xf0);
  }
  if (*(int *)(piVar3[8] + 0xd4) == 0) {
    iVar5 = piVar3[0xc];
    uVar2 = *(undefined4 *)(piVar3[0xd] + 4);
    *(undefined4 *)(iVar5 + 0x10c) = *(undefined4 *)(piVar3[0xd] + 0x2c);
    *(undefined4 *)(iVar5 + 0x110) = uVar2;
  }
  dVar9 = (double)fn_82621548(param_2,(ulonglong)(uint)piVar3[0xc] + 0xf0);
  *(float *)(piVar3[1] + 0x30) = (float)dVar9;
  iVar5 = piVar3[1];
  *(float *)(iVar5 + 0x3c) =
       (*(float *)(iVar5 + 0x30) - *(float *)(piVar3[0xe] + 0x30)) + *(float *)(iVar5 + 0x3c);
  iVar5 = piVar3[1];
  fn_8255A1C8((double)*(float *)(iVar5 + 0x30),(double)*(float *)(iVar5 + 0x34),
                    (double)*(float *)(iVar5 + 0x38));
  vectorSubtractFloatingPoint(auVar17,in_vs32);
  fn_8255A0D0(&afStack_80);
  iVar5 = piVar3[8];
  dVar9 = -(double)(-(float)((double)*(float *)(piVar3[0xc] + 0x194) *
                             (double)*(float *)(iVar5 + 0xd8) - dVar7) * *(float *)(piVar3[3] + 8) -
                   (*(float *)(piVar3[0xc] + 0x144) + *(float *)(piVar3[3] + 0xc))) * dVar16;
  dVar16 = (double)(float)((double)(float)(((double)(float)dVar9 - (double)(longlong)dVar9) * dVar10
                                          ) + (double)afStack_80) * dVar16;
  dVar10 = (double)(float)(((double)(float)dVar16 - (double)(longlong)dVar16) * dVar10);
  dVar9 = (double)fn_82539560(ABS((double)afStack_80),(double)lbl_82193D04,(double)lbl_82191FB0,
                               dVar14,(double)lbl_8218E210);
  if (*(int *)(piVar3[0xf] + 0x1c) == 0) {
    dVar12 = (double)(float)(dVar9 - (double)*(float *)(iVar5 + 0xcc));
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar12 < dVar14) << 2) | (uint)(NAN(dVar12) || NAN(dVar14)) << 2))
        < 0.0) {
      dVar9 = (double)*(float *)(iVar5 + 0xcc);
    }
    dVar9 = (double)fn_82621870((double)*(float *)(piVar3[1] + 0x3c),dVar10,dVar9,param_2);
    *(float *)(piVar3[1] + 0x3c) = (float)dVar9;
  }
  else {
    *(float *)(piVar3[1] + 0x3c) = (float)dVar10;
  }
  fn_82F6A580();
  return;
}

