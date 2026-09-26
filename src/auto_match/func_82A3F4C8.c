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
extern unsigned int *auStack_50;
extern int fn_82F691F0();


undefined8 fn_82A3F4C8(undefined8 param_1,int param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar5;
  short asStack_80 [24];
  ushort auStack_50 [17];
  short sStack_2e;
  
  uVar6 = 1;
  do {
    uVar4 = uVar6 + 1 & 0xffff;
    asStack_80[uVar6] = 0;
    uVar6 = uVar4;
  } while (uVar4 < 0x11);
  uVar6 = 0;
  do {
    pbVar1 = (byte *)(uVar6 + param_2);
    uVar6 = uVar6 + 1 & 0xffff;
    asStack_80[*pbVar1] = asStack_80[*pbVar1] + 1;
  } while (uVar6 < 8);
  auStack_50[1] = 0;
  uVar6 = 1;
  do {
    uVar4 = uVar6 + 1 & 0xffff;
    auStack_50[uVar6 + 1] = (asStack_80[uVar6] << (0x10 - uVar6 & 0x3f)) + auStack_50[uVar6];
    uVar6 = uVar4;
  } while (uVar4 < 0x11);
  if (sStack_2e != 0) {
    return 0;
  }
  uVar5 = 1;
  do {
    iVar2 = (int)uVar5;
    iVar3 = (int)(uVar5 << 1);
    uVar5 = uVar5 + 1 & 0xffff;
    *(short *)((int)asStack_80 + iVar3) = (short)(1 << (7U - iVar2 & 0x3f));
    *(ushort *)((int)auStack_50 + iVar3) = *(ushort *)((int)auStack_50 + iVar3) >> 9;
  } while (uVar5 < 8);
  for (; uVar5 < 0x11; uVar5 = uVar5 + 1 & 0xffff) {
    *(short *)((int)asStack_80 + (int)(uVar5 << 1)) = (short)(1 << (0x10U - (int)uVar5 & 0x3f));
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_3,0,0x80);
}

