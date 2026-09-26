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


void fn_82637DE0(int param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = (param_2 & 0x1f) << 0x10 | *(uint *)(param_1 + 0x2ef8) & 0xffe0ffff;
  *(uint *)(param_1 + 0x2ef8) = uVar1;
  if ((*(uint *)(param_1 + 0x2efc) & 0x80000000) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x2efc) & 0x40000000) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2938) = uVar1;
  *(uint *)(param_1 + 0x2958) = uVar1;
  *(uint *)(param_1 + 0x295c) = uVar1;
  *(uint *)(param_1 + 0x2960) = uVar1;
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x400;
  *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x404;
  *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x406;
  *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x407;
  return;
}

