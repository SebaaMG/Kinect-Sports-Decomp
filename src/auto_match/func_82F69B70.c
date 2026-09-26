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


longlong fn_82F69B70(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 0;
  if (*(char *)param_1 == '\0') {
    return lVar2;
  }
  do {
    param_1 = (uint *)((int)param_1 + 1);
    if (((uint)param_1 & 3) == 0) {
      uVar1 = *param_1;
      lVar2 = lVar2 + 1;
      while (uVar3 = ~(((ulonglong)uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | (ulonglong)uVar1 | 0x7f7f7f7f)
            , uVar3 == 0) {
        param_1 = param_1 + 1;
        uVar1 = *param_1;
        lVar2 = lVar2 + 4;
      }
      return lVar2 + ((ulonglong)LZCOUNT((int)uVar3) >> 3);
    }
    lVar2 = lVar2 + 1;
  } while (*(char *)param_1 != '\0');
  return lVar2;
}

