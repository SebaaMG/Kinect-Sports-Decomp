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
extern int fn_822315A0();
extern int fn_8247B210();
extern unsigned int iStack_2c;
extern unsigned int lbl_821CC160;


void fn_8247B0B8(double param_1,int *param_2)

{
  ulonglong uVar1;
  int *piStack_30;
  int iStack_2c;
  
  uVar1 = (ulonglong)(uint)param_2[6];
  if (*(int **)(param_2[0xf] + 8) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_2[0xf] + 8) + 0xc))();
  }
  param_2[0xe] = (int)(float)((double)(float)param_2[0xe] + param_1);
  if ((uVar1 & 0xffffffff) != (ulonglong)(uint)param_2[5]) {
    (**(code **)(*param_2 + 8))(param_2,param_2[5],uVar1);
    param_2[6] = (int)uVar1;
    param_2[5] = (int)uVar1;
    param_2[0xe] = lbl_821CC160;
  }
  if (param_2[5] != 0) {
    if ((param_2[6] == param_2[5]) || (param_2[6] == 0)) {
      fn_8247B210(&piStack_30,param_2,param_2[5]);
      (**(code **)(*piStack_30 + 4))(param_1);
    }
    else {
      fn_8247B210(&piStack_30,param_2,param_2[5]);
      (**(code **)(*piStack_30 + 8))(param_1);
    }
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  (**(code **)(*param_2 + 0xc))(param_1,param_2);
  return;
}

