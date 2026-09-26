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
extern unsigned int *auStack_b0;
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826828D8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696AD0();
extern int fn_826BD868();
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_80;
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;


void fn_826C3928(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined1 auStack_b0 [16];
  undefined **ppuStack_a0;
  undefined1 *puStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined **ppuStack_70;
  undefined1 *puStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  piVar8 = (int *)0x0;
  iVar7 = 0;
  piVar5 = (int *)0x0;
  iVar9 = 0;
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    piVar5 = (int *)fn_82696AD0(uVar4,uVar2);
    if (piVar5 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar5 + 8))(piVar5);
      if ((iVar6 < 2) || (bVar3 = true, 5 < iVar6)) {
        bVar3 = false;
      }
      if (bVar3) {
        iVar7 = fn_826BD868(piVar5);
        if (iVar7 != 0) {
          *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
        }
      }
      else {
        piVar8 = piVar5 + -4;
        if (piVar8 != (int *)0x0) {
          piVar5[-2] = piVar5[-2] + 1U & 0x8fffffff;
        }
      }
    }
  }
  if (1 < *(int *)(param_1 + 0x1c)) {
    iVar9 = *(int *)(param_1 + 0x1c) + -1;
  }
  auStack_b0[0] = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    piVar10 = (int *)(*(int *)(param_1 + 8) + -0x10);
    if (*(int *)(param_1 + 8) == 0) {
      piVar10 = (int *)0x0;
    }
    if (piVar10 != (int *)0x0) {
      piVar10[2] = piVar10[2] + 1U & 0x8fffffff;
    }
    iStack_58 = *(int *)(param_1 + 0x18);
    puStack_6c = auStack_b0;
    ppuStack_70 = &lbl_8200579C;
    uStack_5c = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    iStack_50 = (*(int *)(iStack_58 + 8) - *(int *)(iStack_58 + 0xc) >> 4) +
                *(int *)(iStack_58 + 0x1c) * 0x20 + -0x24;
    piStack_68 = piVar5;
    iStack_54 = iVar9;
    (**(code **)(*piVar10 + 0x28))(piVar10,&ppuStack_70,0,0);
    fn_826828D8(&ppuStack_70);
    fn_826824B0(piVar10);
  }
  else {
    iStack_88 = *(int *)(param_1 + 0x18);
    puStack_9c = auStack_b0;
    ppuStack_a0 = &lbl_8200579C;
    uStack_8c = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    iStack_80 = (*(int *)(iStack_88 + 8) - *(int *)(iStack_88 + 0xc) >> 4) +
                *(int *)(iStack_88 + 0x1c) * 0x20 + -0x24;
    piStack_98 = piVar5;
    iStack_84 = iVar9;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x28))
              (*(int **)(param_1 + 0xc),&ppuStack_a0,*(undefined4 *)(param_1 + 0x10),0);
    fn_826828D8(&ppuStack_a0);
  }
  fn_82695FA0(*(undefined4 *)(param_1 + 4),auStack_b0);
  fn_82696330(auStack_b0);
  if (iVar7 != 0) {
    fn_8267C498(iVar7);
  }
  if (piVar8 != (int *)0x0) {
    fn_826824B0(piVar8);
  }
  return;
}

