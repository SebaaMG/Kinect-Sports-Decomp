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
extern unsigned int *auStack_170;
extern unsigned int *auStack_190;
extern int fn_825200F0();
extern int fn_82A1EFC0();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_8251F8E0(undefined8 param_1)

{
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [308];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  fn_825200F0(auStack_190,param_1);
  uStack_3c = 0;
  uStack_38 = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_170,0,0x148);
}

