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


void fn_8285AAF0(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = *(int *)(param_1 + 100) + param_2;
  iVar12 = *(int *)(param_1 + 0x68) + *(int *)(param_2 + 8);
  if (*(int *)(iVar13 + 0x94) != 0) {
    fVar1 = param_3[1];
    fVar2 = *(float *)(iVar13 + 0x28);
    fVar3 = param_3[2];
    fVar4 = *(float *)(iVar13 + 0x30);
    fVar5 = *param_3;
    fVar6 = *(float *)(iVar13 + 0x18);
    fVar7 = *(float *)(iVar13 + 0x20);
    fVar8 = *(float *)(iVar13 + 0x38);
    fVar9 = *(float *)(iVar13 + 0x10);
    fVar10 = *(float *)(iVar13 + 0x48);
    fVar11 = *(float *)(iVar13 + 0x40);
    *(float *)(iVar12 + 8) =
         *(float *)(iVar13 + 0x34) * fVar3 +
         *(float *)(iVar13 + 0x14) * fVar5 + *(float *)(iVar13 + 0x24) * fVar1 +
         *(float *)(iVar13 + 0x44);
    *(float *)(iVar12 + 0xc) = fVar8 * fVar3 + fVar6 * fVar5 + fVar2 * fVar1 + fVar10;
    *(float *)(iVar12 + 4) = fVar9 * fVar5 + fVar7 * fVar1 + fVar4 * fVar3 + fVar11;
    return;
  }
  *(float *)(iVar12 + 4) = *param_3;
  *(float *)(iVar12 + 8) = param_3[1];
  *(float *)(iVar12 + 0xc) = param_3[2];
  return;
}

