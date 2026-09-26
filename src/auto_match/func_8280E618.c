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
extern unsigned int fStack_14;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_8280DED0();


bool fn_8280E618(double param_1,float *param_2,undefined8 param_3)

{
  float *pfVar1;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (param_2 != &fStack_20) {
    fStack_20 = *param_2;
    fStack_1c = param_2[1];
    fStack_18 = param_2[2];
    fStack_14 = param_2[3];
  }
  fn_8280DED0(param_2,param_3,&fStack_20);
  pfVar1 = (float *)param_3;
  return (double)((fStack_20 - *pfVar1) * (fStack_20 - *pfVar1) +
                 (fStack_1c - pfVar1[1]) * (fStack_1c - pfVar1[1]) +
                 (fStack_14 - pfVar1[3]) * (fStack_14 - pfVar1[3]) +
                 (fStack_18 - pfVar1[2]) * (fStack_18 - pfVar1[2])) <= param_1;
}

