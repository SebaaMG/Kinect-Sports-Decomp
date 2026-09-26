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
extern int fn_82AB4A28();


void fn_82AB5B20(undefined4 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6ab4,0xffffffff820d68b0,0x8b4);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a64,0xffffffff820d68b0,0x8b5);
  }
  if (param_1[4] != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a9c,0xffffffff820d68b0,0x8b8);
  }
  if (param_1[5] != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a88,0xffffffff820d68b0,0x8b9);
  }
  *param_1 = (int)param_2;
  uVar1 = fn_82AB4A28(param_2);
  param_1[4] = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820d6a74,0xffffffff820d68b0,0x8c2);
  }
  *(undefined4 *)(param_1[4] + 0xc) = 0;
  *(undefined4 *)(param_1[4] + 8) = param_1[4];
  *(undefined4 *)(param_1[4] + 4) = param_1[4];
  param_1[5] = 0;
  param_1[6] = 1;
  return;
}

