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
extern int fn_82975B00();
extern unsigned int uStack_a8;


ulonglong fn_82960678(int *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int aiStack_b0 [2];
  undefined8 uStack_a8;
  int aiStack_a0 [40];
  
  if (param_1[0x57] != 0) {
    return 0;
  }
  bVar1 = 0;
  if ((param_1[0x1c] & 0x1000000U) == 0) {
    puVar10 = &uStack_a8;
    bVar2 = false;
    lVar15 = 8;
    do {
      puVar10 = puVar10 + 1;
      *puVar10 = 0;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    uVar13 = 0;
    aiStack_b0[0] = 0;
    aiStack_b0[1] = 0;
    uStack_a8 = 0;
    if (param_1[2] != 0) {
      iVar14 = 0;
      do {
        iVar11 = *(int *)(param_1[5] + iVar14);
        if ((*(uint *)(*(int *)(*(int *)(iVar11 + 4) * 4 + param_1[4]) + 4) & 0x20) != 0) {
          iVar4 = (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(iVar11 + 0x6c));
          uVar6 = (**(code **)(*param_1 + 0x74))(param_1,*(undefined4 *)(iVar11 + 0x6c));
          if (iVar4 == 0xb) {
            if (uVar6 < 4) {
              iVar4 = *(int *)(iVar11 + 0x10);
              aiStack_b0[uVar6] = *(int *)(iVar11 + 0x60);
              aiStack_a0[iVar4 + uVar6 * 4] = 1;
            }
          }
          else if ((((iVar4 == 0xd) && (uVar6 == 0)) && (*(int *)(iVar11 + 0x10) != 0)) && (!bVar2))
          {
            fn_82975B00(param_1,*(undefined4 *)(iVar11 + 0x60),0x11b0,0xffffffff82038698);
            bVar2 = true;
            bVar1 = 1;
          }
        }
        uVar13 = uVar13 + 1;
        iVar14 = iVar14 + 4;
      } while (uVar13 < (uint)param_1[2]);
    }
    bVar3 = false;
    bVar2 = true;
    uVar13 = 0;
    do {
      iVar14 = 0;
      iVar11 = 0;
      lVar15 = 4;
      do {
        iVar4 = uVar13 * 4 + iVar11;
        iVar11 = iVar11 + 1;
        iVar14 = (uint)(aiStack_a0[iVar4] != 0) + iVar14;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      if (iVar14 == 0) {
        if (uVar13 == 0) {
          fn_82975B00(param_1,aiStack_b0[0],0x11b2,0xffffffff82038630);
          bVar1 = 1;
        }
        bVar3 = true;
      }
      else {
        if (iVar14 != 4) {
          fn_82975B00(param_1,aiStack_b0[uVar13],0x11b1,0xffffffff82038670,uVar13);
          bVar1 = 1;
        }
        if (bVar3) {
          bVar2 = false;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < 4);
    if (bVar2) goto LAB_829609d8;
    uVar7 = 0x11ba;
    uVar8 = 0xffffffff820385f4;
    uVar12 = 0;
  }
  else {
    bVar2 = false;
    uVar12 = 0;
    uVar13 = 0;
    aiStack_b0[0] = 0;
    aiStack_b0[1] = 0;
    uStack_a8 = 0;
    if (param_1[2] != 0) {
      iVar14 = 0;
      do {
        iVar11 = *(int *)(param_1[5] + iVar14);
        if ((*(uint *)(*(int *)(*(int *)(iVar11 + 4) * 4 + param_1[4]) + 4) & 0x20) != 0) {
          iVar4 = (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(iVar11 + 0x6c));
          iVar5 = (**(code **)(*param_1 + 0x74))(param_1,*(undefined4 *)(iVar11 + 0x6c));
          if (iVar4 == 1) {
            if (iVar5 == 0) {
              uVar12 = *(undefined4 *)(iVar11 + 0x60);
              aiStack_b0[*(int *)(iVar11 + 0x10)] = 1;
            }
          }
          else if (((iVar4 == 5) && (iVar5 == 0)) && ((*(int *)(iVar11 + 0x10) != 0 && (!bVar2)))) {
            fn_82975B00(param_1,*(undefined4 *)(iVar11 + 0x60),0x11bc,0xffffffff820386f4);
            bVar2 = true;
            bVar1 = 1;
          }
        }
        uVar13 = uVar13 + 1;
        iVar14 = iVar14 + 4;
      } while (uVar13 < (uint)param_1[2]);
    }
    iVar14 = 0;
    piVar9 = aiStack_b0;
    lVar15 = 4;
    do {
      if (*piVar9 != 0) {
        iVar14 = iVar14 + 1;
      }
      piVar9 = piVar9 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    if (iVar14 == 4) goto LAB_829609d8;
    uVar7 = 0x11bd;
    uVar8 = 0xffffffff820386b0;
  }
  fn_82975B00(param_1,uVar12,uVar7,uVar8);
  bVar1 = 1;
LAB_829609d8:
  return -(ulonglong)bVar1 & 0xffffffff80004005;
}

