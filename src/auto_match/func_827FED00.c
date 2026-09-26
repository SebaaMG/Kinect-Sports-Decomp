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
extern int fn_82809CB0();
extern unsigned int lbl_821AAD20;


void fn_827FED00(double param_1,double param_2,int param_3)

{
  double dVar1;
  
  *(float *)(param_3 + 0xc) = (float)param_1;
  dVar1 = (double)lbl_821AAD20;
  if (param_2 != dVar1) {
    if (dVar1 <= (double)*(float *)(param_3 + 0x10)) {
      dVar1 = (double)fn_82809CB0((double)(float)(param_1 / param_2));
      *(float *)(param_3 + 0x10) = (float)dVar1;
      return;
    }
    dVar1 = (double)fn_82809CB0((double)(float)(param_1 / param_2));
    dVar1 = -dVar1;
  }
  *(float *)(param_3 + 0x10) = (float)dVar1;
  return;
}

