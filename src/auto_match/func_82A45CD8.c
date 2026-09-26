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


undefined8 fn_82A45CD8(int param_1,int param_2,uint *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = *(uint *)(param_2 * 0x60 + *(int *)(param_1 + 8)) >> 0x14;
  puVar4 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  uVar1 = (param_4 & 0xffffffff) >> 0xb;
  if ((uVar3 & 1) == 0) {
    uVar2 = MmGetPhysicalAddress(param_3);
    if (puVar4[5] != uVar2) {
      uVar2 = MmGetPhysicalAddress(param_3);
      puVar4[5] = uVar2;
      puVar4[0xd] = 1;
    }
    if (((ulonglong)*puVar4 & 0xfff) != uVar1) {
      puVar4[0xc] = 1;
      *puVar4 = (uint)uVar1 & 0xfff | *puVar4 & 0xfffff000;
    }
    uVar2 = *puVar4;
    if ((uVar2 & 0x300000) != (uVar2 & 0x200000 | 0x100000)) {
      puVar4[0xc] = 1;
      *puVar4 = uVar2 | 0x100000;
    }
    puVar4[0x15] = (uint)param_3;
  }
  else {
    if ((uVar3 & 2) != 0) {
      return 0xffffffff80070005;
    }
    uVar2 = MmGetPhysicalAddress(param_3);
    if (puVar4[6] != uVar2) {
      uVar2 = MmGetPhysicalAddress(param_3);
      puVar4[6] = uVar2;
      puVar4[0xd] = 1;
    }
    if (((ulonglong)puVar4[1] & 0xfff) != uVar1) {
      puVar4[0xc] = 1;
      puVar4[1] = (uint)uVar1 & 0xfff | puVar4[1] & 0xfffff000;
    }
    uVar2 = *puVar4;
    if ((uVar2 & 0x300000) != (uVar2 & 0x100000 | 0x200000)) {
      puVar4[0xc] = 1;
      *puVar4 = uVar2 | 0x200000;
    }
    puVar4[0x16] = (uint)param_3;
  }
  if (((((uVar3 & 3) == 0) && (*param_3 != 0x7fff)) &&
      (uVar3 = (*param_3 >> 0xb & 0x7fff) + 0x20, uVar3 != 0)) && ((puVar4[2] & 0x3ffffff) != uVar3)
     ) {
    puVar4[0xc] = 1;
    puVar4[2] = puVar4[2] & 0xfc000000 | uVar3;
  }
  return 0;
}

