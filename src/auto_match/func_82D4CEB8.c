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
extern unsigned int lbl_82132D70;
extern unsigned int lbl_82136A1C;
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


void fn_82D4CEB8(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  int in_r0;
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float in_register_00010070;
  float in_register_00010074;
  float in_register_00010078;
  float in_vr7;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  
  *param_1 = &lbl_82136A1C;
  param_1[2] = 0;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[3] = 0x1d;
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar7 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar9;
  pfVar3 = (float *)((uint)(&lbl_82132D70 + in_r0) & 0xfffffff0);
  fVar6 = pfVar3[1];
  fVar8 = pfVar3[2];
  fVar10 = pfVar3[3];
  vectorAddFloatingPoint(in_vs44,in_vs45);
  pfVar4 = (float *)((uint)(param_1 + 8) & 0xfffffff0);
  *pfVar4 = *pfVar3 * in_register_000100b0;
  pfVar4[1] = fVar6 * in_register_000100b4;
  pfVar4[2] = fVar8 * in_register_000100b8;
  pfVar4[3] = fVar10 * in_vr11;
  pfVar3 = (float *)((uint)(&lbl_82132D70 + in_r0) & 0xfffffff0);
  fVar6 = pfVar3[1];
  fVar8 = pfVar3[2];
  fVar10 = pfVar3[3];
  vectorSubtractFloatingPoint(in_vs40,in_vs41);
  pfVar4 = (float *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *pfVar4 = *pfVar3 * in_register_00010070;
  pfVar4[1] = fVar6 * in_register_00010074;
  pfVar4[2] = fVar8 * in_register_00010078;
  pfVar4[3] = fVar10 * in_vr7;
  return;
}

