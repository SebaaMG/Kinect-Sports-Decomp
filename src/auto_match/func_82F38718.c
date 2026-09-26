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
extern int fn_82F377E8();
extern int fn_82F382F0();
extern unsigned int uStack_30;


longlong fn_82F38718(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  undefined4 uStack_30;
  int *apiStack_2c [11];
  
  if (param_4 == (int *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    lVar1 = fn_82F382F0(param_1,param_2,param_3,&uStack_30);
    if (lVar1 < 0) {
      *param_4 = 0;
    }
    else {
      fn_82F377E8(param_1 + 8,uStack_30,apiStack_2c);
      apiStack_2c[0] = (int *)*apiStack_2c[0];
      *param_4 = (int)apiStack_2c[0];
      if (apiStack_2c[0] == (int *)0x0) {
        lVar1 = -0x7fff0001;
      }
      else {
        (**(code **)(*apiStack_2c[0] + 4))();
      }
    }
  }
  return lVar1;
}

