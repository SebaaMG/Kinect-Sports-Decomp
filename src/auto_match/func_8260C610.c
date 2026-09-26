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
extern int fn_82522D98();
extern int fn_827D50B8();
extern int fn_827D9D40();


longlong fn_8260C610(int param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = fn_827D50B8(*(undefined4 *)(param_1 + 0x58));
  if (lVar1 == 0) {
    iVar2 = fn_827D50B8(*(undefined4 *)(param_1 + 0x50));
    if (iVar2 == 0) {
      fn_827D9D40(param_1 + 0x60);
                    /* WARNING: Subroutine does not return */
      fn_82522D98();
    }
  }
  else {
    if ((int)lVar1 == 0x3e5) {
      return lVar1;
    }
    if ((int)lVar1 == 0x3e4) {
      return lVar1;
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x1a0);
  return lVar1;
}

