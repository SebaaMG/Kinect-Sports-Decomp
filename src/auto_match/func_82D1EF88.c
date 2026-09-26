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
extern int fn_82D1EE70();


void fn_82D1EF88(int param_1,int param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int in_r0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x14); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    pfVar2 = (float *)(in_r0 + param_2 & 0xfffffff0);
    fVar5 = pfVar2[1];
    fVar6 = pfVar2[2];
    fVar7 = pfVar2[3];
    pfVar3 = (float *)((int)puVar1 + in_r0 + 0x10 & 0xfffffff0);
    fVar8 = pfVar3[1];
    fVar9 = pfVar3[2];
    fVar10 = pfVar3[3];
    pfVar4 = (float *)((int)puVar1 + in_r0 + 0x10 & 0xfffffff0);
    *pfVar4 = *pfVar3 * *pfVar2;
    pfVar4[1] = fVar8 * fVar5;
    pfVar4[2] = fVar9 * fVar6;
    pfVar4[3] = fVar10 * fVar7;
  }
  fn_82D1EE70(param_1);
  puVar1 = *(undefined4 **)(param_1 + 0x7b8);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x7b8) = 0;
    return;
  }
  (**(code **)*puVar1)(puVar1,1);
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  return;
}

