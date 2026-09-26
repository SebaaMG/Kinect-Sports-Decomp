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
extern int fn_825602B8();


longlong fn_82560690(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = 0xffffffff83280b88;
  lVar2 = 0;
  lVar3 = 0;
  lVar5 = -0x7cd7f468;
  do {
    iVar1 = fn_825602B8(lVar3);
    if ((iVar1 != 0) && ((*(int *)(*(int *)lVar5 + 0xcc) == (int)param_1 || ((int)param_1 == 2)))) {
      lVar2 = lVar2 + 1;
    }
    lVar5 = lVar5 + 4;
    lVar3 = lVar3 + 1;
  } while ((int)lVar5 < (int)uVar4 + 0x18);
  return lVar2;
}

