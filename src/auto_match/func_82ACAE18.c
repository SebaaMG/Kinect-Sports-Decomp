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


longlong fn_82ACAE18(uint *param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  
  piVar1 = (int *)*param_1;
  uVar5 = (ulonglong)(uint)(-1 << (param_2 + 1 & 0x1f));
  puVar8 = (uint *)(piVar1 + 1);
  if ((~(uint)piVar1 & 1) == 0) {
    puVar8 = param_1;
  }
  puVar8 = (uint *)((param_2 + 1 >> 3 & 0x1ffffffc) + (int)puVar8);
  if ((~(uint)piVar1 & 1) == 0) {
    puVar6 = param_1 + 1;
  }
  else {
    puVar6 = (uint *)(piVar1 + *piVar1 + 1);
  }
  uVar7 = (ulonglong)(param_2 >> 5);
  while( true ) {
    if (puVar6 <= puVar8) {
      return -1;
    }
    if ((uVar5 & ~(ulonglong)*puVar8) != 0) break;
    puVar8 = puVar8 + 1;
    uVar5 = 0xffffffffffffffff;
    uVar7 = uVar7 + 1;
  }
  uVar2 = (uint)(uVar5 & ~(ulonglong)*puVar8);
  uVar5 = 0x1f - LZCOUNT(uVar2 & ~(uVar2 - 1));
  if ((uVar5 & 0xffffffff) == 0) {
    uVar7 = uVar7 - 1;
    uVar5 = 0x20;
  }
  lVar9 = (uVar7 & 0x7ffffff) * 0x20;
  lVar4 = (uVar5 - 1 & 0xfffffffc) + lVar9;
  if ((puVar8 + 1 == puVar6) && (0x20 < (lVar4 + 4U & 0xffffffff))) {
    return -1;
  }
  uVar3 = fn_82ACACA8(param_1,lVar4,lVar4 + 3);
  *param_3 = uVar3;
  return lVar9 + (uVar5 - 1);
}

