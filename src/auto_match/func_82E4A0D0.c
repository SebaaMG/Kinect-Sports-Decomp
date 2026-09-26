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
extern unsigned int *auStack_40;
extern int fn_82E50CB8();
extern int fn_82E50F10();


longlong fn_82E4A0D0(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong auStack_40 [8];
  
  auStack_40[0] = 0;
  fn_82E50CB8(param_1 + 0x16);
  if (param_2 == (undefined4 *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else if (param_1[0x27] == -1) {
    lVar1 = -0x3ff2c94e;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1,auStack_40);
    if (-1 < lVar1) {
      if (*(ulonglong *)(param_1 + 0x32) < auStack_40[0]) {
        *param_2 = 0;
      }
      else {
        *param_2 = 1;
      }
    }
  }
  fn_82E50F10(param_1 + 0x16);
  return lVar1;
}

