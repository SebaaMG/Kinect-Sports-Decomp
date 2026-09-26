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


void fn_82F0DC50(int param_1,int param_2)

{
  if (3 < param_2) {
    param_2 = 3;
  }
  if (*(int *)(param_1 + 0x6de8) == 0) {
    param_2 = param_2 * 0x1c;
    *(undefined4 *)(param_1 + 0x6e2c) = *(undefined4 *)(param_2 + -0x7ce47568);
    *(undefined4 *)(param_1 + 0x6e30) = *(undefined4 *)(param_2 + -0x7ce47564);
    *(undefined4 *)(param_1 + 0x6e34) = *(undefined4 *)(param_2 + -0x7ce47560);
    *(undefined4 *)(param_1 + 0x6e38) = *(undefined4 *)(param_2 + -0x7ce4755c);
    *(undefined4 *)(param_1 + 0x6e3c) = *(undefined4 *)(param_2 + -0x7ce47558);
    *(undefined4 *)(param_1 + 0x6e40) = *(undefined4 *)(param_2 + -0x7ce47554);
    *(undefined4 *)(param_1 + 0x6e44) = *(undefined4 *)(param_2 + -0x7ce47550);
    return;
  }
  param_2 = param_2 * 0x1c;
  *(undefined4 *)(param_1 + 0x6e2c) = *(undefined4 *)(param_2 + -0x7ce474f8);
  *(undefined4 *)(param_1 + 0x6e30) = *(undefined4 *)(param_2 + -0x7ce474f4);
  *(undefined4 *)(param_1 + 0x6e34) = *(undefined4 *)(param_2 + -0x7ce474f0);
  *(undefined4 *)(param_1 + 0x6e38) = *(undefined4 *)(param_2 + -0x7ce474ec);
  *(undefined4 *)(param_1 + 0x6e3c) = *(undefined4 *)(param_2 + -0x7ce474e8);
  *(undefined4 *)(param_1 + 0x6e40) = *(undefined4 *)(param_2 + -0x7ce474e4);
  *(undefined4 *)(param_1 + 0x6e44) = *(undefined4 *)(param_2 + -0x7ce474e0);
  return;
}

