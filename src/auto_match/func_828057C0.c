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


longlong fn_828057C0(int param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x80;
  do {
    if (*(ushort *)(param_1 + 0x1e) <= param_3) {
      return lVar1;
    }
    if (((param_2 & 0xff & uVar2) != 0) && ((param_2 & 0xff & uVar2 >> 3) == 0)) {
      lVar1 = lVar1 + 1;
    }
    uVar2 = uVar2 >> 1;
    param_3 = param_3 + 1;
  } while (uVar2 != 0x10);
  return lVar1;
}

