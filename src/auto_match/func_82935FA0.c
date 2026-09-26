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


ulonglong fn_82935FA0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = 0;
  uVar4 = 0;
  uVar5 = 0;
  do {
    uVar2 = param_2 >> (uVar5 & 0x3f) & 7;
    if ((uVar2 == 0) || (4 < uVar2)) {
      uVar1 = uVar5;
      if (uVar2 != 0) {
        if (uVar4 != uVar6) {
          return 0xffffffffffffffff;
        }
        uVar6 = uVar6 + 1;
      }
    }
    else {
      if ((int)uVar2 <= (int)uVar6) {
        return 0xffffffffffffffff;
      }
      uVar1 = uVar2 * 3 - 3;
      uVar6 = uVar2;
    }
    uVar5 = uVar5 + 3;
    uVar3 = uVar2 << (uVar1 & 0x3f) | uVar3;
    uVar4 = uVar4 + 1;
  } while ((int)uVar5 < 0xc);
  return uVar3;
}

