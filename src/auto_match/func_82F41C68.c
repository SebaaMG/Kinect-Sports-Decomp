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
extern int fn_82F68CC0();


undefined8 fn_82F41C68(undefined8 param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_4 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_4;
  }
  if ((param_3 & 0xffffffff) != 0) {
    if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
      uVar2 = 0xffffffffc00d36b1;
    }
    else {
      fn_82F68CC0(param_3,param_1,param_2);
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)param_2;
  }
  return uVar2;
}

