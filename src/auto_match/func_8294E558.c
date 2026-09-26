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
extern unsigned int *auStack_120;
extern unsigned int *auStack_150;
extern unsigned int *auStack_80;
extern int fn_8294AC48();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern int fn_82F69148();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


longlong fn_8294E558(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar10;
  int iVar11;
  longlong lVar9;
  int *piVar12;
  bool bVar13;
  int iVar14;
  ulonglong uVar15;
  double dVar16;
  undefined4 auStack_150 [4];
  int aiStack_140 [8];
  undefined1 auStack_120 [16];
  int aiStack_110 [4];
  int aiStack_100 [4];
  int aiStack_f0 [28];
  undefined1 auStack_80 [128];
  
  iVar11 = 0;
  aiStack_140[3] = 3;
  uVar1 = **(uint **)(param_1 + 0x104);
  auStack_150[0] = 0;
  uVar7 = (ulonglong)uVar1;
  uVar6 = uVar7 & 0xfffff;
  aiStack_140[0] = 0;
  aiStack_140[1] = 1;
  aiStack_140[2] = 2;
  iVar10 = fn_8294AC48(param_1,*(uint **)(param_1 + 0x104),0xffffffff82036bf0,auStack_80,
                         auStack_150,auStack_120,aiStack_140,uVar6);
  if (iVar10 == 0) {
    iVar10 = fn_82963998(0x74);
    if (iVar10 != 0) {
      iVar11 = fn_829632A0();
    }
    if (iVar11 == 0) {
      return -0x7ff8fff2;
    }
    uVar15 = 0x7460000074600000;
LAB_8294e6d8:
    lVar9 = fn_82963A30(iVar11,uVar15 & 0xfff00000 | uVar6,(uVar7 & 0xfffff) << 1,uVar6,0);
    if ((lVar9 < 0) || (lVar9 = fn_829632F0(iVar11,*(undefined4 *)(param_1 + 0x104)), lVar9 < 0))
    goto LAB_8294e618;
    lVar9 = (uVar7 & 0xfffff) << 2;
    fn_82F68CC0(*(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10),
                 lVar9);
    fn_82F68CC0(*(undefined4 *)(iVar11 + 8),auStack_120,lVar9);
    piVar12 = aiStack_110;
  }
  else {
    iVar10 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82036b90,auStack_80,
                           auStack_150,auStack_120,aiStack_140,uVar6);
    if (iVar10 == 0) {
      iVar10 = fn_82963998(0x74);
      if (iVar10 != 0) {
        iVar11 = fn_829632A0();
      }
      if (iVar11 == 0) {
        return -0x7ff8fff2;
      }
      uVar15 = 0x7470000074700000;
      goto LAB_8294e6d8;
    }
    lVar9 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82036c50,auStack_80,
                          auStack_150,auStack_120,aiStack_140,uVar6);
    if ((int)lVar9 != 0) {
      return lVar9;
    }
    iVar10 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(aiStack_100[0] * 4 + iVar10);
    iVar14 = *(int *)(iVar3 + 0x3c);
    if (iVar14 == 0x80000) {
      if ((uVar1 & 0xfffff) != 0) {
        fn_82F69148(aiStack_140,aiStack_f0,(uVar7 & 0xfffff) << 2);
        iVar14 = 0;
        uVar15 = uVar6;
        do {
          uVar15 = uVar15 - 1;
          *(undefined4 *)((int)aiStack_140 + iVar14 + 0x10) =
               *(undefined4 *)(*(int *)(*(int *)((int)aiStack_100 + iVar14) * 4 + iVar10) + 0x38);
          iVar14 = iVar14 + 4;
        } while (uVar15 != 0);
      }
    }
    else {
      iVar4 = *(int *)(aiStack_f0[0] * 4 + iVar10);
      iVar2 = *(int *)(iVar4 + 0x3c);
      if (iVar2 == 0x80000) {
        if ((uVar1 & 0xfffff) != 0) {
          fn_82F69148(aiStack_140,aiStack_100,(uVar7 & 0xfffff) << 2);
          iVar14 = 0;
          uVar15 = uVar6;
          do {
            uVar15 = uVar15 - 1;
            *(undefined4 *)((int)aiStack_140 + iVar14 + 0x10) =
                 *(undefined4 *)(*(int *)(*(int *)((int)aiStack_f0 + iVar14) * 4 + iVar10) + 0x38);
            iVar14 = iVar14 + 4;
          } while (uVar15 != 0);
        }
      }
      else {
        if (uVar6 != 1) {
          return 1;
        }
        iVar3 = *(int *)(iVar3 + 0x48);
        if (iVar3 == -1) {
LAB_8294e84c:
          iVar14 = *(int *)(iVar4 + 0x48);
          if (iVar14 == -1) {
            return 1;
          }
          puVar5 = *(uint **)(iVar14 * 4 + *(int *)(param_1 + 0x18));
          if ((*puVar5 & 0xfff00000) != 0x10100000) {
            return 1;
          }
          if ((*puVar5 & 0xfffff) != 1) {
            return 1;
          }
          if (iVar2 != 0) {
            return 1;
          }
          aiStack_140[0] = aiStack_100[0];
        }
        else {
          puVar5 = *(uint **)(iVar3 * 4 + *(int *)(param_1 + 0x18));
          if ((((*puVar5 & 0xfff00000) != 0x10100000) || ((*puVar5 & 0xfffff) != 1)) ||
             (iVar14 != 0)) goto LAB_8294e84c;
          aiStack_140[0] = aiStack_f0[0];
        }
        aiStack_140[4] = *(undefined4 *)puVar5[2];
      }
    }
    bVar13 = true;
    bVar8 = true;
    if ((uVar1 & 0xfffff) != 0) {
      piVar12 = aiStack_110;
      uVar15 = uVar6;
      do {
        iVar14 = *(int *)(piVar12[-4] * 4 + iVar10);
        if ((*(uint *)(*(int *)(*(int *)(iVar14 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
            == 0) {
          bVar8 = false;
          bVar13 = false;
        }
        dVar16 = *(double *)(iVar14 + 0x20);
        if (dVar16 != lbl_82005758) {
          bVar8 = false;
        }
        if (dVar16 != lbl_82005710) {
          bVar13 = false;
        }
        iVar14 = *(int *)(*piVar12 * 4 + iVar10);
        if ((*(uint *)(*(int *)(*(int *)(iVar14 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
            == 0) {
          bVar8 = false;
          bVar13 = false;
        }
        dVar16 = *(double *)(iVar14 + 0x20);
        if (dVar16 != lbl_82005710) {
          bVar8 = false;
        }
        if (dVar16 != lbl_82005758) {
          bVar13 = false;
        }
        piVar12 = piVar12 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      if ((!bVar8) && (!bVar13)) {
        return 1;
      }
    }
    iVar10 = fn_82963998(0x74);
    if (iVar10 != 0) {
      iVar11 = fn_829632A0();
    }
    if (iVar11 == 0) {
      return -0x7ff8fff2;
    }
    uVar15 = uVar6 | 0x74600000;
    if (!bVar8) {
      uVar15 = uVar6 | 0x74700000;
    }
    lVar9 = fn_82963A30(iVar11,uVar15,(uVar7 & 0xfffff) << 1,uVar6,0);
    if ((lVar9 < 0) || (lVar9 = fn_829632F0(iVar11,*(undefined4 *)(param_1 + 0x104)), lVar9 < 0))
    goto LAB_8294e618;
    lVar9 = (uVar7 & 0xfffff) << 2;
    fn_82F68CC0(*(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10),
                 lVar9);
    fn_82F68CC0(*(undefined4 *)(iVar11 + 8),aiStack_140,lVar9);
    piVar12 = aiStack_140 + 4;
  }
  fn_82F68CC0(lVar9 + (ulonglong)*(uint *)(iVar11 + 8),piVar12,lVar9);
  lVar9 = fn_82963D50(*(undefined4 *)(param_1 + 0x104),iVar11);
LAB_8294e618:
  fn_82BA02A8(iVar11);
  fn_829639F0(iVar11);
  return lVar9;
}

