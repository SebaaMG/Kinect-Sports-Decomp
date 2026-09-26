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
extern int fn_8229F618();
extern int fn_822AA770();
extern int fn_82374C88();
extern unsigned int lbl_821CC160;


void fn_822E2D18(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = param_2;
  uVar4 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  if (param_2 < -1) {
    return;
  }
  if (0 < param_2) {
    if (param_2 < 3) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar5 = fn_822AA770(*(undefined4 *)(iVar2 + 0x1c));
      if ((iVar5 != 0) && (*(int *)(param_1 + 0x60) == 0)) {
        piVar3 = *(int **)(param_1 + 0x10);
        iVar5 = *(int *)(iVar2 + 0x28);
        iVar2 = *(int *)(iVar2 + 0x2c);
        iVar6 = (**(code **)(*piVar3 + 200))(piVar3);
        if ((iVar6 == 0) && (iVar2 == piVar3[0x33])) {
          piVar3[0x197] = iVar2;
          piVar3[0x198] = iVar5;
        }
        *(undefined4 *)(param_1 + 0x60) = 1;
      }
      fn_82374C88(*(undefined4 *)(param_1 + 0x10),1);
      return;
    }
    if (5 < param_2) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 200))();
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if ((*(int *)(iVar2 + 0x204) == 0) &&
     (*(undefined4 *)(iVar2 + 0x344) = 0,
     *(int *)(*(int *)(*(int *)(iVar2 + 0xd4) + 0xc) + 0x58) != 0)) {
    fn_8229F618();
  }
  return;
}

