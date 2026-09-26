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


longlong fn_82AC8950(int param_1)

{
  ulonglong in_r9;
  ulonglong *in_r10;
  ulonglong *in_r11;
  longlong lVar1;
  byte in_cr6;
  
  do {
    if (!(bool)(in_cr6 >> 3 & 1)) {
      in_r9 = *in_r10 & in_r9;
      if (in_r9 == 0) {
        return -1;
      }
      lVar1 = ((ulonglong)(uint)((int)in_r10 - param_1 >> 3) & 0x3ffffff) * 0x40 -
              LZCOUNT(in_r9 & ~(in_r9 - 1));
LAB_82ac89a8:
      return lVar1 + 0x3f;
    }
    in_r9 = in_r9 & *in_r11;
    if (in_r9 != 0) {
      lVar1 = ((ulonglong)(uint)((int)in_r11 - param_1 >> 3) & 0x3ffffff) * 0x40 -
              LZCOUNT(in_r9 & ~(in_r9 - 1));
      goto LAB_82ac89a8;
    }
    in_r11 = in_r11 + 1;
    in_r9 = 0xffffffffffffffff;
    in_cr6 = (in_r11 < in_r10) << 3;
  } while( true );
}

