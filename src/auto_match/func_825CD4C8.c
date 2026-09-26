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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_825200A8();
extern int fn_82522D98();
extern int fn_825CDA68();
extern int fn_825CE4D0();
extern int fn_825CE590();
extern int fn_82630040();
extern int fn_82837D98();
extern int fn_828F35B0();
extern int fn_82A1F2B8();
extern int fn_82F6A524();
extern int fn_82F6A570();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83265A28;


void fn_825CD4C8(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,double param_9,double param_10,
                  double param_11,double param_12,undefined8 param_13,undefined8 param_14,
                  ulonglong param_15,ulonglong param_16,int param_17)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  undefined8 in_r0;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar13;
  double dVar14;
  double extraout_f1;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float afStack_c0 [48];
  int iVar12;
  
  iVar6 = fn_82F6A524();
  dVar15 = extraout_f1;
  if (*(char *)(iVar6 + 0x11d) == '\0') {
    fn_825CDA68();
  }
  iVar12 = (int)in_r0;
  cVar1 = *(char *)(iVar6 + 0x11c);
  while (cVar1 != '\0') {
    fn_82A1F2B8(0xffffffff821c91cc);
    iVar12 = (int)in_r0;
    cVar1 = *(char *)(iVar6 + 0x11c);
  }
  *(undefined1 *)(iVar6 + 0x11c) = 1;
  iVar7 = fn_82522D98(0xd0);
  puVar9 = (undefined4 *)(iVar12 + param_17 & 0xfffffff0);
  uVar10 = puVar9[1];
  uVar17 = puVar9[2];
  uVar18 = puVar9[3];
  puVar13 = (undefined4 *)(iVar12 + iVar7 + 0x20 & 0xfffffff0);
  *puVar13 = *puVar9;
  puVar13[1] = uVar10;
  puVar13[2] = uVar17;
  puVar13[3] = uVar18;
  puVar9 = (undefined4 *)(param_17 + 0x10U & 0xfffffff0);
  uVar10 = puVar9[1];
  uVar17 = puVar9[2];
  uVar18 = puVar9[3];
  puVar13 = (undefined4 *)(iVar7 + 0x30U & 0xfffffff0);
  *puVar13 = *puVar9;
  puVar13[1] = uVar10;
  puVar13[2] = uVar17;
  puVar13[3] = uVar18;
  puVar9 = (undefined4 *)(param_17 + 0x20U & 0xfffffff0);
  uVar10 = puVar9[1];
  uVar17 = puVar9[2];
  uVar18 = puVar9[3];
  puVar13 = (undefined4 *)(iVar7 + 0x40U & 0xfffffff0);
  *puVar13 = *puVar9;
  puVar13[1] = uVar10;
  puVar13[2] = uVar17;
  puVar13[3] = uVar18;
  puVar9 = (undefined4 *)(param_17 + 0x30U & 0xfffffff0);
  uVar10 = puVar9[1];
  uVar17 = puVar9[2];
  uVar18 = puVar9[3];
  puVar13 = (undefined4 *)(iVar7 + 0x50U & 0xfffffff0);
  *puVar13 = *puVar9;
  puVar13[1] = uVar10;
  puVar13[2] = uVar17;
  puVar13[3] = uVar18;
  fVar3 = lbl_821CC160;
  dVar14 = (double)lbl_8218E8E8;
  dVar16 = (double)lbl_821CC160;
  *(float *)(iVar7 + 0x60) = (float)param_5;
  *(float *)(iVar7 + 0x68) = (float)param_6;
  *(float *)(iVar7 + 0x6c) = (float)param_7;
  *(float *)(iVar7 + 0x74) = (float)param_8;
  *(float *)(iVar7 + 0x84) =
       SQRT((float)(param_3 * param_3 +
                   (double)(float)(dVar15 * dVar15 + (double)(float)(param_2 * param_2))));
  *(float *)(iVar7 + 0x88) = (float)param_4;
  *(float *)(iVar7 + 0x8c) = fVar3;
  *(float *)(iVar7 + 0x78) = (float)(dVar15 * dVar14);
  *(float *)(iVar7 + 0x7c) = (float)(param_2 * dVar14);
  *(float *)(iVar7 + 0x80) = (float)(param_3 * dVar14);
  iVar12 = *(int *)(iVar6 + 300);
  if (iVar12 == 0) {
    puVar9 = (undefined4 *)fn_82522D98(0xc);
    *(undefined4 **)(iVar6 + 300) = puVar9;
  }
  else {
    do {
      iVar8 = fn_825200A8(iVar12,param_14);
      if (iVar8 != 0) {
        uVar10 = *(undefined4 *)(iVar12 + 4);
        goto LAB_825cd67c;
      }
      puVar13 = (undefined4 *)(iVar12 + 8);
      iVar12 = *(int *)(iVar12 + 8);
    } while (iVar12 != 0);
    puVar9 = (undefined4 *)fn_82522D98(0xc);
    *puVar13 = puVar9;
  }
  puVar9[2] = 0;
  *puVar9 = *(undefined4 *)param_14;
  uVar4 = fn_8251F720(param_14,0);
  uVar5 = fn_8251FBA8();
  fn_828F35B0(lbl_8320A898,uVar4,uVar5,puVar9 + 1);
  fn_8251FA58(uVar4);
  uVar10 = puVar9[1];
