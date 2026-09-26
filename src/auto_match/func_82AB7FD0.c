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
extern int fn_82AB74A0();
extern int fn_82F68CC0();


undefined8 fn_82AB7FD0(undefined4 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d6be8,0x3bc);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6e14,0xffffffff820d6be8,0x3bd);
  }
  uVar1 = fn_82AB74A0(param_2);
  lVar2 = (*(code *)param_1[1])(*param_1,uVar1);
  if (lVar2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6dd0,0xffffffff820d6be8,0x3c6);
    uVar1 = 0x10;
  }
  else {
    uVar1 = fn_82AB74A0(param_2);
    fn_82F68CC0(lVar2,param_2,uVar1);
    fn_82AB6368(param_1[0x25f],lVar2);
    uVar1 = 0;
  }
  return uVar1;
}

