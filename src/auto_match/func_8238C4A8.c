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
extern int fn_822ABA88();
extern int fn_822CFF20();
extern int fn_82359BB0();
extern int fn_82536590();
extern unsigned int lbl_821CC160;


void fn_8238C4A8(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piStack_30;
  int *piStack_2c;
  
  iVar1 = param_1[2];
  iVar4 = fn_822ABA88(*(undefined4 *)
                        ((*(int **)**(undefined4 **)(iVar1 + 8))[4] * 4 +
                        **(int **)**(undefined4 **)(iVar1 + 8)),0);
  *(undefined4 *)(iVar4 + 0x310) = 0;
  uVar5 = 0;
  piVar2 = *(int **)(**(int **)(iVar1 + 8) + 4);
  uVar6 = (ulonglong)*(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  if (uVar6 != 0) {
    do {
      piVar2 = *(int **)(**(int **)(iVar1 + 8) + 4);
      iVar4 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2));
      *(undefined4 *)(iVar4 + 0x2e4) = 0;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(iVar4 + 0x2e8) = 0;
      *(undefined4 *)(iVar4 + 0x2e0) = 0x18;
    } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
  }
  fn_822CFF20(&piStack_30,iVar1 + 0x184);
  uVar3 = lbl_821CC160;
  for (; piStack_30 != piStack_2c; piStack_30 = piStack_30 + 2) {
    *(undefined4 *)(*piStack_30 + 0x174) = 0;
    iVar4 = *piStack_30;
    *(undefined4 *)(iVar4 + 0xe0) = uVar3;
    *(undefined4 *)(iVar4 + 0xe4) = uVar3;
    *(undefined4 *)(iVar4 + 0xd4) = 1;
  }
  *(undefined4 *)(iVar1 + 0x344) = 0;
  if (*(int *)(*(int *)(*(int *)(iVar1 + 0xd4) + 0xc) + 0x58) != 0) {
    fn_8229F618();
  }
  if (param_1[0x12] != 0) {
    if (((*(int *)(iVar1 + 0xa0) == 0) || (*(int *)(*(int *)(iVar1 + 0xa0) + 0x40) != 1)) &&
       (*(int *)(iVar1 + 0xc48) != 0)) {
      fn_82536590(iVar1 + 0xc44,0);
      *(undefined4 *)(iVar1 + 0xc48) = 0;
    }
    param_1[0x12] = 0;
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  fn_82359BB0(&piStack_30);
  return;
}

