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
extern int fn_82F655D8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82155200;


void fn_82FC9D50(double param_1,uint *param_2)

{
  longlong lVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  
  pfVar2 = (float *)(param_2 + 0x2b);
  lVar1 = 8;
  dVar6 = (double)lbl_82002AE0;
  dVar4 = (double)(float)(dVar6 / (double)(float)((double)*param_2 * param_1));
  uVar5 = lbl_82155200;
  do {
    dVar3 = (double)fn_82F655D8(uVar5,(double)(float)((double)(uint)pfVar2[-0xf] * dVar4));
    lVar1 = lVar1 + -1;
    pfVar2[-7] = (float)(dVar6 - (double)(float)dVar3);
    pfVar2 = pfVar2 + 1;
    *pfVar2 = (float)dVar3;
  } while (lVar1 != 0);
  return;
}

