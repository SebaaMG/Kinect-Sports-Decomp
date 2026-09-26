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
extern int fn_82C8EE60();
extern int fn_82C8EF18();


void fn_82C8EFC8(int param_1)

{
  if (*(int *)(param_1 + 0x3a10) == 0) {
    if (*(int *)(param_1 + 0x3a0c) != 1) {
      return;
    }
    fn_82C8EE60(*(undefined4 *)(param_1 + 0xecc),*(undefined4 *)(param_1 + 0xed0),
                 *(undefined4 *)(param_1 + 0xed4),
                 (longlong)*(int *)(param_1 + 0xd8) * (longlong)*(int *)(param_1 + 0xd0));
  }
  else {
    if (*(int *)(param_1 + 0x3a10) != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x3a0c) != 0) {
      return;
    }
    fn_82C8EF18(*(undefined4 *)(param_1 + 0xecc),*(undefined4 *)(param_1 + 0xed0),
                 *(undefined4 *)(param_1 + 0xed4),
                 (longlong)*(int *)(param_1 + 0xd8) * (longlong)*(int *)(param_1 + 0xd0));
  }
  *(undefined4 *)(param_1 + 0x3a10) = *(undefined4 *)(param_1 + 0x3a0c);
  return;
}

