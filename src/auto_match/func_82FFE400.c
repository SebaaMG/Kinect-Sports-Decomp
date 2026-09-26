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


void fn_82FFE400(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[1];
  for (piVar2 = (int *)*param_1; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 3) {
  }
  if (piVar2 != piVar1) {
    if (1 < (uint)(((int)piVar1 - *param_1) / 0xc)) {
      *piVar2 = piVar1[-3];
      piVar2[1] = piVar1[-2];
      piVar2[2] = piVar1[-1];
    }
    param_1[1] = param_1[1] + -0xc;
    return;
  }
  return;
}

