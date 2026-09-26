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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_150;
extern unsigned int *auStack_f0;
extern int fn_8294AC48();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82964628();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_d0;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


longlong fn_829504D0(int *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar4;
  longlong lVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 auStack_150 [4];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int *apiStack_130 [16];
  undefined8 auStack_f0 [2];
  uint uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d0;
  
  iVar5 = 0;
  uStack_134 = 3;
  uVar1 = *(uint *)param_1[0x41];
  auStack_150[0] = 0;
  uVar8 = uVar1 & 0xfffff;
  uStack_140 = 0;
  uStack_13c = 1;
  uStack_138 = 2;
  bVar2 = false;
  iVar4 = fn_8294AC48(param_1,(uint *)param_1[0x41],0xffffffff82037650,apiStack_130,auStack_150,
                        auStack_f0,&uStack_140,uVar8);
  if (iVar4 != 0) {
    lVar3 = fn_8294AC48(param_1,param_1[0x41],0xffffffff820376b0,apiStack_130,auStack_150,
                          auStack_f0,&uStack_140,uVar8);
    if ((int)lVar3 != 0) {
      return lVar3;
    }
    bVar2 = true;
  }
  if (*apiStack_130[0] != 0x50000002) {
    return 1;
  }
  uVar9 = 1;
  if (1 < uVar8) {
    iVar6 = (uVar1 & 0xfffff) * 4;
    iVar7 = 4;
    iVar4 = iVar6;
    do {
      iVar4 = iVar4 + 4;
      if (*(int *)(iVar7 + (int)*(int **)(param_1[0x41] + 8)) != **(int **)(param_1[0x41] + 8)) {
        return 1;
      }
      if (*(int *)(iVar4 + *(int *)(param_1[0x41] + 8)) !=
          *(int *)(iVar6 + *(int *)(param_1[0x41] + 8))) {
        return 1;
      }
      uVar9 = uVar9 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar9 < uVar8);
  }
  iVar4 = fn_82963998(0x74);
  if (iVar4 != 0) {
    iVar5 = fn_829632A0();
  }
  if (iVar5 == 0) {
    return -0x7ff8fff2;
  }
  lVar3 = fn_82963A30(iVar5,0x70800002,6,uVar8,0);
  if ((-1 < lVar3) && (lVar3 = fn_829632F0(iVar5,param_1[0x41]), -1 < lVar3)) {
    fn_82F68CC0(*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(param_1[0x41] + 0x10),uVar1 & 0xfffff
                );
    **(undefined8 **)(iVar5 + 8) = auStack_f0[0];
    if (bVar2) {
      iVar4 = param_1[5];
      iVar6 = *(int *)(uStack_e0 * 4 + iVar4);
      iVar7 = *(int *)(uStack_dc * 4 + iVar4);
      uVar1 = *(uint *)(iVar6 + 0x38);
      uVar8 = uStack_e0;
      if (uVar1 != 0xffffffff) {
        iVar6 = *(int *)(uVar1 * 4 + iVar4);
        uVar8 = uVar1;
      }
      uVar1 = *(uint *)(iVar7 + 0x38);
      uVar9 = uStack_dc;
      if (uVar1 != 0xffffffff) {
        iVar7 = *(int *)(uVar1 * 4 + param_1[5]);
        uVar9 = uVar1;
      }
      uVar10 = lbl_82005710;
      iVar4 = fn_82964628(lbl_82005710,param_1,*(undefined4 *)(iVar6 + 4),
                                *(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar6 + 0x10));
      iVar6 = fn_82964628(uVar10,param_1,*(undefined4 *)(iVar7 + 4),
                                *(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 0x10));
      if ((iVar4 == -1) || (iVar6 == -1)) {
        lVar3 = -0x7ff8fff2;
        goto LAB_829507e4;
      }
      *(uint *)(*(int *)(iVar4 * 4 + param_1[5]) + 0x3c) = uVar8 ^ 0x80000;
      *(uint *)(*(int *)(iVar6 * 4 + param_1[5]) + 0x3c) = uVar9 ^ 0x80000;
      *(uint *)(*(int *)(iVar4 * 4 + param_1[5]) + 0x38) = uVar8;
      *(uint *)(*(int *)(iVar6 * 4 + param_1[5]) + 0x38) = uVar9;
      *(int *)(*(int *)(iVar5 + 8) + 8) = iVar4;
      *(int *)(*(int *)(iVar5 + 8) + 0xc) = iVar6;
    }
    else {
      *(ulonglong *)(*(int *)(iVar5 + 8) + 8) = CONCAT44(uStack_e0,uStack_dc);
    }
    *(undefined4 *)(*(int *)(iVar5 + 8) + 0x10) = uStack_d0;
    *(undefined4 *)(*(int *)(iVar5 + 8) + 0x14) = uStack_d0;
    iVar4 = (**(code **)(*param_1 + 0x30))(param_1,iVar5);
    if (iVar4 == 0) {
      lVar3 = fn_82963D50(param_1[0x41],iVar5);
    }
    else {
      lVar3 = 1;
    }
  }
LAB_829507e4:
  fn_82BA02A8(iVar5);
  fn_829639F0(iVar5);
  return lVar3;
}

