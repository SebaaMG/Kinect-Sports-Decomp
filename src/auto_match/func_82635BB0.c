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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))


void fn_82635BB0(int *param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *param_1;
  param_1[iVar1 * 0x9b4 + 0x9b3] = 0;
  *(ulonglong *)(param_1 + iVar1 * 0x9b4 + 0x946) =
       1L << (0x3fU - param_2 & 0x7f) | *(ulonglong *)(param_1 + iVar1 * 0x9b4 + 0x946);
  iVar4 = iVar1 * 0x26d0 + 0x2568;
  uVar2 = (uint)((param_2 + 0x8c8U & 0x3fffffff) >> 3) & 0x7fffffc;
  uVar3 = (uint)((param_2 + 0x8c8U & 0x3fffffff) << 2);
  *(uint *)((int)param_1 + uVar2 + iVar4) =
       1 << (uVar3 >> 2 & 0x1f) | *(uint *)((int)param_1 + uVar2 + iVar4);
  *(uint *)((int)param_1 + uVar3 + iVar1 * 0x26d0 + 0x170) =
       (uint)CONCAT21(CONCAT11(*(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 7)),
                      *(undefined1 *)(param_3 + 3));
  return;
}

