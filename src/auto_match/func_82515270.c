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
extern int fn_82F63EC8();
extern unsigned int lbl_821B9BC8;
extern unsigned int lbl_83297AE0;
extern unsigned int lbl_83297AF0;
extern unsigned int lbl_83297B00;
extern unsigned int uRam83297af4;
extern unsigned int uRam83297af8;
extern unsigned int uRam83297afc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82515270(void)

{
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  if ((lbl_83297B00 & 1) == 0) {
    lbl_83297B00 = lbl_83297B00 | 1;
    lbl_83297AE0 = &lbl_821B9BC8;
    fn_82F63EC8(0xffffffff8313f178);
  }
  lbl_83297AF0 = in_register_000104d0;
  uRam83297af4 = in_register_000104d4;
  uRam83297af8 = in_register_000104d8;
  uRam83297afc = in_vr77;
  return &lbl_83297AE0;
}

