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
extern unsigned int fStack00000020;
extern unsigned int fStack00000024;
extern unsigned int fStack00000028;


void fn_8307DA38(double param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float fStack00000020;
  float fStack00000024;
  float fStack00000028;
  
  fStack00000024 = (float)param_3;
  fStack00000028 = (float)((ulonglong)param_4 >> 0x20);
  fStack00000020 = (float)((ulonglong)param_3 >> 0x20);
  *param_2 = (float)((double)fStack00000020 * param_1);
  param_2[1] = (float)((double)fStack00000024 * param_1);
  param_2[2] = (float)((double)fStack00000028 * param_1);
  return;
}

