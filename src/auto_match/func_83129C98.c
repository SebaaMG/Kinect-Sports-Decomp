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
extern int fn_82A1F160();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_83218D10;
extern unsigned int lbl_83218D18;
extern unsigned int lbl_83218D20;
extern unsigned int lbl_83218D28;
extern unsigned int lbl_83218D30;
extern unsigned int lbl_83218D38;
extern unsigned int lbl_83218D40;
extern unsigned int lbl_83218D48;
extern unsigned int lbl_83218D4C;


void fn_83129C98(void)

{
  longlong alStack_10 [2];
  
  fn_82A1F160(alStack_10);
  lbl_83218D30 = lbl_82005710;
  lbl_83218D38 = lbl_82005710;
  lbl_83218D40 = lbl_82005710;
  lbl_83218D10 = 0;
  lbl_83218D20 = 0;
  lbl_83218D28 = 0;
  lbl_83218D48 = 0;
  lbl_83218D4C = 0;
  lbl_83218D18 = lbl_82005758 / (double)alStack_10[0];
  return;
}

