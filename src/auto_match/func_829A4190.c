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
extern int fn_8265C990();
extern int fn_82975B00();
extern int fn_8299FC30();
extern int fn_829A0220();
extern unsigned int uStack_58;


/* WARNING: Type propagation algorithm not settling */

longlong fn_829A4190(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  int aiStack_70 [6];
  undefined8 uStack_58;
  
  bVar6 = false;
  if (*(int *)(param_1 + 0x4c) == 4) {
    lVar13 = 0;
    uVar8 = 0;
    iVar11 = 0;
    piVar12 = aiStack_70 + 3;
    aiStack_70[2] = 0;
    aiStack_70[3] = 0;
    uStack_58 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x234);
      puVar4 = *(uint **)(iVar11 + iVar1);
      if ((puVar4 != (uint *)0x0) && (*puVar4 != 0)) {
        if ((**(uint **)(iVar11 + iVar1) & 0xfff00000) == 0x72100000) {
          iVar10 = *(int *)(iVar11 + iVar1);
          *(undefined4 *)(iVar11 + iVar1) = 0;
        }
        else {
          uVar9 = 0;
          if ((*puVar4 & 0xfff00000) != 0x11000000) {
            uVar9 = **(uint **)(iVar11 + iVar1) & 0xfffff;
          }
          iVar2 = *(int *)(param_1 + 0x88);
          iVar3 = *(int *)(*(int *)(*(int *)(puVar4[2] + uVar9 * 4) * 4 + *(int *)(param_1 + 0x14))
                          + 4);
          iVar10 = *(int *)(iVar11 + iVar1);
          *(undefined4 *)(iVar11 + iVar1) = 0;
          if (iVar3 == iVar2) {
            lVar13 = lVar13 + 1;
            piVar12 = piVar12 + 1;
            *piVar12 = iVar10;
            goto LAB_829a4288;
          }
        }
        *(int *)((int)aiStack_70 + iVar11) = iVar10;
      }
LAB_829a4288:
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar8 < *(uint *)(param_1 + 0x4c));
    uVar8 = 0;
    if (*(uint *)(param_1 + 0x4c) != 0) {
      iVar11 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x230);
        if (((*(uint **)(iVar11 + iVar1) != (uint *)0x0) &&
            (uVar9 = **(uint **)(iVar11 + iVar1), uVar9 != 0)) &&
           ((uVar9 & 0xfff00000) != 0x72100000)) {
          if (*(int *)((int)aiStack_70 + iVar11) != 0) {
            lVar7 = -0x7fffbffb;
            goto LAB_829a4458;
          }
          uVar5 = *(undefined4 *)(iVar11 + iVar1);
          *(undefined4 *)(iVar11 + iVar1) = 0;
          *(undefined4 *)((int)aiStack_70 + iVar11) = uVar5;
        }
        uVar8 = uVar8 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar8 < *(uint *)(param_1 + 0x4c));
    }
    if (((*(ushort *)(param_1 + 0xca) < 0x102) ||
        (lVar7 = fn_829A0220(param_1,aiStack_70 + 4,lVar13,aiStack_70,1), -1 < lVar7)) &&
       ((lVar7 = fn_829A0220(param_1,aiStack_70 + 4,lVar13,aiStack_70,2), -1 < lVar7 &&
        ((lVar7 = fn_829A0220(param_1,aiStack_70 + 4,lVar13,aiStack_70,3), -1 < lVar7 &&
         (lVar7 = fn_8299FC30(param_1,aiStack_70 + 4,lVar13,aiStack_70), -1 < lVar7)))))) {
      uVar8 = 0;
      bVar6 = false;
      if (*(int *)(param_1 + 0x4c) != 0) {
        piVar12 = aiStack_70 + 4;
        do {
          if (*piVar12 != 0) {
            fn_82975B00(param_1,*(undefined4 *)(*piVar12 + 0x3c),0x11ab,0xffffffff82051a38,
                              *(undefined1 *)(param_1 + 0xcb));
            bVar6 = true;
            lVar7 = -0x7fffbffb;
          }
          uVar8 = uVar8 + 1;
          piVar12 = piVar12 + 1;
        } while (uVar8 < *(uint *)(param_1 + 0x4c));
      }
      if ((int)lVar7 != -0x7fffbffb) {
        uVar8 = 0;
        if (*(int *)(param_1 + 0x4c) != 0) {
          iVar11 = 0;
          do {
            uVar8 = uVar8 + 1;
            *(undefined4 *)(iVar11 + *(int *)(param_1 + 0x234)) =
                 *(undefined4 *)((int)aiStack_70 + iVar11);
            iVar11 = iVar11 + 4;
          } while (uVar8 < *(uint *)(param_1 + 0x4c));
        }
        fn_8265C990(*(undefined4 *)(param_1 + 0x230),0x24810000);
        *(undefined4 *)(param_1 + 0x230) = 0;
        lVar7 = 0;
        *(undefined4 *)(param_1 + 0x224) = 0;
      }
      if (-1 < (int)lVar7) {
        return lVar7;
      }
    }
LAB_829a4458:
    uVar8 = 0;
    if (*(uint *)(param_1 + 0x4c) != 0) {
      do {
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_1 + 0x4c));
    }
    if (!bVar6) {
      fn_82975B00(param_1,0,0x11ab,0xffffffff820519b8,*(undefined1 *)(param_1 + 0xcb));
    }
  }
  else {
    lVar7 = -0x7fffbffb;
  }
  return lVar7;
}

