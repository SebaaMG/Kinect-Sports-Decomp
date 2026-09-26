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
extern unsigned int *auStack_10;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82057518;


void fn_82DA5498(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int in_r0;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_10 [16];
  
  fVar3 = lbl_82057518;
  fVar4 = lbl_82002AE0;
  fVar1 = *(float *)(param_1 + 0xc0);
  fVar2 = lbl_82057518 - fVar1;
  puVar5 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
  uVar6 = *puVar5;
  uVar7 = puVar5[1];
  uVar8 = puVar5[2];
  uVar9 = puVar5[3];
  puVar5 = (undefined4 *)(in_r0 + (int)param_2 & 0xfffffff0);
  *puVar5 = uVar6;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  puVar5 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  *puVar5 = uVar6;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  puVar5 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  *puVar5 = uVar6;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  if (fVar2 < 0.0) {
    fVar3 = fVar1;
  }
  fVar4 = fVar4 / fVar3;
  *param_2 = fVar4;
  param_2[5] = fVar4;
  param_2[10] = fVar4;
  return;
}

