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


undefined4 fn_82ADD158(int param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_2 + 0x10) & 0xffff;
  if ((*(uint *)(param_2 + 0x10) & 0x70000) != 0) {
    uVar1 = *(uint *)(param_2 + 8) >> 1 & 0xf;
    uVar2 = (uVar2 - LZCOUNT(uVar1 & ~(uVar1 - 1))) + 0x1f;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x2c4) + (int)((uVar2 & 0xffffffff) << 2));
}

