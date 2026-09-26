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
extern int fn_825BF428();
extern int fn_8265CA20();
extern unsigned int lbl_83297A8C;
extern unsigned int lbl_83297A90;
extern unsigned int lbl_83297A94;
extern unsigned int lbl_83297A9C;
extern unsigned int lbl_83297AA0;
extern unsigned int lbl_83297AA4;


void fn_8313F650(void)

{
  if (lbl_83297A9C != 0) {
    fn_8265CA20();
  }
  lbl_83297A9C = 0;
  lbl_83297AA0 = 0;
  lbl_83297AA4 = 0;
  if (lbl_83297A8C != 0) {
    fn_8265CA20();
  }
  lbl_83297A8C = 0;
  lbl_83297A90 = 0;
  lbl_83297A94 = 0;
  fn_825BF428(0xffffffff83297a58);
  return;
}

