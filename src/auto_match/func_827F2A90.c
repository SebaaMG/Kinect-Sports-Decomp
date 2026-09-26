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


void fn_827F2A90(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x54);
  if ((*(byte *)((uint)(bVar1 >> 3) + param_1 + 0x51) >> (bVar1 & 7) & 1) != 0) {
    puVar2 = *(undefined4 **)((bVar1 + 8) * 4 + param_1);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined4 **)((*(byte *)(param_1 + 0x54) + 0xc) * 4 + param_1);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined4 *)((*(byte *)(param_1 + 0x54) + 8) * 4 + param_1) = 0;
  *(undefined4 *)((*(byte *)(param_1 + 0x54) + 0xc) * 4 + param_1) = 0;
  uVar3 = (uint)(*(byte *)(param_1 + 0x54) >> 3);
  *(byte *)(uVar3 + param_1 + 0x51) =
       *(byte *)(uVar3 + param_1 + 0x51) & ~(byte)(1 << (*(byte *)(param_1 + 0x54) & 7));
  uVar3 = (uint)(*(byte *)(param_1 + 0x54) >> 3);
  *(byte *)(uVar3 + param_1 + 0x52) =
       *(byte *)(uVar3 + param_1 + 0x52) & ~(byte)(1 << (*(byte *)(param_1 + 0x54) & 7));
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}

