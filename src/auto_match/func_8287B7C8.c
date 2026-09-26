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
extern int fn_82869448();
extern int fn_828694C0();
extern int fn_82869538();
extern int fn_828695B0();
extern int fn_82869628();
extern int fn_8286C828();


undefined8 fn_8287B7C8(int param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = fn_82869448();
  }
  else if (param_2 == 1) {
    uVar1 = fn_828694C0();
  }
  else if (param_2 < 3) {
    uVar1 = fn_82869538();
  }
  else if (param_2 == 3) {
    uVar1 = fn_828695B0();
  }
  else {
    if (4 < param_2) {
      return 0xffffffffa0250000;
    }
    uVar1 = fn_82869628();
  }
  uVar1 = fn_8286C828(param_1 + 0x60,*(undefined4 *)(param_1 + 0x2c),uVar1);
  return uVar1;
}

