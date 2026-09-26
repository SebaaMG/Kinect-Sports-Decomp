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


void fn_82B837F0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5
                  ,undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  uint in_r11;
  byte in_cr6;
  
  while( true ) {
    if ((bool)(in_cr6 >> 1 & 1)) {
      return;
    }
    do {
      *(uint *)(in_r11 + 0x14) = param_5 << 3 | *(uint *)(in_r11 + 0x14) & 7;
      *(uint *)(in_r11 + 8) = *(uint *)(in_r11 + 8) | 0x40000000;
      if (param_5 < 0x1fffffff) {
        param_5 = param_5 + 1;
      }
      in_r11 = *(uint *)((in_r11 & 0xfffffffe) + 0x28);
    } while (((in_r11 & 1) == 0) && (in_r11 != 0));
    iVar1 = param_2 + 0x20;
    if (param_8 == iVar1) break;
    if ((param_8 == param_2 + 0x18) || ((*(uint *)(param_2 + 0x1c) & 1) != 0)) {
      in_r11 = *(uint *)(param_2 + 0x24);
    }
    else {
      in_r11 = *(uint *)(param_2 + 0x1c);
      iVar1 = param_2 + 0x18;
    }
    if ((in_r11 & 1) != 0) {
      return;
    }
    in_cr6 = (in_r11 == 0) << 1;
    param_8 = iVar1;
  }
  return;
}

