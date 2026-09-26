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
extern int fn_8314244C();
extern int fn_8314245C();


uint fn_82A1F250(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((int)param_1 == 0) {
    fn_8314245C();
  }
  uVar1 = fn_8314244C(0,param_1);
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 & 0xffff;
    if ((uVar1 & 0x1fff0000) != 0x70000) {
      uVar2 = 0x65b;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

