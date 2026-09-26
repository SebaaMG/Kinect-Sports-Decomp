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
extern int fn_8232A928();
extern int fn_8232A988();


undefined8 fn_8232A260(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1 >> 0x3f;
  uVar2 = param_1 >> 0x34 & 0x7ff;
  if (uVar2 == 0) {
LAB_8232a2a0:
    fn_8232A928();
  }
  else {
    uVar2 = uVar2 - 0x380;
    if ((longlong)uVar2 < 1) {
      if (0x3f < -uVar2) goto LAB_8232a2a0;
      fn_8232A988(param_2,uVar1,0,1);
      fn_8232A988(param_2,0,1,8);
      uVar1 = ((param_1 & 0xfffffffffffff | 0x10000000000000) >> (-uVar2 + 1 & 0x7f)) >> 0x1c;
    }
    else if (uVar2 < 0x100) {
      fn_8232A988(param_2,uVar1,0,1);
      fn_8232A988(param_2,uVar2,1,8);
      uVar1 = (param_1 & 0xfffffffffffff) >> 0x1c;
    }
    else {
      fn_8232A988(param_2,uVar1,0,1);
      fn_8232A988(param_2,0xff,1,8);
      uVar1 = 0xffffff;
    }
    fn_8232A988(param_2,uVar1,9,0x18);
  }
  return param_2;
}

