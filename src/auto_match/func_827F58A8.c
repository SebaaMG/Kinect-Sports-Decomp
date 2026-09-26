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
extern unsigned int lbl_82196288;


void fn_827F58A8(double param_1,double param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  
  *(short *)(param_3 + 0x22) = (short)(param_4 / 6);
  *(short *)(param_3 + 0x20) = (short)param_4 + (short)(param_4 / 6) * -6;
  dVar6 = (double)fn_827F4868();
  fVar1 = (float)(param_1 - dVar6);
  *(float *)(param_3 + 0x24) = (float)param_1;
  *(float *)(param_3 + 0x28) = fVar1;
  fVar2 = lbl_82196288;
  bVar4 = fVar1 != lbl_82196288;
  bVar5 = fVar1 == lbl_82196288;
  *(float *)(param_3 + 0x30) = lbl_82196288;
  fVar1 = (float)((double)bVar4 * param_2);
  *(float *)(param_3 + 0x2c) = fVar1;
  if ((bVar5) || (cVar3 = '\0', fVar1 <= fVar2)) {
    cVar3 = '\x01';
  }
  *(byte *)(param_3 + 0xdc) = *(byte *)(param_3 + 0xdc) & 0xdf | cVar3 << 5;
  return;
}

