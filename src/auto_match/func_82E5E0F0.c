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
extern int fn_82E62630();


longlong fn_82E5E0F0(undefined4 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piStack_30;
  int *apiStack_2c [11];
  
  if ((param_1 == (undefined4 *)0x0) || ((param_2 & 0xffffffff) == 0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    apiStack_2c[0] = (int *)0x0;
    piStack_30 = (int *)0x0;
    lVar1 = (**(code **)*param_1)(param_1,0xffffffff82154c18,apiStack_2c);
    piVar2 = piStack_30;
    if ((-1 < lVar1) &&
       (lVar1 = (**(code **)(*apiStack_2c[0] + 0x10))
                          (apiStack_2c[0],0xffffffff82154aa8,0,&piStack_30), piVar2 = piStack_30,
       -1 < lVar1)) {
      if (piStack_30 == (int *)0x0) {
        lVar1 = -0x3ff2c945;
        piVar2 = (int *)0x0;
      }
      else {
        lVar1 = fn_82E62630(piStack_30,param_2);
        piVar2 = piStack_30;
      }
    }
    if (apiStack_2c[0] != (int *)0x0) {
      (**(code **)(*apiStack_2c[0] + 8))();
      apiStack_2c[0] = (int *)0x0;
      piVar2 = piStack_30;
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return lVar1;
}

