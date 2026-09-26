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
extern int fn_82AB4E50();
extern int fn_82AB8668();
extern int fn_82AB94D0();
extern int fn_82AB9D20();
extern int fn_82B69998();
extern int fn_82B6ADF8();
extern int fn_82B6B298();
extern int fn_82B6B4E8();
extern int fn_82B6B728();
extern int fn_82B6C878();
extern int fn_82B6D938();
extern int fn_82B6E1A0();
extern int fn_82B77EE0();


int fn_82AB8D90(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    fn_82AB8668(param_1);
    fn_82AB4E50(*(undefined4 *)(param_1 + 0x48));
    iVar1 = fn_82B77EE0(*(undefined4 *)(param_1 + 0x6c));
    if (iVar1 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7340,0xffffffff820d7090,0x222);
    }
    iVar1 = fn_82B6C878(*(undefined4 *)(param_1 + 0x68));
    if (iVar1 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7340,0xffffffff820d7090,0x225);
    }
    iVar1 = fn_82B6ADF8(*(undefined4 *)(param_1 + 100));
    if (iVar1 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7340,0xffffffff820d7090,0x228);
    }
    iVar1 = fn_82AB9D20(*(undefined4 *)(param_1 + 0x60));
    if (iVar1 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7340,0xffffffff820d7090,0x22b);
    }
    iVar1 = fn_82B77EE0(*(undefined4 *)(param_1 + 0x58));
    if (iVar1 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7340,0xffffffff820d7090,0x22e);
    }
    iVar1 = fn_82AB94D0(*(undefined4 *)(param_1 + 0x54));
    if (iVar1 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7340,0xffffffff820d7090,0x231);
    }
    iVar1 = fn_82B6D938(*(undefined4 *)(param_1 + 0x50));
    if (iVar1 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7340,0xffffffff820d7090,0x234);
    }
    iVar1 = fn_82B6E1A0(*(undefined4 *)(param_1 + 200));
    if (iVar1 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7340,0xffffffff820d7090,0x237);
    }
    fn_82B69998(*(undefined4 *)(param_1 + 0x5c));
    fn_82B6B298(*(undefined4 *)(param_1 + 0x70));
    fn_82B6B4E8(*(undefined4 *)(param_1 + 0x74));
    fn_82B6B728(*(undefined4 *)(param_1 + 0x78));
    iVar1 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x10),param_1);
    if (iVar1 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7340,0xffffffff820d7090,0x244);
    }
  }
  return iVar1;
}

