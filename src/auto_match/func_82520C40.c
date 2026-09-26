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
extern int fn_82520C90();
extern int fn_82F63EC8();
extern unsigned int lbl_83298E80;


undefined8 fn_82520C40(void)

{
  if ((lbl_83298E80 & 1) == 0) {
    lbl_83298E80 = lbl_83298E80 | 1;
    fn_82520C90();
    fn_82F63EC8(0xffffffff8313f4e8);
  }
  return 0xffffffff83298e68;
}

