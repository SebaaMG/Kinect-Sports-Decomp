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


void fn_82F01808(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x300);
  uVar3 = *(undefined4 *)(param_1 + 0x304);
  *(int *)(param_1 + 0x304) = iVar2;
  *(undefined4 *)(param_1 + 0x300) = uVar3;
  *(int *)(param_1 + 0x4a94) = *(int *)(iVar2 + 0x40) + *(int *)(param_1 + 0x574);
  *(int *)(param_1 + 0x4a98) = *(int *)(iVar2 + 0x58) + *(int *)(param_1 + 0x578);
  *(int *)(param_1 + 0x4a9c) = *(int *)(iVar2 + 0x70) + *(int *)(param_1 + 0x578);
  iVar2 = *(int *)(param_1 + 0x300);
  iVar1 = *(int *)(iVar2 + 0x40);
  *(int *)(param_1 + 0x14) = iVar1;
  iVar4 = *(int *)(param_1 + 0x574) + iVar1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x70);
  *(int *)(param_1 + 0x310) = iVar4;
  if ((1 < *(uint *)(param_1 + 0x658)) &&
     (*(int *)(param_1 + 0x113c) = *(int *)(param_1 + 0x1144) + iVar4,
     3 < *(uint *)(param_1 + 0x658))) {
    *(int *)(param_1 + 0x1504) = *(int *)(param_1 + 0x150c) + iVar4;
    *(int *)(param_1 + 0x18cc) = *(int *)(param_1 + 0x18d4) + iVar4;
  }
  *(int *)(param_1 + 0x4ed8) = iVar1;
  *(undefined4 *)(param_1 + 0x4edc) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x4ee0) = *(undefined4 *)(param_1 + 0x1c);
  return;
}

