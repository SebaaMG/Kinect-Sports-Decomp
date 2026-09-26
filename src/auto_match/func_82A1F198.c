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
extern unsigned int lbl_83219594;


longlong fn_82A1F198(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  
  if (lbl_83219594 != 0) {
    param_4 = param_4 << 0x20 | param_4 & 0xdfffffff;
  }
  if ((int)param_2 == -1) {
    param_2 = 0;
    lVar1 = -1;
  }
  else {
    lVar1 = param_1 + param_2 + -1;
    param_3 = 0;
  }
  lVar1 = MmAllocatePhysicalMemoryEx(0,param_1,param_4,param_2,lVar1,param_3);
  if (lVar1 == 0) {
    thunk_FUN_82a2b748(8);
  }
  return lVar1;
}

