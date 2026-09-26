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


void fn_82E68FB0(int param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)param_3;
  uVar3 = *(uint *)(param_1 + 0x10);
  param_2 = param_2 & ~(-1 << (uVar2 & 0x3f));
  if (uVar2 < uVar3) {
    *(uint *)(param_1 + 0x10) = uVar3 - uVar2;
    *(uint *)(param_1 + 0xc) = param_2 << (uVar3 - uVar2 & 0x3f) ^ *(uint *)(param_1 + 0xc);
    return;
  }
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = param_2 >> (uVar2 - uVar3 & 0x3f) ^ *(uint *)(param_1 + 0xc);
  param_3 = param_3 - (ulonglong)*(uint *)(param_1 + 0x10);
  *(uint **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  if (param_3 != 0) {
    uVar3 = 0x20 - (int)param_3;
    *(uint *)(param_1 + 0x10) = uVar3;
    *(uint *)(param_1 + 0xc) = param_2 << (uVar3 & 0x3f);
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x20;
  return;
}

