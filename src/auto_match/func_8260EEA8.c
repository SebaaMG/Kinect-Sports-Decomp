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
extern int fn_82553D80();


void fn_8260EEA8(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  if (param_5 == 0) {
    fn_82553D80((double)*(float *)(param_3 + 0x2c),(double)*(float *)(param_3 + 0x3c),
                      (double)*(float *)(param_3 + 0x40),(double)*(float *)(param_3 + 0x44),
                      (double)*(float *)(param_3 + 0x48),(double)*(float *)(param_3 + 0x4c),
                      (double)*(float *)(param_3 + 0x50),(double)*(float *)(param_3 + 0x54),
                      (double)*(float *)(param_3 + 0x58),(double)*(float *)(param_3 + 0x5c),
                      (double)*(float *)(param_3 + 0x60),(double)*(float *)(param_3 + 100),
                      (double)*(float *)(param_3 + 0x68),
                      *(undefined4 *)(**(int **)(param_1 + 0x60) + 0x1a8),
                      *(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),param_3 + 0x20
                      ,0,*(undefined4 *)(param_3 + 0x18),**(int **)(param_1 + 0x60),
                      *(undefined4 *)(param_3 + 0x1c));
  }
  else if ((param_5 == 1) || (param_5 == 3)) {
    *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x60) + 0x1a8) + 0x3f0) = 0;
  }
  return;
}

