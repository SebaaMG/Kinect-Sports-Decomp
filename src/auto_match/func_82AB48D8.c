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
extern int fn_82AB15D0();
extern int fn_82AB9110();
extern int fn_82B69AF8();
extern int fn_82B69EC0();


longlong fn_82AB48D8(ulonglong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6858,0xffffffff820d67d8,0x26b);
  }
  lVar1 = fn_82B69EC0(param_1,param_2);
  if (lVar1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6854,0xffffffff820d67d8,0x26f);
  }
  fn_82B69AF8(lVar1);
  fn_82AB9110(param_1,lVar1);
  return lVar1;
}

