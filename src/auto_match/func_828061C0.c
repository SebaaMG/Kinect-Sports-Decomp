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
extern int fn_82805808();


longlong fn_828061C0(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(int)(uint)*(ushort *)(param_1 + 0x22) *
          (longlong)(int)(uint)*(ushort *)(param_1 + 0x20);
  lVar1 = fn_82805808();
  return (lVar1 + 3U & 0xfffffffc) +
         ((((lVar2 * 4 & 0xfffffffcU) + 0x7f & 0xffffff80) + 0x25) * 4 & 0xfffffffc) +
         ((ulonglong)(uint)((int)lVar2 + 0x1f >> 3) & 0xfffffffc) +
         ((ulonglong)*(ushort *)(param_1 + 0x24) + 3 & 0xfffffffc);
}

