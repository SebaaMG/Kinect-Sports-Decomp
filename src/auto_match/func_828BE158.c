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
extern int fn_828BD8C8();
extern int fn_828BE070();


void fn_828BE158(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((int)param_3 == -1) {
    if (param_2 == (int *)0x0) {
      return;
    }
  }
  else {
    (**(code **)(*param_2 + 4))(param_2);
    (**(code **)(*param_2 + 0x7c))(param_2,param_1);
    iVar1 = fn_828BD8C8(param_1,param_2,param_3);
    if ((iVar1 != 0) && (iVar1 == 1)) {
      fn_828BE070(param_2,param_3);
      return;
    }
  }
  (**(code **)*param_2)(param_2,1);
  return;
}

