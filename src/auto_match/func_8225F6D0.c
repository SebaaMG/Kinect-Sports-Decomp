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
extern unsigned int lbl_832660F8;
extern unsigned int lbl_832660FC;
extern unsigned int lbl_832760AA;
extern unsigned int lbl_832760AB;
extern unsigned int lbl_832760B8;
extern unsigned int lbl_832760BC;


void fn_8225F6D0(void)

{
  if (lbl_832760AB != '\0') {
    return;
  }
  if (lbl_832760AA != '\0') {
    lbl_832760AB = 1;
    lbl_832760B8 = lbl_832660F8 - lbl_832760B8;
    lbl_832760BC = lbl_832660FC - lbl_832760BC;
    return;
  }
  lbl_832760B8 = 0;
  lbl_832760BC = 0;
  return;
}

