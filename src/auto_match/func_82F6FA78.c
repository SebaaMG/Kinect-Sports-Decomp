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
extern int fn_82F641F8();
extern unsigned int lbl_8216A9E0;


void fn_82F6FA78(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      fn_82F641F8();
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      fn_82F641F8();
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      fn_82F641F8();
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      fn_82F641F8();
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      fn_82F641F8();
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      fn_82F641F8();
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      fn_82F641F8();
    }
    if (*(undefined **)(param_1 + 0x5c) != &lbl_8216A9E0) {
      fn_82F641F8();
    }
    fn_82F641F8(param_1);
  }
  return;
}

