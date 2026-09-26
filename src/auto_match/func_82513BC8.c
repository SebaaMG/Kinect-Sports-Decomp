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
extern int fn_82248B90();
extern int fn_8228E578();
extern int fn_8265CA20();
extern int fn_828ACC40();
extern int fn_828ACCE8();
extern int fn_828AE818();
extern int fn_828C1DE0();
extern unsigned int iStack_34;


void fn_82513BC8(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int *apiStack_40 [2];
  int *piStack_38;
  int iStack_34;
  
  piVar1 = *(int **)(param_2 + 8);
  piStack_38 = (int *)*piVar1;
  apiStack_40[0] = piStack_38;
  while (apiStack_40[0] != piVar1) {
    fn_8228E578(&piStack_38,apiStack_40);
    (**(code **)(*piStack_38 + 0xc))(param_1);
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    fn_82248B90(apiStack_40);
  }
  piVar1 = *(int **)(param_2 + 0x24);
  piVar4 = (int *)*piVar1;
  while (piVar4 != piVar1) {
    iVar2 = piVar4[2];
    if ((*(int *)(iVar2 + 0xa0) != 0) && (cVar5 = fn_828ACCE8(iVar2), cVar5 != '\0')) {
      fn_828AE818(iVar2,0);
    }
    if ((*(int *)(iVar2 + 0xa0) != 0) && (cVar5 = fn_828ACC40(iVar2), cVar5 != '\0')) {
      fn_828C1DE0(iVar2);
    }
    if (*(int *)(iVar2 + 0xa0) == 0) {
      piVar3 = (int *)*piVar4;
      if (piVar4 != *(int **)(param_2 + 0x24)) {
        *(int **)piVar4[1] = piVar3;
        *(int *)(*piVar4 + 4) = piVar4[1];
        if (piVar4[3] != 0) {
          fn_822315A0();
        }
        fn_8265CA20(piVar4);
        *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
      }
    }
    else {
      piVar3 = (int *)*piVar4;
    }
    piVar4 = piVar3;
    piVar1 = *(int **)(param_2 + 0x24);
  }
  return;
}

