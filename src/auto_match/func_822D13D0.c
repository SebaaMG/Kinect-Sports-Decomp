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
extern int fn_822ABA88();
extern unsigned int lbl_821CC160;


undefined8 fn_822D13D0(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  double extraout_f1;
  
  iVar4 = *(int *)(param_1 + 0x14);
  piVar5 = *(int **)(**(int **)(*(int *)(param_1 + 0x10) + 8) + (1 - *(int *)(iVar4 + 0x2c)) * 4);
  uVar1 = *(undefined4 *)(piVar5[4] * 4 + *piVar5);
  if (*(int *)(*(int *)(piVar5[4] * 4 + *piVar5) + 8) == 1) {
    uVar2 = fn_822ABA88(uVar1,0);
  }
  else {
    uVar2 = fn_822ABA88(uVar1,0);
    uVar3 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),1);
    uVar6 = uVar3;
    if (*(int *)((int)uVar2 + 0x2a4) == 0) {
      uVar6 = uVar2;
      uVar2 = uVar3;
    }
    if (extraout_f1 == (double)lbl_821CC160) {
      if (*(int *)(iVar4 + 0x2a4) != 0) {
        uVar2 = uVar6;
      }
    }
    else if (extraout_f1 < (double)lbl_821CC160) {
      return uVar6;
    }
  }
  return uVar2;
}

