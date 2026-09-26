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
extern int fn_82A1F238();
extern unsigned int *lbl_831D44D4;
extern unsigned int lbl_831D44E0;
extern unsigned int lbl_831D44E4;


void fn_8313F5B0(void)

{
  undefined4 *puVar1;
  
  while (lbl_831D44D4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*lbl_831D44D4;
    if (lbl_831D44D4 == (undefined4 *)((uint)lbl_831D44D4 & 0xffff0000)) {
      fn_82A1F238();
      lbl_831D44E0 = lbl_831D44E0 + -1;
    }
    lbl_831D44E4 = lbl_831D44E4 + -1;
    lbl_831D44D4 = puVar1;
  }
  return;
}

