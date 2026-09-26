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
extern unsigned int fStack_30;
extern int fn_8280A668();


void fn_8281D1D8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,float *param_7)

{
  undefined8 uVar1;
  double dVar2;
  float fStack_30;
  float afStack_2c [7];
  
  uVar1 = fn_8280A668(param_4,&fStack_30,afStack_2c);
  param_7[1] = (float)((double)fStack_30 * param_3);
  dVar2 = (double)(float)((double)afStack_2c[0] * param_3);
  fn_8280A668(param_2,uVar1,&fStack_30,afStack_2c);
  *param_7 = (float)(dVar2 * (double)fStack_30);
  param_7[2] = (float)(dVar2 * (double)afStack_2c[0]);
  return;
}

