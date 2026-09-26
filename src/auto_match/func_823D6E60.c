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
extern unsigned int lbl_821959A4;
extern unsigned int lbl_8329EA20;
extern V16 vectorConditionalSelect();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823D6E60(double param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs44 [16];
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  float afStack_20 [6];
  
  iVar6 = (*(int *)(param_3 + 0x2c) * 7 + *(int *)(param_3 + 0x28)) * 0x40 + param_2;
  *(float *)(iVar6 + 0x38) = (float)param_1;
  *(undefined4 *)(iVar6 + 0x30) = 2;
  puVar1 = (undefined4 *)((uint)(&lbl_8329EA20 + in_r0) & 0xfffffff0);
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  vectorConditionalSelect(in_vs44,in_vs43,in_vs42);
  puVar2 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  *(undefined4 *)(iVar6 + 0x20) = 1;
  *(undefined4 *)(iVar6 + 0x34) = param_5;
  fVar5 = lbl_821959A4;{ V16 _vt0 = vectorConditionalSelect(in_vs33,in_vs32,in_vs44); memcpy(auVar7, &_vt0, 16); }
  param_2 = (*(int *)(param_3 + 0x2c) * 7 + *(int *)(param_3 + 0x28)) * 0x40 + param_2;
  uVar3 = in_r0 + param_2 & 0xfffffff0;
  fVar8 = *(float *)(uVar3 + 4);
  fVar9 = *(float *)(uVar3 + 8);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs32,auVar7); memcpy(auVar7, &_vt1, 16); }
  fVar8 = fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
  pfVar4 = (float *)((int)afStack_20 + in_r0 & 0xfffffff0);
  *pfVar4 = fVar8;
  pfVar4[1] = fVar8;
  pfVar4[2] = fVar8;
  pfVar4[3] = fVar8;
  if (fVar5 < afStack_20[0]) {
    *(undefined4 *)(param_2 + 0x20) = 2;
    vectorConditionalSelect(in_vs33,auVar7,in_vs44);
    puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
  }
  return;
}

