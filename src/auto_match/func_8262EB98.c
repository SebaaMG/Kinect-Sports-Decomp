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
extern int fn_8253FE20();


void fn_8262EB98(undefined8 param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  
  fVar1 = param_2[0xf];
  if (((uint)fVar1 & 1) != 0) {
    lVar3 = fn_8253FE20((double)param_2[5],param_1,param_2,param_3,param_2 + 10);
    fn_8253FE20((double)param_2[6],lVar3 + 4,param_3,lVar3 + 0x2c);
    fn_8253FE20((double)param_2[7],param_2 + 2,param_3,param_2 + 0xc);
  }
  if (((uint)fVar1 & 2) != 0) {
    fn_8253FE20((double)param_2[8],param_2 + 3,param_3,param_2 + 0xd);
  }
  if (((uint)fVar1 & 4) != 0) {
    fn_8253FE20((double)param_2[9],param_2 + 4,param_3,param_2 + 0xe);
  }
  fVar2 = param_2[0x10];
  param_2[0x10] = (float)((int)fVar2 + -1);
  if ((int)fVar2 < 1) {
    if ((((((uint)fVar1 & 1) != 0) && (*param_2 == param_2[5])) && (param_2[1] == param_2[6])) &&
       (param_2[2] == param_2[7])) {
      param_2[0xf] = (float)((uint)param_2[0xf] & 0xfffffffe);
    }
    if ((((uint)fVar1 & 2) != 0) && (param_2[3] == param_2[8])) {
      param_2[0xf] = (float)((uint)param_2[0xf] & 0xfffffffd);
    }
    if ((((uint)fVar1 & 4) != 0) && (param_2[4] == param_2[9])) {
      param_2[0xf] = (float)((uint)param_2[0xf] & 0xfffffffb);
    }
    param_2[0x10] = 7.00649e-45;
  }
  return;
}

