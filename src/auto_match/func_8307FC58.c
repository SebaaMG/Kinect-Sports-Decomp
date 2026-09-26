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


longlong fn_8307FC58(int param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  lVar3 = 0;
  lVar2 = 0;
  uVar7 = 0;
  if (1 < (int)param_2) {
    puVar6 = (uint *)(param_1 + -4);
    lVar4 = (((ulonglong)param_2 - 2 & 0xffffffff) >> 1) + 1;
    uVar7 = lVar4 * 2 & 0xfffffffe;
    do {
      uVar5 = ((ulonglong)(puVar6[1] >> 1) & 0x55555555) + ((ulonglong)puVar6[1] & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = (uVar5 >> 4 & 0xf0f0f0f) + (uVar5 & 0xf0f0f0f);
      uVar5 = (uVar5 >> 8 & 0xf000f) + (uVar5 & 0xf000f);
      puVar6 = puVar6 + 2;
      lVar3 = (uVar5 >> 0x10) + (uVar5 & 0xff) + lVar3;
      uVar5 = ((ulonglong)(*puVar6 >> 1) & 0x55555555) + ((ulonglong)*puVar6 & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = (uVar5 >> 4 & 0xf0f0f0f) + (uVar5 & 0xf0f0f0f);
      uVar5 = (uVar5 >> 8 & 0xf000f) + (uVar5 & 0xf000f);
      lVar2 = (uVar5 >> 0x10) + (uVar5 & 0xff) + lVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if ((int)uVar7 < (int)param_2) {
    uVar1 = *(uint *)((int)(uVar7 << 2) + param_1);
    uVar7 = ((ulonglong)(uVar1 >> 1) & 0x55555555) + ((ulonglong)uVar1 & 0x55555555);
    uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
    uVar7 = (uVar7 >> 4 & 0xf0f0f0f) + (uVar7 & 0xf0f0f0f);
    uVar7 = (uVar7 >> 8 & 0xf000f) + (uVar7 & 0xf000f);
    return lVar2 + lVar3 + (uVar7 >> 0x10) + (uVar7 & 0xff);
  }
  return lVar2 + lVar3;
}

