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


void fn_822C6398(double param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  ulonglong uVar4;
  int *piStack_30;
  int iStack_2c;
  
  piVar3 = (int *)(param_2 + 4);
  uVar4 = (ulonglong)*(uint *)(param_2 + 0x1c);
  piVar1 = *(int **)(*(int *)(param_2 + 0x40) + 8);
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0xc))();
  }
  *(float *)(param_2 + 0x3c) = (float)((double)*(float *)(param_2 + 0x3c) + param_1);
  if ((uVar4 & 0xffffffff) != (ulonglong)*(uint *)(param_2 + 0x18)) {
    (**(code **)(*piVar3 + 8))(piVar3,*(undefined4 *)(param_2 + 0x18),uVar4);
    *(int *)(param_2 + 0x1c) = (int)uVar4;
    *(int *)(param_2 + 0x18) = (int)uVar4;
    *(undefined4 *)(param_2 + 0x3c) = lbl_821CC160;
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    if ((*(int *)(param_2 + 0x1c) == *(int *)(param_2 + 0x18)) || (*(int *)(param_2 + 0x1c) == 0)) {
      fn_8247B210(&piStack_30,piVar3,*(undefined4 *)(param_2 + 0x18));
      pcVar2 = *(code **)(*piStack_30 + 4);
    }
    else {
      fn_8247B210(&piStack_30,piVar3,*(undefined4 *)(param_2 + 0x18));
      pcVar2 = *(code **)(*piStack_30 + 8);
    }
    (*pcVar2)(param_1);
    if (iStack_2c != 0) {
      fn_822315A0();
      return;
    }
  }
  (**(code **)(*piVar3 + 0xc))(param_1,piVar3);
  return;
}

