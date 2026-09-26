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
extern unsigned int lbl_821CC078;


void fn_82639528(int param_1,int param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar7 = (param_2 + 0x30) * 0x18 + param_1;
  uVar6 = (param_3 & 0xffffffff) >> 2;
  uVar2 = *(uint *)(iVar7 + 0x10);
  uVar3 = *(uint *)(&lbl_821CC078 + (uint)*(byte *)(param_1 + param_2 + 0x2f44) * 4);
  uVar5 = (uint)(uVar6 << 10) & 0x400;
  *(uint *)(iVar7 + 0x10) = uVar5 | uVar2 & 0xfffffbff;
  uVar6 = ((ulonglong)uVar3 & ~(((ulonglong)(uVar2 >> 0xb) & 1 | uVar6) - 1) & 0x3ffffff) << 6 |
          uVar6;
  uVar4 = ((uVar6 | param_3 & 0xffffffff) & 3) << 0x13 |
          (ulonglong)*(uint *)(iVar7 + 0xc) & 0xfffffffff1e7ffff;
  uVar6 = ((uVar6 | param_3 & 0xffffffff) & 0x1c0) << 0x13 | uVar4;
  *(int *)(iVar7 + 0xc) = (int)uVar6;
  bVar1 = *(byte *)(param_1 + param_2 + 0x2f92);
  uVar3 = (bVar1 >> 2) - 1;
  *(uint *)(iVar7 + 0x10) =
       uVar5 | uVar2 & 0xfffffbfc |
       (((uint)(uVar6 >> 1) & 0x7ff00000 | (uint)uVar4 & 0x80000) >> 0x13 & uVar3) +
       ((uint)bVar1 & ~uVar3) & 3;
  *(ulonglong *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U & 0x7f) | *(ulonglong *)(param_1 + 0x18);
  return;
}

