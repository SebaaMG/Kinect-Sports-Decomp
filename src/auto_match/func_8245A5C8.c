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
extern int fn_8245A478();
extern int fn_8265C9E0();
extern unsigned int lbl_83276588;


void fn_8245A5C8(void)

{
  int iVar1;
  
  if (lbl_83276588 == 0) {
    iVar1 = fn_8265C9E0(0x800e8);
    if (iVar1 == 0) {
      lbl_83276588 = 0;
    }
    else {
      lbl_83276588 = fn_8245A478();
    }
  }
  return;
}

