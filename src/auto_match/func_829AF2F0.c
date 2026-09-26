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
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005758;


void fn_829AF2F0(double param_1,double param_2,int param_3)

{
  if (lbl_82005720 < ABS(param_1 * param_2 - lbl_82005758)) {
    *(uint *)(param_3 + 0x560) = *(uint *)(param_3 + 0x560) | 0x2000;
  }
  *(float *)(param_3 + 0x630) = (float)param_2;
  *(float *)(param_3 + 0x634) = (float)param_1;
  return;
}

