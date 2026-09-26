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


void fn_82637B30(int param_1,int param_2)

{
  uint uVar1;
  uint uVar3;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2efc);
  *(uint *)(param_1 + 0x2efc) = param_2 << 0x1f | uVar1 & 0x7fffffff;
  uVar3 = *(uint *)(param_1 + 0x2ef8);
  if ((uVar1 & 0x40000000) == 0) {
    uVar3 = (uVar3 & 0x1010 | (uVar3 & 0xefef) << 4) << 0xc | uVar3 & 0xffff;
  }
  if (param_2 == 0) {
    uVar3 = 0x10001;
  }
  *(uint *)(param_1 + 0x295c) = uVar3;
  *(uint *)(param_1 + 0x2938) = uVar3;
  *(uint *)(param_1 + 0x2958) = uVar3;
  *(uint *)(param_1 + 0x2960) = uVar3;
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x400;
  *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x404;
  *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x406;
  *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x407;
  return;
}

