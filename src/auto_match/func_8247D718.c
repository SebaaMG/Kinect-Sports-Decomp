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
extern int fn_825521F0();
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_10;


void fn_8247D718(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  
  uStack_10 = 0;
  fn_825521F0((double)lbl_821CC160,(double)lbl_82191FB0,param_1,param_2,auStack_20);
  return;
}

