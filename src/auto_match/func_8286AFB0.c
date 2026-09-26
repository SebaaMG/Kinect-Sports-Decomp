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
extern int fn_82230110();
extern int fn_82F63EC8();
extern unsigned int lbl_83211860;


undefined8 fn_8286AFB0(void)

{
  if ((lbl_83211860 & 1) == 0) {
    lbl_83211860 = lbl_83211860 | 1;
    fn_82230110(0xffffffff83211844,0xffffffff820212fc);
    fn_82F63EC8(0xffffffff83140180);
  }
  return 0xffffffff83211844;
}

