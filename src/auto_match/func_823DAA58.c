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
extern unsigned int uStack_3c;


void fn_823DAA58(double param_1,int param_2,int param_3,int param_4,int param_5,undefined8 param_6
                  ,int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined4 uStack_3c;
  
  if (param_5 == 1) {
    lVar9 = 0x1cb;
  }
  else if (param_5 == 2) {
    lVar9 = 0x1ea;
  }
  else if (param_5 == 3) {
    lVar9 = 0x209;
  }
  else {
    lVar9 = 0x1ac;
  }
  iVar4 = (int)lVar9;
  iVar11 = (iVar4 + 6) * 4;
  iVar8 = param_4 * 0x84 + param_2;
  uVar1 = *(uint *)(((uint)LZCOUNT(param_4) >> 5) * 0x84 + param_2 + 0xc);
  iVar7 = (iVar4 + 0x1b) * 4;
  uVar2 = *(uint *)(iVar8 + 0xc);
  *(int *)(iVar11 + *(int *)(param_3 + 0x100)) = *(int *)(iVar11 + *(int *)(param_3 + 0x100)) + 1;
  uVar10 = (ulonglong)uVar2 - (ulonglong)uVar1;
  *(int *)(iVar7 + *(int *)(param_3 + 0x100)) =
       (int)param_1 + *(int *)(iVar7 + *(int *)(param_3 + 0x100));
  iVar11 = (int)uVar10;
  if ((longlong)uVar10 < 1) {
    iVar7 = (iVar4 + 0x1e) * 4;
    if ((ulonglong)*(uint *)(iVar7 + *(int *)(param_3 + 0x100)) < (-uVar10 & 0xffffffff)) {
      *(int *)(iVar7 + *(int *)(param_3 + 0x100)) = (int)-uVar10;
    }
  }
  else {
    iVar7 = (int)(lVar9 << 2);
    if ((ulonglong)*(uint *)(iVar7 + *(int *)(param_3 + 0x100)) < (uVar10 & 0xffffffff)) {
      *(int *)(iVar7 + *(int *)(param_3 + 0x100)) = iVar11;
    }
  }
  iVar7 = (iVar4 + 3) * 4;
  if ((ulonglong)*(uint *)(iVar7 + *(int *)(param_3 + 0x100)) < (ulonglong)uVar1) {
    *(uint *)(iVar7 + *(int *)(param_3 + 0x100)) = uVar1;
  }
  iVar7 = (iVar4 + 4) * 4;
  if ((ulonglong)*(uint *)(iVar7 + *(int *)(param_3 + 0x100)) < (ulonglong)uVar2) {
    *(uint *)(iVar7 + *(int *)(param_3 + 0x100)) = uVar2;
  }
  if (uVar1 == 0) {
    iVar7 = (iVar4 + 7) * 4;
    *(int *)(iVar7 + *(int *)(param_3 + 0x100)) = *(int *)(iVar7 + *(int *)(param_3 + 0x100)) + 1;
  }
  iVar7 = (iVar4 + 10) * 4;
  iVar13 = (iVar4 + 0xc) * 4;
  iVar12 = (iVar4 + 0xb) * 4;
  iVar3 = (iVar4 + 0xe) * 4;
  *(uint *)(iVar7 + *(int *)(param_3 + 0x100)) = *(int *)(iVar7 + *(int *)(param_3 + 0x100)) + uVar2
  ;
  fVar6 = lbl_82005748;
  iVar7 = (iVar4 + 0xd) * 4;
  iVar5 = (iVar4 + 1) * 4;
  *(int *)(iVar12 + *(int *)(param_3 + 0x100)) =
       *(int *)(iVar8 + 0x10) + *(int *)(iVar12 + *(int *)(param_3 + 0x100));
  *(int *)(iVar13 + *(int *)(param_3 + 0x100)) =
       *(int *)(iVar8 + 0x14) + *(int *)(iVar13 + *(int *)(param_3 + 0x100));
  *(int *)(iVar7 + *(int *)(param_3 + 0x100)) =
       *(int *)(iVar8 + 0x20) + *(int *)(iVar7 + *(int *)(param_3 + 0x100));
  *(int *)(iVar3 + *(int *)(param_3 + 0x100)) =
       *(int *)(iVar8 + 0x1c) + *(int *)(iVar3 + *(int *)(param_3 + 0x100));
  uVar10 = (ulonglong)(*(float *)(iVar8 + 0x60) * fVar6);
  uStack_3c = (uint)uVar10;
  if ((*(uint *)(iVar5 + *(int *)(param_3 + 0x100)) < uStack_3c) &&
     ((ulonglong)*(uint *)(iVar5 + *(int *)(param_3 + 0x100)) != (uVar10 & 0xffffffff))) {
    *(uint *)(iVar5 + *(int *)(param_3 + 0x100)) = uStack_3c;
  }
  iVar7 = (iVar4 + 0xf) * 4;
  lVar14 = 7;
  iVar13 = 0;
  iVar12 = 0;
  *(int *)(iVar7 + *(int *)(param_3 + 0x100)) =
       *(int *)(iVar8 + 0x24) + *(int *)(iVar7 + *(int *)(param_3 + 0x100));
  do {
    if (2 < *(uint *)((param_4 * 0x21 + 0x1a + iVar12) * 4 + param_2)) {
      iVar13 = iVar13 + 1;
    }
    iVar12 = iVar12 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (iVar13 != 0) {
    iVar7 = (iVar4 + 0x11) * 4;
    *(int *)(iVar7 + *(int *)(param_3 + 0x100)) =
         *(int *)(iVar7 + *(int *)(param_3 + 0x100)) + iVar13;
  }
  if (param_7 == 0) {
    if (0 < iVar11) {
      lVar14 = lVar9 + 0x17;
LAB_823dace4:
      iVar11 = (int)(lVar14 << 2);
      *(int *)(iVar11 + *(int *)(param_3 + 0x100)) =
           *(int *)(iVar11 + *(int *)(param_3 + 0x100)) + 1;
      if (*(int *)(iVar8 + 0x28) == 0) goto LAB_823dad54;
      lVar14 = lVar9 + 0x1d;
      goto LAB_823dad40;
    }
    iVar7 = *(int *)(param_3 + 0x100);
    if (iVar11 < 0) {
      lVar14 = lVar9 + 0x16;
    }
    else {
      lVar14 = lVar9 + 0x15;
    }
  }
  else {
    if (0 < iVar11) {
      lVar14 = lVar9 + 0x14;
      goto LAB_823dace4;
    }
    lVar14 = lVar9 + 0x13;
    if (-1 < iVar11) {
      lVar14 = lVar9 + 0x12;
    }
LAB_823dad40:
    iVar7 = *(int *)(param_3 + 0x100);
  }
  iVar11 = (int)(lVar14 << 2);
  *(int *)(iVar11 + iVar7) = *(int *)(iVar11 + iVar7) + 1;
LAB_823dad54:
  iVar11 = (iVar4 + 0x19) * 4;
  iVar7 = (iVar4 + 0x18) * 4;
  iVar12 = (iVar4 + 8) * 4;
  iVar13 = (iVar4 + 0x1a) * 4;
  iVar3 = (iVar4 + 2) * 4;
  *(int *)(iVar11 + *(int *)(param_3 + 0x100)) =
       *(int *)(iVar8 + 0x2c) + *(int *)(iVar11 + *(int *)(param_3 + 0x100));
  *(int *)(iVar7 + *(int *)(param_3 + 0x100)) =
       *(int *)(iVar8 + 0x38) + *(int *)(iVar7 + *(int *)(param_3 + 0x100));
  *(int *)(iVar12 + *(int *)(param_3 + 0x100)) =
       *(int *)(iVar8 + 0x40) + *(int *)(iVar12 + *(int *)(param_3 + 0x100));
  *(int *)(iVar13 + *(int *)(param_3 + 0x100)) =
       *(int *)(iVar8 + 0x48) + *(int *)(iVar13 + *(int *)(param_3 + 0x100));
  uVar1 = *(uint *)(iVar8 + 0x4c);
  if ((*(uint *)(iVar3 + *(int *)(param_3 + 0x100)) < uVar1) &&
     (*(uint *)(iVar3 + *(int *)(param_3 + 0x100)) != uVar1)) {
    *(uint *)(iVar3 + *(int *)(param_3 + 0x100)) = uVar1;
  }
  iVar11 = (iVar4 + 9) * 4;
  iVar7 = (iVar4 + 5) * 4;
  *(int *)(iVar11 + *(int *)(param_3 + 0x100)) =
       *(int *)(iVar8 + 0x4c) + *(int *)(iVar11 + *(int *)(param_3 + 0x100));
  uVar1 = *(uint *)(iVar8 + 8);
  if ((*(uint *)(*(int *)(param_3 + 0x100) + iVar7) < uVar1) &&
     (*(uint *)(*(int *)(param_3 + 0x100) + iVar7) != uVar1)) {
    *(uint *)(*(int *)(param_3 + 0x100) + iVar7) = uVar1;
  }
  iVar11 = (iVar4 + 0x1c) * 4;
  *(int *)(iVar11 + *(int *)(param_3 + 0x100)) =
       *(int *)(iVar8 + 8) + *(int *)(iVar11 + *(int *)(param_3 + 0x100));
  return;
}

