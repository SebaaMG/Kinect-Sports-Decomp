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
extern unsigned int lbl_821CA460;


void fn_8252AF80(double param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  
  fVar2 = lbl_821CA460;
  param_2 = param_2 + 0x1d0;
  dVar4 = (double)lbl_821CA460;
  *(float *)(param_3 * 0x10 + param_2 + 0x2c) = (float)param_1;
  *(float *)((param_3 + 0x10) * 4 + param_2) = fVar2;
  iVar1 = (param_3 + 4) * 4;
  uVar3 = *(uint *)(iVar1 + param_2);
  if (dVar4 <= param_1) {
    uVar3 = uVar3 & 0xffffffdf;
  }
  else {
    uVar3 = uVar3 | 0x20;
  }
  *(uint *)(iVar1 + param_2) = uVar3;
  return;
}

