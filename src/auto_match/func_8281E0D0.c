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
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_8280A668();
extern int fn_8281D9B0();


void fn_8281E0D0(undefined8 param_1,undefined8 param_2)

{
  float fStack_20;
  float fStack_1c;
  
  fn_8280A668(param_1,&fStack_1c,&fStack_20);
  fn_8281D9B0((double)fStack_1c,(double)fStack_20,param_1,param_2);
  return;
}

