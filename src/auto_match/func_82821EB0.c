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
extern int fn_82821D98();


void fn_82821EB0(int param_1)

{
  *(undefined1 *)(param_1 + 0x7a) = 1;
  *(undefined1 *)(param_1 + 0x7b) = 1;
  fn_82821D98(param_1,*(undefined4 *)(param_1 + 0x48),
                *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2c),*(undefined4 *)(param_1 + 0x4c),
                *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34),
                *(undefined4 *)(param_1 + 0x5c));
  fn_82821D98(param_1,*(undefined4 *)(param_1 + 0x50),
                *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c),*(undefined4 *)(param_1 + 0x54),
                *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44),
                *(undefined4 *)(param_1 + 100));
  return;
}

