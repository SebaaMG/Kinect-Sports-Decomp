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
extern int fn_82F68B70();


void fn_828EE090(int param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x228) = param_2;
  *(undefined1 *)(param_1 + 0x229) = param_3;
  *(undefined1 *)(param_1 + 0x1e2) = 0;
  *(undefined1 *)(param_1 + 0x1e1) = 1;
  *(undefined4 *)(param_1 + 0x1e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x149) = 0;
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined1 *)(param_1 + 0x14c) = 0;
  *(undefined1 *)(param_1 + 0x14b) = 0;
  *(undefined1 *)(param_1 + 0x14d) = 0;
  *(undefined1 *)(param_1 + 0x14e) = 0;
  *(undefined1 *)(param_1 + 0x14f) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0x10;
  *(undefined4 *)(param_1 + 0x154) = 0;
  fn_82F68B70();
  return;
}

