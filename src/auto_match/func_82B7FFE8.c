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
extern int fn_82AB6BC8();
extern int fn_82AB6F30();
extern int fn_82AB74F8();
extern int fn_82B7F730();
extern int fn_82B7FE30();


void fn_82B7FFE8(undefined4 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int aiStack_40 [16];
  
  aiStack_40[0] = 1;
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820dbba0,0x3b6);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ce0,0xffffffff820dbba0,0x3b7);
  }
  fn_82AB6F30(param_2,aiStack_40);
  if (aiStack_40[0] != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbd08,0xffffffff820dbba0,0x3bc);
  }
  fn_82AB6BC8(param_1[0xd]);
  param_1[0xd] = (int)param_2;
  if (param_1[0xf] != 0) {
    (*(code *)param_1[2])(*param_1);
  }
  uVar1 = fn_82AB74F8(param_2);
  fn_82B7FE30(param_1,uVar1);
  uVar2 = fn_82B7F730(param_1,param_2,param_3);
  param_1[0xf] = uVar2;
  return;
}

