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
extern unsigned int *auStack_83e;
extern unsigned int *auStack_848;
extern unsigned int *auStack_850;
extern unsigned int *auStack_858;
extern unsigned int *auStack_860;
extern int fn_822315A0();
extern int fn_822489C8();
extern int fn_82278EE8();
extern int fn_82279C58();
extern int fn_82279D28();
extern int fn_822817E0();
extern int fn_82483740();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82522588();
extern int fn_82536590();
extern int fn_82672C20();
extern int fn_828AAF70();
extern int fn_828AD740();
extern int fn_82F691F0();
extern unsigned int iStack_844;
extern unsigned int iStack_84c;
extern unsigned int iStack_854;
extern unsigned int iStack_85c;
extern unsigned int iStack_864;
extern unsigned int iStack_868;
extern unsigned int iStack_86c;
extern unsigned int iStack_870;
extern unsigned int lbl_820E975C;
extern unsigned int lbl_83297810;
extern unsigned int uStack_840;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82482A20(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int *piVar5;
  char cVar7;
  longlong lVar4;
  undefined4 *puVar6;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iStack_870;
  int iStack_86c;
  int iStack_868;
  int iStack_864;
  undefined1 auStack_860 [4];
  int iStack_85c;
  undefined1 auStack_858 [4];
  int iStack_854;
  undefined1 auStack_850 [4];
  int iStack_84c;
  undefined1 auStack_848 [4];
  int iStack_844;
  undefined2 uStack_840;
  undefined1 auStack_83e [2110];
  
  bVar3 = false;
  piVar5 = (int *)fn_822817E0(auStack_860,*(undefined4 *)(param_1 + 0x14));
  if (*piVar5 == 0) {
LAB_82482aa0:
    bVar2 = true;
  }
  else {
    bVar3 = true;
    piVar5 = (int *)fn_822817E0(auStack_848,*(undefined4 *)(param_1 + 0x14));
    for (puVar6 = (undefined4 *)**(undefined4 **)(*piVar5 + 0x10);
        puVar6 != *(undefined4 **)(*piVar5 + 0x10); puVar6 = (undefined4 *)*puVar6) {
      iVar10 = puVar6[2];
      if (*(int *)(iVar10 + 0x10) == 0x31) goto LAB_82482a94;
    }
    iVar10 = 0;
LAB_82482a94:
    bVar2 = false;
    if (iVar10 == 0) goto LAB_82482aa0;
  }
  if ((bVar3) && (iStack_844 != 0)) {
    fn_822315A0();
  }
  if (iStack_85c != 0) {
    fn_822315A0();
  }
  if (bVar2) {
    return;
  }
  iVar10 = *(int *)(param_1 + 0xa4);
  uVar11 = 0;
  if (iVar10 != 0) {
    iVar1 = *(int *)(iVar10 + 0x14);
    if (iVar1 == 1) {
      if (*(longlong *)(*(int *)(param_1 + 0x48) + 0x18d0) == 0) {
        uVar11 = 2;
      }
      else {
        uVar11 = 1;
      }
    }
    else if (iVar1 == 6) {
      uVar8 = (ulonglong)lbl_83297810;
      if (uVar8 == 0) {
        uVar8 = fn_82511928();
      }
      fn_825138E0(&iStack_868,uVar8,1);
      iVar10 = iStack_868;
      uVar11 = 0;
      if (iStack_868 != 0) {
        if (*(int *)(*(int *)(param_1 + 0xa4) + 0x48) == 0) {
          cVar7 = '\x01';
        }
        else {
          cVar7 = fn_822489C8();
        }
        if (cVar7 == '\0') {
          cVar7 = fn_828AD740(*(undefined4 *)(iVar10 + 8));
          if (cVar7 == '\0') {
            uVar11 = 3;
          }
          else {
            uVar11 = *(uint *)(param_1 + 0xa8);
          }
        }
        else {
          cVar7 = fn_828AD740(*(undefined4 *)(iVar10 + 8));
          uVar11 = -(uint)(cVar7 == '\0') & 3;
        }
        fn_82522588(&iStack_870,&iStack_868);
        if (*(int **)(iStack_870 + 0x38) != (int *)0x0) {
          lVar4 = (**(code **)(**(int **)(iStack_870 + 0x38) + 8))();
          fn_828AAF70(lVar4 + 0x1ec,1);
        }
        if (iStack_86c != 0) {
          fn_822315A0();
        }
      }
      if (iStack_864 != 0) {
        fn_822315A0();
      }
    }
    else if (iVar1 == 5) {
      uVar11 = 4;
    }
    else if ((*(int *)(iVar10 + 0x14) == 2) || (*(int *)(iVar10 + 0x14) == 3)) {
      uVar11 = 5;
    }
  }
  if (uVar11 == *(uint *)(param_1 + 0xa8)) {
    return;
  }
  if (uVar11 == 2) {
    if (*(uint *)(param_1 + 0xa8) == 3) {
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x74) = 1;
      *(undefined4 *)(param_1 + 0x4c) = 1;
    }
    fn_82483740(param_1);
  }
  fn_822817E0(&iStack_868,*(undefined4 *)(param_1 + 0x14));
  if (iStack_868 == 0) goto LAB_82482fd0;
  for (puVar6 = (undefined4 *)**(undefined4 **)(iStack_868 + 0x10);
      puVar6 != *(undefined4 **)(iStack_868 + 0x10); puVar6 = (undefined4 *)*puVar6) {
    iVar10 = puVar6[2];
    if (*(int *)(iVar10 + 0x10) == 0x31) goto LAB_82482cb4;
  }
  iVar10 = 0;
