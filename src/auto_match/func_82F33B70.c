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


ulonglong fn_82F33B70(ushort param_1,ulonglong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong uVar4;
  uint uVar6;
  ulonglong uVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (param_1 == 0) {
    return param_2;
  }
  do {
    uVar2 = (uint)param_2;
    uVar1 = *param_3;
    uVar4 = (param_2 & 0xffffffff) >> 0x10;
    if ((uVar4 == 0) && (uVar1 >> 0x10 == 0)) {
      param_2 = (longlong)(int)(uVar1 & 0xffff) * (longlong)(int)(uVar2 & 0xffff);
    }
    else {
      if ((uVar4 != 0) && (uVar1 >> 0x10 != 0)) {
        return 0xffffffffffffffff;
      }
      uVar6 = uVar1;
      if (uVar1 >> 0x10 != 0) {
        uVar6 = uVar2;
        uVar2 = uVar1;
      }
      uVar4 = (longlong)(int)(uVar2 >> 0x10) * (longlong)(int)(uVar6 & 0xffff);
      if (uVar4 >> 0x10 != 0) {
        return 0xffffffffffffffff;
      }
      uVar5 = (longlong)(int)(uVar2 & 0xffff) * (longlong)(int)(uVar6 & 0xffff);
      param_2 = (uVar4 * 0x10000 & 0xffff0000) + uVar5;
      if ((param_2 & 0xffffffff) < uVar5) {
        return 0xffffffffffffffff;
      }
    }
    param_3 = param_3 + 2;
    uVar3 = uVar3 + 1;
    if (param_1 <= uVar3) {
      return param_2;
    }
  } while( true );
}

