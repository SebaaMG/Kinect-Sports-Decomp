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
extern int fn_82AB63F8();
extern int fn_82AB66F8();
extern int fn_82AB67A8();
extern int fn_82B9FA18();


void fn_82B7FE30(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820dbba0,0x282);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbcfc,0xffffffff820dbba0,0x283);
  }
  for (lVar1 = fn_82AB63F8(param_2); lVar1 != 0; lVar1 = fn_82AB66F8(param_2,lVar1)) {
    puVar2 = (undefined4 *)fn_82AB67A8(lVar1);
    fn_82B9FA18(param_1,*puVar2,puVar2[1]);
  }
  return;
}

