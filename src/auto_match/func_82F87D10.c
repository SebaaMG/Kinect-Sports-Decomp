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


byte * fn_82F87D10(byte *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint in_r11;
  byte in_cr0;
  byte abStack_20 [32];
  
  while( true ) {
    if ((bool)(in_cr0 >> 1 & 1)) {
      return (byte *)0x0;
    }
    if ((param_4 << (in_r11 & 7) & (uint)abStack_20[in_r11 >> 3]) != 0) break;
    param_1 = param_1 + 1;
    in_r11 = (uint)*param_1;
    in_cr0 = (in_r11 == 0) << 1;
  }
  return param_1;
}

