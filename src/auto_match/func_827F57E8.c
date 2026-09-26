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
extern int fn_827F4868();
extern int fn_82809CB0();
extern unsigned int lbl_82196288;


void fn_827F57E8(double param_1,double param_2,int param_3)

{
  float fVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)fn_827F4868();
  fVar1 = lbl_82196288;
  dVar4 = (double)lbl_82196288;
  if (param_2 <= dVar4) {
    *(float *)(param_3 + 0x24) = (float)dVar3;
    *(float *)(param_3 + 0x28) = fVar1;
    *(float *)(param_3 + 0x2c) = fVar1;
    *(float *)(param_3 + 0x30) = fVar1;
    bVar2 = *(byte *)(param_3 + 0xdc) | 0x20;
  }
  else {
    *(float *)(param_3 + 0x28) = (float)(param_1 - dVar3);
    *(float *)(param_3 + 0x24) = (float)param_1;
    dVar3 = (double)fn_82809CB0();
    *(float *)(param_3 + 0x2c) = (float)(dVar3 / param_2);
    *(float *)(param_3 + 0x30) = (float)dVar4;
    bVar2 = *(byte *)(param_3 + 0xdc) & 0xdf | ((double)*(float *)(param_3 + 0x28) == dVar4) << 5;
  }
  *(byte *)(param_3 + 0xdc) = bVar2;
  return;
}

