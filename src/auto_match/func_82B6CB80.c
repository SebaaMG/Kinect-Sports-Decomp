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
extern int fn_82AB68E0();
extern int fn_82B6B008();
extern int fn_82B6C878();
extern int fn_82B9F468();


undefined4 *
fn_82B6CB80(undefined8 param_1,code *param_2,ulonglong param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820d9c18,0xc9);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820d9c18,0xca);
  }
  if (param_4 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74d0,0xffffffff820d9c18,0xcb);
  }
  if (param_5 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bdc,0xffffffff820d9c18,0xcc);
  }
  puVar1 = (undefined4 *)(*param_2)(param_1,0x20);
  if (puVar1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9da0,0xffffffff820d9c18,0xd2);
  }
  else {
    *puVar1 = (int)param_1;
    puVar1[1] = param_2;
    puVar1[2] = (int)param_3;
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    iVar2 = fn_82B9F468(param_1,param_2,param_3,0x32);
    puVar1[5] = iVar2;
    if (iVar2 == 0) {
      uVar4 = 0xe5;
      uVar3 = 0xffffffff820d9d68;
    }
    else {
      iVar2 = fn_82AB68E0(param_1,param_2,param_3,0x32);
      puVar1[6] = iVar2;
      if (iVar2 == 0) {
        uVar4 = 0xf2;
        uVar3 = 0xffffffff820d9d2c;
      }
      else {
        iVar2 = fn_82B6B008(0x32,8,param_2,param_3,param_1);
        puVar1[7] = iVar2;
        if (iVar2 != 0) {
          return puVar1;
        }
        uVar4 = 0xff;
        uVar3 = 0xffffffff820d9cf0;
      }
    }
    fn_82AB15D0(0,0xffffffff820d2ea4,uVar3,0xffffffff820d9c18,uVar4);
    fn_82B6C878(puVar1);
  }
  return (undefined4 *)0x0;
}

