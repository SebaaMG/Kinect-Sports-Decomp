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
extern unsigned int *auStack_240;
extern unsigned int *auStack_678;
extern unsigned int *auStack_680;
extern unsigned int *auStack_6b8;
extern unsigned int *auStack_6dc;
extern unsigned int *auStack_6f0;
extern unsigned int fStack_698;
extern unsigned int fStack_6a0;
extern unsigned int fStack_6c8;
extern unsigned int fStack_6e4;
extern unsigned int fStack_6e8;
extern unsigned int fStack_6ec;
extern int fn_8229CAD0();
extern int fn_8229CB40();
extern int fn_8249ABC0();
extern int fn_8249F490();
extern int fn_82528BF8();
extern int fn_82528EE0();
extern int fn_82F4EBE8();
extern int fn_82F52188();
extern int fn_82F691F0();
extern unsigned int iStack_690;
extern unsigned int lbl_820E975C;
extern unsigned int uStack_440;
extern unsigned int uStack_640;


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8229BE10(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined8 in_r0;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_6f0 [4];
  float fStack_6ec;
  float fStack_6e8;
  float fStack_6e4;
  undefined4 auStack_6dc [3];
  float afStack_6d0 [2];
  float fStack_6c8;
  int aiStack_6c0 [2];
  undefined8 auStack_6b8 [3];
  float fStack_6a0;
  float fStack_698;
  int iStack_690;
  undefined1 auStack_680 [8];
  undefined8 auStack_678 [7];
  undefined4 uStack_640;
  undefined4 uStack_440;
  undefined4 auStack_240 [144];
  
  pfVar10 = afStack_6d0;
  bVar3 = false;
  lVar15 = 2;
  do {
    puVar7 = (undefined4 *)((int)in_r0 + (int)pfVar10 & 0xfffffff0);
    *puVar7 = in_register_000104d0;
    puVar7[1] = in_register_000104d4;
    puVar7[2] = in_register_000104d8;
    puVar7[3] = in_vr77;
    pfVar10[-4] = 0.0;
    pfVar10[-3] = 0.0;
    pfVar10[4] = 0.0;
    pfVar10 = pfVar10 + 0xc;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  iVar14 = 0;
  iVar5 = fn_8249ABC0();
  pfVar10 = *(float **)(iVar5 + 0xec);
  uVar13 = 0;
  puVar7 = auStack_6dc;
  fVar1 = *pfVar10;
  fStack_6ec = pfVar10[1];
  fStack_6e8 = pfVar10[2];
  fStack_6e4 = pfVar10[3];
  do {
    piVar6 = (int *)fn_82F4EBE8(uVar13);
    if ((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 4))(piVar6), iVar5 != 0)) {
      fn_82F52188(auStack_680,piVar6,1);
      puVar12 = (undefined4 *)((uint)(auStack_680 + (int)in_r0) & 0xfffffff0);
      uVar17 = puVar12[1];
      uVar18 = puVar12[2];
      uVar19 = puVar12[3];
      puVar2 = (undefined4 *)((uint)(puVar7 + 3) & 0xfffffff0);
      *puVar2 = *puVar12;
      puVar2[1] = uVar17;
      puVar2[2] = uVar18;
      puVar2[3] = uVar19;
      iVar5 = fn_8249F490(auStack_6f0);
      if (iVar5 == 0) {
        *puVar7 = 1;
      }
      else {
        puVar7[-1] = 1;
      }
      iVar14 = iVar14 + 1;
      puVar7 = puVar7 + 0xc;
      if (iVar14 == 2) break;
    }
    uVar13 = uVar13 + 1;
  } while ((uVar13 & 0xffffffff) < 2);
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar15 = 1;
    if ((iVar14 == 2) && (fStack_6c8 < fStack_698)) {
      pfVar10 = &fStack_6e8;
      puVar11 = auStack_6b8;
      lVar16 = 6;
      do {
        puVar11 = puVar11 + 1;
        pfVar10 = pfVar10 + 2;
        *(undefined8 *)pfVar10 = *puVar11;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  else {
    lVar15 = 2;
    if ((iVar14 == 2) && (afStack_6d0[0] < fStack_6a0)) {
      puVar11 = auStack_678;
      pfVar10 = &fStack_6e8;
      lVar16 = 6;
      do {
        pfVar10 = pfVar10 + 2;
        puVar11 = puVar11 + 1;
        *puVar11 = *(undefined8 *)pfVar10;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      pfVar10 = &fStack_6e8;
      puVar11 = auStack_6b8;
      lVar16 = 6;
      do {
        puVar11 = puVar11 + 1;
        pfVar10 = pfVar10 + 2;
        *(undefined8 *)pfVar10 = *puVar11;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      puVar11 = auStack_678;
      puVar9 = auStack_6b8;
      lVar16 = 6;
      do {
        puVar11 = puVar11 + 1;
        puVar9 = puVar9 + 1;
        *puVar9 = *puVar11;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  if ((int)lVar15 != 0) {
    piVar6 = (int *)(param_1 + 0xb8);
    piVar8 = aiStack_6c0;
    do {
      if (piVar8[-7] != 0) {
        if ((float)piVar8[-4] <= fStack_6e8) {
          if (fVar1 <= (float)piVar8[-4]) {
            if ((float)piVar8[-2] <= fStack_6e4) {
              if (fStack_6ec <= (float)piVar8[-2]) goto LAB_8229c068;
              iVar5 = 5;
            }
            else {
              iVar5 = 4;
            }
          }
          else {
            iVar5 = 2;
          }
        }
        else {
          iVar5 = 3;
        }
        piVar8[-8] = iVar5;
      }
LAB_8229c068:
      iVar5 = piVar8[-8];
      if (iVar5 != *piVar6) {
        if (iVar5 == 0) {
          *piVar8 = (int)"stateLostSmall";
        }
        else if (iVar5 == 2) {
          *piVar8 = (int)"stateLeft";
        }
        else if (iVar5 == 3) {
          *piVar8 = (int)"stateRight";
        }
        else if (iVar5 == 4) {
          *piVar8 = (int)"stateBackward";
        }
        else if (iVar5 == 5) {
          *piVar8 = (int)"stateForward";
        }
        bVar3 = true;
        *piVar6 = iVar5;
      }
      uVar4 = lbl_820E975C;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 0xc;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    if (bVar3) {
      if (*(int *)(param_1 + 0x10) == 0) {
        if (aiStack_6c0[0] == 0) {
          puVar7 = (undefined4 *)(param_1 + 0x70);
          if (7 < *(uint *)(param_1 + 0x84)) {
            puVar7 = (undefined4 *)*puVar7;
          }
        }
        else {
          iVar5 = fn_8249ABC0();
          iVar5 = fn_82528BF8(*(undefined4 *)(iVar5 + 0xe4),aiStack_6c0[0],auStack_240,0x100,0
                                    ,0);
          if (iVar5 == 0) {
            fn_82528EE0(auStack_240,0x100,0xffffffff820e975c);
          }
          puVar7 = auStack_240;
        }
        fn_8229CAD0(param_1,puVar7);
      }
      else {
        uStack_640 = ((((U64)(uStack_640)) & (~(((U64)0xFFFF) << 0))) | ((((U64)(lbl_820E975C)) & ((U64)0xFFFF)) << 0));
        fn_82F691F0((undefined2 *)((int)&uStack_640 + 2),0,0x1fe);
        uStack_440 = ((((U64)(uStack_440)) & (~(((U64)0xFFFF) << 0))) | ((((U64)(uVar4)) & ((U64)0xFFFF)) << 0));
        fn_82F691F0((undefined2 *)((int)&uStack_440 + 2),0,0x1fe);
        puVar7 = (undefined4 *)(param_1 + 0x70);
        if (7 < *(uint *)(param_1 + 0x84)) {
          puVar7 = (undefined4 *)*puVar7;
        }
        puVar12 = (undefined4 *)(param_1 + 0x8c);
        if (7 < *(uint *)(param_1 + 0xa0)) {
          puVar12 = (undefined4 *)*puVar12;
        }
        if ((aiStack_6c0[0] != 0) && (*(int *)(param_1 + 0x24) != 1)) {
          iVar5 = fn_8249ABC0();
          iVar5 = fn_82528BF8(*(undefined4 *)(iVar5 + 0xe4),aiStack_6c0[0],&uStack_640,0x100,0
                                    ,0);
          if (iVar5 == 0) {
            fn_82528EE0(&uStack_640,0x100,0xffffffff820e975c);
          }
          puVar7 = &uStack_640;
        }
        if ((iStack_690 != 0) && (*(int *)(param_1 + 0x24) != 2)) {
          iVar5 = fn_8249ABC0();
          iVar5 = fn_82528BF8(*(undefined4 *)(iVar5 + 0xe4),iStack_690,&uStack_440,0x100,0,0);
          if (iVar5 == 0) {
            fn_82528EE0(&uStack_440,0x100,0xffffffff820e975c);
          }
          puVar12 = &uStack_440;
        }
        fn_8229CB40(param_1,puVar7,puVar12);
      }
    }
  }
  return;
}

