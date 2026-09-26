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


void fn_82637EC0(int param_1,uint param_2)

{
  uint uVar2;
  uint uVar3;
  ulonglong uVar1;
  
  uVar2 = (param_2 & 1) << 0x1e | *(uint *)(param_1 + 0x2efc) & 0xbfffffff;
  *(uint *)(param_1 + 0x2efc) = uVar2;
  uVar3 = *(uint *)(param_1 + 0x2ef8);
  if (param_2 == 0) {
    uVar3 = (uVar3 & 0x1010 | (uVar3 & 0xefef) << 4) << 0xc | uVar3 & 0xffff;
  }
  if (-1 < (int)uVar2) {
    uVar3 = 0x10001;
  }
  *(uint *)(param_1 + 0x2938) = uVar3;
  *(uint *)(param_1 + 0x2958) = uVar3;
  *(uint *)(param_1 + 0x295c) = uVar3;
  *(uint *)(param_1 + 0x2960) = uVar3;
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar1 | 0x400;
  *(ulonglong *)(param_1 + 0x10) = uVar1 | 0x404;
  *(ulonglong *)(param_1 + 0x10) = uVar1 | 0x406;
  *(ulonglong *)(param_1 + 0x10) = uVar1 | 0x407;
  return;
}

