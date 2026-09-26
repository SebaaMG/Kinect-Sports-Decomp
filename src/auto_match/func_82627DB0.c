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
extern int fn_82627E18();


void fn_82627DB0(int *param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0xa2) = *(undefined2 *)((int)param_1 + 10);
  *(short *)((int)param_1 + 10) = (short)(((param_2 - (int)param_1) + -0x2a0) / 0x1d0);
  if (*(int *)(param_2 + 0x30) != 0) {
    fn_82627E18(*(undefined4 *)(*param_1 + 0x1c));
  }
  *(short *)(param_1 + 1) = *(short *)(param_1 + 1) + -1;
  return;
}

