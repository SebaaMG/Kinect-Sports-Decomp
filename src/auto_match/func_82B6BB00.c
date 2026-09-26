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
extern int fn_82AB5DE0();
extern int fn_82AB5E50();
extern int fn_82B6B4E8();


undefined4 *
fn_82B6BB00(undefined8 param_1,code *param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5
             )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820d97e8,0x138);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820d97e8,0x139);
  }
  if ((param_4 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9960,0xffffffff820d97e8,0x13a);
  }
  if ((param_5 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d994c,0xffffffff820d97e8,0x13b);
  }
  puVar1 = (undefined4 *)(*param_2)(param_1,0x18);
  if (puVar1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9940,0xffffffff820d97e8,0x142);
  }
  else {
    *puVar1 = (int)param_1;
    puVar1[1] = param_2;
    puVar1[2] = (int)param_3;
    puVar1[3] = 0;
    uVar2 = fn_82AB5DE0(param_1,param_2,param_3,param_4);
    puVar1[4] = uVar2;
    iVar3 = fn_82AB5E50(param_1,param_2,param_3,param_5);
    puVar1[5] = iVar3;
    if ((iVar3 == 0) || (puVar1[4] == 0)) {
      if ((iVar3 == 0) || (puVar1[4] == 0)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9908,0xffffffff820d97e8,0x15d);
      }
      fn_82B6B4E8(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}

