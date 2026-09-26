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
extern int fn_82A1E968();
extern int fn_82F6B030();
extern unsigned int lbl_832767D8;
extern unsigned int lbl_832767E0;


double fn_82522FF0(void)

{
  double dVar1;
  longlong alStack_20 [2];
  
  fn_82A1E968(alStack_20);
  dVar1 = (double)fn_82F6B030(alStack_20[0] - lbl_832767D8);
  return (double)(float)(dVar1 / (double)lbl_832767E0);
}

