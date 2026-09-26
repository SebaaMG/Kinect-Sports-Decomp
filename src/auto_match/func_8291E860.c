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


void fn_8291E860(int param_1,int param_2)

{
  *(ushort *)(param_1 + 3) = *(ushort *)(param_2 + 3) << 8 | *(ushort *)(param_2 + 3) >> 8;
  *(ushort *)(param_1 + 5) = *(ushort *)(param_2 + 5) << 8 | *(ushort *)(param_2 + 5) >> 8;
  *(ushort *)(param_1 + 8) = *(ushort *)(param_2 + 8) << 8 | *(ushort *)(param_2 + 8) >> 8;
  *(ushort *)(param_1 + 10) = *(ushort *)(param_2 + 10) << 8 | *(ushort *)(param_2 + 10) >> 8;
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_2 + 0xc) << 8 | *(ushort *)(param_2 + 0xc) >> 8;
  *(ushort *)(param_1 + 0xe) = *(ushort *)(param_2 + 0xe) << 8 | *(ushort *)(param_2 + 0xe) >> 8;
  return;
}

