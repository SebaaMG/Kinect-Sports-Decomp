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
extern unsigned int lbl_82005748;
extern unsigned int lbl_82195508;
extern unsigned int lbl_821958CC;
extern V16 vectorSubtractFloatingPoint();


undefined8 fn_82317948(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float afStack_20 [6];
  
  fVar4 = lbl_82005748;
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  iVar6 = *(int *)(param_2 + 0x28);
  iVar5 = *(int *)(param_2 + 0x2c);
  uVar2 = *(int *)(param_1 + 0xc) + 0x80U & 0xfffffff0;
  fVar11 = *(float *)(uVar2 + 4);
  fVar12 = *(float *)(uVar2 + 8);
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  fVar11 = fVar11 * fVar11 + 0.0 + fVar12 * fVar12;
  pfVar3 = (float *)((int)afStack_20 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar11;
  pfVar3[1] = fVar11;
  pfVar3[2] = fVar11;
  pfVar3[3] = fVar11;
  if (iVar6 == 0) {
    if (iVar5 == 0) {
      if (afStack_20[0] <= fVar4) {
        return 0;
      }
      iVar5 = 1;
      goto LAB_8231799c;
    }
  }
  else {
LAB_8231799c:
    if (iVar5 == 0) {
      return 0;
    }
  }
  puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(*(int *)(param_2 + 0x20) + 0x28);
  *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(*(int *)(param_2 + 0x20) + 0x2c);
  *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_2 + 0x28);
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x1ec) == 0) {
    iVar6 = 3;
    if (*(int *)(param_2 + 0x28) != 1) {
      if ((fVar4 < afStack_20[0]) && (iVar6 = 5, lbl_82195508 < afStack_20[0])) {
        iVar6 = 7;
      }
      *(int *)(param_4 + 0x1c) = iVar6;
      if ((iVar6 != 3) || (param_3 != 0)) goto LAB_82317a6c;
      iVar6 = 5;
    }
    *(int *)(param_4 + 0x1c) = iVar6;
  }
  else {
    *(undefined4 *)(param_4 + 0x1c) = 5;
    if (lbl_821958CC < afStack_20[0]) {
      *(undefined4 *)(param_4 + 0x1c) = 7;
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x42c);
    if ((iVar6 == 1) || (iVar6 == 3)) {
      *(undefined4 *)(param_4 + 0x1c) = 7;
    }
  }
LAB_82317a6c:
  if (*(int *)(param_1 + 0x660) == 1) {
    iVar6 = *(int *)(param_4 + 0x1c);
    if (iVar6 == 5) {
      iVar6 = 6;
    }
    else if (iVar6 == 7) {
      iVar6 = 8;
    }
    *(int *)(param_4 + 0x1c) = iVar6;
  }
  return 1;
}

