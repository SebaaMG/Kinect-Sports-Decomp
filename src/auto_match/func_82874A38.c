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


undefined8 fn_82874A38(undefined8 param_1,int *param_2)

{
  char *in_r9;
  int in_r10;
  char *in_r11;
  byte in_cr6;
  
  while( true ) {
    if ((bool)(in_cr6 >> 1 & 1)) {
      return 0xffffffffa0260000;
    }
    if (*in_r11 == '\0') break;
    in_r11 = in_r11 + 0x70;
    in_r10 = in_r10 + 1;
    in_cr6 = (in_r11 == in_r9) << 1;
  }
  *param_2 = in_r10;
  return 0x20260000;
}

