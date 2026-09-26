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
extern int fn_82BF3C50();
extern int fn_82BF3FF8();
extern unsigned int lbl_8322B4F4;


ulonglong fn_82BF4060(void)

{
  ulonglong uVar1;
  int iVar3;
  longlong lVar2;
  
  if (lbl_8322B4F4 == 0) {
    iVar3 = thunk_FUN_82be5550(100);
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82BF3C50();
    }
    lbl_8322B4F4 = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
      lVar2 = fn_82BF3FF8();
      uVar1 = (ulonglong)(lVar2 != 0);
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

