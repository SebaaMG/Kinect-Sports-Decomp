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
#define ZEXT48(x) ((U64)((U32)(x)))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_50;
extern int fn_82CECE68();
extern unsigned int lbl_82057518;
extern unsigned int lbl_82187DF0;
extern unsigned int lbl_82187DF8;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();


bool fn_830A0450(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 in_r0;
  ulonglong uVar6;
  bool bVar7;
  double dVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_50;
  
  uVar6 = ZEXT48(&stack0x00000000);
  pfVar5 = (float *)((int)in_r0 + (uint)*(byte *)(param_1 + 3) * 0x10 + param_3 & 0xfffffff0);
  fVar9 = *pfVar5;
  fVar12 = pfVar5[1];
  fVar11 = pfVar5[2];
  pfVar5 = (float *)((int)in_r0 + (uint)*(byte *)(param_1 + 4) * 0x10 + param_4 & 0xfffffff0);
  fVar13 = pfVar5[1];
  fVar15 = pfVar5[2];
  fVar14 = pfVar5[3];
  fVar17 = fVar9 * fVar13 - fVar9 * fVar13;
  fVar18 = fVar9 * fVar14 - fVar9 * fVar14;
  fVar19 = fVar11 * *pfVar5 - fVar9 * fVar15;
  fVar20 = fVar12 * fVar15 - fVar11 * fVar13;
  uVar4 = storeVectorElementWordIndexed(in_vs38,0,uVar6 - 0x50);
  *(undefined4 *)(uVar6 - 0x50) = uVar4;
  bVar7 = lbl_82057518 <= fStack_50;
  if (bVar7) {
    uVar4 = storeVectorElementWordIndexed(in_vs32,0,uVar6 - 0x50);
    *(undefined4 *)(uVar6 - 0x50) = uVar4;
    bVar1 = *(byte *)(param_1 + 5);
    fVar10 = fVar9;
    fVar16 = fVar13;
    dVar8 = (double)fn_82CECE68((double)SQRT(fStack_50),(double)fStack_50);
    loadVectorLeftIndexed128(in_r0,uVar6 - 0x50);
    loadVectorLeftIndexed128(in_r0,uVar6 - 0x50);
    fVar2 = *(float *)(&lbl_82187DF8 + (uint)bVar1 * 4);
    fVar3 = *(float *)(&lbl_82187DF0 + (uint)bVar1 * 4);
    *(float *)(param_5 + 0x1c) = *(float *)(param_2 + 0x40) * *(float *)(param_1 + 0x10);
    *(float *)(param_5 + 0x18) = (float)(dVar8 * (double)fVar2 + (double)fVar3);
    pfVar5 = (float *)((int)in_r0 + param_5 & 0xfffffff0);
    *pfVar5 = fVar17 * fVar13 * fVar9;
    pfVar5[1] = fVar18 * fVar14 * fVar10;
    pfVar5[2] = fVar19 * fVar15 * fVar11;
    pfVar5[3] = fVar20 * fVar16 * fVar12;
    *(undefined4 *)(param_5 + 0x10) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_5 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  }
  return !bVar7;
}

