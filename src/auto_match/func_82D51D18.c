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


ulonglong fn_82D51D18(int param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((param_2 & 1) == 0) {
    return param_2 | 1;
  }
  uVar2 = (param_2 & 0xffffffff) >> 0x10;
  lVar1 = ((param_2 & 0xffffffff) >> 1 & 0x7fff) + 1;
  if ((int)lVar1 == *(int *)(*(int *)(param_1 + 8) + 0x10) + -1) {
    uVar2 = uVar2 + 1;
    lVar1 = 0;
    if ((int)uVar2 == *(int *)(*(int *)(param_1 + 8) + 0x14) + -1) {
      return 0xffffffffffffffff;
    }
  }
  return (uVar2 * 0x8000 + lVar1 & 0x7fffffff) << 1;
}

