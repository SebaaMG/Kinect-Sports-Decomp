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
extern unsigned int lbl_8218EFE8;
extern unsigned int lbl_821902F0;


ulonglong fn_82554C50(undefined8 param_1,short param_2)

{
  if (*(ushort *)(&lbl_8218EFE8 + param_2 * 2) == 0xffff) {
    return 0xffffffffffffffff;
  }
  return (ulonglong)*(uint *)(&lbl_821902F0 + (uint)*(ushort *)(&lbl_8218EFE8 + param_2 * 2) * 4);
}

