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
extern unsigned int *auStack_50;
extern int fn_8267BE38();
extern int fn_8275F338();
extern int fn_82762930();
extern unsigned int uStack_1b;
extern unsigned int uStack_34;


void fn_82758CD0(longlong param_1)

{
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  undefined1 uStack_1b;
  
  fn_82762930(auStack_50);
  uStack_1b = 1;
  fn_8275F338(auStack_50,param_1 + 0x28,param_1 + 0x34);
  fn_8267BE38(uStack_34);
  return;
}

