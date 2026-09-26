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


void fn_82FA5D50(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = *(uint *)(param_2 + 4) & 0xfffffffc;
  if (uVar2 < 0x80) {
    uVar6 = 0;
    uVar5 = (ulonglong)(*(uint *)(param_2 + 4) >> 2);
  }
  else {
    uVar6 = -LZCOUNT(uVar2) + 0x19;
    uVar5 = (ulonglong)(uVar2 >> ((int)-LZCOUNT(uVar2) + 0x1aU & 0x3f)) ^ 0x20;
  }
  iVar3 = (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar5 + 0x19 & 0xffffffff) << 2);
  iVar1 = *(int *)(iVar3 + (int)param_1);
  *(undefined4 **)(param_2 + 0xc) = &lbl_83264218;
  *(int *)(param_2 + 8) = iVar1;
  iVar4 = (int)((uVar6 + 1 & 0xffffffff) << 2);
  *(int *)(iVar1 + 0xc) = param_2;
  *(int *)(iVar3 + (int)param_1) = param_2;
  *param_1 = 1 << ((uint)uVar6 & 0x3f) | *param_1;
  *(uint *)(iVar4 + (int)param_1) = 1 << ((uint)uVar5 & 0x3f) | *(uint *)(iVar4 + (int)param_1);
  return;
}

