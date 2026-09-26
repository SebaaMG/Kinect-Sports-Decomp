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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E65D40();


longlong fn_82E65E20(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = param_2 - 1;
  uVar6 = (uVar5 & 0xffffffff) >> 1;
  uVar1 = (uVar6 | uVar5 & 0xffffffff) >> 2;
  uVar2 = (uVar1 | uVar6 | uVar5 & 0xffffffff) >> 4;
  uVar3 = (uVar2 | uVar1 | uVar6 | uVar5 & 0xffffffff) >> 8;
  uVar6 = (uVar3 | uVar2 | uVar1 | uVar6 | uVar5 & 0xffffffff) >> 0x10 |
          uVar3 | uVar2 | uVar1 | uVar6 | uVar5;
  if (uVar6 == 0xffffffffffffffff) {
    uVar6 = 0;
  }
  if ((uVar6 + param_1 & 0xffffffff) < (param_1 & 0xffffffff)) {
    lVar7 = -0x7fffbffb;
  }
  else {
    lVar4 = fn_82E50BE8(uVar6 + param_1,0,0,0,0);
    if (lVar4 == 0) {
      lVar7 = -0x7ff8fff2;
    }
    else {
      lVar7 = fn_82E65D40(param_1,lVar4,uVar6 + lVar4 & ~uVar6,param_3);
      if (lVar7 < 0) {
        fn_82E4FE40(lVar4);
      }
    }
  }
  return lVar7;
}

