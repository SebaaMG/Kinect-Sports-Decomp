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
extern int fn_82F4EC30();
extern int fn_82F52C20();
extern unsigned int lbl_821CC160;


void fn_8249F840(int param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  float *pfVar3;
  double dVar4;
  
  uVar2 = 0;
  pfVar3 = (float *)(param_1 + 4);
  dVar4 = (double)lbl_821CC160;
  do {
    if (pfVar3[1] != 0.0) {
      uVar1 = fn_82F4EC30(uVar2);
      fn_82F52C20(uVar1,pfVar3[1],1);
      pfVar3[1] = 0.0;
    }
    uVar2 = uVar2 + 1;
    pfVar3 = pfVar3 + 2;
    *pfVar3 = (float)dVar4;
  } while ((uVar2 & 0xffffffff) < 2);
  return;
}

