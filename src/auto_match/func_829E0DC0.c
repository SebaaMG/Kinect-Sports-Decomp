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
extern int fn_829E0C20();
extern int fn_82A1DDC0();


undefined8 fn_829E0DC0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_4 & 0xffff) == 0) || (lVar2 = fn_829E0C20(param_3,param_4), lVar2 == 0)) {
    uVar1 = 0xffffffff80004005;
  }
  else {
    lVar3 = param_2 * 0xc + param_1;
    fn_82A1DDC0(lVar3 + 0x14,lVar2 + 0xc,4);
    fn_82A1DDC0((param_2 + 2) * 0xc + param_1,lVar2 + 0x10,4);
    fn_82A1DDC0(lVar3 + 0x10,lVar2 + 8,1);
    uVar1 = 0;
  }
  return uVar1;
}

