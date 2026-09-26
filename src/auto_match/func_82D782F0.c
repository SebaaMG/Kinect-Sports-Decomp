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


void fn_82D782F0(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_2 >> 4);
  uVar2 = (uint)((~uVar5 & 0xffffffff) >> 2) & 1;
  uVar4 = (uint)((~uVar5 & 0xffffffff) >> 3) & 1;
  uVar3 = (uint)((~uVar5 & 0xffffffff) >> 1) & 1;
  if (param_3 != 0) {
    iVar1 = 1 << (uVar3 * 2 + uVar2) * 2;
    if ((iVar1 << 1 & *param_1) == 0) {
      *param_1 = *param_1 + iVar1;
    }
  }
  if (param_3 != 1) {
    iVar1 = 1 << ((uVar3 + 2) * 2 + uVar4) * 2;
    if ((iVar1 << 1 & *param_1) == 0) {
      *param_1 = *param_1 + iVar1;
    }
  }
  if (param_3 == 2) {
    return;
  }
  iVar1 = 1 << ((uVar2 + 4) * 2 + uVar4) * 2;
  if ((iVar1 << 1 & *param_1) != 0) {
    return;
  }
  *param_1 = *param_1 + iVar1;
  return;
}

