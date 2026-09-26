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
extern int fn_82F67DE8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;


void fn_82773EC0(double param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  
  *(float *)(param_2 + 0x9c4) = (float)param_1;
  param_1 = -param_1;
  dVar3 = (double)fn_82F67DE8(lbl_82005710);
  dVar4 = (double)(float)dVar3;
  dVar3 = (double)fn_82F67DE8(param_1);
  *(float *)(param_2 + 0x9d0) = (float)dVar3;
  *(float *)(param_2 + 0x9d8) = (float)dVar4;
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82002AE0;
  *(undefined4 *)(param_2 + 0x9cc) = lbl_82002AE0;
  *(undefined4 *)(param_2 + 0x9d4) = uVar2;
  *(undefined4 *)(param_2 + 0x9dc) = uVar1;
  *(undefined4 *)(param_2 + 0x9e0) = uVar2;
  return;
}

