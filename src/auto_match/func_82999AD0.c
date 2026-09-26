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
extern unsigned int *auStack_130;
extern int fn_8294AC48();
extern int fn_82964628();
extern unsigned int iStack_d0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820380A0;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_a4;


undefined8 fn_82999AD0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar13;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 *puVar15;
  int iVar16;
  longlong lVar14;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 auStack_130 [4];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 *puStack_110;
  undefined4 *puStack_10c;
  uint *puStack_108;
  int iStack_d0;
  int aiStack_cc [10];
  undefined4 uStack_a4;
  int aiStack_a0 [40];
  
  auStack_130[0] = 0;
  uStack_120 = 0;
  uStack_11c = 1;
  uStack_118 = 2;
  uStack_114 = 3;
  if (*(short *)(param_1 + 0xca) == 0x104) {
    return 0;
  }
  uVar10 = **(uint **)(param_1 + 0x104);
  uVar2 = (ulonglong)uVar10;
  uVar18 = uVar2 & 0xfffff;
  uVar8 = fn_8294AC48(param_1,*(uint **)(param_1 + 0x104),0xffffffff8204fef0,&puStack_110,
                            auStack_130,&iStack_d0,&uStack_120,uVar18);
  if ((int)uVar8 < 0) {
    return uVar8;
  }
  if ((int)uVar8 == 0) {
    bVar5 = false;
    bVar6 = false;
    if ((uVar10 & 0xfffff) == 0) {
      return 1;
    }
    piVar13 = aiStack_a0;
    uVar17 = uVar18;
    do {
      iVar16 = *(int *)(*piVar13 * 4 + *(int *)(param_1 + 0x14));
      if (((*(uint *)(*(int *)(*(int *)(iVar16 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) ==
           0) || (*(double *)(iVar16 + 0x20) != lbl_82005730)) {
        bVar6 = true;
      }
      else {
        bVar5 = true;
      }
      piVar13 = piVar13 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  else {
    uVar8 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff8204ff70,
                              &puStack_110,auStack_130,&iStack_d0,&uStack_120,uVar18);
    dVar7 = lbl_820380A0;
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    bVar5 = false;
    bVar6 = false;
    bVar3 = false;
    bVar4 = false;
    if ((uVar10 & 0xfffff) == 0) {
      return 1;
    }
    piVar13 = &iStack_d0;
    uVar17 = uVar18;
    do {
      iVar16 = *(int *)(*piVar13 * 4 + *(int *)(param_1 + 0x14));
      if (((*(uint *)(*(int *)(*(int *)(iVar16 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) ==
           0) || (*(double *)(iVar16 + 0x20) != lbl_820380A0)) {
        bVar4 = true;
      }
      else {
        bVar3 = true;
      }
      piVar13 = piVar13 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    if ((bVar3) && (!bVar4)) {
      puVar15 = &uStack_a4;
      uVar17 = uVar18;
      do {
        uVar9 = puVar15[-0xb];
        puVar15[-0xb] = puVar15[1];
        puVar15 = puVar15 + 1;
        *puVar15 = uVar9;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if ((uVar10 & 0xfffff) == 0) {
      return 1;
    }
    piVar13 = aiStack_a0;
    uVar17 = uVar18;
    do {
      iVar16 = *(int *)(*piVar13 * 4 + *(int *)(param_1 + 0x14));
      if (((*(uint *)(*(int *)(*(int *)(iVar16 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) ==
           0) || (*(double *)(iVar16 + 0x20) != dVar7)) {
        bVar6 = true;
      }
      else {
        bVar5 = true;
      }
      piVar13 = piVar13 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if ((!bVar5) || (bVar6)) {
    return 1;
  }
  uVar17 = 1;
  if (1 < uVar18) {
    piVar13 = aiStack_cc;
    do {
      if (*piVar13 != iStack_d0) {
        return 1;
      }
      uVar17 = uVar17 + 1;
      piVar13 = piVar13 + 1;
    } while ((uVar17 & 0xffffffff) < uVar18);
  }
  uVar17 = 0;
  *puStack_10c = 0x10000001;
  uVar10 = 0;
  puStack_10c[1] = 1;
  puStack_10c[3] = 1;
  *puStack_108 = (uint)uVar18 | 0x70f00000;
  *puStack_110 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar16 = 0;
    do {
      iVar1 = *(int *)(iVar16 + *(int *)(param_1 + 0x14));
      if ((*(int *)(param_1 + 0x88) == *(int *)(iVar1 + 4)) &&
         (uVar11 = (ulonglong)*(uint *)(iVar1 + 0xc), (uVar17 & 0xffffffff) <= uVar11)) {
        uVar17 = uVar11 + 1;
      }
      uVar10 = uVar10 + 1;
      iVar16 = iVar16 + 4;
    } while (uVar10 < *(uint *)(param_1 + 8));
  }
  uVar9 = fn_82964628(lbl_82005710,param_1,*(undefined4 *)(param_1 + 0x88),uVar17,
                            *(undefined4 *)
                             (*(int *)(*(int *)puStack_108[2] * 4 + *(int *)(param_1 + 0x14)) + 0x10
                             ));
  *(undefined4 *)puStack_10c[4] = uVar9;
  *(int *)puStack_10c[2] = iStack_d0;
  if (*(int *)puStack_10c[4] != -1) {
    iVar16 = 0;
    uVar17 = uVar18;
    do {
      *(undefined4 *)(puStack_108[2] + iVar16) = *(undefined4 *)puStack_10c[4];
      iVar16 = iVar16 + 4;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    lVar12 = 0;
    lVar14 = (uVar2 & 0xfffff) << 2;
    do {
      uVar17 = (uVar2 & 0xfffff) * 2 + lVar12;
      lVar12 = lVar12 + 1;
      iVar1 = (int)((uVar17 & 0xffffffff) << 2);
      iVar16 = *(int *)(*(int *)(param_1 + 0x104) + 8);
      uVar9 = *(undefined4 *)(iVar16 + (int)lVar14);
      *(undefined4 *)(iVar16 + (int)lVar14) = *(undefined4 *)(iVar1 + iVar16);
      lVar14 = lVar14 + 4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar1) = uVar9;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    *(undefined4 *)(param_1 + 0x450) = 1;
    return 0;
  }
  return 0xffffffff8007000e;
}

