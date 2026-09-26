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
extern int fn_82ACACA8();


longlong fn_82ACAF10(uint *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar1 = *param_1;
  uVar4 = (ulonglong)(uint)(2 << (param_2 + 1 & 0x1f)) - 1;
  puVar5 = (uint *)(uVar1 + 4);
  if ((~uVar1 & 1) == 0) {
    puVar5 = param_1;
  }
  puVar5 = (uint *)((param_2 + 1 >> 3 & 0x1ffffffc) + (int)puVar5);
  puVar6 = (uint *)(uVar1 + 4);
  if ((~uVar1 & 1) == 0) {
    puVar6 = param_1;
  }
  uVar7 = (ulonglong)(param_2 >> 5);
  while( true ) {
    if (puVar5 < puVar6) {
      return -1;
    }
    if ((uVar4 & ~(ulonglong)*puVar5) != 0) break;
    puVar5 = puVar5 + -1;
    uVar4 = 0xffffffffffffffff;
    uVar7 = uVar7 - 1;
  }
  uVar4 = 0x1f - LZCOUNT((int)(uVar4 & ~(ulonglong)*puVar5));
  if ((uVar4 & 0xffffffff) == 0) {
    uVar7 = uVar7 - 1;
    uVar4 = 0x20;
  }
  lVar8 = (uVar7 & 0x7ffffff) * 0x20;
  lVar3 = (uVar4 - 1 & 0xfffffffc) + lVar8;
  uVar2 = fn_82ACACA8(param_1,lVar3,lVar3 + 3);
  *param_3 = uVar2;
  return lVar8 + (uVar4 - 1);
}

