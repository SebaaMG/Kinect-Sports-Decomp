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
extern int fn_82270B70();
extern int fn_82279CA0();
extern int fn_82279D28();
extern int fn_82279E08();
extern int fn_822848B8();
extern int fn_82284B08();
extern int fn_8228D2D0();
extern int fn_8228E4B0();
extern int fn_8229E090();
extern int fn_8229E7D0();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82522588();
extern int fn_828ACCE8();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_83297810;


void fn_8228CD58(undefined8 param_1,int param_2)

{
  int iVar1;
  char cVar3;
  int *piVar2;
  ulonglong uVar4;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  fn_82279E08();
  uVar4 = (ulonglong)lbl_83297810;
  if (uVar4 == 0) {
    uVar4 = fn_82511928();
  }
  fn_825138E0(&iStack_40,uVar4,1);
  if (iStack_40 != 0) {
    fn_82522588(&iStack_38,&iStack_40);
    if (*(int **)(iStack_38 + 0x38) == (int *)0x0) {
      cVar3 = '\0';
    }
    else {
      iVar1 = (**(code **)(**(int **)(iStack_38 + 0x38) + 8))();
      cVar3 = (**(code **)(*(int *)(iVar1 + 0x198) + 0x3c))();
    }
    if ((cVar3 == '\0') && (*(int *)(param_2 + 0x18c) == 0)) {
      fn_82279D28(param_2,1,1);
      *(undefined4 *)(param_2 + 0x18c) = 1;
    }
    cVar3 = fn_828ACCE8(*(undefined4 *)(iStack_40 + 8));
    if (cVar3 == '\0') {
      if (*(int *)(param_2 + 0x18c) == 0) {
        fn_82279D28(param_2,1,1);
        *(undefined4 *)(param_2 + 0x18c) = 1;
      }
      **(undefined4 **)(param_2 + 0x170) = 0;
      *(undefined4 *)(param_2 + 0x16c) = 0;
    }
    cVar3 = fn_828ACCE8(*(undefined4 *)(iStack_40 + 8));
    if ((cVar3 == '\0') && (*(int *)(param_2 + 0x17c) != 0)) {
      fn_8229E090(*(int *)(param_2 + 0x17c),0,1);
      *(undefined4 *)(param_2 + 0x17c) = 0;
    }
    if (iStack_34 != 0) {
      fn_822315A0();
    }
  }
  piVar2 = (int *)fn_8229E7D0();
  if (*(int *)(param_2 + 400) == 0) {
    if (piVar2[1] == *piVar2) {
      fn_8228E4B0(param_2);
    }
  }
  else if (piVar2[1] != *piVar2) {
    *(undefined4 *)(param_2 + 400) = 0;
    fn_82279CA0(param_2,1);
    if (*(int *)(param_2 + 0x144) != 0) {
      fn_822848B8();
      *(undefined4 *)(param_2 + 0x144) = 0;
    }
  }
  if (*(int *)(param_2 + 0x144) != 0) {
    if ((*(int *)(param_2 + 0x168) != 0) &&
       (iVar1 = fn_82270B70(), *(int *)(iVar1 + 0xa0) == 2)) {
      fn_8228D2D0(param_2);
      *(undefined4 *)(param_2 + 0x168) = 0;
    }
    fn_82284B08(param_1,*(undefined4 *)(param_2 + 0x144));
  }
  fn_82279D28(param_2,1,*(int *)(param_2 + 0x18c) != 0);
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

