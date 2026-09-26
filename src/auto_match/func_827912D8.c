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
extern int fn_8278FD18();


longlong fn_827912D8(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar3 = 0;
  uVar6 = param_1 + 0xc;
  lVar5 = 0;
  lVar4 = 0;
  while( true ) {
    if ((((uVar6 & 0xffffffff) == 0) || ((int)lVar5 < 0)) ||
       (bVar1 = false, ((int *)uVar6)[1] <= (int)lVar5)) {
      bVar1 = true;
    }
    if (bVar1) break;
    uVar7 = (ulonglong)*(uint *)(*(int *)(*(int *)uVar6 + (int)lVar4) + 4);
    if (uVar7 != 0) {
      cVar2 = fn_8278FD18();
      if (cVar2 != '\0') {
        uVar7 = uVar7 - 1;
      }
    }
    lVar3 = uVar7 + lVar3;
    if ((int)lVar5 < *(int *)((int)uVar6 + 4)) {
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 4;
    }
  }
  return lVar3;
}

