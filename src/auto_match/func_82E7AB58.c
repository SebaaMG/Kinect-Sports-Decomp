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
extern int fn_82E76C40();
extern int fn_82E798F8();


undefined8 fn_82E7AB58(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = 1;
  *(undefined1 *)(param_1 + 0x150) = 3;
  if (*(uint *)(param_1 + 0x148) == 0xffffffff) {
    *(undefined1 *)(param_1 + 0x151) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x151) = 0;
  }
  *(undefined1 *)(param_1 + 0x153) = 0;
  *(undefined1 *)(param_1 + 0x152) = 2;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x158) = 4;
  *(undefined1 *)(param_1 + 0x159) = 3;
  *(undefined1 *)(param_1 + 0x15a) = 1;
  *(undefined1 *)(param_1 + 0x15b) = 1;
  *(undefined1 *)(param_1 + 0x15c) = 1;
  *(undefined1 *)(param_1 + 0x15d) = 1;
  *(undefined4 *)(param_1 + 0x164) = 0;
  lVar1 = fn_82E76C40(param_1);
  if ((uVar4 & 0xffffffff) < (lVar1 + 3U & 0xffffffff)) {
    uVar2 = 0xffffffffc00d3a9a;
  }
  else {
    lVar5 = (uVar4 + 1) - (uVar4 + (uVar4 + 1 == 0));
    if (lVar5 == 0) {
      uVar3 = fn_82E798F8(param_1);
      *(undefined4 *)(param_1 + 0x160) = uVar3;
      *(undefined4 *)(param_1 + 0x148) = uVar3;
    }
    else {
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
    if ((int)lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      *(undefined1 *)(param_1 + 0x152) = 0;
    }
    else {
      *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x148) - (int)(lVar1 + 3U);
    }
    uVar2 = 0;
  }
  return uVar2;
}

