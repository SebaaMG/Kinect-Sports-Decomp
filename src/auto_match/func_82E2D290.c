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
extern int fn_82E27BF0();
extern int fn_82E28460();
extern int fn_82E2D1D8();


longlong fn_82E2D290(undefined8 param_1,undefined8 param_2,int param_3,int param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,int *param_8)

{
  longlong lVar1;
  
  *param_8 = 0;
  lVar1 = fn_82E2D1D8(param_8);
  if (-1 < lVar1) {
    if (*param_8 == 0) {
      lVar1 = -0x7fff0001;
    }
    else {
      lVar1 = fn_82E28460(*param_8,param_1,param_2,param_7);
      if (((-1 < lVar1) &&
          (((param_3 == 0 || (param_4 == 0)) ||
           (lVar1 = (**(code **)(*(int *)*param_8 + 0x58))
                              ((int *)*param_8,0xffffffff82153598,CONCAT44(param_3,param_4)),
           -1 < lVar1)))) &&
         ((((int)param_5 == 0 ||
           (lVar1 = (**(code **)(*(int *)*param_8 + 0x54))
                              ((int *)*param_8,0xffffffff821535e8,param_5), -1 < lVar1)) &&
          (lVar1 = fn_82E27BF0(*param_8,param_6), -1 < lVar1)))) {
        return lVar1;
      }
    }
  }
  if ((int *)*param_8 != (int *)0x0) {
    (**(code **)(*(int *)*param_8 + 8))();
    *param_8 = 0;
  }
  return lVar1;
}

