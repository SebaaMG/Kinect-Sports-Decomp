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
extern int fn_8233E620();
extern int fn_8257A9F0();
extern int fn_825AC9E8();
extern int fn_8287CC18();
extern int fn_8287D3D0();
extern unsigned int iStack_58;
extern unsigned int iStack_68;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_60;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_8287DDB0(undefined8 param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint uVar5;
  ulonglong uVar4;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *pfVar10;
  longlong lVar9;
  int iVar11;
  int *piVar12;
  double dVar13;
  ulonglong uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  ulonglong uStack_60;
  int iStack_58;
  
  fVar1 = lbl_821AAD20;
  dVar13 = (double)lbl_821AAD20;
  if (*(uint *)(param_2 + 0xc) != 0) {
    uVar8 = 0;
    *(float *)(*(int *)(param_2 + 0x24) * 4 + *(int *)(param_2 + 0x10)) =
         (float)((double)*(uint *)(param_2 + 8) / (double)*(uint *)(param_2 + 0xc));
    *(float *)(param_2 + 0x20) = fVar1;
    iVar6 = *(int *)(param_2 + 0x10);
    uVar5 = *(int *)(param_2 + 0x14) - iVar6 >> 2;
    if (3 < (int)uVar5) {
      iVar11 = 0;
      do {
        iVar2 = iVar11 + iVar6;
        iVar7 = iVar11 + 0xc;
        fVar1 = *(float *)(param_2 + 0x20) + *(float *)(iVar11 + iVar6);
        *(float *)(param_2 + 0x20) = fVar1;
        uVar8 = uVar8 + 4;
        iVar11 = iVar11 + 0x10;
        fVar1 = *(float *)(iVar2 + 4) + fVar1;
        *(float *)(param_2 + 0x20) = fVar1;
        fVar1 = *(float *)(iVar7 + iVar6 + -4) + fVar1;
        *(float *)(param_2 + 0x20) = fVar1;
        *(float *)(param_2 + 0x20) = *(float *)(iVar7 + iVar6) + fVar1;
      } while (uVar8 < uVar5 - 3);
    }
    if (uVar8 < uVar5) {
      iVar6 = uVar5 - uVar8;
      iVar11 = uVar8 << 2;
      do {
        pfVar10 = (float *)(*(int *)(param_2 + 0x10) + iVar11);
        iVar11 = iVar11 + 4;
        *(float *)(param_2 + 0x20) = *pfVar10 + *(float *)(param_2 + 0x20);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uStack_70 = (ulonglong)uVar5;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(uint *)(param_2 + 0x24) =
         -(uint)(*(int *)(param_2 + 0x24) != 1) & *(int *)(param_2 + 0x24) + 1U;
    *(float *)(param_2 + 0x20) = *(float *)(param_2 + 0x20) / (float)uStack_70;
  }
  fn_825AC9E8((uint *)(param_2 + 0x48),(undefined4 *)(param_2 + 0x44));
  if (2 < *(uint *)(param_2 + 0x58)) {
    fn_825AC9E8(param_2 + 0x2c,param_2 + 0x28);
  }
  uVar5 = *(uint *)(param_2 + 0x48);
  iStack_68 = *(int *)(param_2 + 0x54);
  iStack_58 = iStack_68 + *(int *)(param_2 + 0x58);
  uStack_60 = (ulonglong)uVar5 << 0x20;
  uStack_70 = (ulonglong)uVar5 << 0x20;
  uVar5 = fn_8287D3D0(&uStack_70,&uStack_60,0);
  iStack_68 = *(int *)(param_2 + 0x38);
  iStack_58 = iStack_68 + *(int *)(param_2 + 0x3c);
  uStack_60 = (ulonglong)*(uint *)(param_2 + 0x2c) << 0x20;
  uStack_70 = (ulonglong)*(uint *)(param_2 + 0x2c) << 0x20;
  uVar4 = fn_8287D3D0(&uStack_70,&uStack_60,0);
  if (uVar5 != 0) {
    uStack_78 = CONCAT44((float)dVar13,(((U64)(uStack_78) >> 32) & 0xFFFFFFFF));
    uVar4 = 3 - ((ulonglong)(2 < uVar4) + 3) & uVar4;
    pfVar10 = (float *)&uStack_78;
    uStack_70 = CONCAT44(lbl_82002AE0,(int)uVar4);
    if (dVar13 <= (double)(float)((double)(uVar4 & 0xffffffff) / (double)uVar5)) {
      pfVar10 = (float *)&uStack_80;
    }
    if (lbl_82002AE0 < *pfVar10) {
      pfVar10 = (float *)&uStack_70;
    }
    uStack_80 = CONCAT44(*pfVar10,(int)uStack_80);
    piVar12 = (int *)(param_2 + 0x74);
    if (*(int *)(param_2 + 0x90) == *(int *)(param_2 + 0x78) - *(int *)(param_2 + 0x74) >> 2) {
      fn_8233E620(piVar12,&uStack_80);
    }
    else {
      *(float *)(*(int *)(param_2 + 0x90) * 4 + *piVar12) = *pfVar10;
    }
    *(float *)(param_2 + 0x84) = (float)dVar13;
    iVar6 = *piVar12;
    uVar5 = *(int *)(param_2 + 0x78) - iVar6 >> 2;
    uVar8 = 0;
    if (3 < (int)uVar5) {
      iVar11 = 0;
      do {
        iVar2 = iVar6 + iVar11;
        iVar7 = iVar11 + 0xc;
        fVar1 = *(float *)(param_2 + 0x84) + *(float *)(iVar6 + iVar11);
        *(float *)(param_2 + 0x84) = fVar1;
        uVar8 = uVar8 + 4;
        iVar11 = iVar11 + 0x10;
        fVar1 = *(float *)(iVar2 + 4) + fVar1;
        *(float *)(param_2 + 0x84) = fVar1;
        fVar1 = *(float *)(iVar6 + iVar7 + -4) + fVar1;
        *(float *)(param_2 + 0x84) = fVar1;
        *(float *)(param_2 + 0x84) = *(float *)(iVar6 + iVar7) + fVar1;
      } while (uVar8 < uVar5 - 3);
    }
    if (uVar8 < uVar5) {
      iVar6 = uVar5 - uVar8;
      iVar11 = uVar8 << 2;
      do {
        pfVar10 = (float *)(*piVar12 + iVar11);
        iVar11 = iVar11 + 4;
        *(float *)(param_2 + 0x84) = *pfVar10 + *(float *)(param_2 + 0x84);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uStack_70 = (ulonglong)uVar5;
    *(uint *)(param_2 + 0x90) =
         -(uint)(*(int *)(param_2 + 0x90) != 1) & *(int *)(param_2 + 0x90) + 1U;
    *(float *)(param_2 + 0x84) = *(float *)(param_2 + 0x84) / (float)uStack_70;
  }
  if ((3 < *(uint *)(param_2 + 0x58)) && ((ulonglong)*(uint *)(param_2 + 0x58) != 0)) {
    uVar5 = *(int *)(param_2 + 0x54) + 1;
    *(uint *)(param_2 + 0x54) = uVar5;
    if ((uint)(*(int *)(param_2 + 0x50) << 2) <= uVar5) {
      *(undefined4 *)(param_2 + 0x54) = 0;
    }
    lVar9 = (ulonglong)*(uint *)(param_2 + 0x58) - 1;
    *(int *)(param_2 + 0x58) = (int)lVar9;
    if (lVar9 == 0) {
      *(undefined4 *)(param_2 + 0x54) = 0;
    }
  }
  if ((3 < *(uint *)(param_2 + 0x3c)) && ((ulonglong)*(uint *)(param_2 + 0x3c) != 0)) {
    uVar5 = *(int *)(param_2 + 0x38) + 1;
    *(uint *)(param_2 + 0x38) = uVar5;
    if ((uint)(*(int *)(param_2 + 0x34) << 2) <= uVar5) {
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    lVar9 = (ulonglong)*(uint *)(param_2 + 0x3c) - 1;
    *(int *)(param_2 + 0x3c) = (int)lVar9;
    if (lVar9 == 0) {
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  fn_8287CC18(param_1,param_2,param_3);
  piVar12 = (int *)(param_2 + 100);
  if (*(int *)(param_2 + 0x8c) == *(int *)(param_2 + 0x68) - *(int *)(param_2 + 100) >> 2) {
    fn_8257A9F0(piVar12,(undefined4 *)(param_2 + 0x60));
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x8c) * 4 + *piVar12) = *(undefined4 *)(param_2 + 0x60);
  }
  *(float *)(param_2 + 0x88) = (float)dVar13;
  uVar8 = 0;
  iVar6 = *piVar12;
  uVar5 = *(int *)(param_2 + 0x68) - iVar6 >> 2;
  if (3 < (int)uVar5) {
    iVar11 = 0;
    do {
      uStack_70 = (ulonglong)*(uint *)(iVar6 + iVar11);
      iVar2 = iVar6 + iVar11;
      iVar7 = iVar11 + 0xc;
      uVar8 = uVar8 + 4;
      iVar11 = iVar11 + 0x10;
      fVar1 = (float)uStack_70 + *(float *)(param_2 + 0x88);
      *(float *)(param_2 + 0x88) = fVar1;
      uStack_78 = (ulonglong)*(uint *)(iVar2 + 4);
      fVar1 = (float)uStack_78 + fVar1;
      *(float *)(param_2 + 0x88) = fVar1;
      uStack_80 = (ulonglong)*(uint *)(iVar6 + iVar7 + -4);
      fVar1 = (float)uStack_80 + fVar1;
      *(float *)(param_2 + 0x88) = fVar1;
      *(float *)(param_2 + 0x88) = (float)*(uint *)(iVar6 + iVar7) + fVar1;
    } while (uVar8 < uVar5 - 3);
  }
  if (uVar8 < uVar5) {
    iVar6 = uVar5 - uVar8;
    iVar11 = uVar8 << 2;
    do {
      puVar3 = (uint *)(*piVar12 + iVar11);
      iVar11 = iVar11 + 4;
      *(float *)(param_2 + 0x88) = (float)*puVar3 + *(float *)(param_2 + 0x88);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uStack_60 = (ulonglong)uVar5;
  *(undefined4 *)(param_2 + 0x60) = 0;
  piVar12 = (int *)(param_2 + 0xcc);
  *(uint *)(param_2 + 0x8c) = -(uint)(*(int *)(param_2 + 0x8c) != 1) & *(int *)(param_2 + 0x8c) + 1U
  ;
  *(float *)(param_2 + 0x88) = *(float *)(param_2 + 0x88) / (float)uStack_60;
  if (*(int *)(param_2 + 0xe0) == *(int *)(param_2 + 0xd0) - *(int *)(param_2 + 0xcc) >> 2) {
    fn_8257A9F0(piVar12,(undefined4 *)(param_2 + 200));
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0xe0) * 4 + *piVar12) = *(undefined4 *)(param_2 + 200);
  }
  *(float *)(param_2 + 0xdc) = (float)dVar13;
  uVar8 = 0;
  iVar6 = *piVar12;
  uVar5 = *(int *)(param_2 + 0xd0) - iVar6 >> 2;
  if (3 < (int)uVar5) {
    iVar11 = 0;
    do {
      puVar3 = (uint *)(iVar6 + iVar11);
      iVar2 = iVar6 + iVar11;
      iVar7 = iVar11 + 0xc;
      uVar8 = uVar8 + 4;
      iVar11 = iVar11 + 0x10;
      fVar1 = (float)*puVar3 + *(float *)(param_2 + 0xdc);
      *(float *)(param_2 + 0xdc) = fVar1;
      fVar1 = (float)*(uint *)(iVar2 + 4) + fVar1;
      *(float *)(param_2 + 0xdc) = fVar1;
      fVar1 = (float)*(uint *)(iVar6 + iVar7 + -4) + fVar1;
      *(float *)(param_2 + 0xdc) = fVar1;
      *(float *)(param_2 + 0xdc) = (float)*(uint *)(iVar6 + iVar7) + fVar1;
    } while (uVar8 < uVar5 - 3);
  }
  if (uVar8 < uVar5) {
    iVar6 = uVar5 - uVar8;
    iVar11 = uVar8 << 2;
    do {
      puVar3 = (uint *)(*piVar12 + iVar11);
      iVar11 = iVar11 + 4;
      *(float *)(param_2 + 0xdc) = (float)*puVar3 + *(float *)(param_2 + 0xdc);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_2 + 200) = 0;
  *(uint *)(param_2 + 0xe0) = -(uint)(*(int *)(param_2 + 0xe0) != 1) & *(int *)(param_2 + 0xe0) + 1U
  ;
  *(float *)(param_2 + 0xdc) = *(float *)(param_2 + 0xdc) / (float)uVar5;
  return;
}

