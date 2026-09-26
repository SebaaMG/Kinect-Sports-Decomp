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


byte fn_82A5DEC8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  
  if (*(ushort *)(param_1 + 0x10) < 0x20) {
    return 0;
  }
  uVar3 = (ulonglong)*(ushort *)(param_1 + 8);
  bVar1 = -(*(int *)(param_1 + 0x10) != 0) &
          -(uVar3 != 0) &
          -(*(char *)(param_1 + 0xb) == '\x02') & -(*(short *)(param_1 + 2) == 0x10) & 1U;
  if (*(ushort *)(param_1 + 8) != 0) {
    pbVar2 = (byte *)(param_1 + 0x1c);
    do {
      bVar1 = -((*pbVar2 & 0xf0) < 0x31) &
              -((*pbVar2 & 0xf) < 5) &
              -(*(int *)(param_1 + 0x10) == *(int *)(pbVar2 + -0xc)) & bVar1;
      if (pbVar2[1] != 1) {
        bVar1 = -(pbVar2[1] == 2) & bVar1;
      }
      uVar5 = *(ushort *)(pbVar2 + 2);
      if (uVar5 != 0) {
        uVar4 = 0;
        for (; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
          uVar4 = uVar4 + 1;
        }
        bVar1 = -(pbVar2[1] == uVar4) & bVar1;
      }
      pbVar2 = pbVar2 + 0x14;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    return bVar1;
  }
  return bVar1;
}

