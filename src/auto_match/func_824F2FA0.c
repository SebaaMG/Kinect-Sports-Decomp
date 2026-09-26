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
extern int fn_824F1AC8();
extern int fn_824F46D8();
extern unsigned int lbl_821CA460;


void fn_824F2FA0(double param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_2 + 0x10); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      fn_824F1AC8(param_1);
    }
  }
  if (lbl_821CA460 < (float)(param_1 - (double)*(float *)(param_2 + 0x78))) {
    fn_824F46D8(param_2);
    *(float *)(param_2 + 0x78) = (float)param_1;
  }
  return;
}

