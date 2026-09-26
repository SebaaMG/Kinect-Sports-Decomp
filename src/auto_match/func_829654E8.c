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


undefined8 fn_829654E8(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0x40;
  *(undefined4 *)(param_1 + 0x2c) = 0x40;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x2000;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0x9fffffff;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x200000;
  return 0;
}

