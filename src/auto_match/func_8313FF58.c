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
extern int fn_8267C488();
extern int fn_82687270();
extern unsigned int lbl_8200C93C;
extern unsigned int lbl_831F134C;
extern unsigned int lbl_831F1354;
extern unsigned int lbl_831F1358;


void fn_8313FF58(void)

{
  lbl_831F134C = &lbl_8200C93C;
  if ((lbl_831F1354 == 0) && (lbl_831F1358 != 0)) {
    fn_82687270();
  }
  fn_8267C488(0xffffffff831f134c);
  return;
}

