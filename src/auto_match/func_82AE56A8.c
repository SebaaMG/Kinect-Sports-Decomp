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


longlong fn_82AE56A8(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar3 = ((param_2 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar2 = ((param_3 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar5 = (2L << (param_3 & 0x3f)) - 1;
  uVar1 = -1L << (param_2 & 0x3f);
  if ((param_2 & 0xffffffff) >> 6 == (param_3 & 0xffffffff) >> 6) {
    uVar1 = uVar1 & uVar5;
    uVar5 = uVar1;
  }
  uVar5 = *(ulonglong *)uVar2 & uVar5;
  if (uVar5 == 0) {
    do {
      uVar2 = uVar2 - 8;
      puVar4 = (ulonglong *)uVar3;
      if ((uVar2 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
        uVar5 = *puVar4 & uVar1;
        param_3 = param_2;
        if (uVar5 == 0) {
          return -1;
        }
        goto code_r0x82ae5704;
      }
      lVar6 = *(longlong *)uVar2;
    } while (lVar6 == 0);
    lVar6 = (((ulonglong)(uint)((int)(longlong *)uVar2 - (int)puVar4 >> 3) & 0x3ffffff) * 0x40 +
            (param_2 & 0xffffffc0)) - LZCOUNT(lVar6);
  }
  else {
code_r0x82ae5704:
    lVar6 = (param_3 & 0xffffffc0) - LZCOUNT(uVar5);
  }
  return lVar6 + 0x3f;
}

