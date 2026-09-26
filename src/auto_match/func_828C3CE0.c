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
extern int fn_8265C9E0();
extern int fn_828AD488();
extern int fn_828B6408();
extern int fn_828B84A8();
extern int fn_82923B38();


undefined8 fn_828C3CE0(undefined8 param_1,undefined8 param_2)

{
  char cVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  
  cVar3 = fn_828AD488(param_2);
  if (cVar3 == '\0') {
    fn_82923B38(param_1);
  }
  else {
    uVar1 = fn_8265C9E0(0x50);
    if ((uVar1 & 0xffffffff) == 0) {
      fn_828B6408(param_1,0);
    }
    else {
      uVar2 = fn_828B84A8(uVar1,param_2);
      fn_828B6408(param_1,uVar2);
    }
  }
  return param_1;
}

