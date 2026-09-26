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


void fn_82693208(longlong param_1,ulonglong param_2,longlong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar1 = (param_2 & 0xffffffff) >> 0x14;
  uVar9 = (param_2 + param_3) - 1;
  uVar2 = (uVar9 & 0xffffffff) >> 0x14;
  if (uVar1 <= uVar2) {
    lVar3 = uVar1 * 8 + param_1 + 4;
    uVar4 = uVar1;
    do {
      uVar7 = 0;
      uVar5 = 0xff;
      if ((uVar4 & 0xffffffff) == uVar1) {
        uVar7 = (param_2 & 0xffffffff) >> 0xc & 0xff;
      }
      if ((uVar4 & 0xffffffff) == uVar2) {
        uVar5 = (uVar9 & 0xffffffff) >> 0xc & 0xff;
      }
      if (uVar7 <= uVar5) {
        lVar6 = uVar7 * 4 + (ulonglong)*(uint *)lVar3 + -4;
        for (lVar8 = (uVar5 - uVar7) + 1; lVar8 != 0; lVar8 = lVar8 + -1) {
          lVar6 = lVar6 + 4;
          *(undefined4 *)lVar6 = param_4;
        }
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 8;
    } while ((uVar4 & 0xffffffff) <= uVar2);
  }
  return;
}

