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


ulonglong fn_82A94AA8(int param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = (ulonglong)(param_3 == 0) ^ 1;
  iVar1 = (int)(uVar2 << 1);
  lVar4 = (uVar2 - LZCOUNT((param_1 - iVar1) + -1)) + 0x20;
  lVar3 = (uVar2 - LZCOUNT((param_2 - iVar1) + -1)) + 0x20;
  if ((int)lVar3 <= (int)lVar4) {
    lVar4 = lVar3;
  }
  uVar2 = lVar4 - 4;
  return (((uVar2 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar2 == 0) & uVar2;
}

