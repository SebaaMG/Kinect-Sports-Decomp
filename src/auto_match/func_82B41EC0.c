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


ulonglong fn_82B41EC0(ulonglong param_1)

{
  uint uVar1;
  ulonglong in_r7;
  uint *in_r9;
  int in_r10;
  uint *in_r11;
  longlong lVar2;
  byte in_cr6;
  
  do {
    if (!(bool)(in_cr6 >> 3 & 1)) {
      if ((*in_r9 & in_r7) == 0) {
        return param_1;
      }
      uVar1 = (uint)(*in_r9 & in_r7);
      lVar2 = ((longlong)((int)in_r9 - in_r10 >> 2) - 1U & 0x7ffffff) * 0x20 -
              LZCOUNT(uVar1 & ~(uVar1 - 1));
LAB_82b41ef0:
      return lVar2 + 0x1e;
    }
    if ((*in_r11 & in_r7) != 0) {
      uVar1 = (uint)(*in_r11 & in_r7);
      lVar2 = ((longlong)((int)in_r11 - in_r10 >> 2) - 1U & 0x7ffffff) * 0x20 -
              LZCOUNT(uVar1 & ~(uVar1 - 1));
      goto LAB_82b41ef0;
    }
    in_r11 = in_r11 + 1;
    in_cr6 = (in_r11 < in_r9) << 3;
    in_r7 = param_1;
  } while( true );
}

