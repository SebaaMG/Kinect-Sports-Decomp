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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_821CA460;


void fn_82588BB8(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = lbl_821CA460;
  *(float *)(param_2 + 0x48) = -(*param_1 + param_1[3]);
  *(float *)(param_2 + 0x4c) = -(param_1[4] + param_1[7]);
  *(float *)(param_2 + 0x50) = -(param_1[8] + param_1[0xb]);
  *(float *)(param_2 + 0x54) = -(param_1[0xc] + param_1[0xf]);
  fVar1 = *(float *)(param_2 + 0x48);
  fVar2 = *(float *)(param_2 + 0x50);
  fVar3 = *(float *)(param_2 + 0x4c);
  fVar4 = fVar5 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  *(float *)(param_2 + 0x48) = fVar1 * fVar4;
  *(float *)(param_2 + 0x4c) = fVar3 * fVar4;
  *(float *)(param_2 + 0x50) = fVar2 * fVar4;
  *(float *)(param_2 + 0x54) = fVar4 * *(float *)(param_2 + 0x54);
  *(float *)(param_2 + 0x58) = -(param_1[3] - *param_1);
  *(float *)(param_2 + 0x5c) = -(param_1[7] - param_1[4]);
  *(float *)(param_2 + 0x60) = -(param_1[0xb] - param_1[8]);
  *(float *)(param_2 + 100) = -(param_1[0xf] - param_1[0xc]);
  fVar1 = *(float *)(param_2 + 0x58);
  fVar2 = *(float *)(param_2 + 0x60);
  fVar3 = *(float *)(param_2 + 0x5c);
  fVar4 = fVar5 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  *(float *)(param_2 + 0x58) = fVar1 * fVar4;
  *(float *)(param_2 + 0x5c) = fVar3 * fVar4;
  *(float *)(param_2 + 0x60) = fVar2 * fVar4;
  *(float *)(param_2 + 100) = fVar4 * *(float *)(param_2 + 100);
  *(float *)(param_2 + 0x78) = -(param_1[1] + param_1[3]);
  *(float *)(param_2 + 0x7c) = -(param_1[5] + param_1[7]);
  *(float *)(param_2 + 0x80) = -(param_1[9] + param_1[0xb]);
  *(float *)(param_2 + 0x84) = -(param_1[0xd] + param_1[0xf]);
  fVar1 = *(float *)(param_2 + 0x78);
  fVar2 = *(float *)(param_2 + 0x80);
  fVar3 = *(float *)(param_2 + 0x7c);
  fVar4 = fVar5 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  *(float *)(param_2 + 0x78) = fVar4 * fVar1;
  *(float *)(param_2 + 0x7c) = fVar4 * fVar3;
  *(float *)(param_2 + 0x84) = fVar4 * *(float *)(param_2 + 0x84);
  *(float *)(param_2 + 0x80) = fVar4 * fVar2;
  *(float *)(param_2 + 0x68) = -(param_1[3] - param_1[1]);
  *(float *)(param_2 + 0x6c) = -(param_1[7] - param_1[5]);
  *(float *)(param_2 + 0x70) = -(param_1[0xb] - param_1[9]);
  *(float *)(param_2 + 0x74) = -(param_1[0xf] - param_1[0xd]);
  fVar1 = *(float *)(param_2 + 0x68);
  fVar2 = *(float *)(param_2 + 0x70);
  fVar3 = *(float *)(param_2 + 0x6c);
  fVar4 = fVar5 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  *(float *)(param_2 + 0x6c) = fVar4 * fVar3;
  *(float *)(param_2 + 0x70) = fVar4 * fVar2;
  *(float *)(param_2 + 0x74) = *(float *)(param_2 + 0x74) * fVar4;
  *(float *)(param_2 + 0x68) = fVar4 * fVar1;
  *(float *)(param_2 + 0x98) = -param_1[2];
  *(float *)(param_2 + 0x9c) = -param_1[6];
  *(float *)(param_2 + 0xa0) = -param_1[10];
  *(float *)(param_2 + 0xa4) = -param_1[0xe];
  fVar1 = *(float *)(param_2 + 0x98);
  fVar2 = *(float *)(param_2 + 0xa0);
  fVar3 = *(float *)(param_2 + 0x9c);
  fVar4 = fVar5 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  *(float *)(param_2 + 0x98) = fVar4 * fVar1;
  *(float *)(param_2 + 0x9c) = fVar4 * fVar3;
  *(float *)(param_2 + 0xa0) = fVar4 * fVar2;
  *(float *)(param_2 + 0xa4) = fVar4 * *(float *)(param_2 + 0xa4);
  *(float *)(param_2 + 0x88) = -(param_1[3] - param_1[2]);
  *(float *)(param_2 + 0x8c) = -(param_1[7] - param_1[6]);
  *(float *)(param_2 + 0x90) = -(param_1[0xb] - param_1[10]);
  *(float *)(param_2 + 0x94) = -(param_1[0xf] - param_1[0xe]);
  fVar1 = *(float *)(param_2 + 0x88);
  fVar2 = *(float *)(param_2 + 0x8c);
  fVar3 = *(float *)(param_2 + 0x90);
  fVar5 = fVar5 / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  *(float *)(param_2 + 0x8c) = fVar5 * fVar2;
  *(float *)(param_2 + 0x88) = fVar5 * fVar1;
  *(float *)(param_2 + 0x90) = fVar5 * fVar3;
  *(float *)(param_2 + 0x94) = fVar5 * *(float *)(param_2 + 0x94);
  return;
}

