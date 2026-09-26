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
extern int fn_82F68B6C();


void fn_82A2E48C(int param_1)

{
  uint in_r8;
  int in_r9;
  undefined4 *in_r10;
  undefined4 *in_r11;
  byte in_cr6;
  
  do {
    if ((bool)(in_cr6 >> 1 & 1)) {
      if (in_r9 != 0) {
        return;
      }
      if ((*(byte *)(param_1 + 0x35) & 4) == 0) {
        in_r10 = *(undefined4 **)(param_1 + 0xc);
        if (in_r10 == (undefined4 *)0x0) {
          return;
        }
      }
      else {
        in_r10 = (undefined4 *)(param_1 + 0x40);
      }
      in_r9 = 1;
      in_r11 = (undefined4 *)*in_r10;
    }
    else {
      if (*(ushort *)((int)in_r11 + -0x12) == in_r8) {
        fn_82F68B6C(in_r11 + -0x12,0);
        return;
      }
      in_r11 = (undefined4 *)*in_r11;
    }
    in_cr6 = (in_r11 == in_r10) << 1;
  } while( true );
}

