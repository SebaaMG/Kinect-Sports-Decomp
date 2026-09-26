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
extern int fn_82D015D8();


void fn_82CF8EF8(int param_1,longlong param_2)

{
  fn_82D015D8(param_2);
  if ((param_2 + 0x34U & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x20c)) {
    *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) - 0x34;
  }
  return;
}

