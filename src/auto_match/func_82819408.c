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
extern int fn_82822BE0();
extern unsigned int lbl_8320A778;


void fn_82819408(int param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = lbl_8320A778;
  param_1 = param_2 * 0x40 + param_1;
  piVar4 = (int *)(param_1 + 0x10);
  piVar6 = piVar4;
  if ((*(int **)(param_1 + 0x14) != lbl_8320A778) &&
     (piVar5 = *(int **)(param_1 + 0x18), piVar5 != lbl_8320A778)) {
    piVar1 = (int *)piVar5[1];
    piVar6 = piVar5;
    while (piVar5 = piVar1, piVar5 != lbl_8320A778) {
      piVar6 = piVar5;
      piVar1 = (int *)piVar5[1];
    }
  }
  piVar5 = (int *)piVar6[1];
  if (piVar5 == lbl_8320A778) {
    piVar5 = (int *)piVar6[2];
  }
  *piVar5 = *piVar6;
  piVar1 = (int *)*piVar6;
  if (piVar1 != piVar3) {
    if (piVar6 == (int *)piVar1[1]) {
      piVar1[1] = (int)piVar5;
    }
    else {
      piVar1[2] = (int)piVar5;
    }
  }
  if (piVar6 != piVar4) {
    *piVar6 = *piVar4;
    iVar2 = *piVar4;
    if (piVar4 == *(int **)(iVar2 + 4)) {
      *(int **)(iVar2 + 4) = piVar6;
    }
    else if (piVar4 == *(int **)(iVar2 + 8)) {
      *(int **)(iVar2 + 8) = piVar6;
    }
    piVar6[2] = *(int *)(param_1 + 0x18);
    **(undefined4 **)(param_1 + 0x18) = piVar6;
    piVar6[1] = *(int *)(param_1 + 0x14);
    **(undefined4 **)(param_1 + 0x14) = piVar6;
  }
  iVar2 = piVar6[3];
  piVar6[3] = *(int *)(param_1 + 0x1c);
  if (iVar2 == 1) {
    fn_82822BE0();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *piVar4 = 0;
  return;
}

