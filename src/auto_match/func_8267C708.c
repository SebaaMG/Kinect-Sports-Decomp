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
extern int fn_8267C268();
extern int fn_8267C418();
extern int fn_8267DE70();
extern unsigned int lbl_831E7E64;
extern unsigned int *lbl_831E7E68;


void fn_8267C708(void)

{
  if (lbl_831E7E68 != (int *)0x0) {
    fn_8267DE70();
    fn_8267C418();
    lbl_831E7E64 = 0;
    fn_8267C268();
    (**(code **)(*lbl_831E7E68 + 0x34))();
    lbl_831E7E68 = (int *)0x0;
  }
  return;
}

