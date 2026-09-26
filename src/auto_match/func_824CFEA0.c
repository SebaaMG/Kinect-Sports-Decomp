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
extern int fn_824A7310();
extern int fn_824A73D8();
extern int fn_824A74A0();
extern int fn_824A7540();
extern int fn_824CCFC8();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_824CFEA0(int param_1,undefined4 *param_2,undefined4 *param_3,float *param_4,float *param_5
                  )

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar9 = (ulonglong)*(uint *)(param_1 + 0xfc);
  if (uVar9 == 0) {
    dVar12 = (double)lbl_821CC160;
    *param_4 = lbl_821CC160;
    *param_2 = 0;
    *param_3 = 0;
    goto LAB_824d01a4;
  }
  dVar12 = (double)lbl_821CC160;
  if (dVar12 < (double)*(float *)(param_1 + 0x39c)) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_824A74A0(uVar9);
  }
  if (dVar12 < (double)*(float *)(param_1 + 0x1fac)) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_824A7540(uVar9);
  }
  if (*(int *)(param_1 + 0x3a4) != 0) {
    *(undefined4 *)(param_1 + 0x3a4) = uVar5;
    uVar5 = 0;
    if (*(int *)(param_1 + 0x3a4) == 0) {
      *(float *)(*(int *)((int)uVar9 + 0x3c) + 0x24) = (float)dVar12;
    }
  }
  if (*(int *)(param_1 + 0x1fb4) != 0) {
    *(undefined4 *)(param_1 + 0x1fb4) = uVar6;
    uVar6 = 0;
    if (*(int *)(param_1 + 0x1fb4) == 0) {
      *(float *)(*(int *)(*(int *)(param_1 + 0xfc) + 0x3c) + 0x28) = (float)dVar12;
    }
  }
  bVar2 = false;
  bVar1 = false;
  if ((*(int *)(param_1 + 0x3a08) == 0) || (*(int *)(*(int *)(param_1 + 0x3a08) + 0x74) == 0)) {
    iVar8 = *(int *)(param_1 + 0xfc);
    *param_2 = uVar5;
    *param_3 = uVar6;
    *(float *)(*(int *)(iVar8 + 0x3c) + 0x24) = (float)dVar12;
    *(float *)(*(int *)(*(int *)(param_1 + 0xfc) + 0x3c) + 0x28) = (float)dVar12;
  }
  else {
    iVar8 = *(int *)(param_1 + 0xfc);
    iVar7 = fn_824A7310(iVar8);
    if ((iVar7 == 0) ||
       (iVar8 = *(int *)(iVar8 + 0x3c), bVar3 = true,
       *(float *)(iVar8 + 0x24) <= *(float *)(iVar8 + 0x20))) {
      bVar3 = false;
    }
    iVar8 = *(int *)(param_1 + 0xfc);
    iVar7 = fn_824A73D8(iVar8);
    if ((iVar7 == 0) ||
       (iVar8 = *(int *)(iVar8 + 0x3c), bVar4 = true,
       *(float *)(iVar8 + 0x28) <= *(float *)(iVar8 + 0x20))) {
      bVar4 = false;
    }
    if ((dVar12 < (double)*(float *)(param_1 + 0x39c)) || (*(int *)(param_1 + 0x3a4) != 0)) {
LAB_824d0014:
      bVar2 = false;
    }
    else {
      iVar8 = fn_824CCFC8(param_1);
      bVar2 = true;
      if (iVar8 == 0) goto LAB_824d0014;
    }
    if ((dVar12 < (double)*(float *)(param_1 + 0x1fac)) || (*(int *)(param_1 + 0x1fb4) != 0)) {
LAB_824d0044:
      bVar1 = false;
    }
    else {
      iVar8 = fn_824CCFC8(param_1);
      bVar1 = true;
      if (iVar8 == 0) goto LAB_824d0044;
    }
    if (!bVar2) {
      *(float *)(*(int *)(*(int *)(param_1 + 0xfc) + 0x3c) + 0x24) = (float)dVar12;
    }
    if (!bVar1) {
      *(float *)(*(int *)(*(int *)(param_1 + 0xfc) + 0x3c) + 0x28) = (float)dVar12;
    }
    if ((!bVar2) || (uVar5 = 1, !bVar3)) {
      uVar5 = 0;
    }
    *param_2 = uVar5;
    if ((!bVar1) || (uVar5 = 1, !bVar4)) {
      uVar5 = 0;
    }
    *param_3 = uVar5;
  }
  dVar11 = dVar12;
  if ((bVar2) &&
     (iVar8 = *(int *)(*(int *)(param_1 + 0xfc) + 0x3c), dVar12 < (double)*(float *)(iVar8 + 0x20)))
  {
    dVar11 = (double)(*(float *)(iVar8 + 0x24) / *(float *)(iVar8 + 0x20));
  }
  dVar10 = dVar12;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((-dVar11 < dVar12) << 2) | (uint)(NAN(-dVar11) || NAN(dVar12)) << 2))
      < 0.0) {
    dVar10 = dVar11;
  }
  *param_4 = (float)dVar10;
  dVar11 = dVar12;
  if ((bVar1) &&
     (iVar8 = *(int *)(*(int *)(param_1 + 0xfc) + 0x3c), dVar12 < (double)*(float *)(iVar8 + 0x20)))
  {
    dVar11 = (double)(*(float *)(iVar8 + 0x28) / *(float *)(iVar8 + 0x20));
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((-dVar11 < dVar12) << 2) | (uint)(NAN(-dVar11) || NAN(dVar12)) << 2))
      < 0.0) {
    dVar12 = dVar11;
  }
LAB_824d01a4:
  *param_5 = (float)dVar12;
  return;
}

