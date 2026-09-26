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
extern unsigned int fStack_10;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x0000001c;


void fn_828B9208(double param_1,int param_2)

{
  float *pfVar1;
  float fStack_10;
  float afStack_c [3];
  
  pfVar1 = &fStack_10;
  afStack_c[0] = lbl_82002AE0;
  fStack_10 = lbl_821AAD20;
  if ((double)lbl_821AAD20 <= param_1) {
    pfVar1 = (float *)&stack0x0000001c;
  }
  if (lbl_82002AE0 < *pfVar1) {
    pfVar1 = afStack_c;
  }
  *(float *)(param_2 + 0xb0) = *pfVar1;
  return;
}

