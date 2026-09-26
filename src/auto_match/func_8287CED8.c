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
extern unsigned int iStack00000010;


longlong fn_8287CED8(ulonglong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iStack00000010;
  
  uVar4 = param_1 & 0xffffffff;
  if (uVar4 == param_2) {
    return param_3;
  }
  lVar2 = param_2 - uVar4;
  iStack00000010 = (int)(param_1 >> 0x20);
  do {
    uVar3 = (uVar4 & 0xffffffff) >> 2;
    uVar1 = uVar4 & 3;
    if (*(uint *)(iStack00000010 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iStack00000010 + 8);
    }
    uVar4 = uVar4 + 1;
    param_3 = (ulonglong)
              *(uint *)(*(int *)((int)((uVar3 & 0xffffffff) << 2) + *(int *)(iStack00000010 + 4)) +
                       (int)(uVar1 << 2)) + param_3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_3;
}

