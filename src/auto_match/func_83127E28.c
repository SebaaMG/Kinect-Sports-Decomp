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
extern int fn_826BC950();
extern int fn_82F63EC8();
extern unsigned int lbl_831F12E8;
extern unsigned int lbl_831F12F0;
extern unsigned int lbl_831F12F8;
extern unsigned int lbl_831F1300;


void fn_83127E28(void)

{
  lbl_831F12F0 = fn_826BC950();
  lbl_831F12E8 = 3;
  lbl_831F1300 = fn_826BC950();
  lbl_831F12F8 = 3;
  fn_82F63EC8(0xffffffff8313fe20);
  return;
}

