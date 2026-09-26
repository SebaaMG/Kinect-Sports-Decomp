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
extern int fn_82C54F48();
extern int fn_82C550F0();
extern int fn_82C55220();


void fn_82C44C58(int param_1)

{
  if (*(int *)(param_1 + 0x2c8) != 0) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      fn_82C54F48();
      *(int *)(param_1 + 0x7c) = 0;
    }
    if (*(int *)(param_1 + 0x80) != 0) {
      fn_82C550F0();
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      fn_82C55220();
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      fn_82C550F0();
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      fn_82C550F0();
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      fn_82C55220();
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  return;
}

