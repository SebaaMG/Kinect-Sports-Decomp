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
extern int fn_82E44D20();
extern int fn_82E44DA0();
extern int fn_82F68CC0();


ulonglong fn_82E44EC0(uint *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  if ((*param_1 & 0x8000000) == 0) {
    if ((param_3 & 0xffffffff) < 0x4000001) {
      iVar2 = fn_82E44DA0(param_1,param_3 + param_1[1]);
      if (iVar2 < 0) {
        uVar1 = -(ulonglong)((*param_1 & 0x8000000) != 0) & 0xffffffff8007000e;
      }
      else {
        fn_82F68CC0((ulonglong)param_1[3] + ((ulonglong)param_1[1] & 0x7fffffff) * 2,param_2,
                     (param_3 & 0x7fffffff) << 1);
        fn_82E44D20(param_1,param_3 + param_1[1]);
        uVar1 = 0;
      }
    }
    else {
      *param_1 = *param_1 | 0x8000000;
      uVar1 = 0xffffffff8007000e;
    }
  }
  else {
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

