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
extern unsigned int lbl_83213EC4;
extern unsigned int lbl_83213EC8;


undefined8 fn_8288A558(void)

{
  if ((lbl_83213EC8 & 1) == 0) {
    lbl_83213EC8 = lbl_83213EC8 | 1;
    lbl_83213EC4 = &lbl_821B9BC8;
    fn_82F63EC8(0xffffffff83140930);
    return 0xffffffff83213ec4;
  }
  return 0xffffffff83213ec4;
}

