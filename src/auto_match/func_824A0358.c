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
extern int fn_8225F160();
extern int fn_8225F3C0();
extern unsigned int lbl_821CA460;


void fn_824A0358(int param_1,int *param_2,int param_3)

{
  if (*param_2 == 0) {
    fn_8225F160();
    fn_8225F3C0();
    if (lbl_821CA460 <= (float)param_2[param_3 + 3]) {
      fn_8225F160();
      fn_8225F3C0();
      if ((float)param_2[param_3 + 3] < *(float *)(param_1 + 0x80) + lbl_821CA460) {
        *param_2 = param_3;
      }
    }
  }
  return;
}

