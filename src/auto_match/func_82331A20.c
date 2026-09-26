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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define NAN(x) ((x) != (x))
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_8252AFE0();
extern int fn_825319C0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82331A20(double param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  int in_r0;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 in_vs32 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  float fStack_50;
  float fStack_4c;
  
  fVar1 = lbl_82192734;
  fStack_50 = (float)(param_1 * (double)*(float *)(param_2 + 0xa8) +
                     (double)*(float *)(param_2 + 0xa0));
  pfVar9 = (float *)(param_2 + 0xa8);
  fStack_4c = (float)(param_1 * (double)*(float *)(param_2 + 0xac) +
                     (double)*(float *)(param_2 + 0xa4));
  pfVar6 = (float *)(param_2 + 0xa0);
  bVar5 = false;
  if ((fStack_50 < *(float *)(param_2 + 0xd8)) || (*(float *)(param_2 + 0xdc) < fStack_50)) {
    bVar5 = true;
    *pfVar9 = *pfVar9 * lbl_82192734;
  }
  if ((fStack_4c < *(float *)(param_2 + 0xe0)) || (*(float *)(param_2 + 0xe4) < fStack_4c)) {
    bVar5 = true;
    *(float *)(param_2 + 0xac) = *(float *)(param_2 + 0xac) * fVar1;
  }
  if (bVar5) {
    fStack_50 = (float)(param_1 * (double)*pfVar9 + (double)*pfVar6);
    fStack_4c = (float)(param_1 * (double)*(float *)(param_2 + 0xac) +
                       (double)*(float *)(param_2 + 0xa4));
  }
  uVar2 = *(uint *)(param_2 + 0xd4);
  *(ulonglong *)pfVar6 = CONCAT44(fStack_50,fStack_4c);
  dVar13 = (double)lbl_821CC160;
  dVar12 = (double)lbl_821CA460;
  if (uVar2 == 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xb8) * param_1 +
                   (double)*(float *)(param_2 + 0xbc));
    *(float *)(param_2 + 0xbc) = fVar1;
    if (fVar1 < *(float *)(param_2 + 0xb4)) goto LAB_82331bf8;
    uVar8 = 3;
  }
  else {
    if (uVar2 != 1) {
      if (uVar2 < 3) {
        fVar1 = (float)((double)*(float *)(param_2 + 200) - param_1);
        *(float *)(param_2 + 200) = fVar1;
        if ((double)fVar1 <= dVar13) {
          *(undefined4 *)(param_2 + 0xd4) = 0;
        }
      }
      else if ((uVar2 == 3) &&
              (fVar1 = (float)((double)*(float *)(param_2 + 200) - param_1),
              *(float *)(param_2 + 200) = fVar1, (double)fVar1 <= dVar13)) {
        *(undefined4 *)(param_2 + 0xd4) = 1;
      }
      goto LAB_82331bf8;
    }
    fVar1 = -(float)((double)*(float *)(param_2 + 0xb8) * param_1 -
                    (double)*(float *)(param_2 + 0xbc));
    *(float *)(param_2 + 0xbc) = fVar1;
    if (*(float *)(param_2 + 0xb0) < fVar1) goto LAB_82331bf8;
    uVar8 = 2;
  }
  *(undefined4 *)(param_2 + 0xd4) = uVar8;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_2 + 200) =
       (*(float *)(param_2 + 0xc4) - *(float *)(param_2 + 0xc0)) *
       (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar12) +
       *(float *)(param_2 + 0xc0);
LAB_82331bf8:
  fn_825319C0((double)*(float *)(param_2 + 0xbc),pfVar6,param_3,
                    *(undefined4 *)(param_2 + 0x74));
  iVar3 = *(int *)(param_2 + 0x10);
  iVar7 = fn_825279F8(iVar3);
  if ((iVar7 == 0) || (iVar7 == 3)) {
    puVar4 = (undefined4 *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
    *puVar4 = in_register_00010010;
    puVar4[1] = in_register_00010014;
    puVar4[2] = in_register_00010018;
    puVar4[3] = in_vr1;
  }
  else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs40,in_vs32); memcpy(auVar14, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar14); memcpy(auVar14, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs41,auVar14); memcpy(auVar14, &_vt2, 16); }
    vectorConditionalSelect(auVar14,in_vs45,in_vs44);
    puVar4 = (undefined4 *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
    *puVar4 = in_register_00010430;
    puVar4[1] = in_register_00010434;
    puVar4[2] = in_register_00010438;
    puVar4[3] = in_vr67;
  }
  puVar4 = (undefined4 *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
  uVar8 = *puVar4;
  uVar15 = puVar4[1];
  uVar16 = puVar4[2];
  uVar17 = puVar4[3];
  *(undefined4 *)(iVar3 + 0x170) = 0;
  puVar4 = (undefined4 *)(iVar3 + 0x60U & 0xfffffff0);
  *puVar4 = uVar8;
  puVar4[1] = uVar15;
  puVar4[2] = uVar16;
  puVar4[3] = uVar17;
  fn_82528948(iVar3);
  dVar10 = (double)(float)(dVar12 - (double)((*(float *)(param_2 + 0xbc) -
                                             *(float *)(param_2 + 0xb0)) /
                                            (*(float *)(param_2 + 0xb4) - *(float *)(param_2 + 0xb0)
                                            )));
  dVar11 = (double)(float)(dVar10 - (double)*(float *)(param_2 + 0xcc));
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar11 < dVar13) << 2) | (uint)(NAN(dVar11) || NAN(dVar13)) << 2)) <
      0.0) {
    dVar10 = (double)*(float *)(param_2 + 0xcc);
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(float)(dVar10 - dVar12) < dVar13) << 2) |
                (uint)(NAN((double)(float)(dVar10 - dVar12)) || NAN(dVar13)) << 2)) < 0.0) {
    dVar12 = dVar10;
  }
  fn_8252AFE0(dVar12,*(undefined4 *)(param_2 + 0x10));
  return;
}

