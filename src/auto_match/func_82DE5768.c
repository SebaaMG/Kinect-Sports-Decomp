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


void fn_82DE5768(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int in_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_10 [16];
  
  fVar1 = param_1[5];
  fVar2 = *param_1;
  fVar3 = param_1[10];
  puVar4 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar4 = (undefined4 *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar4 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  if (fVar2 - fVar1 < 0.0) {
    fVar2 = fVar1;
  }
  puVar4 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  if (fVar2 - fVar3 < 0.0) {
    fVar2 = fVar3;
  }
  *param_1 = fVar2;
  param_1[5] = fVar2;
  param_1[10] = fVar2;
  return;
}

