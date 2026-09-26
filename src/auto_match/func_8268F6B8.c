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
extern unsigned int lbl_82005EE8;
extern unsigned int lbl_8200E1B0;


undefined4 *
fn_8268F6B8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
             undefined1 param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  param_1[1] = param_2;
  param_1[4] = param_3;
  param_1[2] = 0;
  *param_1 = &lbl_82005EE8;
  if (param_4 == 0) {
    param_4 = 1;
  }
  *(undefined1 *)(param_1 + 0x69) = param_5;
  param_1[5] = param_4;
  param_1[6] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0xffffffff;
  param_1[0x6a] = 0;
  uVar1 = (**(code **)*param_2)(param_2);
  uVar2 = (uint)uVar1;
  param_1[2] = uVar2;
  if ((uVar1 & 0xffff0000) == 0) {
    if ((uVar1 & 0xff00) == 0) {
      uVar3 = (uint)(byte)(&lbl_8200E1B0)[uVar2 & 0xff];
    }
    else {
      uVar3 = (byte)(&lbl_8200E1B0)[uVar2 >> 8 & 0xff] + 8;
    }
  }
  else if ((uVar1 & 0xff000000) == 0) {
    uVar3 = (byte)(&lbl_8200E1B0)[(ushort)(uVar1 >> 0x10) & 0xff] + 0x10;
  }
  else {
    uVar3 = (byte)(&lbl_8200E1B0)[(byte)(uVar1 >> 0x18)] + 0x18;
  }
  param_1[6] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0xffffffff;
  param_1[3] = uVar3 & 0xff;
  param_1[5] = (uVar2 + param_1[5]) - 1 & ~(uVar2 - 1);
  return param_1;
}

