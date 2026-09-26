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
extern int fn_8280A668();
extern unsigned int lbl_82002C5C;


void fn_8280F970(double param_1,float *param_2,undefined8 param_3,float *param_4)

{
  float afStack_20 [2];
  
  fn_8280A668((double)(float)(param_1 * (double)lbl_82002C5C),param_2,afStack_20,param_4 + 3);
  *param_4 = *param_2 * afStack_20[0];
  param_4[1] = param_2[1] * afStack_20[0];
  param_4[2] = param_2[2] * afStack_20[0];
  return;
}

