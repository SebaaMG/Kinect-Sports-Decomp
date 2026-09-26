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


ulonglong fn_83046238(ulonglong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  if ((param_2 & 8) == 0) {
    return param_1;
  }
  uVar1 = 0;
  for (uVar3 = param_2 & 7; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
    uVar1 = uVar1 + 1;
  }
  if ((param_1 & 0xffffffff) != (uVar1 & 0xffffffff)) {
    if ((uVar1 & 0xffffffff) < (param_1 & 0xffffffff)) {
      return param_1 - 1;
    }
    return param_1;
  }
  lVar2 = 0;
  for (; param_2 != 0; param_2 = param_2 - 1 & param_2) {
    lVar2 = lVar2 + 1;
  }
  return lVar2 - 1;
}

