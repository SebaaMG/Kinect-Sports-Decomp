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
extern int fn_8248BAC0();
extern int fn_8265CA20();
extern unsigned int lbl_821BE9F4;


void fn_8248ABA0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[0x20];
  *param_1 = &lbl_821BE9F4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x10))(piVar4,1);
  }
  piVar4 = (int *)param_1[0x28];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4,1);
  }
  piVar4 = (int *)param_1[0x29];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4,1);
  }
  fn_8265CA20(param_1[0x21]);
  if (param_1[0x22] != 0) {
    fn_8265CA20();
  }
  piVar4 = param_1 + 0x24;
  uVar2 = 0;
  if ((int)(param_1[0x25] - param_1[0x24]) >> 2 != 0) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(iVar3 + *piVar4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1,1);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < (uint)(param_1[0x25] - *piVar4 >> 2));
  }
  if (*piVar4 != 0) {
    fn_8265CA20();
  }
  *piVar4 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  fn_8248BAC0(param_1);
  return;
}

