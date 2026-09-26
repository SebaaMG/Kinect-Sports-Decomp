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


void fn_8270EC80(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < 0) {
    return;
  }
  if (0xe4 < param_2) {
    return;
  }
  iVar2 = (param_2 >> 3) + param_1;
  *(byte *)(iVar2 + 0x658) =
       (byte)(1 << (param_2 + (param_2 >> 3) * -8 & 0x3fU)) | *(byte *)(iVar2 + 0x658);
  iVar2 = param_1 + 0xc;
  if (99 < *(uint *)(param_1 + 0x654)) {
    return;
  }
  *(short *)(*(int *)(param_1 + 0x64c) * 0x10 + iVar2 + 4) = (short)param_2;
  *(undefined1 *)(*(int *)(param_1 + 0x64c) * 0x10 + iVar2 + 0xc) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x64c) * 0x10 + iVar2) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x64c) * 0x10 + iVar2 + 8) = 5;
  *(undefined1 *)(*(int *)(param_1 + 0x64c) * 0x10 + iVar2 + 0xd) = param_4;
  uVar1 = *(int *)(param_1 + 0x64c) + 1;
  *(uint *)(param_1 + 0x64c) = uVar1;
  if (99 < uVar1) {
    *(undefined4 *)(param_1 + 0x64c) = 0;
  }
  *(int *)(param_1 + 0x654) = *(int *)(param_1 + 0x654) + 1;
  return;
}

