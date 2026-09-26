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
extern unsigned int *auStack_40;
extern int fn_8240E9B8();
extern int fn_824107D0();
extern int fn_82410E40();
extern int fn_82411788();
extern int fn_82416D20();
extern int fn_824ED9E8();
extern int fn_82539560();
extern int fn_8253A918();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8240ED00(double param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  longlong lVar3;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_40 [40];
  
  iVar4 = *(int *)(param_2 + 0x2c);
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)(*(int *)(param_2 + 0x28) + 0x50U & 0xfffffff0);
    uVar10 = puVar1[1];
    uVar11 = puVar1[2];
    uVar12 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar10;
    puVar2[2] = uVar11;
    puVar2[3] = uVar12;
    iVar4 = fn_8253A918(auStack_40,param_2 + 0xa0,param_2 + 0xb0);
    if (iVar4 == 0) {
      fn_8240E9B8(param_2);
      lVar3 = (ulonglong)*(uint *)(param_2 + 0x24) + 0xa0;
      if (*(int *)(param_2 + 0x30) != 0) {
        lVar3 = (ulonglong)*(uint *)(param_2 + 0x24) + 0x110;
      }
      fn_82416D20(lVar3,param_2);
    }
  }
  else if (iVar4 == 2) {
    *(float *)(param_2 + 0x90) = (float)(param_1 + (double)*(float *)(param_2 + 0x90));
    if (*(int *)(param_2 + 0x44) == 0) {
      fn_824107D0(param_2);
    }
  }
  else if (3 < iVar4) {
    if (iVar4 < 9) {
      fn_82410E40(param_1,param_2);
    }
    else if (iVar4 == 9) {
      fn_82411788();
    }
  }
  dVar9 = (double)lbl_821CC160;
  if (dVar9 < (double)*(float *)(param_2 + 0xd0)) {
    dVar5 = (double)(float)((double)*(float *)(param_2 + 0xd0) - param_1);
    dVar8 = -dVar5;
    dVar6 = dVar9;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar8 < dVar9) << 2) | (uint)(NAN(dVar8) || NAN(dVar9)) << 2)) <
        0.0) {
      dVar6 = dVar5;
    }
    *(float *)(param_2 + 0xd0) = (float)dVar6;
    if (*(int *)(param_2 + 0xd4) != 0) {
      iVar4 = **(int **)(param_2 + 0x24);
      dVar5 = (double)lbl_821CA460;
      dVar8 = (double)*(float *)(iVar4 + 0x15a4);
      uVar7 = fn_82539560((double)(float)(dVar5 - dVar6),dVar9,dVar5,dVar5,dVar9);
      fn_824ED9E8((double)(float)((double)*(float *)(param_2 + 0xc0) + dVar8),
                        (double)(*(float *)(iVar4 + 0x15a8) + *(float *)(param_2 + 0xc4)),
                        (double)(float)((double)*(float *)(param_2 + 200) + dVar8),
                        (double)*(float *)(iVar4 + 0x15b0),(double)*(float *)(iVar4 + 0x15b4),
                        (double)*(float *)(iVar4 + 0x15b8),(double)*(float *)(iVar4 + 0x15bc),
                        (double)*(float *)(iVar4 + 0x15c0),(double)*(float *)(iVar4 + 0x15c4),uVar7)
      ;
    }
  }
  dVar6 = (double)(float)((double)*(float *)(param_2 + 0x25c) - param_1);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar6 < dVar9) << 2) | (uint)(NAN(dVar6) || NAN(dVar9)) << 2)) < 0.0)
  {
    dVar6 = dVar9;
  }
  *(float *)(param_2 + 0x25c) = (float)dVar6;
  return;
}

