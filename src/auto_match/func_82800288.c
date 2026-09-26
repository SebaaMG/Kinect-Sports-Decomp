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
extern unsigned int *auStack_68;
extern int fn_827F6950();
extern int fn_82800E88();
extern unsigned int uStack_60;
extern unsigned int uStack_6c;


void fn_82800288(undefined8 param_1)

{
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  
  uStack_60 = 0;
  fn_82800E88(param_1,&uStack_6c);
                    /* WARNING: Subroutine does not return */
  fn_827F6950(uStack_6c,auStack_68);
}

