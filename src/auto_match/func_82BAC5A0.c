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
extern int fn_82AB14E0();
extern int fn_82AB1538();
extern int fn_82AB15D0();
extern int fn_82BC7368();


void fn_82BAC5A0(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = fn_82BC7368(*(undefined4 *)(param_1 + 0x78));
  iVar2 = fn_82AB14E0(uVar1,0x22,1);
  if ((iVar2 != 0) && ((int)param_2 <= ((int)uVar1 - *(int *)(param_1 + 8)) / 6)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df760,0xffffffff820df268,0x68d);
  }
  fn_82AB1538(uVar1,1,0xd,param_2);
  return;
}

