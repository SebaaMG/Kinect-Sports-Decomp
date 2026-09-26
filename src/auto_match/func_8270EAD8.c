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


void fn_8270EAD8(int param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  uint uVar1;
  
  if (99 < *(uint *)(param_1 + 0x648)) {
    return;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x640) * 0x10 + param_1 + 4) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 0x640) * 0x10 + param_1 + 0xc) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x640) * 0x10 + param_1) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x640) * 0x10 + param_1 + 8) = param_5;
  *(undefined1 *)(*(int *)(param_1 + 0x640) * 0x10 + param_1 + 0xd) = param_6;
  uVar1 = *(int *)(param_1 + 0x640) + 1;
  *(uint *)(param_1 + 0x640) = uVar1;
  if (99 < uVar1) {
    *(undefined4 *)(param_1 + 0x640) = 0;
  }
  *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x648) + 1;
  return;
}

