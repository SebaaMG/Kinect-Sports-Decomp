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
extern int fn_82809868();
extern float lbl_82193E2C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82553008(undefined8 *param_1,float *param_2)

{
  if ((((*param_2 == lbl_821CA460) && (param_2[1] == lbl_821CA460)) && (param_2[2] == lbl_821CA460))
     && (param_2[3] == lbl_821CA460)) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 1;
    if ((*(float *)(param_1 + 9) != lbl_821CC160) && (*(int *)(param_1 + 10) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82809868((double)(*(float *)((int)param_1 + 0x4c) * lbl_82193E2C));
    }
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
  }
  return;
}

