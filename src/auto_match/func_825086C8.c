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
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A40;
extern unsigned int lbl_83265A48;
extern unsigned int lbl_832760AC;
extern unsigned int lbl_832767BC;


longlong fn_825086C8(void)

{
  return (((ulonglong)lbl_83265A48 + 7 & 0xffffffff) >> 3) +
         (((ulonglong)lbl_83265A40 + 7 & 0xffffffff) >> 3) +
         (((ulonglong)lbl_83265A38 + 7 & 0xffffffff) >> 3) +
         (((ulonglong)lbl_832760AC + 7 & 0xffffffff) >> 3) +
         ((ulonglong)lbl_832767BC + 7 & 0x3fffffff) * 4;
}

