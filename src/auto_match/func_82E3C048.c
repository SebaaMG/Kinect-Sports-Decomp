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
extern int fn_82E49560();
extern int fn_82E58BE8();
extern int fn_82E6ECE0();


longlong fn_82E3C048(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int *apiStack_30 [12];
  
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *param_2 = 0;
    apiStack_30[0] = (int *)0x0;
    iVar2 = fn_82E58BE8(param_1 + 0xc0,param_2);
    if (iVar2 == 0) {
      lVar1 = fn_82E49560(3,1,0,apiStack_30);
      if (-1 < lVar1) {
        lVar1 = fn_82E6ECE0(apiStack_30[0],0,param_2);
      }
    }
    else {
      lVar1 = 0;
    }
    if (apiStack_30[0] != (int *)0x0) {
      (**(code **)(*apiStack_30[0] + 8))();
      apiStack_30[0] = (int *)0x0;
    }
    if (((int)lVar1 < 0) && ((int *)*param_2 != (int *)0x0)) {
      (**(code **)(*(int *)*param_2 + 8))();
      *param_2 = 0;
    }
  }
  return lVar1;
}