LAB_825cd67c:
  *(undefined4 *)(iVar7 + 0xb4) = uVar10;
  if ((param_15 & 0xffffffff) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = fn_825CE4D0(iVar6,param_15);
  }
  *(undefined4 *)(iVar7 + 0xb8) = uVar10;
  if ((param_16 & 0xffffffff) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = fn_825CE590(iVar6,param_16);
  }
  *(undefined4 *)(iVar7 + 0xbc) = uVar10;
  if (*(int *)(iVar6 + 0x138) == 0) {
    afStack_c0[0] = 0.0;
  }
  else {
    fn_82837D98(*(undefined4 *)(*(int *)(iVar6 + 0x138) + 0x14),0,afStack_c0);
  }
  *(float *)(iVar7 + 0xc0) = afStack_c0[0];
  dVar15 = -param_9;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar2 = lbl_83265A28 & 0x7fffff;
  *(float *)(iVar7 + 0x14) = (float)dVar16;
  fVar3 = lbl_821CA460;
  *(float *)(iVar7 + 0x10) =
       (float)((double)((float)(uVar2 | 0x3f800000) - lbl_821CA460) *
               (double)(float)(param_9 - dVar15) + dVar15);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar2 = lbl_83265A28 & 0x7fffff;
  *(float *)(iVar7 + 0xa4) = (float)param_9;
  *(float *)(iVar7 + 0x18) =
       (float)((double)((float)(uVar2 | 0x3f800000) - fVar3) * (double)(float)(param_9 - dVar15) +
              dVar15);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar2 = lbl_83265A28 & 0x7fffff;
  *(float *)(iVar7 + 0x94) = (float)param_10;
  *(undefined4 *)(iVar7 + 0xc4) = 0;
  afStack_c0[0] = (float)(uVar2 | 0x3f800000);
  *(float *)(iVar7 + 0x98) = (float)param_11;
  *(float *)(iVar7 + 0xa0) = (float)param_12;
  *(float *)(iVar7 + 0x9c) = (float)param_12;
  *(float *)(iVar7 + 0x90) =
       (float)((double)(float)(param_11 - param_10) * (double)(afStack_c0[0] - fVar3) + param_10);
  uVar10 = fn_82630040(0xa00,0x200,0,0x3c6ef35f);
  *(undefined4 *)(iVar7 + 0xa8) = uVar10;
  uVar10 = fn_82630040(0xa00,0x200,0);
  *(undefined4 *)(iVar7 + 0xac) = uVar10;
  uVar10 = fn_82630040(0xa00,0x200,0);
  *(undefined4 *)(iVar7 + 0xb0) = uVar10;
  iVar12 = *(int *)(iVar6 + 0x124);
  if (iVar12 == 0) {
    *(int *)(iVar6 + 0x124) = iVar7;
  }
  else {
    while (piVar11 = (int *)(iVar12 + 0xc4), *piVar11 != 0) {
      iVar12 = *piVar11;
    }
    *piVar11 = iVar7;
  }
  *(undefined1 *)(iVar6 + 0x11c) = 0;
  fn_82F6A570(iVar7);
  return;
}