LAB_82482cb4:
  if (iVar10 != 0) {
    if ((*(int *)(param_1 + 0xa8) == 5) && (uVar11 == 0)) {
      fn_82536590(param_1 + 0x110,0);
    }
    *(uint *)(param_1 + 0xa8) = uVar11;
    if (uVar11 == 0) {
      uVar9 = 0xffffffff821bd234;
    }
    else if (uVar11 == 1) {
      uVar9 = 0xffffffff821bd990;
    }
    else if (uVar11 < 3) {
      uVar9 = 0xffffffff821bd998;
    }
    else if (uVar11 == 3) {
LAB_82482d20:
      uVar9 = 0xffffffff821bd9a8;
    }
    else if (uVar11 < 5) {
      uVar9 = 0xffffffff821bd980;
    }
    else {
      if (uVar11 == 5) goto LAB_82482d20;
      uVar9 = 0;
    }
    fn_82278EE8(iVar10,0,uVar9);
    if ((uVar11 == 4) || (uVar11 == 5)) {
      if (*(int *)(param_1 + 0xcc) != 1) {
        puVar6 = (undefined4 *)fn_822817E0(auStack_850,*(undefined4 *)(param_1 + 0x14));
        fn_82279C58(&iStack_870,*puVar6);
        if (iStack_84c != 0) {
          fn_822315A0();
        }
        fn_82672C20(iStack_870,0xffffffff821bd9cc,0,0);
        *(undefined4 *)(param_1 + 0xcc) = 1;
        goto LAB_82482e14;
      }
    }
    else if (*(int *)(param_1 + 0xcc) != 0) {
      puVar6 = (undefined4 *)fn_822817E0(auStack_858,*(undefined4 *)(param_1 + 0x14));
      fn_82279C58(&iStack_870,*puVar6);
      if (iStack_854 != 0) {
        fn_822315A0();
      }
      fn_82672C20(iStack_870,0xffffffff821bd9dc,0,0);
      *(undefined4 *)(param_1 + 0xcc) = 0;
LAB_82482e14:
      if (iStack_86c != 0) {
        fn_822315A0();
      }
    }
    if (uVar11 != 0) {
      uStack_840 = lbl_820E975C;
      if (uVar11 == 3) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_83e,0,0x7fe);
      }
      if (uVar11 == 4) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_83e,0,0x7fe);
      }
      if (uVar11 == 5) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_83e,0,0x7fe);
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_83e,0,0x7fe);
    }
    if ((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(*(int *)(param_1 + 0xa4) + 0x14) == 6)) {
      uStack_840 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_83e,0,0x7fe);
    }
  }
  fn_82279D28(iStack_868,0x2e,1);
LAB_82482fd0:
  if (iStack_864 != 0) {
    fn_822315A0();
  }
  return;
}

