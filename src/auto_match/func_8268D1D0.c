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
extern unsigned int fStack_14;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int fStack_c;
extern int fn_8268D100();


void fn_8268D1D0(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined8 in_r8;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fStack_20 = (float)param_1;
  fStack_1c = (float)param_2;
  fStack_18 = (float)param_3;
  fStack_14 = (float)param_2;
  fStack_10 = (float)param_3;
  fStack_c = (float)param_4;
  fn_8268D100(param_5,&fStack_20,in_r8);
  return;
}

