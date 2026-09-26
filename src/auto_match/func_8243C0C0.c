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
extern unsigned int lbl_821CC160;


void fn_8243C0C0(double param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = (ulonglong)(uint)param_2[6];
  if (*(int **)(param_2[0xf] + 8) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_2[0xf] + 8) + 0xc))();
  }
  param_2[0xe] = (int)(float)((double)(float)param_2[0xe] + param_1);
  iVar2 = (int)uVar1;
  if (iVar2 != param_2[5]) {
    (**(code **)(*param_2 + 8))(param_2,param_2[5],uVar1);
    param_2[6] = iVar2;
    param_2[5] = iVar2;
    param_2[0xe] = lbl_821CC160;
  }
  (**(code **)(*param_2 + 0xc))(param_1,param_2);
  return;
}

