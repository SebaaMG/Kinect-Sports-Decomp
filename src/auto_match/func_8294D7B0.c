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
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;


longlong fn_8294D7B0(int param_1)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar6;
  int iVar7;
  longlong lVar5;
  int *piVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  undefined4 auStack_150 [4];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int aiStack_130 [4];
  undefined1 auStack_120 [16];
  int aiStack_110 [4];
  int aiStack_100 [4];
  int aiStack_f0 [28];
  undefined1 auStack_80 [128];
  
  iVar7 = 0;
  uStack_134 = 3;
  bVar2 = true;
  uVar1 = **(uint **)(param_1 + 0x104);
  auStack_150[0] = 0;
  uVar4 = (ulonglong)uVar1;
  uVar3 = uVar4 & 0xfffff;
  uStack_140 = 0;
  uStack_13c = 1;
  uStack_138 = 2;
  iVar6 = fn_8294AC48(param_1,*(uint **)(param_1 + 0x104),0xffffffff82036710,auStack_80,
                        auStack_150,auStack_120,&uStack_140,uVar3);
  if (iVar6 == 0) {
    iVar6 = fn_82963998(0x74);
    if (iVar6 != 0) {
      iVar7 = fn_829632A0();
    }
    if (iVar7 == 0) {
      return -0x7ff8fff2;
    }
    uVar11 = 0x7360000073600000;
  }
  else {
    iVar6 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82036770,auStack_80,
                          auStack_150,auStack_120,&uStack_140,uVar3);
    if (iVar6 != 0) {
      lVar5 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff820367d0,auStack_80,
                            auStack_150,auStack_120,&uStack_140,uVar3);
      if ((int)lVar5 != 0) {
        return lVar5;
      }
      iVar6 = *(int *)(param_1 + 0x14);
      if (*(int *)(*(int *)(aiStack_100[0] * 4 + iVar6) + 0x3c) == 0x80000) {
        if ((uVar1 & 0xfffff) != 0) {
          fn_82F69148(&uStack_140,aiStack_f0,(uVar4 & 0xfffff) << 2);
          iVar10 = 0;
          uVar11 = uVar3;
          do {
            uVar11 = uVar11 - 1;
            *(undefined4 *)((int)aiStack_130 + iVar10) =
                 *(undefined4 *)(*(int *)(*(int *)((int)aiStack_100 + iVar10) * 4 + iVar6) + 0x38);
            iVar10 = iVar10 + 4;
          } while (uVar11 != 0);
        }
      }
      else {
        if (*(int *)(*(int *)(aiStack_f0[0] * 4 + iVar6) + 0x3c) != 0x80000) {
          return 1;
        }
        if ((uVar1 & 0xfffff) != 0) {
          fn_82F69148(&uStack_140,aiStack_100,(uVar4 & 0xfffff) << 2);
          iVar10 = 0;
          uVar11 = uVar3;
          do {
            uVar11 = uVar11 - 1;
            *(undefined4 *)((int)aiStack_130 + iVar10) =
                 *(undefined4 *)(*(int *)(*(int *)((int)aiStack_f0 + iVar10) * 4 + iVar6) + 0x38);
            iVar10 = iVar10 + 4;
          } while (uVar11 != 0);
        }
      }
      bVar9 = true;
      if ((uVar1 & 0xfffff) != 0) {
        piVar8 = aiStack_110;
        uVar11 = uVar3;
        do {
          iVar10 = *(int *)(piVar8[-4] * 4 + iVar6);
          if ((*(uint *)(*(int *)(*(int *)(iVar10 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
              == 0) {
            bVar2 = false;
            bVar9 = false;
          }
          dVar12 = *(double *)(iVar10 + 0x20);
          if (dVar12 != lbl_82005710) {
            bVar2 = false;
          }
          if (dVar12 != lbl_82005758) {
            bVar9 = false;
          }
          iVar10 = *(int *)(*piVar8 * 4 + iVar6);
          if ((*(uint *)(*(int *)(*(int *)(iVar10 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
              == 0) {
            bVar2 = false;
            bVar9 = false;
          }
          dVar12 = *(double *)(iVar10 + 0x20);
          if (dVar12 != lbl_82005758) {
            bVar2 = false;
          }
          if (dVar12 != lbl_82005710) {
            bVar9 = false;
          }
          piVar8 = piVar8 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        if ((!bVar2) && (!bVar9)) {
          return 1;
        }
      }
      iVar6 = fn_82963998(0x74);
      if (iVar6 != 0) {
        iVar7 = fn_829632A0();
      }
      if (iVar7 == 0) {
        return -0x7ff8fff2;
      }
      uVar11 = uVar3 | 0x73600000;
      if (!bVar2) {
        uVar11 = uVar3 | 0x73500000;
      }
      lVar5 = fn_82963A30(iVar7,uVar11,(uVar4 & 0xfffff) << 1,uVar3,0);
      if ((-1 < lVar5) && (lVar5 = fn_829632F0(iVar7,*(undefined4 *)(param_1 + 0x104)), -1 < lVar5)
         ) {
        lVar5 = (uVar4 & 0xfffff) << 2;
        fn_82F68CC0(*(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10)
                     ,lVar5);
        fn_82F68CC0(*(undefined4 *)(iVar7 + 8),&uStack_140,lVar5);
        piVar8 = aiStack_130;
        goto code_r0x8294d8d0;
      }
      goto LAB_8294d878;
    }
    iVar6 = fn_82963998(0x74);
    if (iVar6 != 0) {
      iVar7 = fn_829632A0();
    }
    if (iVar7 == 0) {
      return -0x7ff8fff2;
    }
    uVar11 = 0x7350000073500000;
  }
  lVar5 = fn_82963A30(iVar7,uVar11 & 0xfff00000 | uVar3,(uVar4 & 0xfffff) << 1,uVar3,0);
  if ((-1 < lVar5) && (lVar5 = fn_829632F0(iVar7,*(undefined4 *)(param_1 + 0x104)), -1 < lVar5)) {
    lVar5 = (uVar4 & 0xfffff) << 2;
    fn_82F68CC0(*(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10),
                 lVar5);
    fn_82F68CC0(*(undefined4 *)(iVar7 + 8),auStack_120,lVar5);
    piVar8 = aiStack_110;
code_r0x8294d8d0:
    fn_82F68CC0(lVar5 + (ulonglong)*(uint *)(iVar7 + 8),piVar8,lVar5);
    lVar5 = fn_82963D50(*(undefined4 *)(param_1 + 0x104),iVar7);
    fn_82BA02A8(iVar7);
    fn_829639F0(iVar7);
    return lVar5;
  }
LAB_8294d878:
  fn_82BA02A8(iVar7);
  fn_829639F0(iVar7);
  return lVar5;
}

