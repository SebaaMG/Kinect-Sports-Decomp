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
extern int fn_829E98F0();
extern int fn_829EAB30();
extern int fn_829EE260();
extern int fn_829EE270();
extern int fn_82F68CC0();
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int iStack00000044;
extern unsigned int iStack_b0;


int fn_829EAE90(undefined8 param_1,undefined4 *param_2,int param_3,int param_4,longlong param_5,
                 ulonglong param_6,int param_7,ulonglong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined4 uVar19;
  longlong lVar18;
  int *piVar20;
  longlong lVar21;
  int *piVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iStack00000024;
  int iStack0000002c;
  int iStack00000044;
  int iStack_b0;
  float afStack_a8 [42];
  
  uVar17 = 0;
  iStack_b0 = 0;
  uVar23 = 0;
  iVar8 = (int)param_6;
  iVar10 = (int)param_8;
  uVar14 = param_6;
  uVar24 = 0xffffffffffffffff;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  iStack00000044 = param_7;
  if (0 < iVar8) {
    lVar21 = param_5;
    do {
      iVar2 = fn_829EE270(param_2 + 3,uVar23);
      iVar2 = iVar2 + (int)lVar21;
      uVar14 = param_8;
      if (iVar10 == 0) {
        iVar3 = fn_829EE260(param_2 + 3,uVar23);
        uVar14 = (ulonglong)*(uint *)(iVar3 + 0x1c);
      }
      if (((iVar2 < param_3) || (uVar15 = uVar24, param_4 <= (int)uVar14 + iVar2 + -1)) &&
         (uVar14 = uVar17, uVar15 = uVar17,
         (int)((iVar8 >> 1) + (uint)(iVar8 < 0 && (param_6 & 1) != 0)) <= (int)uVar17)) break;
      uVar23 = uVar23 + 1;
      if ((ulonglong)(uint)((int)(param_2[6] - param_2[5]) / 0x24) <= (uVar23 & 0xffffffff)) {
        uVar23 = 0;
        lVar21 = (ulonglong)(uint)param_2[8] + lVar21;
      }
      uVar17 = uVar17 + 1;
      uVar14 = param_6;
      uVar24 = uVar15;
    } while ((int)uVar17 < iVar8);
  }
  lVar11 = uVar24 + 1;
  iVar3 = (int)(param_6 - uVar14);
  iVar9 = iVar8 - iVar3;
  lVar12 = 0;
  iVar2 = (int)lVar11;
  uVar24 = 0;
  uVar19 = (undefined4)param_5;
  lVar21 = 0;
  if (0 < lVar11) {
    lVar16 = lVar11;
    lVar18 = param_5;
    do {
      uVar17 = param_8;
      if (iVar10 == 0) {
        iVar6 = fn_829EE260(param_2 + 3,uVar24);
        uVar17 = (ulonglong)*(uint *)(iVar6 + 0x1c);
      }
      lVar12 = uVar17 + lVar12;
      uVar24 = uVar24 + 1;
      if ((ulonglong)(uint)((int)(param_2[6] - param_2[5]) / 0x24) <= (uVar24 & 0xffffffff)) {
        uVar24 = 0;
        lVar18 = (ulonglong)(uint)param_2[8] + lVar18;
      }
      uVar19 = (undefined4)lVar18;
      lVar16 = lVar16 + -1;
      lVar21 = lVar11;
    } while (lVar16 != 0);
  }
  param_2[0x13] = uVar19;
  param_2[0x14] = (int)uVar24;
  if ((int)lVar21 < (int)uVar14) {
    lVar16 = uVar14 - lVar21;
    lVar21 = lVar16 + lVar21;
    do {
      uVar24 = -(ulonglong)
                (uVar24 + 1 < (ulonglong)(longlong)((int)(param_2[6] - param_2[5]) / 0x24)) &
               uVar24 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  lVar16 = 0;
  if ((int)lVar21 < iVar8) {
    lVar21 = param_6 - lVar21;
    do {
      uVar17 = param_8;
      if (iVar10 == 0) {
        iVar6 = fn_829EE260(param_2 + 3,uVar24);
        uVar17 = (ulonglong)*(uint *)(iVar6 + 0x1c);
      }
      lVar16 = uVar17 + lVar16;
      lVar21 = lVar21 + -1;
      uVar24 = -(ulonglong)
                (uVar24 + 1 < (ulonglong)(longlong)((int)(param_2[6] - param_2[5]) / 0x24)) &
               uVar24 + 1;
    } while (lVar21 != 0);
  }
  if (iVar9 != iVar2) {
    piVar20 = param_2 + 6;
    piVar13 = param_2 + 5;
    if (iVar10 == 0) {
      lVar21 = 0;
      uVar24 = 0;
      uVar7 = 0;
      if ((int)(param_2[6] - param_2[5]) / 0x24 != 0) {
        do {
          iVar6 = fn_829EE260(param_2 + 3,uVar24);
          uVar24 = uVar24 + 1;
          lVar21 = (ulonglong)*(uint *)(iVar6 + 0x1c) + lVar21;
          uVar7 = (*piVar20 - *piVar13) / 0x24;
        } while ((uVar24 & 0xffffffff) < (ulonglong)uVar7);
      }
    }
    else {
      uVar7 = (int)(param_2[6] - param_2[5]) / 0x24;
      lVar21 = (longlong)(int)uVar7 * (longlong)iVar10;
    }
    iStack_b0 = fn_829EAB30(param_2 + 0x15,uVar7,lVar21);
    if (iStack_b0 < 0) {
      return iStack_b0;
    }
    uVar17 = 0;
    uVar24 = (ulonglong)(uint)param_2[0x1a];
    param_2[0x15] = param_2[8];
    if ((*piVar20 - *piVar13) / 0x24 != 0) {
      iVar6 = 0;
      do {
        piVar22 = (int *)(param_2[0x17] + iVar6);
        iVar4 = fn_829EE260(param_2 + 3,uVar17);
        iVar5 = fn_829EE270(param_2 + 3,uVar17);
        *piVar22 = iVar5 * param_7;
        iVar5 = iVar10;
        if (iVar10 == 0) {
          iVar5 = *(int *)(iVar4 + 0x1c);
        }
        piVar22[1] = iVar5;
        piVar22[2] = (int)uVar24;
        fn_82F68CC0(uVar24,*(undefined4 *)(iVar4 + 0x18),*(int *)(iVar4 + 0x1c) << 2);
        uVar17 = uVar17 + 1;
        iVar6 = iVar6 + 0xc;
        uVar24 = ((ulonglong)(uint)piVar22[1] & 0x3fffffff) * 4 + uVar24;
      } while ((uVar17 & 0xffffffff) < (ulonglong)(uint)((*piVar20 - *piVar13) / 0x24));
    }
  }
  if ((((iVar2 == 0) || (iStack_b0 = fn_829EAB30(param_2 + 0xd,lVar11,lVar12), -1 < iStack_b0)) &&
      ((iVar3 == 0 ||
       (iStack_b0 = fn_829EAB30(param_2 + 0x1b,param_6 - uVar14,lVar16), -1 < iStack_b0)))) &&
     ((iVar2 != 0 || (iVar3 != 0)))) {
    uVar24 = (ulonglong)(uint)param_2[0x12];
    uVar14 = 0;
    piVar13 = (int *)param_2[0xf];
    iVar3 = 0;
    if (0 < iVar8) {
      do {
        if ((iVar3 < iVar2) || (iVar9 <= iVar3)) {
          if (iVar3 == iVar9) {
            uVar24 = (ulonglong)(uint)param_2[0x20];
            piVar13 = (int *)param_2[0x1d];
          }
          iVar6 = fn_829EE260(param_2 + 3,uVar14);
          uVar7 = *(uint *)(iVar6 + 0x1c);
          uVar17 = param_8;
          if (iVar10 == 0) {
            uVar17 = (ulonglong)uVar7;
          }
          lVar12 = fn_829EE270(param_2 + 3,uVar14);
          lVar12 = lVar12 + param_5;
          lVar21 = fn_829E98F0(lVar12,iStack00000024,iStack0000002c,*param_2,0);
          lVar16 = fn_829E98F0(lVar12 + uVar17 + -1);
          lVar11 = lVar21;
          if (((int)lVar21 < (int)lVar16) || (lVar11 = lVar16, (int)lVar21 <= (int)lVar16)) {
            lVar21 = lVar16;
          }
          uVar17 = param_8;
          if (iVar10 == 0) {
            uVar17 = (lVar21 - lVar11) + 1;
          }
          lVar21 = (lVar21 - uVar17) + 1;
          if ((int)lVar21 < iStack00000024) {
            lVar21 = lVar11;
          }
          lVar11 = 0;
          piVar13[1] = (int)uVar17;
          iVar5 = (int)uVar24;
          piVar13[2] = iVar5;
          *piVar13 = (int)lVar21 * iStack00000044;
          piVar13 = piVar13 + 3;
          if (0 < (int)uVar7) {
            iVar4 = 0;
            do {
              afStack_a8[0] = *(float *)(iVar4 + *(int *)(iVar6 + 0x18));
              lVar16 = fn_829E98F0(lVar11 + lVar12,iStack00000024,iStack0000002c,*param_2,
                                     afStack_a8);
              lVar11 = lVar11 + 1;
              iVar1 = (int)((lVar16 - lVar21 & 0xffffffffU) << 2);
              iVar4 = iVar4 + 4;
              *(float *)(iVar1 + iVar5) = afStack_a8[0] + *(float *)(iVar1 + iVar5);
            } while ((int)lVar11 < (int)uVar7);
          }
          uVar24 = (uVar17 & 0x3fffffff) * 4 + uVar24;
        }
        uVar14 = uVar14 + 1;
        if ((ulonglong)(uint)((int)(param_2[6] - param_2[5]) / 0x24) <= (uVar14 & 0xffffffff)) {
          uVar14 = 0;
          param_5 = (ulonglong)(uint)param_2[8] + param_5;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar8);
    }
  }
  return iStack_b0;
}

