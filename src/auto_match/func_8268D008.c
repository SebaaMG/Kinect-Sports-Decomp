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
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_c;
extern int fn_8268CD40();


void fn_8268D008(float *param_1,float *param_2,float *param_3)

{
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fStack_40 = *param_1;
  fStack_3c = param_1[1];
  fStack_38 = param_1[2];
  fStack_34 = param_1[3];
  fStack_30 = param_1[4];
  fStack_2c = param_1[5];
  fStack_20 = fStack_40;
  fStack_1c = fStack_3c;
  fStack_18 = fStack_38;
  fStack_14 = fStack_34;
  fStack_10 = fStack_30;
  fStack_c = fStack_2c;
  fn_8268CD40(&fStack_40,&fStack_20);
  *param_2 = *param_3 * fStack_40 + param_3[1] * fStack_3c + fStack_38;
  param_2[1] = param_3[1] * fStack_30 + *param_3 * fStack_34 + fStack_2c;
  return;
}

