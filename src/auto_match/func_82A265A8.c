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
extern int fn_82A27F98();


longlong fn_82A265A8(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = param_1 & 5 | 0x1000;
  if ((param_3 & 0xffffffff) < 0x10000) {
    if ((param_3 & 0xffffffff) == 0) {
      uVar1 = param_1 & 5 | 0x1002;
      goto code_r0x82a265f0;
    }
    param_3 = 0x10000;
  }
  if ((param_3 & 0xffffffff) < (param_2 & 0xffffffff)) {
    param_3 = param_2;
  }
code_r0x82a265f0:
  lVar2 = fn_82A27F98(uVar1,0,param_3,param_2,0,0);
  if (lVar2 == 0) {
    thunk_FUN_82a2b748(8);
  }
  return lVar2;
}

