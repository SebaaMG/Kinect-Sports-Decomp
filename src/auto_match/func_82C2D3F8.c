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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82A7CC90();
extern int fn_82C2CA28();
extern int fn_82C2EB00();
extern int fn_82C421D0();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201546C;
extern unsigned int lbl_82015BD4;
extern unsigned int lbl_8205743C;
extern unsigned int lbl_8207F270;
extern unsigned int lbl_8208DDB4;
extern unsigned int lbl_8208ED5C;
extern unsigned int lbl_8208ED60;
extern unsigned int lbl_8208ED64;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82C2D3F8(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if (2 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0xd4) = 1;
  }
  if (*(int *)(param_1 + 100) == 0) {
    *(uint *)(param_1 + 0x60) =
         (uint)*(ushort *)(param_1 + 0x6e) * 4 - 4 | *(int *)(param_1 + 0x58) - 1U;
  }
  else if (*(int *)(param_1 + 100) == 1) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  fVar3 = lbl_82015BD4;
  uVar1 = *(ushort *)(param_1 + 0x22);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58) << 3;
  fVar3 = ((float)(longlong)*(int *)(param_1 + 0x54) * fVar3) /
          (float)(longlong)(int)((uint)uVar1 * *(int *)(param_1 + 0x50));
  if (uVar1 == 2) {
    fVar4 = fVar3 * lbl_8207F270;
  }
  else {
    fVar4 = fVar3;
    if (2 < uVar1) {
      fVar4 = fVar3 * lbl_8208ED64;
    }
  }
  *(float *)(param_1 + 0x2c) = fVar3;
  *(float *)(param_1 + 0x30) = fVar4;
  fn_82C2EB00(*(undefined4 *)(param_1 + 0x68),8,param_1 + 0x6c);
  uVar11 = *(uint *)(param_1 + 0x100);
  iVar8 = (int)(((ulonglong)uVar11 & 0x7fffffff) << 1);
  *(int *)(param_1 + 0xfc) = iVar8;
  *(uint *)(param_1 + 0x104) = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
  if (*(int *)(param_1 + 0x3c) < 3) {
    uVar7 = *(uint *)(param_1 + 0x40);
    uVar9 = uVar7 >> 1 & 1;
    *(uint *)(param_1 + 0xd4) = uVar9;
    *(uint *)(param_1 + 0x118) = uVar7 & 1;
    *(uint *)(param_1 + 0xdc) = uVar7 >> 5 & 1;
    if ((uVar9 == 0) || (iVar10 = 1, (uVar7 & 4) == 0)) {
      iVar10 = 0;
    }
    *(int *)(param_1 + 0xd8) = iVar10;
    if (iVar10 == 0) {
      *(undefined4 *)(param_1 + 0xe4) = 1;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x54);
      uVar1 = *(ushort *)(param_1 + 0x22);
      uVar7 = (int)uVar7 >> 3 & 3;
      trapWord(6,(ulonglong)uVar1,0);
      *(uint *)(param_1 + 0xe4) = uVar7;
      trapWord(5,(ulonglong)uVar1 &
                 ~((((ulonglong)uVar9 & 0x7fffffff) << 1 | (ulonglong)(uVar9 >> 0x1f)) - 1),0xffff);
      if ((int)uVar9 / (int)(uint)uVar1 < 4000) {
        *(int *)(param_1 + 0xe4) = 2 << uVar7;
      }
      else {
        *(int *)(param_1 + 0xe4) = 8 << uVar7;
      }
    }
    uVar7 = (iVar8 >> 7) + (uint)(iVar8 < 0 && (uVar11 & 0x3f) != 0);
    iVar10 = ((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0);
    if (iVar10 < *(int *)(param_1 + 0xe4)) {
      *(int *)(param_1 + 0xe4) = iVar10;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 1;
    *(undefined4 *)(param_1 + 0xdc) = 1;
    *(undefined4 *)(param_1 + 0xd4) = 1;
    iVar10 = 1 << (*(int *)(param_1 + 0x40) >> 3 & 7U);
    *(int *)(param_1 + 0xe4) = iVar10;
    if (iVar10 < 2) {
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xd8) = 1;
    }
  }
  if (*(int *)(param_1 + 0x3c) == 1) {
    *(undefined4 *)(param_1 + 0xf4) = 1;
  }
  else {
    uVar9 = 0;
    uVar7 = *(uint *)(param_1 + 0xe4);
    while (1 < uVar7) {
      uVar9 = uVar9 + 1;
      uVar7 = *(uint *)(param_1 + 0xe4) >> (uVar9 & 0x3f);
    }
    *(uint *)(param_1 + 0xf4) = uVar9 + 1;
  }
  uVar9 = *(uint *)(param_1 + 0xe4);
  uVar7 = iVar8 / (int)uVar9;
  *(uint *)(param_1 + 0xe8) = uVar7;
  uVar6 = (ulonglong)uVar9 &
          ~((((ulonglong)uVar11 & 0x3fffffff) << 2 | ((ulonglong)uVar11 & 0x7fffffff) >> 0x1e) - 1);
  uVar11 = ((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0);
  trapWord(6,(ulonglong)uVar9,0);
  *(uint *)(param_1 + 0xec) = uVar11;
  trapWord(5,uVar6,0xffff);
  *(uint *)(param_1 + 0xf0) = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
  uVar2 = lbl_8208ED60;
  if (*(int *)(param_1 + 0x118) == 0) {
    uVar2 = lbl_8205743C;
  }
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  uVar5 = fn_82A7CC90(param_1,(int)uVar11 >> 1,uVar6);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar9 = 0;
  uVar11 = *(uint *)(param_1 + 0x100);
  uVar7 = uVar11;
  while (1 < uVar7) {
    uVar9 = uVar9 + 1;
    uVar7 = uVar11 >> (uVar9 & 0x3f);
  }
  iVar8 = *(int *)(param_1 + 0x3c);
  *(uint *)(param_1 + 0xf8) = uVar9;
  if (iVar8 == 1) {
    *(undefined4 *)(param_1 + 0x110) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (iVar8 < 3) {
    *(uint *)(param_1 + 0x114) = uVar11 - (int)(uVar11 * 9) / 100;
  }
  else {
    *(uint *)(param_1 + 0x114) = uVar11;
  }
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x114);
  if (iVar8 < 3) {
    *(undefined4 *)(param_1 + 0x120) = 3;
    if (*(float *)(param_1 + 0x30) < lbl_8208DDB4) {
      if (31999 < *(int *)(param_1 + 0x50)) {
        *(undefined4 *)(param_1 + 0x120) = 1;
      }
      goto LAB_82c2d788;
    }
    if ((lbl_8208ED5C <= *(float *)(param_1 + 0x30)) || (*(int *)(param_1 + 0x50) < 32000))
    goto LAB_82c2d788;
  }
  *(undefined4 *)(param_1 + 0x120) = 2;
LAB_82c2d788:
  fn_82C2CA28(param_1,0);
  if (*(int *)(param_1 + 0x3c) < 3) {
    fVar3 = (float)(longlong)*(int *)(param_1 + 0x100) * *(float *)(param_1 + 0x2c) * lbl_8201546C;
    if (lbl_821AAD20 <= fVar3) {
      fVar3 = fVar3 + lbl_82002C5C;
    }
    else {
      fVar3 = fVar3 - lbl_82002C5C;
    }
    uVar7 = 0;
    uVar11 = (int)fVar3;
    while (1 < uVar11) {
      uVar7 = uVar7 + 1;
      uVar11 = (uint)(int)fVar3 >> (uVar7 & 0x3f);
    }
    iVar8 = uVar7 + 2;
  }
  else {
    uVar7 = 0;
    uVar11 = *(uint *)(param_1 + 0xc);
    while (1 < uVar11) {
      uVar7 = uVar7 + 1;
      uVar11 = *(uint *)(param_1 + 0xc) >> (uVar7 & 0x3f);
    }
    iVar8 = uVar7 + 1;
  }
  *(int *)(param_1 + 8) = iVar8;
  if (*(int *)(param_1 + 0x3c) == 1) {
    *(float *)(param_1 + 300) =
         (float)SQRT(lbl_82002C40 / (double)(longlong)*(int *)(param_1 + 0x1d4));
  }
  fn_82C421D0(param_1);
  iVar8 = *(int *)(param_1 + 0x3c);
  if (2 < iVar8) {
    if ((*(uint *)(param_1 + 0x40) & 0xee00) != 0) {
      return 0xffffffff80040000;
    }
    if ((2 < iVar8) &&
       (*(undefined4 *)(param_1 + 0x24c) = 1, (*(uint *)(param_1 + 0x40) & 0x40) != 0)) {
      *(undefined4 *)(param_1 + 600) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if (2 < iVar8) {
    uVar11 = *(uint *)(param_1 + 0x40);
    if ((uVar11 & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x270) = 1;
    }
    if (*(short *)(param_1 + 0x22) == 1) {
      *(undefined4 *)(param_1 + 0x2e8) = 1;
    }
    if ((uVar11 & 0x100) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
    if ((uVar11 & 0x1000) != 0) {
      *(undefined4 *)(param_1 + 0x25c) = 1;
    }
  }
  return uVar5;
}

