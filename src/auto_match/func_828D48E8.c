extern unsigned int **ppuRam83214424;
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
extern int atexit();
extern unsigned int lbl_82024D24;
extern unsigned int uRam83214428;


undefined8 fn_828D48E8(void)

{
  if ((uRam83214428 & 1) == 0) {
    uRam83214428 = uRam83214428 | 1;
    ppuRam83214424 = &lbl_82024D24;
    atexit(0xffffffff83141448);
    return 0xffffffff83214424;
  }
  return 0xffffffff83214424;
}
