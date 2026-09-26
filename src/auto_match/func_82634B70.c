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


void fn_82634B70(int param_1,ulonglong param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (0x13 < (*param_3 & 0x1f)) {
    return;
  }
  lVar2 = (param_2 & 0x3fffffff) * 4;
  if ((param_3[1] & 7) != 7) {
    uVar1 = (uint)((param_2 & 0x3fffffff) >> 1) & 0x1ffffffc;
    *(uint *)(uVar1 + param_1) = 1 << ((uint)lVar2 & 0x1f) | *(uint *)(uVar1 + param_1);
  }
  if ((param_3[1] & 0x38) != 0x38) {
    uVar1 = (uint)(lVar2 + 1U >> 3) & 0x1ffffffc;
    *(uint *)(uVar1 + param_1) = 1 << ((uint)(lVar2 + 1U) & 0x1f) | *(uint *)(uVar1 + param_1);
  }
  if ((param_3[1] & 0x1c0) != 0x1c0) {
    uVar1 = (uint)(lVar2 + 2U >> 3) & 0x1ffffffc;
    *(uint *)(uVar1 + param_1) = 1 << ((uint)(lVar2 + 2U) & 0x1f) | *(uint *)(uVar1 + param_1);
  }
  if ((param_3[1] & 0xe00) == 0xe00) {
    return;
  }
  uVar1 = (uint)(lVar2 + 3U >> 3) & 0x1ffffffc;
  *(uint *)(uVar1 + param_1) = 1 << ((uint)(lVar2 + 3U) & 0x1f) | *(uint *)(uVar1 + param_1);
  return;
}

