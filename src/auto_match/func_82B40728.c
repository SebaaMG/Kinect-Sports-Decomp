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
extern int fn_82F655D8();
extern unsigned int lbl_82002C40;


void fn_82B40728(undefined8 *param_1,int param_2,longlong param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6,longlong param_7)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  iVar10 = (int)param_5;
  *(int *)(param_1 + 6) = iVar10;
  iVar9 = (int)param_6;
  *(int *)((int)param_1 + 0x34) = iVar9;
  iVar5 = (int)param_7;
  *(int *)(param_1 + 7) = iVar5;
  param_1[0xe] = 1;
  iVar1 = (int)param_3;
  if (((param_2 == 6) || (param_2 == 10)) || (param_2 == 0xe)) {
    iVar3 = 0;
    if (0 < 0x26 - iVar1) {
      do {
        iVar3 = iVar3 + 1;
        param_1[0xe] = param_1[0xe] << 1;
      } while (iVar3 < 0x26 - iVar1);
    }
    uVar2 = ~(param_1[0xe] - 1);
  }
  else {
    iVar3 = 0;
    if (0 < 0x28 - iVar1) {
      do {
        iVar3 = iVar3 + 1;
        param_1[0xe] = param_1[0xe] << 1;
      } while (iVar3 < 0x28 - iVar1);
    }
    uVar2 = ~(param_1[0xe] - 1) | 0xffffffffffff0000;
  }
  param_1[0xe] = uVar2;
  iVar3 = (int)param_4;
  switch(param_2) {
  case 5:
  case 6:
  case 7:
  case 8:
  case 0x12:
    iVar4 = (int)((param_4 & 0x7fffffff) << 1);
    *(int *)((int)param_1 + 0x44) = ((iVar4 - iVar1) - iVar5) + 0x17;
    iVar6 = iVar1 + iVar3 * -3;
    *(int *)((int)param_1 + 0x4c) = (((int)((param_6 & 0xffffffff) << 1) - iVar3) - iVar5) + iVar1;
    *(int *)((int)param_1 + 0x3c) = (0x17 - iVar1) - iVar10;
    iVar5 = iVar6 + iVar5;
    iVar4 = (iVar1 - iVar4) + iVar9;
    *(int *)(param_1 + 10) = iVar5;
    *(int *)(param_1 + 9) = iVar4;
    *(int *)(param_1 + 0xb) = (int)((((param_3 - param_4) + param_6) - 0x14 & 0xffffffff) << 1);
    *(int *)((int)param_1 + 0x5c) =
         (int)(((param_3 + param_7) - 0x14U & 0xffffffff) << 1) + iVar3 * -3;
    *(int *)(param_1 + 8) = ((iVar3 - iVar1) - iVar9) + 0x17;
    *(int *)((int)param_1 + 0x54) = (int)(((param_3 + param_5) - 0x14U & 0xffffffff) << 1) - iVar3;
    uVar13 = lbl_82002C40;
    uVar12 = fn_82F655D8(lbl_82002C40,(double)(longlong)iVar4);
    param_1[2] = uVar12;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)(iVar6 + iVar9));
    param_1[3] = uVar12;
    iVar10 = (int)(param_3 - param_4) + iVar10;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)iVar10);
    param_1[1] = uVar12;
    uVar13 = fn_82F655D8(uVar13,(double)(longlong)iVar1);
    *param_1 = uVar13;
    iVar9 = 0;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    if (0 < iVar5) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)((int)param_1 + 0x6c) = *(int *)((int)param_1 + 0x6c) << 1 | 1;
      } while (iVar9 < iVar5);
    }
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (0 < iVar4) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) << 1 | 1;
      } while (iVar9 < iVar4);
    }
    iVar9 = 0;
    *(undefined4 *)((int)param_1 + 100) = 0;
    if (0 < iVar10) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)((int)param_1 + 100) = *(int *)((int)param_1 + 100) << 1 | 1;
      } while (iVar9 < iVar10);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar9 = 0;
    if (0 < param_3 + -1) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 1 | 1;
      } while (iVar9 < (int)(param_3 + -1));
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)((int)param_1 + 0x24) = iVar10;
    *(int *)(param_1 + 5) = iVar4;
    *(int *)((int)param_1 + 0x2c) = iVar5;
    *(undefined4 *)(param_1 + 0xf) = 0;
    if (0 < iVar3) {
      do {
        *(int *)(param_1 + 0xf) = (int)(*(uint *)(param_1 + 0xf) | 0x800000) >> 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x13:
    iVar8 = (int)((param_4 & 0x7fffffff) << 1);
    iVar4 = iVar1 + iVar3 * -3 + iVar5;
    iVar6 = (iVar1 - iVar8) + iVar9;
    *(int *)(param_1 + 8) = ((iVar3 - iVar1) - iVar9) + 0x18;
    *(int *)((int)param_1 + 0x4c) = (((int)((param_6 & 0xffffffff) << 1) - iVar3) - iVar5) + iVar1;
    *(int *)(param_1 + 0xb) = (int)(((param_3 - param_4) + param_6 & 0xffffffff) << 1) + -0x29;
    *(int *)((int)param_1 + 0x3c) = (0x17 - iVar1) - iVar10;
    iVar7 = iVar4 + -2;
    *(int *)(param_1 + 10) = iVar7;
    *(int *)((int)param_1 + 0x54) = (int)(((param_3 + param_5) - 0x14U & 0xffffffff) << 1) - iVar3;
    iVar11 = iVar6 + -1;
    *(int *)((int)param_1 + 0x44) = ((iVar8 - iVar1) - iVar5) + 0x19;
    *(int *)((int)param_1 + 0x5c) =
         (int)((param_3 + param_7 & 0xffffffffU) << 1) + (iVar3 + 0xe) * -3;
    *(int *)(param_1 + 9) = iVar11;
    uVar13 = lbl_82002C40;
    uVar12 = fn_82F655D8(lbl_82002C40,(double)(longlong)(iVar4 + 2));
    param_1[3] = uVar12;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)(iVar6 + 1));
    param_1[2] = uVar12;
    iVar10 = (int)(param_3 - param_4) + iVar10;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)iVar10);
    param_1[1] = uVar12;
    iVar5 = iVar1 + -1;
    uVar13 = fn_82F655D8(uVar13,(double)(longlong)iVar5);
    *param_1 = uVar13;
    iVar9 = 0;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    if (0 < iVar7) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)((int)param_1 + 0x6c) = *(int *)((int)param_1 + 0x6c) << 1 | 1;
      } while (iVar9 < iVar7);
    }
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (0 < iVar11) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) << 1 | 1;
      } while (iVar9 < iVar11);
    }
    iVar9 = 0;
    *(undefined4 *)((int)param_1 + 100) = 0;
    if (0 < iVar10) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)((int)param_1 + 100) = *(int *)((int)param_1 + 100) << 1 | 1;
      } while (iVar9 < iVar10);
    }
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (0 < iVar5) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 1 | 1;
      } while (iVar9 < iVar5);
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)((int)param_1 + 0x24) = iVar10;
    *(int *)(param_1 + 5) = iVar11;
    *(int *)((int)param_1 + 0x2c) = iVar7;
    *(undefined4 *)(param_1 + 0xf) = 0;
    if (0 < iVar3) {
      do {
        *(int *)(param_1 + 0xf) = (int)(*(uint *)(param_1 + 0xf) | 0x800000) >> 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x14:
  case 0x15:
    iVar6 = (int)((param_4 & 0x7fffffff) << 1);
    iVar4 = iVar1 + iVar3 * -3 + iVar5;
    iVar11 = (iVar1 - iVar6) + iVar9 + -2;
    *(int *)(param_1 + 9) = iVar11;
    *(int *)((int)param_1 + 0x4c) = (((int)((param_6 & 0xffffffff) << 1) - iVar3) - iVar5) + iVar1;
    *(int *)(param_1 + 8) = ((iVar3 - iVar1) - iVar9) + 0x19;
    *(int *)((int)param_1 + 0x3c) = (0x17 - iVar1) - iVar10;
    iVar8 = iVar4 + -4;
    *(int *)(param_1 + 10) = iVar8;
    *(int *)((int)param_1 + 0x54) = (int)(((param_3 + param_5) - 0x14U & 0xffffffff) << 1) - iVar3;
    *(int *)((int)param_1 + 0x44) = ((iVar6 - iVar1) - iVar5) + 0x1b;
    *(int *)(param_1 + 0xb) = (int)((((param_3 - param_4) + param_6) - 0x15 & 0xffffffff) << 1);
    *(int *)((int)param_1 + 0x5c) =
         (int)(((param_3 + param_7) - 0x16U & 0xffffffff) << 1) + iVar3 * -3;
    uVar13 = lbl_82002C40;
    uVar12 = fn_82F655D8(lbl_82002C40,(double)(longlong)(iVar4 + -2));
    param_1[3] = uVar12;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)iVar11);
    param_1[2] = uVar12;
    iVar10 = (int)(param_3 - param_4) + iVar10;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)(iVar10 + -2));
    param_1[1] = uVar12;
    uVar13 = fn_82F655D8(uVar13,(double)(longlong)(iVar1 + -2));
    *param_1 = uVar13;
    iVar9 = 0;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    if (0 < iVar8) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)((int)param_1 + 0x6c) = *(int *)((int)param_1 + 0x6c) << 1 | 1;
      } while (iVar9 < iVar8);
    }
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (0 < iVar11) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) << 1 | 1;
      } while (iVar9 < iVar11);
    }
    iVar9 = 0;
    *(undefined4 *)((int)param_1 + 100) = 0;
    if (0 < iVar10) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)((int)param_1 + 100) = *(int *)((int)param_1 + 100) << 1 | 1;
      } while (iVar9 < iVar10);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar9 = 0;
    if (0 < param_3 + -1) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 1 | 1;
      } while (iVar9 < (int)(param_3 + -1));
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)((int)param_1 + 0x24) = iVar10;
    *(int *)(param_1 + 5) = iVar11;
    *(int *)((int)param_1 + 0x2c) = iVar8;
    *(undefined4 *)(param_1 + 0xf) = 0;
    if (0 < iVar3) {
      do {
        *(int *)(param_1 + 0xf) = (int)(*(uint *)(param_1 + 0xf) | 0x800000) >> 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  default:
    iVar4 = (iVar1 - (int)((param_4 & 0xffffffff) << 1)) + iVar9 + 1;
    *(int *)(param_1 + 9) = iVar4;
    *(int *)(param_1 + 8) = ((iVar3 - iVar1) - iVar9) + 0x17;
    *(int *)(param_1 + 0xb) = (int)(((param_3 - param_4) + param_6 & 0xffffffff) << 1) + -0x27;
    iVar6 = iVar1 + iVar3 * -3 + iVar5 + 2;
    *(int *)(param_1 + 10) = iVar6;
    *(int *)((int)param_1 + 0x44) = ((int)((param_4 + 0xb & 0xffffffff) << 1) - iVar1) - iVar5;
    *(int *)((int)param_1 + 0x5c) =
         (int)(((param_3 + param_7) - 0x13U & 0xffffffff) << 1) + iVar3 * -3;
    *(int *)((int)param_1 + 0x4c) = (((int)((param_6 & 0xffffffff) << 1) - iVar3) - iVar5) + iVar1;
    *(int *)((int)param_1 + 0x3c) = (0x18 - iVar1) - iVar10;
    *(int *)((int)param_1 + 0x54) = (int)(((param_3 + param_5) - 0x14U & 0xffffffff) << 1) - iVar3;
    uVar13 = lbl_82002C40;
    uVar12 = fn_82F655D8(lbl_82002C40,
                               (double)(longlong)((int)(2 - param_4) * 3 + iVar1 + iVar5));
    param_1[3] = uVar12;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)
                                              ((int)((2 - param_4 & 0xffffffff) << 1) + iVar1 +
                                              iVar9));
    param_1[2] = uVar12;
    iVar10 = (int)(param_3 - param_4) + iVar10;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)(iVar10 + 2));
    param_1[1] = uVar12;
    uVar13 = fn_82F655D8(uVar13,(double)(longlong)iVar1);
    *param_1 = uVar13;
    iVar9 = 0;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    if (0 < iVar6) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)((int)param_1 + 0x6c) = *(int *)((int)param_1 + 0x6c) << 1 | 1;
      } while (iVar9 < iVar6);
    }
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (0 < iVar4) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) << 1 | 1;
      } while (iVar9 < iVar4);
    }
    iVar9 = 0;
    *(undefined4 *)((int)param_1 + 100) = 0;
    if (0 < iVar10) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)((int)param_1 + 100) = *(int *)((int)param_1 + 100) << 1 | 1;
      } while (iVar9 < iVar10);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar9 = 0;
    if (0 < param_3 + -1) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 1 | 1;
      } while (iVar9 < (int)(param_3 + -1));
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)((int)param_1 + 0x24) = iVar10;
    *(int *)(param_1 + 5) = iVar4;
    *(int *)((int)param_1 + 0x2c) = iVar6;
    *(undefined4 *)(param_1 + 0xf) = 0;
    if (0 < iVar3) {
      do {
        *(int *)(param_1 + 0xf) = (int)(*(uint *)(param_1 + 0xf) | 0x1000000) >> 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    goto LAB_82b414bc;
  case 0x16:
    iVar8 = (int)((param_4 & 0x7fffffff) << 1);
    iVar6 = (iVar1 - iVar8) + iVar9;
    iVar4 = iVar1 + iVar3 * -3 + iVar5;
    *(int *)((int)param_1 + 0x5c) =
         (int)((param_3 + param_7 & 0xffffffffU) << 1) + iVar3 * -3 + -0x29;
    *(int *)((int)param_1 + 0x4c) =
         (((int)((param_6 & 0xffffffff) << 1) - iVar3) - iVar5) + iVar1 + -1;
    iVar11 = iVar4 + -1;
    *(int *)(param_1 + 10) = iVar11;
    *(int *)((int)param_1 + 0x54) = (int)(((param_3 + param_5) - 0x14U & 0xffffffff) << 1) - iVar3;
    *(int *)(param_1 + 8) = ((iVar3 - iVar1) - iVar9) + 0x19;
    *(int *)((int)param_1 + 0x44) = ((iVar8 - iVar1) - iVar5) + 0x19;
    iVar5 = iVar6 + -1;
    *(int *)(param_1 + 0xb) = (int)(((param_3 - param_4) + param_6 & 0xffffffff) << 1) + -0x29;
    *(int *)((int)param_1 + 0x3c) = (0x18 - iVar1) - iVar10;
    *(int *)(param_1 + 9) = iVar5;
    uVar13 = lbl_82002C40;
    uVar12 = fn_82F655D8(lbl_82002C40,(double)(longlong)(iVar4 + 5));
    param_1[3] = uVar12;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)(iVar6 + 3));
    param_1[2] = uVar12;
    iVar10 = (int)(param_3 - param_4) + iVar10;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)(iVar10 + 1));
    param_1[1] = uVar12;
    iVar4 = iVar1 + -1;
    uVar13 = fn_82F655D8(uVar13,(double)(longlong)iVar4);
    *param_1 = uVar13;
    iVar9 = 0;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    if (0 < iVar11) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)((int)param_1 + 0x6c) = *(int *)((int)param_1 + 0x6c) << 1 | 1;
      } while (iVar9 < iVar11);
    }
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (0 < iVar5) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) << 1 | 1;
      } while (iVar9 < iVar5);
    }
    iVar9 = 0;
    *(undefined4 *)((int)param_1 + 100) = 0;
    if (0 < iVar10) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)((int)param_1 + 100) = *(int *)((int)param_1 + 100) << 1 | 1;
      } while (iVar9 < iVar10);
    }
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (0 < iVar4) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 1 | 1;
      } while (iVar9 < iVar4);
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)((int)param_1 + 0x24) = iVar10;
    *(int *)(param_1 + 5) = iVar5;
    *(int *)((int)param_1 + 0x2c) = iVar11;
    *(undefined4 *)(param_1 + 0xf) = 0;
    if (0 < iVar3) {
      do {
        *(int *)(param_1 + 0xf) = (int)(*(uint *)(param_1 + 0xf) | 0x1000000) >> 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    goto LAB_82b414bc;
  case 0x17:
  case 0x18:
    iVar6 = (int)((param_4 & 0x7fffffff) << 1);
    iVar11 = (iVar1 - iVar6) + iVar9 + -1;
    *(int *)(param_1 + 9) = iVar11;
    iVar4 = iVar1 + iVar3 * -3 + iVar5;
    *(int *)((int)param_1 + 0x4c) =
         (((int)((param_6 & 0xffffffff) << 1) - iVar3) - iVar5) + iVar1 + 1;
    iVar8 = iVar4 + -3;
    *(int *)(param_1 + 0xb) = (int)(((param_3 - param_4) + param_6 & 0xffffffff) << 1) + -0x29;
    *(int *)(param_1 + 10) = iVar8;
    *(int *)(param_1 + 8) = ((iVar3 - iVar1) - iVar9) + 0x19;
    *(int *)((int)param_1 + 0x44) = ((iVar6 - iVar1) - iVar5) + 0x1b;
    *(int *)((int)param_1 + 0x54) = ((int)((param_3 + param_5 & 0xffffffffU) << 1) - iVar3) + -0x29;
    *(int *)((int)param_1 + 0x5c) =
         (int)((param_3 + param_7 & 0xffffffffU) << 1) + iVar3 * -3 + -0x2b;
    *(int *)((int)param_1 + 0x3c) = (0x19 - iVar1) - iVar10;
    uVar13 = lbl_82002C40;
    uVar12 = fn_82F655D8(lbl_82002C40,(double)(longlong)(iVar4 + -1));
    param_1[3] = uVar12;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)iVar11);
    param_1[2] = uVar12;
    iVar9 = (int)(param_3 - param_4) + iVar10 + -1;
    uVar12 = fn_82F655D8(uVar13,(double)(longlong)iVar9);
    param_1[1] = uVar12;
    uVar13 = fn_82F655D8(uVar13,(double)(longlong)(iVar1 + -1));
    *param_1 = uVar13;
    iVar10 = 0;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    if (0 < iVar8) {
      do {
        iVar10 = iVar10 + 1;
        *(uint *)((int)param_1 + 0x6c) = *(int *)((int)param_1 + 0x6c) << 1 | 1;
      } while (iVar10 < iVar8);
    }
    iVar10 = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (0 < iVar11) {
      do {
        iVar10 = iVar10 + 1;
        *(uint *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) << 1 | 1;
      } while (iVar10 < iVar11);
    }
    iVar10 = 0;
    *(undefined4 *)((int)param_1 + 100) = 0;
    if (0 < iVar9) {
      do {
        iVar10 = iVar10 + 1;
        *(uint *)((int)param_1 + 100) = *(int *)((int)param_1 + 100) << 1 | 1;
      } while (iVar10 < iVar9);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (0 < iVar1) {
      do {
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 1 | 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)((int)param_1 + 0x24) = iVar9;
    iVar1 = 0;
    *(int *)(param_1 + 5) = iVar11;
    *(int *)((int)param_1 + 0x2c) = iVar8;
    *(undefined4 *)(param_1 + 0xf) = 0;
    if (0 < (longlong)(param_4 + 1)) {
      do {
        iVar1 = iVar1 + 1;
        *(int *)(param_1 + 0xf) = (int)(*(uint *)(param_1 + 0xf) | 0x2000000) >> 1;
      } while (iVar1 < (int)(param_4 + 1));
    }
LAB_82b414bc:
    iVar3 = 0x18 - iVar3;
    goto code_r0x82b414c0;
  }
  iVar3 = 0x17 - iVar3;
code_r0x82b414c0:
  *(int *)((int)param_1 + 0x7c) = iVar3;
  return;
}

