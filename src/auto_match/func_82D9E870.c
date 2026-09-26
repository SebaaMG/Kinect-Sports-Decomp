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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_a0;
extern int fn_82CECE68();
extern int fn_8309FC40();
extern int fn_8309FD30();
extern int fn_830A6E50();
extern unsigned int iStack_6c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_82022E60;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_68;
extern unsigned int uStack_90;
extern U64 storeVectorElementWordIndexed();


void fn_82D9E870(undefined8 param_1,int *param_2,undefined4 *param_3,int param_4,int param_5,
                  int param_6,undefined4 *param_7)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  int in_r0;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 in_vs42 [16];
  undefined1 in_vs44 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fStack_a0;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  int iStack_6c;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  
  uVar10 = ZEXT48(&stack0x00000000);
  iVar2 = *param_2;
  *param_2 = iVar2 + 4;
  pfVar3 = (float *)*param_3;
  iVar4 = *(int *)(iVar2 + 4);
  iVar5 = *(int *)(param_6 + 0x4c);
  *param_3 = pfVar3 + 4;
  iVar2 = (int)*pfVar3;
  dVar13 = (double)pfVar3[1];
  dVar12 = (double)pfVar3[2];
  iVar6 = *(int *)(iVar2 * 4 + *(int *)(param_4 + 0x34));
  uVar14 = storeVectorElementWordIndexed(in_vs44,0,uVar10 - 0x90);
  *(undefined4 *)(uVar10 - 0x90) = uVar14;
  uVar14 = storeVectorElementWordIndexed(in_vs42,0,uVar10 - 0xa0);
  *(undefined4 *)(uVar10 - 0xa0) = uVar14;
  uStack_90 = ((((U64)(uStack_90)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)(iVar2 >> 0x1f))) & ((U64)0xFFFFFFFF)) << 0));
  dVar11 = (double)(((U64)(uStack_90) >> 0) & 0xFFFFFFFF);
  uStack_90 = (longlong)iVar2;
  dVar11 = (double)fn_82CECE68(-dVar11,-(double)fStack_a0);
  fVar9 = lbl_821AAD20;
  fVar1 = (float)(dVar11 + (double)lbl_8201DD74);
  dVar11 = (double)fVar1;
  if ((double)lbl_82022E60 <= (double)(float)(dVar11 - dVar13)) {
    if ((double)lbl_8201DD74 < (double)(float)(dVar11 - dVar13)) {
      dVar12 = (double)(float)(dVar12 - (double)lbl_82002AE0);
    }
  }
  else {
    dVar12 = (double)(float)(dVar12 + (double)lbl_82002AE0);
  }
  fStack_88 = (float)dVar12;
  uStack_90 = CONCAT44(*pfVar3,fVar1);
  dVar13 = (double)lbl_821AAD20;
  fStack_84 = lbl_821AAD20;
  puVar7 = (undefined4 *)((int)&uStack_90 + in_r0 & 0xfffffff0);
  uVar14 = puVar7[1];
  uVar15 = puVar7[2];
  uVar16 = puVar7[3];
  puVar8 = (undefined4 *)(in_r0 + (int)pfVar3 & 0xfffffff0);
  *puVar8 = *puVar7;
  puVar8[1] = uVar14;
  puVar8[2] = uVar15;
  puVar8[3] = uVar16;
  if (iVar6 != 0) {
    uVar14 = *param_7;
    uStack_68 = CONCAT44(fVar9,fVar9);
    fn_8309FC40((iVar4 + 5) * 0x10 + param_5,param_6,uVar14,uVar10 - 0x70);
    uStack_68 = *(undefined8 *)(*(int *)(param_5 + 0xb8) * 8 + iVar5);
    fStack_5c = -(float)(dVar12 * (double)lbl_82015468 + dVar11);
    fStack_60 = (float)dVar13;
    iStack_6c = param_6;
    fn_830A6E50(iVar6,uVar10 - 0x70,uVar10 - 0x90);
    fn_8309FD30(uVar10 - 0x90,param_6,uVar14,param_7);
  }
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

