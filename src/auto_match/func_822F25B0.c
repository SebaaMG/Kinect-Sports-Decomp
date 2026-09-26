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
extern int fn_822AF138();
extern int fn_822C16B8();
extern int fn_823B3908();
extern int fn_8265C9E0();
extern int fn_8265CA20();


void fn_822F25B0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar5;
  undefined8 uVar3;
  int iVar6;
  ulonglong uVar4;
  ulonglong uVar7;
  
  iVar5 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(param_1 + 0x24);
  if (iVar5 == 7) {
LAB_822f25e4:
    iVar6 = piVar1[1];
LAB_822f25e8:
    if (iVar6 == 0) {
      return;
    }
  }
  else {
    if (iVar5 == 8) {
      iVar6 = *piVar1;
      goto LAB_822f25e8;
    }
    if (*piVar1 == 0) goto LAB_822f25e4;
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 2) {
    return;
  }
  if ((iVar5 == 8) || (iVar5 == 7)) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x110);
  }
  else {
    iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x2e0) + 0x18))();
    piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 0x10) + 8) + iVar5 * 4);
    uVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x2e0) + 0x1c))();
    iVar5 = *(int *)(param_1 + 0xc);
    iVar6 = *(int *)(piVar1[4] * 4 + *piVar1);
    if (*(int *)(iVar5 + 0x2c) != *(int *)(iVar6 + 0x10)) {
      uVar2 = *(undefined4 *)(iVar5 + 0x110);
      uVar3 = 7;
      goto LAB_822f2714;
    }
    iVar6 = fn_822ABA88(iVar6,uVar3);
    if ((*(int *)(iVar5 + 0x28) != *(int *)(iVar6 + 0x28)) && (*(int *)(iVar5 + 0x24) == 0)) {
      uVar4 = fn_8265C9E0(0x30);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_823B3908(uVar4,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1e4));
      }
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x24);
      if ((uVar4 & 0xffffffff) == uVar7) {
        return;
      }
      if (uVar7 != 0) {
        fn_822C16B8(uVar7 + 8);
        fn_8265CA20(uVar7);
      }
      *(int *)(param_1 + 0x24) = (int)uVar4;
      return;
    }
    uVar2 = *(undefined4 *)(iVar5 + 0x110);
  }
  uVar3 = 9;
LAB_822f2714:
                    /* WARNING: Subroutine does not return */
  fn_822AF138(uVar2,uVar3);
}

