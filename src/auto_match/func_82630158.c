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
extern int fn_8264D6C0();
extern U64 storeWordConditionalIndexed();


void fn_82630158(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char in_RESERVE;
  byte in_cr0;
  
  puVar3 = (uint *)param_1;
  uVar2 = puVar3[6];
  uVar5 = (ulonglong)uVar2 & 0xfffffffc;
  uVar6 = 0;
  if ((*puVar3 & 0xf00) == 0x100) {
    uVar1 = puVar3[5];
    if (uVar1 != 0xffff0000) {
      uVar7 = ((ulonglong)(uVar1 >> 0x10) & 0x7fff) << 4;
      if ((uVar1 >> 0x10 & 0x8000) == 0) {
        uVar7 = (ulonglong)(uVar1 >> 0x10);
      }
      uVar8 = ((ulonglong)uVar1 & 0x7fff) << 4;
      if ((uVar1 & 0x8000) == 0) {
        uVar8 = (ulonglong)uVar1 & 0xffff;
      }
      bVar4 = (*puVar3 & 0x200000) == 0;
      in_cr0 = bVar4 << 1;
      puVar3[5] = 0xffff0000;
      if (bVar4) {
        uVar5 = (((ulonglong)(uVar2 >> 0x14) + 0x200 & 0x1000) + ((ulonglong)uVar2 & 0x1ffffffc)) -
                0x40000000;
      }
      fn_8264D6C0(uVar7 * 0x80 + (uVar5 & 0xffffff80),uVar8 * 0x80 + (uVar5 & 0xffffff80),0);
    }
    if (((uVar6 & 0xffffffff) != 0) && (uVar2 = puVar3[6], uVar2 != 0xffff0000)) {
      uVar5 = ((ulonglong)(uVar2 >> 0x10) & 0x7fff) << 4;
      if ((uVar2 >> 0x10 & 0x8000) == 0) {
        uVar5 = (ulonglong)(uVar2 >> 0x10);
      }
      uVar7 = ((ulonglong)uVar2 & 0x7fff) << 4;
      if ((uVar2 & 0x8000) == 0) {
        uVar7 = (ulonglong)uVar2 & 0xffff;
      }
      puVar3[6] = 0xffff0000;
      bVar4 = (*puVar3 & 0x200000) == 0;
      in_cr0 = bVar4 << 1;
      if (bVar4) {
        uVar6 = ((((uVar6 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff)) -
                0x40000000;
      }
      fn_8264D6C0(uVar5 * 0x80 + (uVar6 & 0xffffff80),uVar7 * 0x80 + (uVar6 & 0xffffff80),0);
    }
  }
  sync(0);
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)*puVar3 - 0x100,0,param_1);
      *puVar3 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return;
}

