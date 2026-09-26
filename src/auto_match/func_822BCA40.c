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
extern unsigned int lbl_821CA460;


undefined8 fn_822BCA40(int param_1)

{
  if ((((*(int *)(param_1 + 0x1a0) != 0) || (*(int *)(param_1 + 0x1e0) != 0)) &&
      (*(int **)(param_1 + 0x238) != (int *)0x0)) &&
     (((-(*(int *)(**(int **)(param_1 + 0x238) + 0xc4c) != 0) & 3U) < 4 ||
      (lbl_821CA460 < *(float *)(param_1 + 0x3e4))))) {
    return 1;
  }
  return 0;
}

