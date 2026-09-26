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
extern int fn_822C66C0();
extern int fn_8235A3B8();
extern int fn_82F63EC8();
extern unsigned int lbl_83285C60;
extern unsigned int lbl_83285C64;
extern unsigned int lbl_83298EF8;
extern unsigned int lbl_83298F5C;


void fn_8310E168(void)

{
  if ((lbl_83298F5C & 1) == 0) {
    lbl_83298F5C = lbl_83298F5C | 1;
    fn_8235A3B8();
    fn_82F63EC8(0xffffffff8313caf8);
  }
  lbl_83285C60 = &lbl_83298EF8;
  lbl_83285C64 = "SportsmanMindStateMan";
  fn_822C66C0(0xffffffff83298ef8,0xffffffff821acf8c,0xffffffff822c6530);
  fn_82F63EC8(0xffffffff8313bf40);
  return;
}

