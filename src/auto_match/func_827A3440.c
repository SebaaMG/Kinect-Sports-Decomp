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
extern int fn_827A0C20();
extern int fn_827A3178();
extern int fn_827A8770();


ulonglong fn_827A3440(int param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  uint uVar9;
  float *pfVar10;
  
  uVar8 = fn_827A3178();
  if ((uVar8 & 0xff) != 0) {
    uVar3 = *(uint *)(*(int *)(param_1 + 8) + 0x4c);
    uVar9 = fn_827A8770(*(int *)(param_1 + 8) + 0x24);
    fVar1 = -(float)uVar3;
    *param_3 = *param_3 + fVar1;
    param_3[1] = -(float)uVar9 + param_3[1];
    param_3[3] = -(float)uVar9 + param_3[3];
    param_3[2] = fVar1 + param_3[2];
    pfVar10 = (float *)fn_827A0C20(*(undefined4 *)(param_1 + 8));
    fVar1 = *(float *)(*(int *)(param_1 + 8) + 0x40);
    fVar2 = pfVar10[1];
    fVar4 = (*(float *)(*(int *)(param_1 + 8) + 0x3c) - *pfVar10) + *param_3;
    *param_3 = fVar4;
    fVar5 = (fVar1 - fVar2) + param_3[1];
    param_3[1] = fVar5;
    fVar1 = *pfVar10;
    fVar2 = *(float *)(*(int *)(param_1 + 8) + 0x3c);
    fVar7 = (*(float *)(*(int *)(param_1 + 8) + 0x40) - pfVar10[1]) + param_3[3];
    param_3[3] = fVar7;
    fVar6 = (fVar2 - fVar1) + param_3[2];
    param_3[2] = fVar6;
    fVar1 = pfVar10[1];
    fVar2 = *pfVar10;
    *param_3 = fVar2 + fVar4;
    param_3[2] = fVar2 + fVar6;
    param_3[1] = fVar5 + fVar1;
    param_3[3] = fVar7 + fVar1;
  }
  return uVar8;
}

