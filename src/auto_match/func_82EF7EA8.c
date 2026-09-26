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
extern int fn_82EF75C0();


longlong fn_82EF7EA8(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                      int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = fn_82EF75C0();
  lVar2 = fn_82EF75C0(param_1 + 8,param_2,param_3 + 8,param_4);
  lVar2 = lVar2 + lVar1;
  if (8 < param_5) {
    param_1 = (param_2 & 0x1fffffff) * 8 + param_1;
    param_3 = (param_4 & 0x1fffffff) * 8 + param_3;
    lVar1 = fn_82EF75C0(param_1 + 8,param_2,param_3 + 8,param_4);
    lVar3 = fn_82EF75C0(param_1,param_2,param_3,param_4);
    lVar2 = lVar3 + lVar1 + lVar2;
  }
  return lVar2;
}

