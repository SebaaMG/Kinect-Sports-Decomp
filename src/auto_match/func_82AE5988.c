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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))


longlong fn_82AE5988(int param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar6;
  longlong lVar5;
  
  puVar4 = (uint *)((param_2 >> 3 & 0x1ffffffc) + param_1);
  puVar3 = (uint *)((param_3 >> 3 & 0x1ffffffc) + param_1);
  uVar6 = (2 << (param_3 & 0x1f)) - 1;
  uVar2 = -1 << (param_2 & 0x1f);
  if (param_2 >> 5 == param_3 >> 5) {
    uVar6 = uVar2 & uVar6;
    uVar2 = uVar6;
  }
  uVar6 = *puVar3 & uVar6;
  if (uVar6 == 0) {
    do {
      puVar3 = puVar3 + -1;
      if (puVar3 <= puVar4) {
        uVar6 = *puVar4 & uVar2;
        if (uVar6 == 0) {
          return -1;
        }
        uVar1 = CONCAT44(param_2,param_2);
        goto code_r0x82ae5a18;
      }
    } while (*puVar3 == 0);
    lVar5 = (((ulonglong)(uint)((int)puVar3 - (int)puVar4 >> 2) & 0x7ffffff) * 0x20 +
            ((ulonglong)param_2 & 0xffffffe0)) - LZCOUNT(*puVar3);
  }
  else {
    uVar1 = CONCAT44(param_3,param_3);
code_r0x82ae5a18:
    lVar5 = (uVar1 & 0xffffffe0) - LZCOUNT(uVar6);
  }
  return lVar5 + 0x1f;
}

