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


void fn_82FF3E80(int param_1,char param_2,char param_3,undefined2 param_4,undefined2 param_5,
                  undefined2 param_6)

{
  if (param_2 == '\0') {
    *(undefined2 *)(param_1 + 0x82) = 0;
    *(undefined2 *)(param_1 + 0x84) = 1;
    *(undefined2 *)(param_1 + 0x80) = 0;
    return;
  }
  if (param_3 != '\0') {
    *(undefined2 *)(param_1 + 0x84) = 0;
    *(undefined2 *)(param_1 + 0x82) = 0;
    *(undefined2 *)(param_1 + 0x80) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x84) = param_4;
  *(undefined2 *)(param_1 + 0x80) = param_5;
  *(undefined2 *)(param_1 + 0x82) = param_6;
  return;
}

