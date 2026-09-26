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
extern unsigned int *auStack_38;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int fStack_4c;
extern int fn_82863D58();
extern int fn_82863DE0();
extern int fn_82864158();


void fn_828641C8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [4];
  float fStack_4c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [56];
  
  fn_82863D58(param_1,param_2,auStack_38,&fStack_4c,auStack_48,auStack_50);
  fn_82863DE0((double)fStack_4c,param_2,auStack_38);
  fn_82864158(param_1,param_2,auStack_48,auStack_50[0],param_3);
  return;
}

