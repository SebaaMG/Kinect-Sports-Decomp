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
extern int fn_82F6A544();
extern int fn_82F6A590();
extern float lbl_82002C28;
extern float lbl_820155AC;
extern unsigned int lbl_820155B4;
extern unsigned int lbl_820155B8;
extern unsigned int lbl_820155C8;


void fn_82788C30(undefined8 param_1,float *param_2,int param_3,ulonglong param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  
  iVar14 = fn_82F6A544();
  fVar13 = lbl_82002C28;
  iVar12 = (int)((param_4 & 0xffffffff) << 2);
  fVar1 = param_5[1];
  fVar2 = *param_5;
  uVar9 = *(uint *)((*(int *)((int)&lbl_820155B4 + iVar12) + 3) * 4 + param_3);
  uVar10 = *(uint *)((*(int *)((int)&lbl_820155B8 + iVar12) + 3) * 4 + param_3);
  pfVar16 = (float *)(*(int *)((uVar9 >> 6 & 0x3fffffc) + *(int *)(iVar14 + 0xc)) +
                     (uVar9 & 0xff) * 0xc);
  fVar3 = *pfVar16;
  pfVar15 = (float *)(*(int *)((uVar10 >> 6 & 0x3fffffc) + *(int *)(iVar14 + 0xc)) +
                     (uVar10 & 0xff) * 0xc);
  fVar4 = pfVar15[1];
  fVar5 = *pfVar15;
  if (lbl_820155C8 <=
      (double)((fVar5 - fVar3) * (pfVar16[1] - fVar1) - (fVar3 - fVar2) * (fVar4 - pfVar16[1]))) {
    fVar6 = param_2[1];
    fVar7 = *param_2;
    fVar8 = pfVar16[1];
    fVar11 = (fVar4 - fVar8) * (fVar2 - fVar7) - (fVar5 - fVar3) * (fVar1 - fVar6);
    if ((ABS(fVar7 - fVar2) + ABS(fVar6 - fVar1) + ABS(fVar3 - fVar5) + ABS(fVar8 - fVar4)) *
        lbl_820155AC <= ABS(fVar11)) {
      fVar11 = ((fVar6 - fVar8) * (fVar5 - fVar3) - (fVar7 - fVar3) * (fVar4 - fVar8)) / fVar11;
      fVar2 = (fVar2 - fVar7) * fVar11 + fVar7;
      fVar1 = (fVar1 - fVar6) * fVar11 + fVar6;
      param_5[1] = (fVar6 - fVar1) * lbl_82002C28 + fVar1;
      *param_5 = (fVar7 - fVar2) * fVar13 + fVar2;
    }
  }
  fn_82F6A590();
  return;
}

