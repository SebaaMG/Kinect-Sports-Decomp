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


byte fn_82A5DFF8(int param_1)

{
  ushort uVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_1 + 2);
  if (*(short *)(param_1 + 0x10) != 0x22) {
    return 0;
  }
  bVar2 = -(*(short *)(param_1 + 0x32) != 0) &
          3U - ((2 < *(byte *)(param_1 + 0x31)) + '\x03') &
          -(*(short *)(param_1 + 0xe) == 0x10) &
          -((ulonglong)uVar1 << 1 == (ulonglong)*(ushort *)(param_1 + 0xc)) & 1U;
  if ((*(uint *)(param_1 + 0x1c) == 0) || (0x7ff800 < *(uint *)(param_1 + 0x1c))) {
    bVar2 = 0;
  }
  uVar4 = *(uint *)(param_1 + 0x14);
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      uVar4 = uVar4 - 1 & uVar4;
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar4 != 0);
    bVar2 = -(uVar1 == uVar3) & bVar2;
  }
  return -((ulonglong)*(uint *)(param_1 + 0x2c) + (ulonglong)*(uint *)(param_1 + 0x28) <=
          (ulonglong)*(uint *)(param_1 + 0x18)) &
         -((ulonglong)*(uint *)(param_1 + 0x24) + (ulonglong)*(uint *)(param_1 + 0x20) <=
          (ulonglong)*(uint *)(param_1 + 0x18)) &
         -((int)(uVar1 + 1) >> 1 == (uint)*(ushort *)(param_1 + 0x12)) & bVar2;
}

