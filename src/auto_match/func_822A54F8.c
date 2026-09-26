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
extern int fn_822A5680();
extern int fn_82539560();
extern int fn_82559D80();
extern int fn_82559E70();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1334;
extern unsigned int lbl_831D1338;
extern unsigned int lbl_831D133C;
extern V16 vectorAddFloatingPoint();


void fn_822A54F8(double param_1,uint *param_2,undefined8 param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  double dVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar4 = *param_2;
  if (uVar4 == 0) {
    param_2[0x10] = (uint)lbl_831D133C;
    if (param_2[1] != 1) goto LAB_822a5620;
    uVar4 = param_2[3];
    uVar5 = 3;
LAB_822a560c:
    param_2[4] = uVar4;
    *param_2 = uVar5;
    fVar1 = lbl_821CC160;
  }
  else {
    if (uVar4 == 1) {
      param_2[0x10] = (uint)lbl_831D1338;
      if (param_2[1] != 0) goto LAB_822a5620;
      uVar4 = param_2[2];
      uVar5 = 2;
      goto LAB_822a560c;
    }
    if (uVar4 < 3) {
      uVar4 = param_2[4];
      dVar8 = (double)(float)((double)(float)param_2[5] + param_1);
      param_2[5] = (uint)(float)((double)(float)param_2[5] + param_1);
      uVar5 = (uint)((double)*(float *)(uVar4 + 0xc) <= dVar8);
      dVar8 = (double)fn_82539560(dVar8,(double)lbl_821CC160,(double)*(float *)(uVar4 + 0xc),
                                   (double)lbl_831D1338,(double)lbl_831D133C);
      param_2[0x10] = (uint)(float)dVar8;
      if (uVar5 == 0) goto LAB_822a5620;
      uVar5 = 0;
    }
    else {
      if (uVar4 != 3) goto LAB_822a5620;
      uVar4 = param_2[4];
      dVar8 = (double)(float)((double)(float)param_2[5] + param_1);
      param_2[5] = (uint)(float)((double)(float)param_2[5] + param_1);
      uVar5 = (uint)((double)*(float *)(uVar4 + 0xc) <= dVar8);
      dVar8 = (double)fn_82539560(dVar8,(double)lbl_821CC160,(double)*(float *)(uVar4 + 0xc),
                                   (double)lbl_831D133C,(double)lbl_831D1338);
      param_2[0x10] = (uint)(float)dVar8;
      if (uVar5 == 0) goto LAB_822a5620;
      uVar5 = 1;
    }
    *param_2 = uVar5;
    fVar1 = *(float *)(uVar4 + 0xc);
  }
  param_2[5] = (uint)fVar1;
LAB_822a5620:
  fn_822A5680(param_1,param_2);
  puVar7 = param_2 + 8;
  lVar6 = (ulonglong)*(uint *)(param_2[4] + 0x10) + 4;
  fn_82559D80((double)(float)param_2[5],lVar6,param_3,puVar7,lbl_831D1334);
  fn_82559E70((double)(float)param_2[5],lVar6,param_3,param_2 + 0xc,lbl_831D1334);
  puVar2 = (undefined4 *)(in_r0 + (int)puVar7 & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  vectorAddFloatingPoint(in_vs32,in_vs45);
  puVar3 = (undefined4 *)(in_r0 + (int)puVar7 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  return;
}

