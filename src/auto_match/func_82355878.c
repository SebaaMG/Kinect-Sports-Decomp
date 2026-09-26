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
extern unsigned int *auStack_28e;
extern unsigned int *auStack_34e;
extern int fn_822315A0();
extern int fn_8225F160();
extern int fn_8227AD00();
extern int fn_8227B668();
extern int fn_8227B800();
extern int fn_8227B8D0();
extern int fn_822ABA88();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_823545A8();
extern int fn_823571B0();
extern int fn_823F2E20();
extern int fn_82526AF8();
extern int fn_82534820();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82536590();
extern int fn_8265C9E0();
extern int fn_82670C10();
extern int fn_82672C20();
extern int fn_82F64988();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832765BC;
extern unsigned int uStack_290;
extern unsigned int uStack_350;
extern unsigned int uStack_3d8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82355878(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar9;
  int *piVar10;
  longlong lVar6;
  int iVar11;
  longlong lVar7;
  undefined8 uVar8;
  int iVar12;
  char cVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  int *piVar18;
  int iVar19;
  uint *puVar20;
  int *piVar21;
  int *piVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  undefined4 *puStack_3f0;
  undefined4 *puStack_3ec;
  longlong lStack_3e8;
  int *piStack_3e0;
  int *piStack_3dc;
  undefined4 uStack_3d8;
  undefined2 uStack_350;
  undefined1 auStack_34e [190];
  undefined2 uStack_290;
  undefined1 auStack_28e [654];
  
  piVar10 = *(int **)(param_1 + 0x18);
  dVar24 = (double)lbl_821CC160;
  *(float *)(param_1 + 0x390) = lbl_821CC160;
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0x18))(piVar10,(ulonglong)*(uint *)(param_1 + 0x344) - 1);
  }
  if (((uint *)(param_1 + 0x394) != (uint *)0x0) &&
     (uVar17 = (ulonglong)*(uint *)(param_1 + 0x394),
     uVar17 != (uVar17 - 1) + (ulonglong)(uVar17 == 0))) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0xa8))();
    puStack_3ec = (undefined4 *)fn_8265C9E0(0x1198);
    if (puStack_3ec == (undefined4 *)0x0) {
      puStack_3ec = (undefined4 *)0x0;
    }
    else {
      puStack_3ec[1] = 1;
      puStack_3ec[2] = 1;
      *puStack_3ec = &lbl_821A8D8C;
      if (puStack_3ec + 4 != (undefined4 *)0x0) {
        fn_8227AD00(puStack_3ec + 4,param_1 + 0x328,*(undefined4 *)(param_1 + 0x90),
                        *(undefined4 *)(param_1 + 0x94),0xffffffff821b2378,
                        *(undefined4 *)(param_1 + 0x2b0),1,0);
      }
    }
    puStack_3f0 = puStack_3ec + 4;
    puVar20 = (uint *)(param_1 + 0x288);
    fn_823F2E20(puVar20,&puStack_3f0);
    if (puStack_3ec != (undefined4 *)0x0) {
      fn_822315A0();
    }
    iVar9 = fn_8225F160();
    fn_8227B668(*puVar20,((*(int **)(param_1 + 0x298))[1] - **(int **)(param_1 + 0x298)) /
                               0x5c,*(undefined4 *)(iVar9 + 4));
    iVar9 = *(int *)(param_1 + 0x2c4);
    if (iVar9 == 0) {
      uVar15 = 10;
      uVar14 = 100;
    }
    else {
      uVar15 = *(undefined4 *)(iVar9 + 0x70);
      uVar14 = *(undefined4 *)(iVar9 + 0x68);
    }
    fn_8227B800(*puVar20,uVar14,uVar15);
    piVar10 = (int *)(param_1 + 0x398);
    if (piVar10 == (int *)0x0) {
      bVar23 = false;
    }
    else {
      bVar23 = *piVar10 != 0;
    }
    if (bVar23) {
      fn_82536590(piVar10,0);
    }
    fn_823545A8(param_1);
    piVar22 = (int *)0x0;
    uStack_3d8 = 0;
    piVar21 = (int *)0x0;
    piStack_3e0 = (int *)0x0;
    iVar9 = 0;
    piStack_3dc = (int *)0x0;
    piVar1 = (int *)(*(undefined4 **)(param_1 + 0x298))[1];
    iVar2 = 0;
    for (piVar10 = (int *)**(undefined4 **)(param_1 + 0x298); piVar10 != piVar1;
        piVar10 = piVar10 + 0x17) {
      puVar16 = (undefined4 *)*piVar10;
      uVar17 = (ulonglong)(uint)piVar10[1];
      piVar5 = *(int **)((int)puVar16 * 4 + **(int **)(param_1 + 0x1c));
      lVar6 = fn_822ABA88(*(undefined4 *)(piVar10[1] * 4 + *piVar5),piVar10[2]);
      iVar12 = 0;
      for (piVar18 = piVar22; piVar18 != piVar21; piVar18 = piVar18 + 2) {
        if (((undefined4 *)*piVar18 == puVar16) &&
           ((ulonglong)(uint)piVar18[1] == (uVar17 & 0xffffffff))) goto LAB_82355adc;
        iVar12 = iVar12 + 1;
      }
      puStack_3ec = (undefined4 *)uVar17;
      puStack_3f0 = puVar16;
      fn_823571B0(&piStack_3e0,&puStack_3f0);
      piVar21 = piStack_3dc;
      piVar22 = piStack_3e0;
LAB_82355adc:
      iVar11 = fn_8225F160();
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x34c) - 1;
      if ((longlong)uVar17 < 0) {
        uVar17 = (ulonglong)*(uint *)(iVar11 + 0x5c) - 1;
      }
      iVar11 = iVar12;
      if (((ulonglong)*(uint *)(param_1 + 0x34c) != (ulonglong)(uint)piVar10[1]) &&
         (iVar11 = iVar2, (uVar17 & 0xffffffff) == (ulonglong)(uint)piVar10[1])) {
        iVar9 = iVar12;
      }
      iVar2 = piVar10[3];
      dVar25 = dVar24;
      if (((iVar2 != 0) && (piVar18 = *(int **)(param_1 + 0x18), piVar18 != (int *)0x0)) &&
         (*(int *)(param_1 + 0x2c8) != 0)) {
        dVar24 = (double)(**(code **)(*piVar18 + 0x6c))
                                   (piVar18,*(undefined4 *)
                                             (*(int *)(param_1 + 0x2c8) * 4 +
                                             *(int *)(iVar2 + 0x100)));
      }
      iVar3 = piVar10[0x14];
      iVar19 = iVar12 * 0xdc + *puVar20;
      uVar15 = *(undefined4 *)(*(int *)(piVar10[1] * 4 + *piVar5) + 0x20);
      *(undefined4 *)(*puVar20 + 0xa78) = 1;
      *(undefined4 *)(iVar19 + 0xa94) = uVar15;
      *(undefined4 *)(iVar19 + 0xa88) = 1;
      *(float *)(iVar19 + 0xa90) = (float)dVar24;
      *(undefined4 *)(iVar19 + 0xa8c) = 0;
      *(int *)(iVar19 + 0xa98) = iVar3;
      if (((iVar2 != 0) && (*(char *)(iVar2 + 0xd8) == '\0')) &&
         ((ulonglong)*(uint *)(param_1 + 0x2c4) != 0)) {
        lVar7 = fn_82526AF8(0x358,0xffffffff831cf9d4,
                                  (ulonglong)*(uint *)(param_1 + 0x2c4) + 0x20);
        lStack_3e8 = (longlong)
                     *(int *)((int)((-(ulonglong)(lVar7 != -1) & lVar7 + 1U & 0xffffffff) << 2) +
                             *(int *)(iVar2 + 0x100));
        piVar10[0x15] = (int)(float)lStack_3e8;
      }
      uVar4 = *puVar20;
      fn_822B67F8(lVar6);
      uVar8 = fn_822B98A8();
      fn_8227B8D0(dVar25,dVar25,uVar4,iVar12,piVar10[2],lVar6 + 0x30,uVar8,iVar2 != 0);
      dVar24 = dVar25;
      iVar2 = iVar11;
    }
    iVar12 = fn_8225F160();
    if (*(int *)(iVar12 + 8) == 2) {
      uVar4 = *puVar20;
      *(int *)(uVar4 + 0xa7c) = iVar9;
      *(int *)(uVar4 + 0xa80) = iVar2;
    }
    iVar9 = (**(code **)(**(int **)(param_1 + 0x18) + 0xa0))();
    if (iVar9 == 0) {
      uStack_290 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_28e,0,0x1fe);
    }
    uVar4 = *puVar20;
    uVar8 = (**(code **)(**(int **)(param_1 + 0x18) + 0xa0))();
    fn_82F64988((ulonglong)uVar4 + 0x3b0,0x100,uVar8);
    if ((*(int *)(param_1 + 0x3e0) != 0) && (lbl_832765BC != 0)) {
      uStack_350 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_34e,0,0x3e);
    }
    fn_82670C10(&piStack_3e0);
  }
  if (lbl_832765BC != 0) {
    puVar16 = *(undefined4 **)(*(int *)(lbl_832765BC + 0x9c) + 8);
    cVar13 = fn_82534820(puVar16);
    if (cVar13 != '\0') {
      puStack_3f0 = puVar16;
      puStack_3f0 = (undefined4 *)
                    fn_82535298(&puStack_3f0,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x84c)
                                      ,0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82536288(&puStack_3f0);
    }
  }
  piVar10 = *(int **)(param_1 + 0x2ac);
  if ((piVar10 != (int *)0x0) && (*piVar10 != 1)) {
    *piVar10 = 1;
    fn_82672C20(piVar10[2],0xffffffff821ab560,0,0);
  }
  *(undefined4 *)(param_1 + 0x39c) = 1;
  return;
}

