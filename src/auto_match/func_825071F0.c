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
extern int fn_82500F88();
extern int fn_825071D8();
extern int fn_82507278();
extern int fn_82507370();
extern int fn_825073F8();
extern int fn_82592340();
extern unsigned int lbl_8329E694;


void fn_825071F0(void)

{
  undefined4 *puVar1;
  
  if (lbl_8329E694 == '\0') {
    puVar1 = (undefined4 *)fn_82592340(0xffffffff8329e660);
    *puVar1 = fn_825071D8;
    puVar1[1] = fn_82507278;
    puVar1[2] = fn_82507370;
    puVar1[3] = fn_82500F88;
    puVar1[5] = fn_825073F8;
    lbl_8329E694 = '\x01';
  }
  return;
}

