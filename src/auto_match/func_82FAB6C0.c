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
extern int fn_82FAB1D8();
extern int fn_82FABC50();
extern int fn_82FF7868();
extern unsigned int lbl_832642E8;


void fn_82FAB6C0(ulonglong param_1)

{
  longlong lVar1;
  
  fn_82FAB1D8();
  lVar1 = param_1 + 4;
  if ((param_1 & 0xffffffff) == 0) {
    lVar1 = 0;
  }
  fn_82FF7868(lbl_832642E8,lVar1);
  fn_82FABC50(param_1 + 0x2c);
  return;
}

