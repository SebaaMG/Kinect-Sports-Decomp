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
extern int fn_824C0998();
extern unsigned int iStack_2c;
extern unsigned int lbl_821CC160;


void fn_824C0640(int *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  double dVar4;
  int *piStack_30;
  int iStack_2c;
  
  uVar2 = (ulonglong)(uint)param_1[6];
  if (*(int **)(param_1[0xf] + 8) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(param_1[0xf] + 8) + 0xc))();
  }
  param_1[0xe] = param_1[0xe];
  iVar3 = (int)uVar2;
  dVar4 = (double)lbl_821CC160;
  if (iVar3 != param_1[5]) {
    (**(code **)(*param_1 + 8))(param_1,param_1[5],uVar2);
    param_1[0xe] = (int)(float)dVar4;
    param_1[6] = iVar3;
    param_1[5] = iVar3;
  }
  if (param_1[5] != 0) {
    if ((param_1[6] == param_1[5]) || (param_1[6] == 0)) {
      fn_824C0998(&piStack_30,param_1);
      pcVar1 = *(code **)(*piStack_30 + 4);
    }
    else {
      fn_824C0998(&piStack_30,param_1);
      pcVar1 = *(code **)(*piStack_30 + 8);
    }
    (*pcVar1)(dVar4);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  (**(code **)(*param_1 + 0xc))(dVar4,param_1);
  return;
}

