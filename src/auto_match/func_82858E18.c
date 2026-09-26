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
extern unsigned int *auStack_20;
extern int fn_8263CBB0();
extern int (*lbl_83211310)();


void fn_82858E18(undefined4 *param_1,int param_2)

{
  undefined4 auStack_20 [2];
  
  (*lbl_83211310)(*param_1,*(undefined2 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),auStack_20);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(param_1[1],(ulonglong)*(ushort *)(param_2 + 4),auStack_20[0],
                    0x8000000000000000 >> ((ulonglong)*(ushort *)(param_2 + 4) + 0x20 & 0x7f));
}

