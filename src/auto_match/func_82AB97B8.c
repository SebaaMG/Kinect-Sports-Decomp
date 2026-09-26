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
extern int fn_82AB6368();
extern int fn_82AB9468();


undefined8 fn_82AB97B8(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar2;
  undefined8 uVar1;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74d0,0xffffffff820d74e0,0x2eb);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d74e0,0x2ec);
  }
  iVar2 = fn_82AB9468(param_1,param_2);
  if (iVar2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74c8,0xffffffff820d74e0,0x2f4);
    uVar1 = 0x13;
  }
  else {
    iVar2 = fn_82AB6368(*(undefined4 *)(iVar2 + 0xc),param_3);
    uVar1 = 0;
    if (iVar2 == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d755c,0xffffffff820d74e0,0x2fe);
      uVar1 = 0x10;
    }
  }
  return uVar1;
}

