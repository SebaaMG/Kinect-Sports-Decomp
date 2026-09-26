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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _iStack_20 ((*(U64*)&iStack_20))
extern unsigned int fStack_1c;
extern int fn_824BF8A8();
extern unsigned int iStack_20;


void fn_824DC918(double param_1,int *param_2)

{
  float fVar1;
  int iStack_20;
  float fStack_1c;
  
  _iStack_20 = CONCAT44(param_2[7],(float)param_1);
  fn_824BF8A8(param_2,&iStack_20);
  fVar1 = (float)param_2[4];
  param_2[4] = (int)(float)((double)fVar1 + param_1);
  param_2[5] = (int)((float)((double)fVar1 + param_1) / (float)(uint)(param_2[1] - *param_2 >> 3));
  return;
}

