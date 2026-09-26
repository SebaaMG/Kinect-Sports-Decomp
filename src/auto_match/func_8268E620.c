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


uint fn_8268E620(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  uVar2 = 0;
  uVar3 = 0xffffffff;
  if (uVar1 == 0) {
    return uVar2;
  }
  uVar6 = 0;
  uVar4 = (ulonglong)param_2;
  while( true ) {
    uVar5 = uVar1 - param_2;
    if (((param_2 <= uVar1) && (uVar5 < uVar3)) && (uVar2 = uVar1, uVar3 = uVar5, uVar5 == 0)) {
      return uVar1;
    }
    uVar5 = *(uint *)(uVar1 + 0x1c);
    uVar1 = *(uint *)(((int)(uVar4 >> 0x1f) + 6) * 4 + uVar1);
    if ((uVar5 != 0) && (uVar5 != uVar1)) {
      uVar6 = uVar5;
    }
    if (uVar1 == 0) break;
    uVar4 = (uVar4 & 0x7fffffff) << 1;
  }
  if (uVar6 == 0) {
    return uVar2;
  }
  do {
    if ((param_2 <= uVar6) && (uVar6 - param_2 < uVar3)) {
      uVar2 = uVar6;
      uVar3 = uVar6 - param_2;
    }
    uVar6 = *(uint *)(((*(int *)(uVar6 + 0x18) == 0) + 6) * 4 + uVar6);
  } while (uVar6 != 0);
  return uVar2;
}

