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
extern unsigned int lbl_831F1308;
extern unsigned int lbl_831F1310;
extern unsigned int lbl_831F1318;
extern unsigned int lbl_831F1320;
extern unsigned int lbl_831F1328;
extern unsigned int lbl_831F1330;
extern unsigned int lbl_831F1338;
extern unsigned int lbl_831F1340;


void fn_83127E90(void)

{
  lbl_831F1310 = fn_826BC950();
  lbl_831F1308 = 3;
  lbl_831F1320 = fn_826BC950();
  lbl_831F1318 = 3;
  lbl_831F1330 = fn_826BC950();
  lbl_831F1328 = 3;
  lbl_831F1340 = fn_826BC950();
  lbl_831F1338 = 3;
  fn_82F63EC8(0xffffffff8313fec0);
  return;
}

