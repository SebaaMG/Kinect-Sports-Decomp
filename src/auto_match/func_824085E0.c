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
#define NAN(x) ((x) != (x))
extern int fn_8229A000();
extern int fn_8229AAF8();
extern int fn_82359420();
extern int fn_82359698();
extern int fn_82408A28();
extern int fn_82409010();
extern int fn_82409400();
extern int fn_8240ABB0();
extern int fn_8240B0C8();
extern int fn_8240C068();
extern int fn_8240C1F0();
extern int fn_8240C348();
extern int fn_8240CC48();
extern int fn_8240CF70();
extern int fn_82456A08();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_824085E0(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  float *pfVar11;
  bool bVar12;
  double dVar13;
  int aiStack_30 [6];
  
  fVar2 = lbl_821CC160;
  uVar7 = *(uint *)(param_2 + 0x50);
  if (uVar7 == 0) {
    if (*(int *)(param_2 + 0x54) == 0) {
      return;
    }
    fVar1 = (float)((double)*(float *)(param_2 + 0x54) - param_1);
    fVar5 = -fVar1;
    fVar6 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar5 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar5) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar6 = fVar1;
    }
    *(float *)(param_2 + 0x54) = fVar6;
    if (fVar6 != fVar2) {
      return;
    }
    uVar9 = 1;
LAB_82408a00:
    fn_82408A28(param_2,uVar9);
    return;
  }
  if (uVar7 != 1) {
    if (uVar7 < 3) {
      if (*(int *)(param_2 + 0x54) == 0) {
        return;
      }
      fVar1 = (float)((double)*(float *)(param_2 + 0x54) - param_1);
      fVar5 = -fVar1;
      fVar6 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar5 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar5) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar6 = fVar1;
      }
      *(float *)(param_2 + 0x54) = fVar6;
      if (fVar6 != fVar2) {
        return;
      }
      fn_82359698(*(undefined4 *)(param_2 + 8),4);
      fn_8229A000((ulonglong)*(uint *)(*(int *)(*(int *)(param_2 + 0x10) + 4) + 0xd4) + 0x68);
      return;
    }
    if (uVar7 != 3) {
      return;
    }
    if (*(int *)(param_2 + 0x54) == 0) {
      return;
    }
    fVar1 = (float)((double)*(float *)(param_2 + 0x54) - param_1);
    fVar5 = -fVar1;
    fVar6 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar5 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar5) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar6 = fVar1;
    }
    *(float *)(param_2 + 0x54) = fVar6;
    if (fVar6 != fVar2) {
      return;
    }
    uVar9 = 5;
    if ((*(int *)(*(int *)(param_2 + 0x10) + 0xec) == 0) &&
       (*(int *)(*(int *)(param_2 + 0x10) + 0x40) == 0)) {
      uVar9 = 4;
    }
    fn_82359698(*(undefined4 *)(param_2 + 8),uVar9);
    fn_8229AAF8(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 4) + 0xd4));
    return;
  }
  pfVar11 = (float *)(param_2 + 0x18);
  if (lbl_821CA460 < *(float *)(param_2 + 0x1c) - *(float *)(param_2 + 0x18)) {
    fn_8229A000((ulonglong)*(uint *)(*(int *)(*(int *)(param_2 + 0x10) + 4) + 0xd4) + 0x68);
  }
  iVar8 = *(int *)(*(int *)(param_2 + 0x10) + 0x40);
  if ((iVar8 == 2) || (iVar8 == 6)) {
    uVar9 = 3;
    goto LAB_82408a00;
  }
  dVar13 = (double)*pfVar11;
  fn_8240ABB0(param_1,pfVar11);
  fn_82409400(param_2);
  uVar7 = fn_8240B0C8(pfVar11);
  if (uVar7 == 0) {
    fn_8240CC48(*(undefined4 *)(param_2 + 0x10));
    if ((*(int *)(*(int *)(param_2 + 0x10) + 0xec) == 0) ||
       (iVar8 = fn_8240CF70(), iVar8 == 0)) {
      if (((double)*pfVar11 <= (double)(longlong)(dVar13 - lbl_82195598)) &&
         (((float)(longlong)(dVar13 - lbl_82195598) <= lbl_821922D0 && (dVar13 != (double)*pfVar11))
         )) {
        piVar10 = (int *)(param_2 + 0x48);
        if (piVar10 == (int *)0x0) {
          bVar12 = false;
        }
        else {
          bVar12 = *piVar10 != 0;
        }
        if (bVar12) {
          aiStack_30[0] = *piVar10;
          aiStack_30[0] =
               fn_82535298(aiStack_30,*(undefined4 *)(*(int *)(param_2 + 0x4c) + 0x84c),
                                 0xffffffff83296bc0,0xffffffff83296bd0);
          fn_82536288(aiStack_30);
        }
      }
    }
    else {
      fn_82359420((double)*(float *)(param_2 + 0x30),*(undefined4 *)(param_2 + 8),
                        (ulonglong)*(uint *)(param_2 + 0x4c) + 0x84c);
    }
    iVar8 = *(int *)(param_2 + 0x14);
    if (*(int *)(iVar8 + 0x14) == 0) {
      if (*(int *)(iVar8 + 0x2c) == 0) goto LAB_82408990;
      fVar2 = *(float *)(iVar8 + 0x28);
    }
    else {
      fVar2 = *(float *)(iVar8 + 0x10);
    }
    fn_82456A08((double)fVar2,*(undefined4 *)(param_2 + 0x38));
    goto LAB_82408990;
  }
  if (uVar7 == 1) {
    iVar8 = *(int *)(param_2 + 0x10);
    if (*(int *)(iVar8 + 0xe0) == *(int *)(iVar8 + 0xe4)) {
      if (*(int *)(iVar8 + 0xec) == 0) {
        fn_8240C068();
      }
      else {
        fn_8240C1F0();
      }
      goto LAB_8240882c;
    }
    uVar9 = 2;
  }
  else {
    if (2 < uVar7) goto LAB_82408990;
    iVar8 = (**(code **)(**(int **)(param_2 + 0x14) + 4))();
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(iVar8 + 0x7a0) == 0) {
      pcVar4 = *(code **)(**(int **)(param_2 + 0x14) + 4);
    }
    else {
      pcVar4 = *(code **)(**(int **)(param_2 + 0x14) + 8);
    }
    uVar9 = (*pcVar4)();
    fn_8240C348(uVar3,uVar9);
    iVar8 = *(int *)(param_2 + 0x14);
    if (*(int *)(iVar8 + 0x14) == 0) {
      if (*(int *)(iVar8 + 0x2c) == 0) goto LAB_8240882c;
      fVar2 = *(float *)(iVar8 + 0x28);
    }
    else {
      fVar2 = *(float *)(iVar8 + 0x10);
    }
    fn_82456A08((double)fVar2,*(undefined4 *)(param_2 + 0x38));
LAB_8240882c:
    uVar9 = 3;
  }
  fn_82408A28(param_2,uVar9);
LAB_82408990:
  fn_82409010(param_1,param_2);
  return;
}

