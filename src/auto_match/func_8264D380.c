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


void fn_8264D380(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint *puVar3;
  longlong lVar2;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = param_3 >> 5;
  uVar1 = param_2 >> 5;
  puVar3 = (uint *)((uVar6 + 8) * 4 + param_1);
  puVar5 = (uint *)((uVar1 + 8) * 4 + param_1);
  if (param_4 == 0) {
    if (uVar1 == uVar6) {
      uVar6 = *puVar5 & ~(0xffffffffU >> (param_2 & 0x1f) & ~(0xffffffffU >> (param_3 & 0x1f)));
    }
    else {
      *puVar5 = *puVar5 & ~(0xffffffffU >> (param_2 & 0x1f));
      puVar4 = puVar5 + 1;
      if (puVar4 < puVar3) {
        lVar2 = (ulonglong)((uint)((int)puVar3 + (-1 - (int)puVar4)) >> 2) + 1;
        for (lVar7 = lVar2; lVar7 != 0; lVar7 = lVar7 + -1) {
          puVar5 = puVar5 + 1;
          *puVar5 = 0;
        }
        puVar4 = puVar4 + (int)lVar2;
      }
      puVar5 = puVar4;
      uVar6 = 0xffffffffU >> (param_3 & 0x1f) & *puVar5;
    }
  }
  else if (uVar1 == uVar6) {
    uVar6 = 0xffffffffU >> (param_2 & 0x1f) & ~(0xffffffffU >> (param_3 & 0x1f)) | *puVar5;
  }
  else {
    *puVar5 = 0xffffffffU >> (param_2 & 0x1f) | *puVar5;
    puVar4 = puVar5 + 1;
    if (puVar4 < puVar3) {
      lVar2 = (ulonglong)((uint)((int)puVar3 + (-1 - (int)puVar4)) >> 2) + 1;
      for (lVar7 = lVar2; lVar7 != 0; lVar7 = lVar7 + -1) {
        puVar5 = puVar5 + 1;
        *puVar5 = 0xffffffff;
      }
      puVar4 = puVar4 + (int)lVar2;
    }
    puVar5 = puVar4;
    uVar6 = *puVar5 | ~(0xffffffffU >> (param_3 & 0x1f));
  }
  *puVar5 = uVar6;
  return;
}

