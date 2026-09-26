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
extern unsigned int *auStack_40;
extern int fn_823AAD80();
extern int fn_82AB15D0();
extern int fn_82AB9C00();


uint fn_82AB4508(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint auStack_40 [16];
  
  auStack_40[0] = 0;
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d67c8,0xffffffff820d67d8,0x109);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d67b8,0xffffffff820d67d8,0x10a);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d67a4,0xffffffff820d67d8,0x10b);
  }
  else if (((param_2 & 0xffffffff) != 0) && ((param_1 & 0xffffffff) != 0)) {
    uVar1 = fn_823AAD80(param_1);
    lVar2 = fn_82AB9C00(uVar1,param_2,param_3,auStack_40);
    return -(uint)(lVar2 == 0) & auStack_40[0];
  }
  return 0;
}

