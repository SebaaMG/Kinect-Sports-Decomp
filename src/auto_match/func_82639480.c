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


void fn_82639480(int param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar3 = (param_3 & 0x7fffffff) << 1;
  uVar4 = (ulonglong)*(byte *)(param_1 + param_2 + 0x2f92);
  iVar5 = (param_2 + 0x30) * 0x18 + param_1;
  uVar2 = uVar4 & 0xfffffffffffffffd | uVar3;
  uVar1 = (int)((uVar4 & 0xfffffffd | uVar3) >> 2) - 1;
  *(uint *)(iVar5 + 0x10) =
       *(uint *)(iVar5 + 0x10) & 0xfffffffc |
       ((*(uint *)(iVar5 + 0xc) >> 1 & 0x7ff00000 | *(uint *)(iVar5 + 0xc) & 0x80000) >> 0x13 &
       uVar1) + ((uint)uVar2 & ~uVar1) & 3;
  *(char *)(param_1 + param_2 + 0x2f92) = (char)uVar2;
  *(ulonglong *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U & 0x7f) | *(ulonglong *)(param_1 + 0x18);
  return;
}

