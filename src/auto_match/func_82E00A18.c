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
extern int fn_82CE5088();


void fn_82E00A18(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined1 auStack_40 [40];
  
                    /* WARNING: Subroutine does not return */
  fn_82CE5088(auStack_40,
               ((param_3 & 0xff) + (param_3 & 0xff) * 2) * 0x20 +
               (ulonglong)*(uint *)(param_1 + 0x10) + 0x10,param_4);
}

