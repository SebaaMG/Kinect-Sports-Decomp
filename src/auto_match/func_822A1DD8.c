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
extern unsigned int lbl_831D1298;
extern unsigned int lbl_831D12A0;
extern int (*lbl_83276778)();


void fn_822A1DD8(void)

{
  if ((lbl_831D12A0 == 0) && (lbl_831D1298 == 0)) {
    if (lbl_83276778 != (code *)0x0) {
      (*lbl_83276778)(0,0,0,0xffffffff821abf48,0xffffffff821abeb8,0x1c3);
    }
    lbl_831D12A0 = 1;
  }
  return;
}

