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
extern int fn_82F71CD0();
extern int fn_82F82E90();
extern int fn_82F8362C();
extern unsigned int lbl_832636DC;


void fn_82F835B8(void)

{
  if (lbl_832636DC == 0) {
    fn_82F71CD0(6);
    if (lbl_832636DC == 0) {
      fn_82F82E90();
      lbl_832636DC = lbl_832636DC + 1;
    }
    fn_82F8362C();
  }
  return;
}

