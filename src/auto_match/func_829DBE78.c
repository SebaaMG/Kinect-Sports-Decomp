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
extern int fn_8265C990();
extern unsigned int lbl_83217B64;
extern unsigned int lbl_83217B68;
extern unsigned int lbl_83217B6C;
extern unsigned int lbl_83217B70;


void fn_829DBE78(void)

{
  if (lbl_83217B64 != 0) {
    fn_8265C990(lbl_83217B64,0x209d0000);
    lbl_83217B64 = 0;
  }
  if (lbl_83217B68 != 0) {
    fn_8265C990(lbl_83217B68,0x209d0000);
    lbl_83217B68 = 0;
  }
  if (lbl_83217B6C != 0) {
    fn_8265C990(lbl_83217B6C,0x209d0000);
    lbl_83217B6C = 0;
  }
  if (lbl_83217B70 != 0) {
    fn_8265C990(lbl_83217B70,0x209d0000);
    lbl_83217B70 = 0;
  }
  return;
}

