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
extern unsigned int *auStack_74;
extern unsigned int *auStack_7c;
extern int fn_827F6950();
extern int fn_827F6960();
extern int fn_827F7210();


void fn_827FB4D0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [116];
  
  fn_827F7210(param_1);
  fn_827F6960(param_2,auStack_74);
                    /* WARNING: Subroutine does not return */
  fn_827F6950(param_1,auStack_7c);
}

