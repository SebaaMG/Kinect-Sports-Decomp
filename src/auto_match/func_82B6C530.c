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
extern int fn_82B6C150();
extern int fn_82B6C280();
extern int fn_82B6C390();


void fn_82B6C530(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  int iVar1;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9990,0xffffffff820d9998,0x32b);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6854,0xffffffff820d9998,0x32c);
  }
  if ((param_5 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ac4,0xffffffff820d9998,0x32d);
  }
  if ((param_6 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ab8,0xffffffff820d9998,0x32e);
  }
  iVar1 = (int)param_3;
  if ((iVar1 == 1) || (iVar1 == 3)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      fn_82B6C150(param_1,param_3,param_4,param_5,param_6);
    }
    else {
      fn_82B6C390(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  else {
    if ((iVar1 != 2) && (iVar1 != 0)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9b20,0xffffffff820d9998,0x341);
    }
    fn_82B6C280(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}

