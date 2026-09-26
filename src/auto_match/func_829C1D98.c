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
extern int fn_829C0BE8();
extern int fn_829C1260();
extern int fn_829C1510();
extern int fn_829C1940();
extern int fn_829C1C10();
extern unsigned int lbl_820551BC;
extern unsigned int lbl_82055298;
extern unsigned int lbl_82055718;


void fn_829C1D98(int param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined2 *puVar12;
  
  lVar6 = 0;
  if (*(int *)(param_1 + 0x7c) < 1) {
    uVar5 = param_3 + 5;
LAB_829c1ecc:
    uVar9 = uVar5;
  }
  else {
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      uVar5 = 0;
      uVar9 = 0;
      puVar7 = (ushort *)(param_1 + 0x88);
      lVar6 = 7;
      do {
        puVar7 = puVar7 + 2;
        uVar9 = *puVar7 + uVar9;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      puVar7 = (ushort *)(param_1 + 0xa4);
      lVar6 = 0x79;
      do {
        puVar7 = puVar7 + 2;
        uVar5 = *puVar7 + uVar5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      puVar7 = (ushort *)(param_1 + 0x288);
      lVar6 = 0x80;
      do {
        puVar7 = puVar7 + 2;
        uVar9 = *puVar7 + uVar9;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *(char *)(param_1 + 0x1c) = -(((uVar5 & 0xffffffff) >> 2 < uVar9) + -1);
    }
    lVar6 = fn_829C1940(param_1,param_1 + 0xb10);
    iVar1 = fn_829C1940(lVar6,lVar6 + 0xb1c);
    iVar1 = fn_829C0BE8(iVar1,iVar1 + 0x8c,*(undefined4 *)(iVar1 + 0xb14));
    lVar6 = fn_829C0BE8(iVar1,iVar1 + 0x980,*(undefined4 *)(iVar1 + 0xb20));
    param_1 = fn_829C1940(lVar6,lVar6 + 0xb28);
    lVar6 = 0x12;
    do {
      if (*(short *)((uint)(byte)(&lbl_820551BC)[(int)lVar6] * 4 + param_1 + 0xa76) != 0) break;
      lVar6 = lVar6 + -1;
    } while (2 < (int)lVar6);
    lVar10 = lVar6 * 3 + (ulonglong)*(uint *)(param_1 + 0x16a0);
    uVar5 = ((ulonglong)*(uint *)(param_1 + 0x16a4) + 10 & 0xffffffff) >> 3;
    *(int *)(param_1 + 0x16a0) = (int)lVar10 + 0x11;
    uVar9 = (lVar10 + 0x1bU & 0xffffffff) >> 3;
    if (uVar5 <= uVar9) goto LAB_829c1ecc;
  }
  iVar1 = (int)param_4;
  if (((uVar9 & 0xffffffff) < (param_3 + 4U & 0xffffffff)) || ((param_2 & 0xffffffff) == 0)) {
    if ((uVar5 & 0xffffffff) == (uVar9 & 0xffffffff)) {
      uVar8 = *(uint *)(param_1 + 0x16b4);
      uVar11 = iVar1 + 2;
      if ((int)uVar8 < 0xe) {
        *(uint *)(param_1 + 0x16b4) = uVar8 + 3;
        *(ushort *)(param_1 + 0x16b0) =
             (ushort)(uVar11 << (uVar8 & 0x3f)) | *(ushort *)(param_1 + 0x16b0);
      }
      else {
        uVar8 = uVar11 << (uVar8 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b0);
        *(short *)(param_1 + 0x16b0) = (short)uVar8;
        *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar8;
        iVar2 = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x14) = iVar2;
        *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b0);
        iVar2 = *(int *)(param_1 + 0x16b4);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16b4) = iVar2 + -0xd;
        *(short *)(param_1 + 0x16b0) = (short)((uVar11 & 0xffff) >> (0x10U - iVar2 & 0x3f));
      }
      puVar4 = &lbl_82055718;
      puVar3 = &lbl_82055298;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x16b4);
      uVar11 = iVar1 + 4;
      if ((int)uVar8 < 0xe) {
        *(uint *)(param_1 + 0x16b4) = uVar8 + 3;
        *(ushort *)(param_1 + 0x16b0) =
             (ushort)(uVar11 << (uVar8 & 0x3f)) | *(ushort *)(param_1 + 0x16b0);
      }
      else {
        uVar8 = uVar11 << (uVar8 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b0);
        *(short *)(param_1 + 0x16b0) = (short)uVar8;
        *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar8;
        iVar2 = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x14) = iVar2;
        *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b0);
        iVar2 = *(int *)(param_1 + 0x16b4);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16b4) = iVar2 + -0xd;
        *(short *)(param_1 + 0x16b0) = (short)((uVar11 & 0xffff) >> (0x10U - iVar2 & 0x3f));
      }
      param_1 = fn_829C1260(param_1,(ulonglong)*(uint *)(param_1 + 0xb14) + 1,
                              (ulonglong)*(uint *)(param_1 + 0xb20) + 1,lVar6 + 1);
      puVar4 = (undefined *)(param_1 + 0x980);
      puVar3 = (undefined *)(param_1 + 0x8c);
    }
    iVar2 = fn_829C1510(param_1,puVar3,puVar4);
  }
  else {
    iVar2 = fn_829C1C10(param_1,param_2,param_3,param_4);
  }
  puVar12 = (undefined2 *)(iVar2 + 0x88);
  lVar6 = 0x11e;
  do {
    puVar12 = puVar12 + 2;
    *puVar12 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar12 = (undefined2 *)(iVar2 + 0x97c);
  lVar6 = 0x1e;
  do {
    puVar12 = puVar12 + 2;
    *puVar12 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar12 = (undefined2 *)(iVar2 + 0xa70);
  lVar6 = 0x13;
  do {
    puVar12 = puVar12 + 2;
    *puVar12 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(iVar2 + 0x16a4) = 0;
  *(undefined4 *)(iVar2 + 0x16a0) = 0;
  *(undefined2 *)(iVar2 + 0x48c) = 1;
  *(undefined4 *)(iVar2 + 0x16a8) = 0;
  *(undefined4 *)(iVar2 + 0x1698) = 0;
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x16b4) < 9) {
    if (*(int *)(iVar2 + 0x16b4) < 1) goto LAB_829c2100;
    *(char *)(*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x14)) = (char)*(undefined2 *)(iVar2 + 0x16b0);
  }
  else {
    *(char *)(*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x14)) = (char)*(undefined2 *)(iVar2 + 0x16b0);
    iVar1 = *(int *)(iVar2 + 0x14) + 1;
    *(int *)(iVar2 + 0x14) = iVar1;
    *(undefined1 *)(iVar1 + *(int *)(iVar2 + 8)) = *(undefined1 *)(iVar2 + 0x16b0);
  }
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
LAB_829c2100:
  *(undefined2 *)(iVar2 + 0x16b0) = 0;
  *(undefined4 *)(iVar2 + 0x16b4) = 0;
  return;
}

