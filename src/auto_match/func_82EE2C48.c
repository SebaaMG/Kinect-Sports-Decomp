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
extern int fn_82E275D0();
extern int fn_82E2D068();


longlong fn_82EE2C48(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *apiStack_30 [12];
  
  *param_2 = 0;
  apiStack_30[0] = (int *)0x0;
  lVar1 = fn_82E2D068(apiStack_30);
  if (-1 < lVar1) {
    if (apiStack_30[0] == (int *)0x0) {
      return -0x7fff0001;
    }
    if (param_1 == 0) {
      lVar1 = (**(code **)(*apiStack_30[0] + 0x60))
                        (apiStack_30[0],0xffffffff82153478,0xffffffff821537a8);
    }
    else {
      lVar1 = fn_82E275D0(apiStack_30[0],param_1,(ulonglong)*(ushort *)(param_1 + 0x10) + 0x12
                               );
    }
    if (-1 < lVar1) {
      lVar1 = (**(code **)*apiStack_30[0])(apiStack_30[0],0xffffffff821531c8,param_2);
    }
  }
  if (apiStack_30[0] != (int *)0x0) {
    (**(code **)(*apiStack_30[0] + 8))();
  }
  return lVar1;
}

