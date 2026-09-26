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
extern int fn_82230300();
extern int fn_82237B78();
extern unsigned int lbl_83283818;
extern unsigned int uRam8328381c;
extern unsigned int uRam83283820;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8313B120(void)

{
  fn_82230300(0xffffffff8328383c,1,0);
  fn_82237B78(0xffffffff83283818);
  lbl_83283818 = 0;
  uRam8328381c = 0;
  uRam83283820 = 0;
  return;
}

