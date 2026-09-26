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
extern int fn_82539560();
extern unsigned int lbl_82191F78;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8261A0D0(int param_1,int param_2)

{
                    /* WARNING: Subroutine does not return */
  fn_82539560((double)(float)((double)(longlong)((param_1 - param_2) + -1) /
                              (double)(longlong)(param_1 + -1)),(double)lbl_82191F78,
               (double)lbl_821CA460,(double)lbl_821CA460,(double)lbl_821CC160);
}

