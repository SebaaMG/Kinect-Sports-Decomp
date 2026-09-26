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
extern int fn_82A812C8();
extern int fn_82C2B580();
extern int fn_82F691F0();


undefined8 fn_82C449E8(double param_1,float *param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = (float)param_4;
  if (((int)fVar3 < 0) || (100000 < (int)fVar3)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    fn_82A812C8();
    *param_2 = (float)param_1;
    param_2[1] = fVar3;
    uVar1 = fn_82C2B580((param_4 & 0x3fffffff) << 2);
    param_2[2] = (float)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,(int)param_2[1] << 2);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

