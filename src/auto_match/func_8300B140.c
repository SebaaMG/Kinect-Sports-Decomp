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
extern int fn_8300C538();


undefined8
fn_8300B140(double param_1,longlong param_2,undefined8 param_3,undefined8 param_4,float param_5,
             float param_6,float param_7)

{
  float *pfVar2;
  undefined8 uVar1;
  
  pfVar2 = (float *)fn_8300C538(param_2 + 0x5c);
  if (pfVar2 == (float *)0x0) {
    uVar1 = 2;
  }
  else {
    *pfVar2 = (float)param_1;
    pfVar2[3] = param_7;
    uVar1 = 1;
    pfVar2[2] = param_6;
    pfVar2[1] = param_5;
  }
  return uVar1;
}

