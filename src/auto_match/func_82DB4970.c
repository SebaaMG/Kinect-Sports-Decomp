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


void fn_82DB4970(byte *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  uVar2 = *(uint *)(param_3 + 0x30);
  if (*(uint *)(*(int *)((*(byte *)(uVar1 + 0x1a) + 1) * 4 + uVar1) + 0xd4) <
      *(uint *)(*(int *)((*(byte *)(uVar2 + 0x1a) + 1) * 4 + uVar2) + 0xd4)) {
    *param_1 = 1;
    return;
  }
  if (*(int *)(*(int *)((*(byte *)(uVar1 + 0x1a) + 1) * 4 + uVar1) + 0xd4) ==
      *(int *)(*(int *)((*(byte *)(uVar2 + 0x1a) + 1) * 4 + uVar2) + 0xd4)) {
    *param_1 = -(uVar1 < uVar2) & 1;
    return;
  }
  *param_1 = 0;
  return;
}

