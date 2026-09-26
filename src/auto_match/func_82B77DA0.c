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


undefined4 *
fn_82B77DA0(undefined8 param_1,code *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820da3b8,0x3f23);
  }
  if (param_3 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820da3b8,0x3f24);
  }
  if (param_4 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820daaec,0xffffffff820da3b8,0x3f25);
  }
  if (param_5 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820daae0,0xffffffff820da3b8,0x3f26);
  }
  if (param_6 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820daad4,0xffffffff820da3b8,0x3f27);
  }
  puVar1 = (undefined4 *)(*param_2)(param_1,0x18);
  if (puVar1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820daac4,0xffffffff820da3b8,0x3f2e);
  }
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[5] = param_4;
  puVar1[3] = param_6;
  puVar1[4] = param_5;
  *puVar1 = (int)param_1;
  return puVar1;
}

