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
extern int fn_82695FA0();
extern int fn_826CD3B0();


uint * fn_826CD840(uint *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  fn_826CD3B0(param_1,param_2[1]);
  uVar1 = 0;
  if (param_1[1] != 0) {
    lVar2 = 0;
    do {
      fn_82695FA0(lVar2 + (ulonglong)*param_1,(ulonglong)*param_2 + lVar2);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar1 < param_1[1]);
  }
  return param_1;
}

