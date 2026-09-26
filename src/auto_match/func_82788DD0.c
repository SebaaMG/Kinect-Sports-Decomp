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


int fn_82788DD0(double param_1,double param_2,uint *param_3,uint param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_3;
  if (param_3[0x1e] < uVar3) {
    uVar2 = uVar3;
    do {
      uVar3 = uVar3 - 1;
      pfVar1 = (float *)(*(int *)((uVar3 >> 6 & 0x3fffffc) + param_3[3]) + (uVar3 & 0xff) * 0xc);
      if (((((uint)pfVar1[2] & 0xffffff) == param_4) && ((double)*pfVar1 == param_1)) &&
         ((double)pfVar1[1] == param_2)) {
        return uVar2 - 1;
      }
      uVar2 = uVar2 - 1;
    } while (param_3[0x1e] < uVar2);
  }
  return -1;
}

