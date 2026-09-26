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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822CEE40();
extern int fn_822CEF30();
extern int fn_822CF300();
extern int fn_822D0570();
extern int fn_8236FB68();
extern int fn_82374520();
extern int fn_82508078();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8288B760();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int lbl_821916F4;
extern unsigned int lbl_8219174C;
extern unsigned int lbl_82192510;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831DCD58;


void fn_822E3048(double param_1,int param_2)

{
  float fVar1;
  uint uVar3;
  int iVar4;
  longlong lVar2;
  int *piVar5;
  undefined8 uVar6;
  bool bVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined4 auStack_50 [2];
  int iStack_48;
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x168) == 0) {
    uVar3 = *(uint *)(*(int *)(param_2 + 0x14) + 0x16c);
  }
  else {
    uVar3 = fn_8288B760();
    uVar3 = uVar3 & 0xff;
  }
  if (uVar3 == 0) {
    return;
  }
  fn_82374520(&iStack_48,*(undefined4 *)(param_2 + 0x10));
  dVar12 = (double)lbl_821CC160;
  if (iStack_48 != 0) {
    uVar8 = (ulonglong)*(uint *)(param_2 + 0x14);
    iVar4 = fn_822CEE40(uVar8);
    if ((iVar4 == 0) || (bVar7 = true, *(int *)(iVar4 + 0x24) == 0)) {
      bVar7 = false;
    }
    iVar4 = (int)uVar8;
    if (*(int *)(iVar4 + 0x254) < 0x18) {
      iVar9 = *(int *)(&lbl_831DCD58 + *(int *)(iVar4 + 0x254) * 4);
    }
    else {
      iVar9 = 6;
    }
    if (((uVar8 & 0xffffffff) == (ulonglong)*(uint *)(iStack_48 + 0x20e4)) &&
       (*(int *)(iStack_48 + 0x20ec) < 0x18)) {
      iVar10 = *(int *)(&lbl_831DCD58 + *(int *)(iStack_48 + 0x20ec) * 4);
    }
    else {
      iVar10 = 6;
    }
    if (((bVar7) && (iVar9 == 1)) || (iVar10 == 2)) {
      if ((double)*(float *)(param_2 + 0x40) < dVar12) {
        *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(iVar4 + 0x10c);
        fVar1 = lbl_8219174C;
        *(undefined4 *)(iVar4 + 0x10c) = lbl_82192510;
        dVar11 = param_1;
        if (param_1 <= (double)(*(float *)(iStack_48 + 0x118) - fVar1)) {
          dVar11 = (double)(*(float *)(iStack_48 + 0x118) - fVar1);
        }
        goto LAB_822e31f8;
      }
    }
    else if (dVar12 <= (double)*(float *)(param_2 + 0x40)) {
      if ((*(int *)(param_2 + 0x40) == 0) && (*(int *)(iStack_48 + 0xa0) != 0)) {
        auStack_50[0] = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x30c);
        auStack_50[0] =
             fn_82535298(auStack_50,**(undefined4 **)(*(int *)(param_2 + 0x10) + 0x9b8),
                               0xffffffff83296bc0,0xffffffff83296bd0);
        fn_82536288(auStack_50);
      }
      fn_822CF300(*(undefined4 *)(param_2 + 0x14),0);
      dVar11 = (double)lbl_82192734;
LAB_822e31f8:
      *(float *)(param_2 + 0x40) = (float)dVar11;
    }
  }
  if ((dVar12 < (double)*(float *)(param_2 + 0x40)) &&
     (fVar1 = (float)((double)*(float *)(param_2 + 0x40) - param_1),
     *(float *)(param_2 + 0x40) = fVar1, (double)fVar1 <= dVar12)) {
    *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x10c) = *(undefined4 *)(param_2 + 0x44);
    uVar8 = (ulonglong)*(uint *)(param_2 + 0x14);
    iVar4 = fn_822CEF30((double)lbl_821916F4,uVar8);
    uVar6 = 7;
    if (iVar4 == 0) {
      uVar6 = 6;
    }
    fn_822CF300(uVar8,uVar6);
    iVar4 = *(int *)(param_2 + 0x10);
    *(float *)(param_2 + 0x40) = (float)dVar12;
    lVar2 = fn_8236FB68(0x23);
    if (lVar2 != 0) {
      fn_82508078(*(undefined4 *)(iVar4 + 0xa4),lVar2,0);
    }
  }
  if (*(int *)(param_2 + 0x2c) == 0) {
    iVar4 = *(int *)(param_2 + 0x10);
    piVar5 = (int *)fn_82374520(auStack_40,iVar4);
    if (((*piVar5 != 0) || (*(int *)(iVar4 + 0x54) == 2)) ||
       (bVar7 = false, *(int *)(iVar4 + 0x204) != 0)) {
      bVar7 = true;
    }
    if (iStack_3c != 0) {
      fn_822315A0();
    }
    if (!bVar7) goto LAB_822e32ec;
  }
  fn_822D0570(param_2,*(undefined4 *)(param_2 + 0x2c),0,0);
LAB_822e32ec:
  *(undefined4 *)(param_2 + 0x2c) = 0;
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  return;
}

