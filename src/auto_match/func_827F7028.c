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
extern int fn_827FA1E8();


longlong fn_827F7028(int param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x2e);
  lVar2 = fn_827FA1E8();
  lVar2 = lVar2 + (ulonglong)uVar1;
  return ((ulonglong)*(ushort *)(param_1 + 0x32) * 0xc + lVar2 & 0x3fffffff) * 4 +
         (longlong)((int)(*(ushort *)(param_1 + 0x32) + 7) >> 3) + ((lVar2 + 7U & 0xffffffff) >> 3);
}

