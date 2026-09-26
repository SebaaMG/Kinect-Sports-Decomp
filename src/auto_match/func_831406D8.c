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
extern unsigned int *auStack_20;
extern int fn_8265CA20();
extern int fn_8287E918();
extern int fn_8287FA98();
extern unsigned int *lbl_83211994;


void fn_831406D8(void)

{
  undefined1 auStack_20 [16];
  
  fn_8287FA98(auStack_20,0xffffffff83211990,*lbl_83211994);
  fn_8265CA20(lbl_83211994);
  fn_8287E918(0xffffffff832118a0);
  return;
}

