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
extern unsigned int fStack_68;
extern int fn_82809950();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82193E2C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_70;


void fn_8226B1F8(undefined8 param_1,float *param_2,float *param_3,float *param_4,
                  undefined1 *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  undefined4 *puVar6;
  bool bVar7;
  int in_r0;
  int iVar8;
  int iVar9;
  bool bVar11;
  float *pfVar10;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined8 uStack_70;
  float fStack_68;
  
  iVar8 = fn_82F6A544();
  iVar4 = *(int *)(iVar8 + 0x30);
  iVar9 = (int)*param_2;
  iVar1 = (int)param_2[1];
  uStack_70 = (longlong)iVar1;
  fVar2 = *(float *)(iVar8 + 0x94);
  if ((iVar1 < 0) || (bVar11 = true, *(int *)(iVar8 + 0x34) <= iVar1)) {
    bVar11 = false;
  }
  if ((iVar9 < 0) || (bVar7 = true, iVar4 <= iVar9)) {
    bVar7 = false;
  }
  *param_5 = 0;
  if ((bVar11) && (bVar7)) {
    fVar3 = *(float *)(iVar8 + 0xa8) - *param_2;
    fVar5 = *(float *)(iVar8 + 0xac) - param_2[1];
    dVar14 = (double)lbl_821CC160;
    if ((fVar5 * fVar5 + fVar3 * fVar3 < fVar2 * fVar2) || (*(char *)(iVar8 + 0xb0) != '\0')) {
      dVar13 = (double)*(float *)(iVar8 + 0x98);
      dVar15 = (double)*(float *)(iVar8 + 0x9c);
      dVar17 = (double)*(float *)(iVar8 + 0xa0);
      param_3[2] = *(float *)(iVar8 + 0xa4);
    }
    else {
      param_3[2] = lbl_821CC160;
      dVar17 = (double)lbl_821CA460;
      dVar15 = dVar17;
      dVar13 = dVar17;
    }
    dVar16 = (double)lbl_82193E2C;
    dVar12 = (double)fn_82809950((double)(float)((double)((float)((double)((*(float *)(iVar8 +
                                                                                            0x44) *
                                                                                  param_2[1] +
                                                                                 *param_2 *
                                                                                 *(float *)(iVar8 + 
                                                  0x40)) / *(float *)(iVar8 + 0x4c)) * dVar16 +
                                                  (double)*(float *)(iVar8 + 0x54)) +
                                                  *(float *)(iVar8 + 0x1c)) * dVar13));
    param_3[2] = (float)((double)*(float *)(iVar8 + 0x50) * dVar12 + (double)param_3[2]);
    uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)dVar12)) & ((U64)0xFFFFFFFF)) << 0));
    dVar12 = (double)fn_82809950((double)(float)((double)((float)((double)((*(float *)(iVar8 +
                                                                                            0x5c) *
                                                                                  param_2[1] +
                                                                                 *param_2 *
                                                                                 *(float *)(iVar8 + 
                                                  0x58)) / *(float *)(iVar8 + 100)) * dVar16 +
                                                  (double)*(float *)(iVar8 + 0x6c)) +
                                                  *(float *)(iVar8 + 0x20)) * dVar13));
    param_3[2] = (float)((double)*(float *)(iVar8 + 0x68) * dVar12 + (double)param_3[2]);
    uStack_70 = CONCAT44((((U64)(uStack_70) >> 0) & 0xFFFFFFFF),(float)dVar12);
    dVar13 = (double)fn_82809950((double)(float)((double)((float)((double)((*(float *)(iVar8 +
                                                                                            0x74) *
                                                                                  param_2[1] +
                                                                                 *param_2 *
                                                                                 *(float *)(iVar8 + 
                                                  0x70)) / *(float *)(iVar8 + 0x7c)) * dVar16 +
                                                  (double)*(float *)(iVar8 + 0x84)) +
                                                  *(float *)(iVar8 + 0x24)) * dVar13));
    iVar9 = (iVar4 * iVar1 + iVar9) * 0x18;
    param_3[2] = (float)((double)*(float *)(iVar8 + 0x80) * dVar13 + (double)param_3[2]);
    fStack_68 = (float)dVar13;
    pfVar10 = (float *)(*(int *)(iVar8 + 0x2c) + iVar9);
    fVar3 = pfVar10[2];
    fVar2 = (float)((double)(*(float *)((int)&uStack_70 + (int)pfVar10[3] * 4) *
                             *(float *)(iVar8 + 0x88) * *pfVar10) * dVar15);
    *param_3 = pfVar10[1] * fVar2;
    param_3[1] = fVar3 * fVar2;
    *param_4 = (float)dVar14;
    pfVar10 = (float *)(*(int *)(iVar8 + 0x2c) + iVar9);
    param_4[1] = (float)((double)(*(float *)((int)&uStack_70 + (int)pfVar10[4] * 4) *
                                  *(float *)(iVar8 + 0x8c) * *pfVar10) * dVar17);
    pfVar10 = (float *)(*(int *)(iVar8 + 0x2c) + iVar9);
    param_4[2] = *(float *)((int)&uStack_70 + (int)pfVar10[5] * 4) * *(float *)(iVar8 + 0x90) *
                 *pfVar10;
  }
  else {
    puVar6 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
    *puVar6 = in_register_000104d0;
    puVar6[1] = in_register_000104d4;
    puVar6[2] = in_register_000104d8;
    puVar6[3] = in_vr77;
    puVar6 = (undefined4 *)(in_r0 + (int)param_4 & 0xfffffff0);
    *puVar6 = in_register_000104d0;
    puVar6[1] = in_register_000104d4;
    puVar6[2] = in_register_000104d8;
    puVar6[3] = in_vr77;
  }
  fn_82F6A590(0);
  return;
}

