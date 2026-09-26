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


void fn_82B7FEE0(undefined4 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int aiStack_40 [16];
  
  aiStack_40[0] = 0;
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820dbba0,0x37a);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ce8,0xffffffff820dbba0,0x37b);
  }
  fn_82AB6F30(param_2,aiStack_40);
  if (aiStack_40[0] != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6c64,0xffffffff820dbba0,0x380);
  }
  fn_82AB6BC8(param_1[0xc]);
  param_1[0xc] = (int)param_2;
  if (param_1[0xe] != 0) {
    (*(code *)param_1[2])(*param_1);
  }
  uVar1 = fn_82AB74F8(param_2);
  fn_82B7FE30(param_1,uVar1);
  uVar2 = fn_82B7F730(param_1,param_2,param_3);
  param_1[0xe] = uVar2;
  return;
}

