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
extern int fn_822602C0();
extern int fn_822ABA88();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C996C;


void fn_82399218(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar8;
  int iVar9;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  fn_82F6A548();
  iVar8 = fn_82F6DA24();
  iVar9 = (**(code **)(**(int **)(iVar8 + 0x2e0) + 0x7c))();
  piVar4 = *(int **)(iVar9 * 4 + **(int **)(iVar8 + 8));
  uVar6 = (**(code **)(**(int **)(iVar8 + 0x2e0) + 0x80))(*(int **)(iVar8 + 0x2e0));
  iVar9 = fn_822ABA88(*(undefined4 *)(piVar4[4] * 4 + *piVar4),uVar6);
  uVar5 = lbl_831C996C;
  dVar13 = (double)*(float *)(param_2 + 0x268);
  uVar6 = 0xffffffff8219622c;
  if (dVar13 <= (double)lbl_821CC160) {
    if (dVar13 < (double)lbl_821CC160) {
      uVar6 = 0xffffffff821b4ad0;
    }
  }
  else {
    uVar6 = 0xffffffff821a6998;
  }
  uVar1 = *(undefined4 *)(iVar9 + 0x214);
  uVar2 = *(undefined4 *)(iVar9 + 0x244);
  piVar4 = (int *)((int *)**(int **)(iVar8 + 8))[1];
  dVar12 = ABS((double)*(float *)(param_2 + 0x26c));
  piVar3 = *(int **)**(int **)(iVar8 + 8);
  dVar11 = (double)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
  dVar10 = (double)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  uVar7 = (**(code **)(**(int **)(iVar8 + 0x2e0) + 0x3c))();
  fn_822602C0(dVar12,dVar13,uVar5,(int)dVar10,(int)dVar11,uVar7,uVar6,uVar1,uVar2);
  fn_82F6DCBC();
  fn_82F6A594();
  return;
}

