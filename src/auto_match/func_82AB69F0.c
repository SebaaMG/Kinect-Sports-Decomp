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
extern int fn_82B6B340();
extern int fn_82B6B590();
extern int fn_82B6B7D0();


undefined4 *
fn_82AB69F0(undefined8 param_1,code *param_2,int param_3,int param_4,ulonglong param_5,
             ulonglong param_6,ulonglong param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820d6be8,0x9b);
  }
  if (param_3 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820d6be8,0x9c);
  }
  if (param_4 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bdc,0xffffffff820d6be8,0x9d);
  }
  if ((param_5 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bcc,0xffffffff820d6be8,0x9e);
  }
  if ((param_6 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bbc,0xffffffff820d6be8,0x9f);
  }
  if ((param_7 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bac,0xffffffff820d6be8,0xa0);
  }
  puVar1 = (undefined4 *)(*param_2)(param_1,0x994);
  if (puVar1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6b80,0xffffffff820d6be8,0xa6);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (int)param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar1[4] = (int)param_5;
    puVar1[5] = (int)param_6;
    puVar1[6] = (int)param_7;
    puVar1[0x264] = 1;
    puVar1[7] = 0;
    puVar1[9] = param_8;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    uVar2 = fn_82B6B7D0(param_7);
    puVar1[0x25f] = uVar2;
    uVar2 = fn_82B6B7D0(param_7);
    puVar1[0x261] = uVar2;
    uVar2 = fn_82B6B7D0(param_7);
    puVar1[0x262] = uVar2;
    uVar2 = fn_82B6B340(param_5);
    puVar1[0x260] = uVar2;
    uVar2 = fn_82B6B590(param_6);
    puVar1[0x263] = uVar2;
  }
  return puVar1;
}

