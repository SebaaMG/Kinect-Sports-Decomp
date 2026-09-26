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
extern int fn_83034AC0();


undefined8
fn_8301A9D8(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  int *piVar1;
  
  piVar1 = *(int **)((param_2 % 0xc1 + 10) * 4 + param_1);
  if (piVar1 != (int *)0x0) {
    while (piVar1[1] != param_2) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return 2;
      }
    }
    if (piVar1 + 2 != (int *)0x0) {
      fn_83034AC0(piVar1[2],param_3,param_4,param_5,param_6);
      return 1;
    }
  }
  return 2;
}

