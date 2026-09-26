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
extern unsigned int *auStack_40;
extern int fn_82230300();
extern int fn_822402F8();
extern int fn_82240378();
extern int fn_8286B448();


void fn_8286B778(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_40 [64];
  
  fn_82240378(auStack_40,param_2 + -0x1c);
  fn_822402F8(param_2 + -0x1c,param_1);
  fn_8286B448(param_1,0,(((int)param_2 - (int)param_1) + -0x1c) / 0x1c,auStack_40);
  fn_82230300(auStack_40,1,0);
  return;
}

