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
extern int fn_8267B890();
extern int fn_826D6470();


void fn_826D69D0(int *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_2 < 0xffb) {
    if ((uint)param_1[1] < param_2) {
      piVar1 = (int *)fn_8267B890(param_1[3],0x1ff8,0);
      if (piVar1 == (int *)0x0) {
        return;
      }
      *piVar1 = param_1[2];
      param_1[2] = (int)piVar1;
      *param_1 = (int)(piVar1 + 1);
      param_1[1] = 0x1ff4;
    }
    *param_1 = *param_1 + param_2;
    param_1[1] = param_1[1] - param_2;
  }
  else {
    fn_826D6470();
  }
  return;
}

