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
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82002AE0;
extern float lbl_82002C28;
extern float lbl_820155AC;
extern unsigned int lbl_820155B0;
extern unsigned int lbl_820155B4;


void fn_827888E8(undefined8 param_1,double param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  ulonglong in_r6;
  ulonglong in_r7;
  int iVar23;
  float *in_r8;
  float *in_r9;
  int iVar24;
  bool bVar25;
  double extraout_f1;
  double dVar26;
  double dVar27;
  double dVar28;
  
  iVar21 = fn_82F6A53C();
  iVar4 = *(int *)(iVar21 + 0x2c);
  iVar5 = *(int *)(iVar21 + 0xc);
  uVar10 = *(uint *)(*(int *)(((uint)in_r6 >> 4 & 0xffffffc) + *(int *)(iVar21 + 0x48)) +
                    ((uint)((in_r6 & 0xffffffff) << 2) & 0xfc));
  uVar11 = *(uint *)(*(int *)(((uint)in_r7 >> 4 & 0xffffffc) + *(int *)(iVar21 + 0x48)) +
                    ((uint)((in_r7 & 0xffffffff) << 2) & 0xfc));
  uVar12 = *(uint *)(((&lbl_820155B4)[uVar10 & 3] + (uVar10 >> 2 & 0xff) * 0xf) * 4 +
                    *(int *)((uVar10 >> 8 & 0xfffffc) + iVar4));
  uVar10 = *(uint *)((*(int *)(&lbl_820155B0 + (uVar10 & 3) * 4) + (uVar10 >> 2 & 0xff) * 0xf) * 4 +
                    *(int *)((uVar10 >> 8 & 0xfffffc) + iVar4));
  iVar22 = (uVar12 & 0xff) * 0xc;
  iVar21 = *(int *)((uVar12 >> 6 & 0x3fffffc) + iVar5);
  iVar13 = *(int *)((uVar10 >> 6 & 0x3fffffc) + iVar5);
  fVar14 = *(float *)(iVar21 + iVar22);
  iVar23 = (uVar10 & 0xff) * 0xc;
  uVar10 = *(uint *)((*(int *)(&lbl_820155B0 + (uVar11 & 3) * 4) + (uVar11 >> 2 & 0xff) * 0xf) * 4 +
                    *(int *)((uVar11 >> 8 & 0xfffffc) + iVar4));
  fVar15 = *(float *)(iVar13 + iVar23);
  iVar24 = (uVar10 & 0xff) * 0xc;
  iVar16 = *(int *)((uVar10 >> 6 & 0x3fffffc) + iVar5);
  fVar6 = *(float *)(iVar13 + iVar23 + 4);
  fVar17 = *(float *)(iVar16 + iVar24);
  fVar7 = *(float *)(iVar21 + iVar22 + 4);
  fVar8 = *(float *)(iVar16 + iVar24 + 4);
  fVar3 = fVar7 - fVar6;
  uVar10 = *(uint *)(((&lbl_820155B4)[uVar11 & 3] + (uVar11 >> 2 & 0xff) * 0xf) * 4 +
                    *(int *)((uVar11 >> 8 & 0xfffffc) + iVar4));
  iVar21 = (uVar10 & 0xff) * 0xc;
  iVar4 = *(int *)((uVar10 >> 6 & 0x3fffffc) + iVar5);
  fVar18 = *(float *)(iVar4 + iVar21);
  dVar27 = (double)SQRT(fVar3 * fVar3 + (fVar14 - fVar15) * (fVar14 - fVar15));
  fVar9 = *(float *)(iVar4 + iVar21 + 4);
  fVar1 = (float)((double)lbl_82002AE0 / dVar27);
  fVar19 = fVar9 - fVar8;
  fVar2 = (float)((double)((fVar15 - fVar14) * fVar1) * extraout_f1);
  fVar3 = (float)((double)(fVar1 * fVar3) * extraout_f1);
  dVar26 = (double)SQRT(fVar19 * fVar19 + (fVar18 - fVar17) * (fVar18 - fVar17));
  fVar1 = (float)((double)lbl_82002AE0 / dVar26);
  fVar20 = fVar2 + fVar7;
  fVar2 = fVar2 + fVar6;
  fVar6 = fVar3 + fVar14;
  fVar15 = fVar15 + fVar3;
  fVar3 = (float)((double)(fVar1 * fVar19) * extraout_f1);
  fVar1 = (float)((double)((fVar17 - fVar18) * fVar1) * extraout_f1);
  fVar18 = fVar18 + fVar3;
  fVar17 = fVar17 + fVar3;
  fVar8 = fVar1 + fVar8;
  fVar1 = fVar1 + fVar9;
  fVar9 = fVar18 - fVar17;
  fVar19 = fVar1 - fVar8;
  fVar3 = fVar19 * (fVar6 - fVar15) - fVar9 * (fVar20 - fVar2);
  bVar25 = (float)(dVar26 + dVar27) * lbl_820155AC <= ABS(fVar3);
  if (bVar25) {
    fVar3 = ((fVar2 - fVar8) * fVar9 - (fVar15 - fVar17) * fVar19) / fVar3;
    fVar15 = (fVar6 - fVar15) * fVar3 + fVar15;
    fVar2 = (fVar20 - fVar2) * fVar3 + fVar2;
  }
  else {
    fVar15 = (fVar15 + fVar6 + fVar17 + fVar18) * lbl_82002C28;
    fVar2 = (fVar2 + fVar20 + fVar8 + fVar1) * lbl_82002C28;
  }
  *in_r8 = fVar15;
  *in_r9 = fVar2;
  if (bVar25) {
    fVar1 = fVar14 - *in_r8;
    dVar28 = (double)SQRT((fVar7 - *in_r9) * (fVar7 - *in_r9) + fVar1 * fVar1);
    if (dVar27 < dVar26) {
      dVar27 = dVar26;
    }
    if (dVar27 < param_2) {
      param_2 = dVar27;
    }
    if (param_2 < dVar28) {
      fVar1 = (float)(param_2 / dVar28);
      *in_r8 = (*in_r8 - fVar14) * fVar1 + fVar14;
      *in_r9 = (*in_r9 - fVar7) * fVar1 + fVar7;
    }
  }
  else if (dVar27 <= dVar26) {
    *in_r8 = fVar17;
    *in_r9 = fVar8;
  }
  else {
    *in_r8 = fVar6;
    *in_r9 = fVar20;
  }
  fn_82F6A588();
  return;
}

