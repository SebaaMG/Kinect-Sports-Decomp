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


void fn_82F0DB60(int param_1,int param_2)

{
  if (3 < param_2) {
    param_2 = 3;
  }
  if (*(int *)(param_1 + 0x6de8) == 0) {
    param_2 = param_2 * 0x1c;
    *(undefined4 *)(param_1 + 0x6e10) = *(undefined4 *)(param_2 + -0x7ce47648);
    *(undefined4 *)(param_1 + 0x6e14) = *(undefined4 *)(param_2 + -0x7ce47644);
    *(undefined4 *)(param_1 + 0x6e18) = *(undefined4 *)(param_2 + -0x7ce47640);
    *(undefined4 *)(param_1 + 0x6e1c) = *(undefined4 *)(param_2 + -0x7ce4763c);
    *(undefined4 *)(param_1 + 0x6e20) = *(undefined4 *)(param_2 + -0x7ce47638);
    *(undefined4 *)(param_1 + 0x6e24) = *(undefined4 *)(param_2 + -0x7ce47634);
    *(undefined4 *)(param_1 + 0x6e28) = *(undefined4 *)(param_2 + -0x7ce47630);
    return;
  }
  param_2 = param_2 * 0x1c;
  *(undefined4 *)(param_1 + 0x6e10) = *(undefined4 *)(param_2 + -0x7ce475d8);
  *(undefined4 *)(param_1 + 0x6e14) = *(undefined4 *)(param_2 + -0x7ce475d4);
  *(undefined4 *)(param_1 + 0x6e18) = *(undefined4 *)(param_2 + -0x7ce475d0);
  *(undefined4 *)(param_1 + 0x6e1c) = *(undefined4 *)(param_2 + -0x7ce475cc);
  *(undefined4 *)(param_1 + 0x6e20) = *(undefined4 *)(param_2 + -0x7ce475c8);
  *(undefined4 *)(param_1 + 0x6e24) = *(undefined4 *)(param_2 + -0x7ce475c4);
  *(undefined4 *)(param_1 + 0x6e28) = *(undefined4 *)(param_2 + -0x7ce475c0);
  return;
}

