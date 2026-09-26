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
extern int fn_8265C9E0();
extern int fn_8265CAE0();
extern unsigned int lbl_832810EC;


void fn_8257EB18(void)

{
  longlong lVar1;
  
  if (lbl_832810EC == 0) {
    lVar1 = fn_8265C9E0(1);
    if (lVar1 == 0) {
      lbl_832810EC = 0;
    }
    else {
      fn_8265CAE0();
      lbl_832810EC = (int)lVar1;
    }
  }
  return;
}

