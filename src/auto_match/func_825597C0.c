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
extern unsigned int lbl_83276742;
extern int (*lbl_83276794)();


undefined8 fn_825597C0(void)

{
  undefined8 uVar1;
  
  if (lbl_83276742 == '\0') {
    if (lbl_83276794 == (code *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*lbl_83276794)();
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

