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
extern int fn_82822510();
extern unsigned int uStack_10;
extern unsigned int uStack_c;


void fn_82827910(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  uStack_10 = param_2;
  uStack_c = param_3;
  fn_82822510(param_1 + 0x2fc,0xffffffff828278c0,&uStack_10);
  return;
}

