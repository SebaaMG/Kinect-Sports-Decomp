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


void fn_82639380(int param_1,int param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar7 = (param_2 + 0x30) * 0x18 + param_1;
  uVar6 = (param_3 & 0xffffffff) >> 2;
  uVar2 = *(uint *)(iVar7 + 0x10);
  uVar3 = *(uint *)(iVar7 + 0xc);
  uVar4 = *(uint *)(&lbl_821CC078 + (uint)*(byte *)(param_1 + param_2 + 0x2f44) * 4);
  uVar5 = (uint)(uVar6 << 0xb) & 0x800;
  *(uint *)(iVar7 + 0x10) = uVar5 | uVar2 & 0xfffff7ff;
  uVar6 = ((ulonglong)uVar4 & ~(((ulonglong)(uVar2 >> 10) & 1 | uVar6) - 1) & 0xfffffff) << 4 |
          uVar6;
  uVar6 = ((uVar6 | param_3 & 0xffffffff) & 0x70) << 0x15 |
          ((uVar6 | param_3 & 0xffffffff) & 3) << 0x15 | (ulonglong)uVar3 & 0xfffffffff19fffff;
  *(int *)(iVar7 + 0xc) = (int)uVar6;
  bVar1 = *(byte *)(param_1 + param_2 + 0x2f92);
  uVar4 = (bVar1 >> 2) - 1;
  *(uint *)(iVar7 + 0x10) =
       uVar5 | uVar2 & 0xfffff7fc |
       (((uint)(uVar6 >> 1) & 0x7ff00000 | uVar3 & 0x80000) >> 0x13 & uVar4) +
       ((uint)bVar1 & ~uVar4) & 3;
  *(ulonglong *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U & 0x7f) | *(ulonglong *)(param_1 + 0x18);
  return;
}

