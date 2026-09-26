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
extern unsigned int *auStack_58;
extern int fn_82230040();
extern int fn_82569B10();
extern int fn_825E7BF0();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_5c;


void fn_8256AF38(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [88];
  
  iVar1 = fn_82569B10();
  *(undefined1 *)(iVar1 + 0x40) = 0;
  iVar1 = fn_82569B10();
  iVar1 = *(int *)(iVar1 + 100);
  if (*(int *)(iVar1 + 0xc) < 1) {
    piVar5 = (int *)0x0;
  }
  else {
    iVar4 = *(int *)(iVar1 + 0xc) + -1;
    *(int *)(iVar1 + 0xc) = iVar4;
    piVar5 = *(int **)(iVar4 * 4 + *(int *)(iVar1 + 0x10));
  }
  iVar2 = fn_82569B10();
  iVar1 = **(int **)(iVar2 + 0x14);
  iVar4 = *(int *)(iVar1 + 4);
  piVar3 = (int *)fn_8265C9E0(0x10);
  if (piVar3 == (int *)0x0) {
    uStack_5c = 0;
    ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_60);
  }
  *piVar3 = iVar1;
  piVar3[1] = iVar4;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = param_1;
    piVar3[3] = (int)piVar5;
  }
  if (*(int *)(iVar2 + 0x18) == 0x1ffffffe) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff8219852c);
  }
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
  *(int **)(iVar1 + 4) = piVar3;
  *(int **)piVar3[1] = piVar3;
  fn_825E7BF0(auStack_58,iVar2 + 0x10,(ulonglong)**(uint **)(iVar2 + 0x14) + 8);
  *(int **)(param_3 + 0x14) = piVar5;
  piVar5[7] = -1;
  piVar5[8] = -1;
  piVar5[1] = 1;
  piVar5[3] = 0;
  piVar5[2] = 0;
  piVar5[4] = 0;
  piVar5[9] = 0;
  *piVar5 = param_1;
  *(byte *)(piVar5 + 10) = *(byte *)(piVar5 + 10) & 7;
  piVar5[6] = *param_2;
  piVar5[5] = 0;
  return;
}

