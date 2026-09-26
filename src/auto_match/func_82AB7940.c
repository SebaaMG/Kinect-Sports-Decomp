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
extern int fn_82AB71F0();
extern int fn_82AB7608();
extern int fn_82B6C698();


undefined8
fn_82AB7940(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d6be8,0x6dc);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6f80,0xffffffff820d6be8,0x6dd);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6854,0xffffffff820d6be8,0x6de);
  }
  uVar1 = fn_82B6C698(*(undefined4 *)(param_1 + 0x38),param_2,param_3,param_4,param_5,param_6);
  if (((((int)param_3 == 1) || ((int)param_3 == 3)) && ((int)uVar1 == 0)) &&
     (*(int *)(param_1 + 0x24) == 0)) {
    uVar2 = fn_82AB71F0(param_2,0x28,param_4);
    fn_82AB7608(param_1,0x28,param_4,uVar2);
  }
  return uVar1;
}

