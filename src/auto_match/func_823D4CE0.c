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
extern int fn_8229FDA0();
extern int fn_8229FF28();
extern int fn_8236B950();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CC160;


void fn_823D4CE0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  
  iVar5 = param_1[3];
  param_1[0x19] = param_1[0xb];
  param_1[0x2d] = param_3;
  param_1[0x2c] = param_2;
  iVar6 = *param_1;
  iVar1 = *(int *)(iVar5 + 0x14c);
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  param_1[0x18] = iVar1;
  param_1[0x25] = 0;
  iVar1 = lbl_821CC160;
  param_1[0x28] = lbl_821CC160;
  param_1[0x26] = iVar1;
  param_1[0xd] = 1;
  iVar9 = lbl_8218EC10;
  iVar1 = *(int *)(iVar5 + 0x168);
  param_1[0x2b] = 0;
  param_1[0x3a] = iVar9;
  *(undefined1 *)(param_1 + 0x38) = 0;
  iVar9 = lbl_821916FC;
  param_1[0x2a] = iVar1;
  param_1[0xf] = *(int *)(iVar5 + 0x178);
  param_1[0x10] = *(int *)(iVar5 + 400);
  param_1[0x11] = *(int *)(iVar5 + 0x1a8);
  param_1[0x12] = *(int *)(iVar5 + 0x1c0);
  fVar2 = *(float *)(iVar5 + 0x1d8);
  fVar3 = *(float *)(iVar5 + 0x1dc);
  fVar4 = (float)param_1[*(int *)(iVar5 + 0x1e0) + 0xf];
  *(float *)(iVar6 + 0x1334) =
       (float)param_1[*(int *)(iVar5 + 0x1ec) + 0xf] *
       (*(float *)(iVar5 + 0x1e8) - *(float *)(iVar5 + 0x1e4)) + *(float *)(iVar5 + 0x1e4);
  *(float *)(iVar6 + 0x1330) = fVar4 * (fVar3 - fVar2) + fVar2;
  iVar1 = param_1[3];
  fVar2 = *(float *)(iVar1 + 0x1f0);
  fVar3 = *(float *)(iVar1 + 500);
  fVar4 = (float)param_1[*(int *)(iVar1 + 0x1f8) + 0xf];
  param_1[0x1b] = iVar9;
  param_1[0xc] = (int)(fVar4 * (fVar3 - fVar2) + fVar2);
  bVar8 = *(int *)(iVar1 + 0x168) == 0;
  param_1[10] = (uint)bVar8;
  if (bVar8) {
    iVar5 = *param_1;
    iVar1 = param_1[0x18];
    *(int *)(iVar5 + 0xc4) = iVar1;
    *(undefined4 *)(iVar5 + 0xc0) = 0xffffffff;
    *(int *)(iVar5 + 200) = iVar1;
    *(undefined4 *)(iVar5 + 0xbc) = 1;
    fn_8236B950((double)*(float *)(param_1[3] + 0x14c),*param_1,param_1[0x25],
                      0xffffffff82190000,0);
  }
  else {
    uVar7 = *(undefined4 *)(iVar1 + 0x168);
    iVar1 = *(int *)(**(int **)(*param_1 + 0x4b0) + 0xd4);
    fn_8229FF28(*(undefined4 *)(iVar1 + 0xc),param_1[0x25]);
    fn_8229FDA0(*(undefined4 *)(iVar1 + 0xc),uVar7);
  }
  return;
}

