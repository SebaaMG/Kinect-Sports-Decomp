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
extern int fn_826AB1B8();
extern int fn_826AF6F8();
extern int fn_826C3768();


undefined8 fn_826B0F10(longlong param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (*(byte *)(param_2 + 4) < 7) {
    uVar3 = fn_826AF6F8(param_1 + 0x27c,param_3);
  }
  else {
    lVar1 = fn_826AB1B8();
    uVar3 = -(ulonglong)(lVar1 != 0) & lVar1 + 4U;
  }
  if ((uVar3 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    if ((param_4 & 0xffffffff) != 0) {
      fn_826C3768(param_4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

