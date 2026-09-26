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


undefined8 fn_82A45808(int param_1,int param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  
  bVar1 = *(byte *)((int)param_3 + 10);
  puVar3 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  if ((*puVar3 >> 0xc & 0xff) != (uint)bVar1) {
    puVar3[0xc] = 1;
    *puVar3 = (uint)bVar1 << 0xc | *puVar3 & 0xfff00fff;
  }
  bVar1 = *(byte *)(param_3 + 2);
  if ((puVar3[1] >> 0xc & 3) != (uint)bVar1) {
    puVar3[0xc] = 1;
    puVar3[1] = (bVar1 & 3) << 0xc | puVar3[1] & 0xffffcfff;
  }
  bVar1 = *(byte *)((int)param_3 + 9);
  if ((puVar3[1] >> 0x11 & 7) != (uint)bVar1) {
    puVar3[0xc] = 1;
    puVar3[1] = (bVar1 & 7) << 0x11 | puVar3[1] & 0xfff1ffff;
  }
  uVar2 = *param_3;
  if ((puVar3[3] & 0x3ffffff) != uVar2) {
    puVar3[0xc] = 1;
    puVar3[3] = uVar2 & 0x3ffffff | puVar3[3] & 0xfc000000;
  }
  uVar2 = param_3[1];
  if ((puVar3[4] & 0x3ffffff) != uVar2) {
    puVar3[0xd] = 1;
    puVar3[4] = uVar2 & 0x3ffffff | puVar3[4] & 0xfc000000;
  }
  return 0;
}

