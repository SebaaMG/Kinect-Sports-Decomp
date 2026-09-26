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
extern int fn_8229ACA0();
extern int fn_8229AD30();
extern int fn_8229AD90();
extern int fn_8229F688();
extern int fn_822ABA88();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_8239C4D8();
extern int fn_82F64988();


void fn_82396088(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  fn_8229ACA0(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd0));
  piVar1 = *(int **)(param_1 + 8);
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar8 = 0;
    if ((piVar1[1] - *piVar1 & 0xfffffffcU) != 0) {
      iVar7 = 0;
      do {
        piVar1 = *(int **)(**(int **)(param_1 + 8) + iVar7);
        uVar3 = *(uint *)(piVar1[4] * 4 + *piVar1);
        uVar6 = (ulonglong)uVar3;
        if (*(int *)(uVar3 + 8) == 1) {
          fn_822ABA88(uVar6,0);
          uVar2 = *(undefined4 *)(param_1 + 0xd4);
          fn_822B67F8();
          uVar4 = fn_822B98A8();
          fn_8229AD30(uVar2,lVar8,uVar4);
        }
        else {
          uVar4 = fn_822ABA88(uVar6,0);
          fn_822ABA88(uVar6,1);
          uVar2 = *(undefined4 *)(param_1 + 0xd4);
          fn_822B67F8();
          uVar5 = fn_822B98A8();
          fn_822B67F8(uVar4);
          uVar4 = fn_822B98A8();
          fn_8229AD90(uVar2,lVar8,uVar4,uVar5);
        }
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 4;
      } while ((int)lVar8 < (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 2);
    }
  }
  else {
    fn_822ABA88(*(undefined4 *)((*(int **)*piVar1)[4] * 4 + **(int **)*piVar1),0);
    uVar2 = *(undefined4 *)(param_1 + 0xd4);
    fn_822B67F8();
    uVar4 = fn_822B98A8();
    fn_8229AD30(uVar2,0,uVar4);
  }
  piVar1 = *(int **)(param_1 + 0x2e0);
  if (piVar1 != (int *)0x0) {
    iVar7 = *(int *)(param_1 + 0xd4);
    uVar4 = (**(code **)(*piVar1 + 0x88))(piVar1,param_1);
    iVar9 = iVar7 + 0x50;
    fn_82F64988(iVar9,0x40,uVar4);
    fn_8229F688(*(undefined4 *)(iVar7 + 0xc),iVar9,0);
  }
  *(undefined4 *)(param_1 + 0x240) = 1;
  fn_8239C4D8(param_1);
  return;
}

