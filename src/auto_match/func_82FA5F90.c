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
extern unsigned int lbl_83264218;


void fn_82FA5F90(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_2 + 4) & 0xfffffffc;
  if (uVar1 < param_3 + 0x10) {
    return;
  }
  iVar7 = param_2 + param_3;
  iVar3 = iVar7 + 4;
  *(uint *)(iVar7 + 8) = (uVar1 - param_3) - 4 | *(uint *)(iVar7 + 8) & 3;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 3 | param_3;
  iVar5 = (*(uint *)(iVar7 + 8) & 0xfffffffc) + iVar3;
  *(int *)(iVar5 + 4) = iVar3;
  *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 2;
  *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 1;
  *(int *)((*(uint *)(param_2 + 4) & 0xfffffffc) + param_2 + 4) = param_2;
  *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 2;
  uVar1 = *(uint *)(iVar7 + 8) & 0xfffffffc;
  if (uVar1 < 0x80) {
    uVar6 = 0;
    uVar4 = (ulonglong)(*(uint *)(iVar7 + 8) >> 2);
  }
  else {
    uVar6 = -LZCOUNT(uVar1) + 0x19;
    uVar4 = (ulonglong)(uVar1 >> ((int)-LZCOUNT(uVar1) + 0x1aU & 0x3f)) ^ 0x20;
  }
  iVar2 = (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar4 + 0x19 & 0xffffffff) << 2);
  iVar5 = *(int *)(iVar2 + (int)param_1);
  *(undefined4 **)(iVar7 + 0x10) = &lbl_83264218;
  *(int *)(iVar7 + 0xc) = iVar5;
  iVar7 = (int)((uVar6 + 1 & 0xffffffff) << 2);
  *(int *)(iVar5 + 0xc) = iVar3;
  *(int *)(iVar2 + (int)param_1) = iVar3;
  *param_1 = 1 << ((uint)uVar6 & 0x3f) | *param_1;
  *(uint *)(iVar7 + (int)param_1) = 1 << ((uint)uVar4 & 0x3f) | *(uint *)(iVar7 + (int)param_1);
  return;
}

