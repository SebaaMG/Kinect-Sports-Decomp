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
extern unsigned int *auStack_90;
extern unsigned int fStack_80;
extern int fn_822B91F8();
extern int fn_82337B90();
extern int fn_82337DE0();
extern int fn_823414A0();
extern int fn_82453B80();
extern int fn_82453C20();
extern int fn_824CD030();
extern int fn_8252A1B0();
extern int fn_8288B760();
extern unsigned int iStack_94;
extern unsigned int lbl_821B9BC8;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_7c;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_8234A3D0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  int in_r0;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined **ppuStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined1 auStack_90 [16];
  float fStack_80;
  undefined1 uStack_7c;
  
  iVar1 = *(int *)param_1[3];
  iVar7 = fn_82337B90(iVar1);
  if (iVar7 != 0) {
    fn_82337DE0(iVar1);
    iVar7 = *(int *)(*(int *)(*(int *)(iVar1 + 0x1a0) + 0xc) + 0x174);
    if (*(int *)(*(int *)(iVar7 + 0x5c) + 0x1d4) == -1) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar7 + 0x5c);
      iVar7 = *(int *)(*(int *)(iVar7 + 0x1d4) * 4 + *(int *)(iVar7 + 0x1c4));
    }
    iVar10 = *(int *)(iVar7 + 0x44);
    if (*(int *)(*(int *)(iVar1 + 0x1a0) + 0x10) == 0) {
      iVar13 = 1;
      iVar12 = 1;
      iVar9 = *(int *)param_1[3];
      iVar2 = *(int *)(*(int *)(*(int *)(iVar9 + 0x1a0) + 0xc) + 0xa0);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x40) == 1)) &&
         (iVar2 = *(int *)(**(int **)(iVar7 + 0x40) + 0xa0), iVar2 != 0)) {
        iVar13 = *(int *)(iVar2 + 0x15c);
        iVar12 = *(int *)(iVar2 + 0x160);
      }
      bVar4 = false;
      bVar5 = false;
      if (*(int *)(iVar9 + 0x168) == 0) {
        uVar8 = *(uint *)(iVar9 + 0x16c);
      }
      else {
        uVar8 = fn_8288B760();
        uVar8 = uVar8 & 0xff;
      }
      fVar6 = lbl_821CC160;
      dVar14 = (double)lbl_821CC160;
      if (uVar8 == 0) {
        puVar3 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
        *puVar3 = in_register_000104d0;
        puVar3[1] = in_register_000104d4;
        puVar3[2] = in_register_000104d8;
        puVar3[3] = in_vr77;
        fStack_80 = fVar6;
        uStack_9c = 0;
        ppuStack_a0 = &lbl_821B9BC8;
        uStack_98 = 3;
        iStack_94 = 0;
        uStack_7c = 0;
        iVar9 = fn_82453B80(iVar7,0,&ppuStack_a0);
        if (iVar9 != 0) {
          if (iStack_94 == 0) {
            bVar5 = true;
          }
          else {
            bVar4 = true;
          }
        }
      }
      if ((iVar13 == 0) ||
         ((!bVar4 && (iVar9 = (**(code **)(*param_1 + 0x44))(param_1), iVar9 == 0)))) {
        if (iVar12 == 0) {
          return;
        }
        if ((!bVar5) && (iVar9 = (**(code **)(*param_1 + 0x48))(param_1), iVar9 == 0)) {
          return;
        }
        *(int *)(*(int *)(iVar1 + 0x1a0) + 0x10) = iVar10;
        *(undefined4 *)(*(int *)(iVar1 + 0x1a0) + 0x14) = 1;
        fn_822B91F8(*(undefined4 *)(iVar1 + 0x11c),*(undefined4 *)(iVar1 + 0x14),
                          **(undefined4 **)(iVar10 + 4),0x21);
        uStack_b0 = lbl_821CA1A0;
        uStack_ac = lbl_821CA1A4;
        uStack_a8 = lbl_821CA1A8;
        if (**(int **)(iVar10 + 4) != 0) {
          fn_8252A1B0(**(int **)(iVar10 + 4),&uStack_b0,0);
        }
        (**(code **)(*param_2 + 8))(param_2);
        iVar10 = fn_824CD030(param_2);
        if (iVar10 != 0) {
          *(undefined4 *)(*(int *)(*(int *)(param_2[0x3f] + 0x18) + 0x3c) + 0x34) = 1;
          *(undefined4 *)(*(int *)(*(int *)(param_2[0x3f] + 0x1c) + 0x3c) + 0x38) = 1;
        }
        fn_823414A0(param_1);
        (**(code **)(*param_1 + 0x38))(param_1);
        if (*(int *)(iVar1 + 0x168) == 0) {
          uVar8 = *(uint *)(iVar1 + 0x16c);
        }
        else {
          uVar8 = fn_8288B760();
          uVar8 = uVar8 & 0xff;
        }
        if (uVar8 == 0) {
          return;
        }
        uVar11 = 0;
      }
      else {
        *(int *)(*(int *)(iVar1 + 0x1a0) + 0x10) = iVar10;
        *(undefined4 *)(*(int *)(iVar1 + 0x1a0) + 0x14) = 0;
        fn_822B91F8(*(undefined4 *)(iVar1 + 0x11c),*(undefined4 *)(iVar1 + 0x14),
                          **(undefined4 **)(iVar10 + 4),0x20);
        uStack_b0 = lbl_821CA1A0;
        uStack_ac = lbl_821CA1A4;
        uStack_a8 = lbl_821CA1A8;
        if (**(int **)(iVar10 + 4) != 0) {
          fn_8252A1B0(**(int **)(iVar10 + 4),&uStack_b0,0);
        }
        (**(code **)(*param_2 + 8))(param_2);
        iVar10 = fn_824CD030(param_2);
        if (iVar10 != 0) {
          *(undefined4 *)(*(int *)(*(int *)(param_2[0x3f] + 0x18) + 0x3c) + 0x34) = 0;
          *(undefined4 *)(*(int *)(*(int *)(param_2[0x3f] + 0x1c) + 0x3c) + 0x38) = 0;
        }
        fn_823414A0(param_1);
        (**(code **)(*param_1 + 0x38))(param_1);
        if (*(int *)(iVar1 + 0x168) == 0) {
          uVar8 = *(uint *)(iVar1 + 0x16c);
        }
        else {
          uVar8 = fn_8288B760();
          uVar8 = uVar8 & 0xff;
        }
        if (uVar8 == 0) {
          return;
        }
        uVar11 = 1;
      }
      fn_82453C20(dVar14,iVar7,0,uVar11);
    }
  }
  return;
}

