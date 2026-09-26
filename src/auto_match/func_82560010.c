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


longlong fn_82560010(uint *param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar2 = 0;
  lVar3 = (ulonglong)*param_1 - 1;
  if (-1 < lVar3) {
    do {
      lVar4 = (longlong)((int)lVar2 + (int)lVar3 >> 1);
      uVar5 = (ulonglong)*(byte *)((int)(lVar4 * 0x5c) + param_1[1]);
      lVar1 = lVar4 * 0x5c + (ulonglong)param_1[1];
      uVar7 = (ulonglong)*param_2;
      if (uVar5 == *param_2) {
        lVar6 = lVar1;
        do {
          lVar6 = lVar6 + 1;
          if (uVar5 == 0) {
            return lVar1;
          }
          uVar5 = (ulonglong)*(byte *)lVar6;
          uVar7 = (ulonglong)((byte *)lVar6)[(int)param_2 - (int)lVar1];
        } while (uVar5 == uVar7);
      }
      if ((longlong)(uVar5 - uVar7) < 0) {
        lVar2 = lVar4 + 1;
      }
      else {
        if ((int)(uVar5 - uVar7) < 1) {
          return lVar1;
        }
        lVar3 = lVar4 + -1;
      }
    } while ((int)lVar2 <= (int)lVar3);
  }
  return 0;
}

