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
extern unsigned int *auStack_230;
extern unsigned int *auStack_270;
extern int fn_8229D4E8();
extern int fn_822A0C98();
extern int fn_822ABA88();
extern int fn_82358FD8();
extern int fn_82359698();
extern int fn_82399BA0();
extern int fn_8239B5B8();
extern int fn_8239CE98();
extern int fn_8239D7F8();
extern int fn_823A3110();
extern int fn_823A31C0();
extern int fn_823A3280();
extern int fn_823A3360();
extern int fn_82508078();
extern int fn_82528EE0();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_825529B0();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821CC160;


void fn_823A2C68(int param_1)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  longlong lVar2;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 uVar9;
  double dVar10;
  longlong alStack_280 [2];
  undefined1 auStack_270 [64];
  undefined1 auStack_230 [512];
  
  iVar3 = *(int *)(param_1 + 8);
  if ((*(int *)(iVar3 + 0x58) != *(int *)(iVar3 + 0x54)) && (*(int *)(iVar3 + 0x58) != 0)) {
    return;
  }
  iVar3 = fn_825529B0(iVar3 + 0x244);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = fn_822A0C98(*(undefined4 *)(iVar3 + 0xd4));
  if (iVar4 != 0) {
    return;
  }
  if ((*(int *)(iVar3 + 0x220) == 0) &&
     (iVar3 = (**(code **)(**(int **)(iVar3 + 0x2e0) + 0x90))(), iVar3 == 8)) {
    uVar9 = 10;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x220) = 1;
    goto LAB_823a30f8;
  }
  iVar4 = fn_823A3280(param_1);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar4 != 0) {
    uVar9 = 0xb;
    *(undefined4 *)(iVar3 + 0x228) = 1;
    goto LAB_823a30f8;
  }
  if ((*(int *)(iVar3 + 0x224) == 0) &&
     (iVar3 = (**(code **)(**(int **)(iVar3 + 0x2e0) + 0x90))(), iVar3 == 6)) {
    uVar9 = 0xc;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x224) = 1;
    goto LAB_823a30f8;
  }
  if ((*(int *)(*(int *)(param_1 + 8) + 0x234) == 0) && (iVar3 = fn_8239CE98(), iVar3 != 0)) {
    iVar3 = fn_823A3360(param_1);
    if (iVar3 == 0) {
      return;
    }
    uVar9 = 6;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x234) = 1;
    goto LAB_823a30f8;
  }
  iVar3 = *(int *)(param_1 + 8);
  if ((((*(int *)(iVar3 + 0xa0) == 0) || (*(int *)(*(int *)(iVar3 + 0xa0) + 0x40) != 1)) &&
      (*(int *)(iVar3 + 0x178) != 0)) &&
     ((*(int *)(iVar3 + 0x230) == 0 && (iVar3 = fn_82399BA0(), iVar3 != 0)))) {
    iVar3 = *(int *)(param_1 + 8);
    piVar8 = *(int **)**(undefined4 **)(iVar3 + 8);
    if (*(int *)(*(int *)(piVar8[4] * 4 + *piVar8) + 0x1c) != 0) {
      lVar2 = fn_822ABA88(*(undefined4 *)(piVar8[4] * 4 + *piVar8),0);
      dVar10 = (double)*(float *)(*(int *)(piVar8[4] * 4 + *piVar8) + 0x20);
      fn_82358FD8(iVar3,auStack_230,0x100,0xffffffff821aa564);
      alStack_280[0] = (longlong)(int)dVar10;
      fn_82528EE0(auStack_270,0x20,0xffffffff821aa638,(int)dVar10);
      iVar3 = *(int *)(*(int *)(iVar3 + 0xd4) + 0x14);
      if (*(int *)(iVar3 + 0x14) == 0) {
        fn_8229D4E8(iVar3,lVar2 + 0x30,auStack_230,auStack_270);
        *(undefined4 *)(iVar3 + 0xc) = 1;
        *(undefined4 *)(iVar3 + 0x10) = lbl_821917B0;
      }
      alStack_280[0] = CONCAT44(*(undefined4 *)(*(int *)(param_1 + 8) + 0x82c),((uint)(alStack_280[0])))
      ;
      uVar5 = fn_82535298(alStack_280,
                                *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x174) + 0x84c),
                                0xffffffff83296bc0,0xffffffff83296bd0);
      alStack_280[0] = CONCAT44(uVar5,((uint)(alStack_280[0])));
      fn_82536288(alStack_280);
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x230) = 1;
      return;
    }
  }
  iVar3 = fn_82399BA0(*(undefined4 *)(param_1 + 8));
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (*(int *)(iVar3 + 0x264) != 0) {
      *(uint *)(iVar3 + 0x260) = *(uint *)(iVar3 + 0x260) | 0x400;
      return;
    }
    if ((*(int *)(iVar3 + 0x22c) == 0) && (iVar3 = fn_823A3110(param_1), iVar3 != 0)) {
      uVar9 = 0xd;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x22c) = 1;
      iVar3 = *(int *)(param_1 + 8);
      if (*(int *)(iVar3 + 0x178) != 0) goto LAB_823a30f8;
      uVar6 = 0xffffffff821b4d24;
    }
    else {
      iVar3 = *(int *)(param_1 + 8);
      if ((*(int *)(iVar3 + 0x23c) != 0) ||
         (iVar4 = (**(code **)(**(int **)(iVar3 + 0x2e0) + 4))(), iVar4 == *(int *)(iVar3 + 0x20c)))
      {
        if ((*(int *)(*(int *)(param_1 + 8) + 0x238) == 0) &&
           (iVar3 = fn_823A31C0(param_1), iVar3 != 0)) {
          uVar9 = 0xf;
          *(undefined4 *)(*(int *)(param_1 + 8) + 0x238) = 1;
          if (*(int *)(*(int *)(param_1 + 8) + 0x178) == 0) {
            fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b4de0,0);
          }
          fn_8239B5B8((ulonglong)*(uint *)(param_1 + 8),
                            (ulonglong)*(uint *)(param_1 + 8) + 0x614);
          goto LAB_823a30f8;
        }
        uVar7 = (ulonglong)*(uint *)(param_1 + 8);
        iVar3 = fn_8239D7F8(uVar7,0);
        if (iVar3 != 0) {
          return;
        }
        iVar3 = fn_8239D7F8(uVar7,1);
        if (iVar3 != 0) {
          return;
        }
        uVar9 = 4;
        *(undefined4 *)((int)uVar7 + 0x208) = lbl_821CC160;
        goto LAB_823a30f0;
      }
      uVar9 = 0xe;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x23c) = 1;
      iVar3 = *(int *)(param_1 + 8);
      uVar5 = (**(code **)(**(int **)(iVar3 + 0x2e0) + 4))();
      *(undefined4 *)(iVar3 + 0x20c) = uVar5;
      iVar3 = *(int *)(param_1 + 8);
      if (*(int *)(iVar3 + 0x178) != 0) goto LAB_823a30f8;
      uVar6 = 0xffffffff821b4e30;
    }
    fn_82508078(*(undefined4 *)(iVar3 + 0xa4),uVar6,0);
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    uVar7 = (ulonglong)uVar1;
    if ((*(int *)(uVar1 + 0xa0) == 0) || (*(int *)(*(int *)(uVar1 + 0xa0) + 0x40) != 1)) {
      if (*(int *)(uVar1 + 0x178) == 0) {
        uVar9 = 7;
        goto LAB_823a30f8;
      }
      iVar3 = fn_8239D7F8(uVar7,0);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = fn_8239D7F8(uVar7,1);
      if (iVar3 != 0) {
        return;
      }
    }
    uVar9 = 0x10;
LAB_823a30f0:
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
LAB_823a30f8:
  fn_82359698(*(undefined4 *)(param_1 + 8),uVar9);
  return;
}

