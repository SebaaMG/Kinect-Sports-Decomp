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
extern unsigned int *auStack_50;
extern int fn_82230040();
extern int fn_8234EAA0();
extern int fn_8234EB38();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern int fn_82F63CA0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_44;


void fn_8234E878(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar5;
  undefined8 uVar4;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  undefined4 auStack_50 [2];
  undefined **ppuStack_48;
  undefined4 uStack_44;
  
  piVar1 = *(int **)(param_2 + 0x1b4);
  uVar3 = (**(code **)*piVar1)(piVar1);
  piVar8 = (int *)(param_1 + 0x60);
  if (0x3fffffff < (uVar3 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)(*(int *)(param_1 + 0x68) - *piVar8 >> 2) < (uVar3 & 0xffffffff)) {
    lVar6 = 0;
    if (((uVar3 & 0xffffffff) != 0) &&
       (lVar6 = fn_8265C9E0((uVar3 & 0x3fffffff) << 2), lVar6 == 0)) {
      uStack_44 = 0;
      ppuStack_48 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_48);
    }
    fn_82F63CA0(lVar6,*piVar8,(*(int *)(param_1 + 100) - *piVar8 >> 2) << 2);
    iVar5 = *piVar8;
    iVar2 = *(int *)(param_1 + 100);
    if (iVar5 != 0) {
      fn_8265CA20();
    }
    iVar7 = (int)lVar6;
    *piVar8 = iVar7;
    *(int *)(param_1 + 0x68) = (int)((uVar3 & 0xffffffff) << 2) + iVar7;
    *(int *)(param_1 + 100) = (iVar2 - iVar5 >> 2) * 4 + iVar7;
  }
  auStack_50[0] = 0;
  fn_8234EB38(piVar8,*(undefined4 *)(param_1 + 100),uVar3,auStack_50);
  iVar5 = (**(code **)(*piVar1 + 0x14))(piVar1,1);
  *(undefined4 *)(iVar5 * 4 + *piVar8) = 1;
  iVar5 = (**(code **)(*piVar1 + 0x14))(piVar1,2);
  *(undefined4 *)(iVar5 * 4 + *piVar8) = 2;
  fn_8234EAA0(param_1,piVar1,9,3);
  uVar4 = (**(code **)(*piVar1 + 0x14))(piVar1,9);
  iVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,uVar4);
  *(undefined4 *)((uint)*(ushort *)(iVar5 + 0x28) * 4 + *piVar8) = 3;
  fn_8234EAA0(param_1,piVar1,8,4);
  uVar4 = (**(code **)(*piVar1 + 0x14))(piVar1,8);
  iVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,uVar4);
  *(undefined4 *)((uint)*(ushort *)(iVar5 + 0x28) * 4 + *piVar8) = 4;
  fn_8234EAA0(param_1,piVar1,3,5);
  return;
}

