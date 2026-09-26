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
extern unsigned int *auStack_150;
extern int fn_8294AC48();
extern int fn_82950978();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82964588();
extern int fn_82964628();
extern int fn_82BA02A8();
extern unsigned int lbl_82002C40;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;


longlong fn_82957130(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  int iVar11;
  undefined8 uVar9;
  int iVar12;
  longlong lVar10;
  longlong lVar13;
  uint uVar14;
  int *piVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 auStack_150 [4];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [64];
  int aiStack_f0 [4];
  int aiStack_e0 [4];
  int aiStack_d0 [52];
  
  uVar1 = **(uint **)(param_1 + 0x104);
  uStack_138 = 2;
  uVar6 = (ulonglong)uVar1;
  uVar17 = uVar6 & 0xfffff;
  uStack_13c = 1;
  auStack_150[0] = 0;
  uStack_140 = 0;
  uStack_134 = 3;
  iVar12 = 0;
  bVar8 = false;
  iVar11 = fn_8294AC48(param_1,*(uint **)(param_1 + 0x104),0xffffffff82035a30,auStack_130,
                         auStack_150,aiStack_f0,&uStack_140,uVar17);
  if (iVar11 == 0) {
LAB_82957598:
    iVar11 = fn_82963998(0x74);
    if (iVar11 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = fn_829632A0();
    }
    if (iVar12 == 0) {
      return -0x7ff8fff2;
    }
    uVar16 = uVar17 | 0x70400000;
    if (!bVar8) {
      uVar16 = uVar17 | 0x70300000;
    }
    lVar10 = fn_82963A30(iVar12,uVar16,uVar17 * 3,uVar17,0);
    if ((lVar10 < 0) || (lVar10 = fn_829632F0(iVar12,*(undefined4 *)(param_1 + 0x104)), lVar10 < 0)
       ) goto LAB_829576a4;
    lVar10 = 0;
    if ((uVar1 & 0xfffff) != 0) {
      iVar11 = 0;
      lVar13 = (uVar6 & 0xfffff) << 2;
      do {
        uVar16 = (uVar6 & 0xfffff) * 2 + lVar10;
        lVar10 = lVar10 + 1;
        uVar2 = *(undefined4 *)((int)aiStack_f0 + iVar11);
        uVar3 = *(undefined4 *)((int)aiStack_e0 + iVar11);
        uVar4 = *(undefined4 *)((int)aiStack_d0 + iVar11);
        *(undefined4 *)(*(int *)(iVar12 + 0x10) + iVar11) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar11);
        *(undefined4 *)(*(int *)(iVar12 + 8) + iVar11) = uVar2;
        iVar11 = iVar11 + 4;
        *(undefined4 *)(*(int *)(iVar12 + 8) + (int)lVar13) = uVar3;
        lVar13 = lVar13 + 4;
        *(undefined4 *)((int)((uVar16 & 0xffffffff) << 2) + *(int *)(iVar12 + 8)) = uVar4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (param_2 == 0) {
      lVar10 = fn_82950978(param_1,iVar12,auStack_130,auStack_150[0]);
      return lVar10;
    }
    lVar10 = fn_82963D50(*(undefined4 *)(param_1 + 0x104));
    if (lVar10 < 0) goto LAB_829576a4;
  }
  else {
    iVar11 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82035a90,auStack_130,
                           auStack_150,aiStack_f0,&uStack_140,uVar17);
    bVar8 = true;
    if (iVar11 == 0) goto LAB_82957598;
    if (param_2 != 0) {
      bVar8 = false;
      iVar11 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82035a30,auStack_130
                             ,auStack_150,aiStack_f0,&uStack_140,uVar17);
      if (iVar11 == 0) goto LAB_82957598;
      iVar11 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82035a90,auStack_130
                             ,auStack_150,aiStack_f0,&uStack_140,uVar17);
    }
    bVar8 = true;
    if (iVar11 == 0) goto LAB_82957598;
    bVar8 = false;
    iVar11 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82035af0,auStack_130,
                           auStack_150,aiStack_f0,&uStack_140,uVar17);
    if ((uVar1 & 0xfffff) != 0) {
      piVar15 = aiStack_f0;
      uVar16 = uVar17;
      do {
        if (*piVar15 != piVar15[4]) {
          iVar11 = 1;
        }
        piVar15 = piVar15 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    if (iVar11 == 0) {
LAB_829573f0:
      uVar16 = 0;
      if ((uVar1 & 0xfffff) != 0) {
        piVar15 = aiStack_f0;
        do {
          if (*piVar15 != piVar15[4]) {
            return 1;
          }
          uVar16 = uVar16 + 1;
          piVar15 = piVar15 + 1;
        } while ((uVar16 & 0xffffffff) < uVar17);
      }
      iVar11 = *(int *)(param_1 + 0x164);
      if (iVar11 == -1) {
        uVar9 = fn_82964588(param_1,0xffffffff8201261c,0x311,1,4);
        *(int *)(param_1 + 0x174) = (int)uVar9;
        if ((int)uVar9 == -1) {
          return -0x7ff8fff2;
        }
        iVar11 = fn_82964628(lbl_82002C40,param_1,uVar9,0,0);
        *(int *)(param_1 + 0x164) = iVar11;
        if (iVar11 == -1) {
          return -0x7ff8fff2;
        }
      }
      bVar7 = true;
      if ((uVar1 & 0xfffff) != 0) {
        piVar15 = aiStack_d0;
        uVar16 = uVar17;
        bVar7 = true;
        do {
          iVar12 = *piVar15;
          piVar15[-8] = iVar11;
          piVar15 = piVar15 + 1;
          bVar7 = (bool)(aiStack_d0[0] == iVar12 & bVar7);
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      iVar11 = *(int *)(aiStack_d0[0] * 4 + *(int *)(param_1 + 0x14));
      if (((*(uint *)(*(int *)(*(int *)(iVar11 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) !=
           0) && (bVar7)) {
        uVar14 = 0;
        piVar15 = (int *)(param_1 + 0x168);
        do {
          if ((*piVar15 == -1) ||
             (*(double *)(*(int *)(*piVar15 * 4 + *(int *)(param_1 + 0x14)) + 0x20) ==
              *(double *)(iVar11 + 0x20))) break;
          uVar14 = uVar14 + 1;
          piVar15 = piVar15 + 1;
        } while (uVar14 < 3);
        if (uVar14 != 3) {
          iVar5 = (uVar14 + 0x5a) * 4;
          iVar12 = *(int *)(iVar5 + param_1);
          if (iVar12 == -1) {
            iVar12 = fn_82964628(*(undefined8 *)(iVar11 + 0x20),param_1,
                                       *(undefined4 *)(param_1 + 0x174),0,uVar14 + 1);
            *(int *)(iVar5 + param_1) = iVar12;
            if (iVar12 == -1) {
              return -0x7ff8fff2;
            }
          }
          if ((uVar1 & 0xfffff) != 0) {
            piVar15 = aiStack_e0 + 3;
            uVar16 = uVar17;
            do {
              piVar15 = piVar15 + 1;
              *piVar15 = iVar12;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
        }
      }
      goto LAB_82957598;
    }
    auStack_150[0] = 0;
    iVar11 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82035b50,auStack_130,
                           auStack_150,aiStack_f0,&uStack_140,uVar17);
    bVar8 = true;
    if ((uVar1 & 0xfffff) != 0) {
      piVar15 = aiStack_f0;
      uVar16 = uVar17;
      do {
        if (*piVar15 != piVar15[4]) {
          iVar11 = 1;
        }
        piVar15 = piVar15 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    if (iVar11 == 0) goto LAB_829573f0;
    auStack_150[0] = 0;
    bVar8 = false;
    iVar11 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82035bb0,auStack_130,
                           auStack_150,aiStack_f0,&uStack_140,uVar17);
    if ((uVar1 & 0xfffff) != 0) {
      piVar15 = aiStack_f0;
      uVar16 = uVar17;
      do {
        if (*piVar15 != piVar15[4]) {
          iVar11 = 1;
        }
        piVar15 = piVar15 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    if (iVar11 == 0) goto LAB_829573f0;
    auStack_150[0] = 0;
    iVar11 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82035c10,auStack_130,
                           auStack_150,aiStack_f0,&uStack_140,uVar17);
    bVar8 = true;
    if ((uVar1 & 0xfffff) != 0) {
      piVar15 = aiStack_f0;
      uVar16 = uVar17;
      do {
        if (*piVar15 != piVar15[4]) {
          iVar11 = 1;
        }
        piVar15 = piVar15 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    if (iVar11 == 0) goto LAB_829573f0;
  }
  lVar10 = 0;
LAB_829576a4:
  if (iVar12 != 0) {
    fn_82BA02A8(iVar12);
    fn_829639F0(iVar12);
  }
  return lVar10;
}

