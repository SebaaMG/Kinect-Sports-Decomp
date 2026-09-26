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
extern int fn_82A1EFC0();
extern unsigned int uRam83290898;
extern unsigned int uRam8329089c;
extern unsigned int uRam832908a0;
extern unsigned int uRam83290c90;
extern unsigned int uRam83290cb4;


void fn_8311CD18(void)

{
  uRam8329089c = 0;
  uRam832908a0 = 0;
  uRam83290898 = 4;
  uRam83290c90 = 0;
  fn_82230110(0xffffffff83290c98,0xffffffff82196582);
  uRam83290cb4 = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(0xffffffff832908a4,0,1000);
}

