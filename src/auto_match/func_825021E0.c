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
extern int fn_82506D78();
extern int fn_82564658();
extern int fn_825925D8();
extern int fn_8265C9E0();
extern int fn_8265CA60();
extern int fn_827F2DD0();
extern int fn_827F3770();
extern int fn_827F4248();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82192FA0;
extern unsigned int lbl_82195A98;
extern unsigned int lbl_82195E98;
extern unsigned int lbl_82195E9C;
extern unsigned int lbl_82195EA0;
extern unsigned int lbl_821C2244;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8329EAD0;
extern unsigned int lbl_8329EAE0;
extern unsigned int lbl_8329EAF0;
extern unsigned int lbl_8329EB00;
extern unsigned int uRam8329eae4;
extern unsigned int uRam8329eae8;
extern unsigned int uRam8329eaec;
extern unsigned int uRam8329eaf4;
extern unsigned int uRam8329eaf8;
extern unsigned int uRam8329eafc;
extern unsigned int uRam8329eb04;
extern unsigned int uRam8329eb08;
extern unsigned int uRam8329eb0c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825021E0(undefined8 param_1,int *param_2)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar4;
  undefined4 uVar5;
  longlong lVar2;
  undefined4 *puVar6;
  undefined8 uVar3;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar12;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  iVar4 = fn_82F6A548();
  fn_825925D8();
  if ((*param_2 == 0x42) && (iVar4 == param_2[2])) {
    iVar7 = (*(int **)(iVar4 + 0x8c0))[*(int *)(*(int *)(iVar4 + 0x4c) + 0x44) + 0x20];
    if (*(int *)(iVar4 + 0x18c) == 0) {
      uVar5 = (**(code **)(**(int **)(iVar4 + 0x8c0) + 0x4c))();
      *(undefined4 *)(iVar4 + 0x18c) = uVar5;
    }
    *(undefined4 *)(iVar4 + 0xc68) = *(undefined4 *)(iVar4 + 0x18c);
    lVar2 = (ulonglong)*(ushort *)(iVar7 + 8) << 6;
    if (0x3ffffff < (ulonglong)*(ushort *)(iVar7 + 8)) {
      lVar2 = -1;
    }
    uVar5 = fn_8265CA60(lVar2);
    *(undefined4 *)(iVar4 + 0xb6c) = uVar5;
    iVar9 = 0;
    if (*(short *)(iVar7 + 8) != 0) {
      iVar8 = 0;
      do {
        puVar6 = (undefined4 *)((int)&lbl_8329EAD0 + in_r0 & 0xfffffff0);
        uVar5 = puVar6[1];
        uVar19 = puVar6[2];
        uVar20 = puVar6[3];
        iVar12 = iVar8 + *(int *)(iVar4 + 0xb6c);
        puVar1 = (undefined4 *)(in_r0 + iVar12 & 0xfffffff0);
        *puVar1 = *puVar6;
        puVar1[1] = uVar5;
        puVar1[2] = uVar19;
        puVar1[3] = uVar20;
        uVar20 = uRam8329eaec;
        uVar19 = uRam8329eae8;
        uVar5 = uRam8329eae4;
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 0x40;
        puVar6 = (undefined4 *)(iVar12 + 0x10U & 0xfffffff0);
        *puVar6 = lbl_8329EAE0;
        puVar6[1] = uVar5;
        puVar6[2] = uVar19;
        puVar6[3] = uVar20;
        uVar20 = uRam8329eafc;
        uVar19 = uRam8329eaf8;
        uVar5 = uRam8329eaf4;
        puVar6 = (undefined4 *)(iVar12 + 0x20U & 0xfffffff0);
        *puVar6 = lbl_8329EAF0;
        puVar6[1] = uVar5;
        puVar6[2] = uVar19;
        puVar6[3] = uVar20;
        uVar20 = uRam8329eb0c;
        uVar19 = uRam8329eb08;
        uVar5 = uRam8329eb04;
        puVar6 = (undefined4 *)(iVar12 + 0x30U & 0xfffffff0);
        *puVar6 = lbl_8329EB00;
        puVar6[1] = uVar5;
        puVar6[2] = uVar19;
        puVar6[3] = uVar20;
      } while (iVar9 < (int)(uint)*(ushort *)(iVar7 + 8));
    }
    puVar6 = (undefined4 *)fn_8265C9E0(0xc4);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar4 + 0xb6c);
      fn_827F4248(puVar6,puVar6 + 8,0,0,0);
      *puVar6 = &lbl_821C2244;
      uVar3 = (**(code **)(**(int **)(iVar4 + 0x8c0) + 0x24))();
      fn_827F3770(puVar6 + 8,uVar3);
      puVar6[0x2d] = iVar4;
      puVar6[0x2e] = iVar4;
      uVar19 = *(undefined4 *)(iVar4 + 0x8c0);
      puVar6[0x30] = uVar5;
      puVar6[0x2f] = uVar19;
    }
    *(undefined4 **)(iVar4 + 0xb64) = puVar6;
    fn_82506D78(iVar4);
    dVar17 = (double)lbl_821CC160;
    fn_827F2DD0(dVar17,*(undefined4 *)(iVar4 + 0xc68),*(undefined4 *)(iVar4 + 0xb68));
    if (*(char *)(iVar4 + 0xb76) != '\0') {
      if (*(int **)(iVar4 + 0x8c0) == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (**(code **)(**(int **)(iVar4 + 0x8c0) + 0x1c))();
      }
      iVar7 = *(int *)(*(int *)(iVar7 + 0x10) + 8);
      if (iVar7 == 0) {
        uVar10 = 0xffffffffffffffff;
      }
      else {
        uVar10 = (ulonglong)*(byte *)(iVar7 + 4);
        if (uVar10 == 0xff) {
          uVar10 = 0xffffffffffffffff;
        }
      }
      if (iVar7 == 0) {
        uVar11 = 0xffffffffffffffff;
      }
      else {
        uVar11 = (ulonglong)*(byte *)(iVar7 + 3);
        if (uVar11 == 0xff) {
          uVar11 = 0xffffffffffffffff;
        }
      }
      if (iVar7 == 0) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = (uint)*(byte *)(iVar7 + 2);
        if (uVar13 == 0xff) {
          uVar13 = 0xffffffff;
        }
      }
      if ((iVar7 == 0) || (uVar14 = (uint)*(byte *)(iVar7 + 1), *(byte *)(iVar7 + 1) == 0xff)) {
        uVar14 = 0xffffffff;
      }
      if (((((int)uVar10 != -1) && ((int)uVar11 != -1)) && (uVar13 != 0xffffffff)) &&
         (uVar14 != 0xffffffff)) {
        iVar7 = fn_8265C9E0(0x30);
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(iVar4 + 0xc68);
          puVar6 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
          *puVar6 = in_register_000104d0;
          puVar6[1] = in_register_000104d4;
          puVar6[2] = in_register_000104d8;
          puVar6[3] = in_vr77;
          *(undefined4 *)(iVar7 + 0x10) = 0;
          *(undefined4 *)(iVar7 + 0x14) = 0;
          *(undefined4 *)(iVar7 + 0x18) = 0;
          *(undefined4 *)(iVar7 + 0x1c) = 0;
          *(undefined4 *)(iVar7 + 0x24) = uVar5;
        }
        *(int *)(iVar4 + 0xc74) = iVar7;
        dVar18 = (double)lbl_82195E9C;
        dVar16 = (double)lbl_82195EA0;
        dVar15 = (double)lbl_82195E98;
        fn_82564658(dVar15,(double)lbl_82192FA0,dVar18,dVar16,dVar18,dVar17,dVar17,
                          (double)lbl_821CA460,iVar7,uVar10);
        fn_82564658(dVar15,(double)lbl_82195A98,dVar18,dVar16,dVar18,dVar17,dVar17,
                          (double)lbl_821CA460,*(undefined4 *)(iVar4 + 0xc74),uVar11);
      }
    }
  }
  fn_82F6A594();
  return;
}

