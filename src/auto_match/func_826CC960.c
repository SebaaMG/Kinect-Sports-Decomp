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
extern int fn_82698FC8();
extern int fn_8269A110();
extern int fn_826C90C8();


void fn_826CC960(int param_1)

{
  fn_82698FC8(param_1 + 0xa8,0);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(byte *)(param_1 + 0x1cc) = *(byte *)(param_1 + 0x1cc) & 0xfc | 1;
  fn_826C90C8(param_1,0);
  fn_8269A110(param_1 + 0xa8);
  *(uint *)(*(int *)(param_1 + 0xa0) + 0xb00) = *(uint *)(*(int *)(param_1 + 0xa0) + 0xb00) | 0x400;
  return;
}

