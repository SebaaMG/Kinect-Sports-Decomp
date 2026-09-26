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
extern int fn_82522D98();
extern int fn_825CDA68();
extern int fn_825CE590();
extern int fn_82A1F2B8();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_825CD858(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,double param_9,double param_10,
                  undefined8 param_11,ulonglong param_12,int param_13)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fVar5;
  undefined8 in_r0;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  double dVar10;
  double extraout_f1;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  iVar7 = fn_82F6A530();
  dVar11 = extraout_f1;
  if (*(char *)(iVar7 + 0x11d) == '\0') {
    fn_825CDA68();
  }
  iVar6 = (int)in_r0;
  cVar1 = *(char *)(iVar7 + 0x11c);
  while (cVar1 != '\0') {
    fn_82A1F2B8(0xffffffff821c91cc);
    iVar6 = (int)in_r0;
    cVar1 = *(char *)(iVar7 + 0x11c);
  }
  *(undefined1 *)(iVar7 + 0x11c) = 1;
  iVar8 = fn_82522D98(0x90);
  puVar2 = (undefined4 *)(iVar6 + param_13 & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar13 = puVar2[2];
  uVar14 = puVar2[3];
  puVar3 = (undefined4 *)(iVar6 + iVar8 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar13;
  puVar3[3] = uVar14;
  puVar2 = (undefined4 *)(param_13 + 0x10U & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar13 = puVar2[2];
  uVar14 = puVar2[3];
  puVar3 = (undefined4 *)(iVar8 + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar13;
  puVar3[3] = uVar14;
  puVar2 = (undefined4 *)(param_13 + 0x20U & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar13 = puVar2[2];
  uVar14 = puVar2[3];
  puVar3 = (undefined4 *)(iVar8 + 0x20U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar13;
  puVar3[3] = uVar14;
  fVar5 = lbl_821CC160;
  dVar10 = (double)lbl_8218E8E8;
  puVar2 = (undefined4 *)(param_13 + 0x30U & 0xfffffff0);
  uVar9 = *puVar2;
  uVar13 = puVar2[1];
  uVar14 = puVar2[2];
  uVar15 = puVar2[3];
  dVar12 = (double)lbl_821CC160;
  *(float *)(iVar8 + 0x40) = (float)param_3;
  *(float *)(iVar8 + 0x44) = (float)param_4;
  *(float *)(iVar8 + 0x48) = (float)param_5;
  *(float *)(iVar8 + 0x4c) = (float)param_6;
  *(float *)(iVar8 + 0x50) = (float)(dVar11 * dVar10);
  *(float *)(iVar8 + 0x54) = (float)(param_2 * dVar10);
  *(float *)(iVar8 + 0x58) = fVar5;
  puVar2 = (undefined4 *)(iVar8 + 0x30U & 0xfffffff0);
  *puVar2 = uVar9;
  puVar2[1] = uVar13;
  puVar2[2] = uVar14;
  puVar2[3] = uVar15;
  if ((param_12 & 0xffffffff) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = fn_825CE590(iVar7,param_12);
  }
  *(undefined4 *)(iVar8 + 0x84) = uVar9;
  dVar11 = -param_7;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar4 = lbl_83265A28 & 0x7fffff;
  *(float *)(iVar8 + 0x74) = (float)dVar12;
  fVar5 = lbl_821CA460;
  *(float *)(iVar8 + 0x70) =
       (float)((double)((float)(uVar4 | 0x3f800000) - lbl_821CA460) *
               (double)(float)(param_7 - dVar11) + dVar11);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar4 = lbl_83265A28 & 0x7fffff;
  *(float *)(iVar8 + 0x80) = (float)param_7;
  *(float *)(iVar8 + 0x78) =
       (float)((double)((float)(uVar4 | 0x3f800000) - fVar5) * (double)(float)(param_7 - dVar11) +
              dVar11);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar4 = lbl_83265A28 & 0x7fffff;
  *(float *)(iVar8 + 0x60) = (float)param_8;
  *(float *)(iVar8 + 100) = (float)param_9;
  *(float *)(iVar8 + 0x6c) = (float)param_10;
  *(float *)(iVar8 + 0x68) = (float)param_10;
  *(float *)(iVar8 + 0x5c) =
       (float)((double)(float)(param_9 - param_8) * (double)((float)(uVar4 | 0x3f800000) - fVar5) +
              param_8);
  *(undefined4 *)(iVar8 + 0x88) = *(undefined4 *)(iVar7 + 0x128);
  *(int *)(iVar7 + 0x128) = iVar8;
  *(undefined1 *)(iVar7 + 0x11c) = 0;
  fn_82F6A57C(iVar8);
  return;
}

