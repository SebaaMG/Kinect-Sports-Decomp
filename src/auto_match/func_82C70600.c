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


longlong fn_82C70600(longlong param_1,int param_2,longlong param_3,int param_4,int *param_5,
                      int param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  
  uVar13 = 0;
  uVar2 = *param_5 >> 1;
  uVar6 = uVar2 & 0xfffffffc;
  param_6 = param_6 - param_5[3];
  iVar3 = (int)param_3;
  iVar4 = (int)param_1;
  if (0 < (int)uVar6) {
    iVar8 = 0;
    iVar12 = iVar4 - iVar3;
    do {
      iVar14 = (int)uVar13;
      bVar1 = *(byte *)((iVar14 >> 2) + param_5[0xf]);
      if (bVar1 == 0) {
        *(undefined4 *)(iVar12 + iVar14 + iVar3) = 0x80808080;
        *(undefined4 *)(iVar14 + iVar3) = 0x80808080;
      }
      else if ((bVar1 & 0x55) == 0x55) {
        iVar9 = (*(int *)(iVar8 + param_5[0x11]) * param_6 >> 0x14) + param_5[3];
        if (((*(int *)(iVar8 + param_5[0x10]) < 0) || (iVar9 < 0)) || (param_5[1] <= iVar9)) {
          *(undefined1 *)(iVar12 + iVar14 + iVar3) = 0x80;
          *(undefined1 *)(iVar14 + iVar3) = 0x80;
        }
        else {
          iVar9 = (iVar9 >> 1) * uVar2 + (*(int *)(iVar8 + param_5[0x10]) >> 1);
          *(undefined1 *)(iVar12 + iVar14 + iVar3) = *(undefined1 *)(iVar9 + param_2);
          *(undefined1 *)(iVar14 + iVar3) = *(undefined1 *)(iVar9 + param_4);
        }
        iVar9 = *(int *)(iVar8 + param_5[0x10] + 8);
        iVar10 = (*(int *)(iVar8 + param_5[0x11] + 8) * param_6 >> 0x14) + param_5[3];
        if (((iVar9 < 0) || (iVar10 < 0)) || (param_5[1] <= iVar10)) {
          *(undefined1 *)(iVar14 + iVar4 + 1) = 0x80;
          *(undefined1 *)(iVar14 + iVar3 + 1) = 0x80;
        }
        else {
          iVar9 = (iVar10 >> 1) * uVar2 + (iVar9 >> 1);
          *(undefined1 *)(iVar14 + iVar4 + 1) = *(undefined1 *)(iVar9 + param_2);
          *(undefined1 *)(iVar14 + iVar3 + 1) = *(undefined1 *)(iVar9 + param_4);
        }
        iVar9 = *(int *)(iVar8 + 0x10 + param_5[0x10]);
        iVar10 = (*(int *)(iVar8 + 0x10 + param_5[0x11]) * param_6 >> 0x14) + param_5[3];
        if (((iVar9 < 0) || (iVar10 < 0)) || (param_5[1] <= iVar10)) {
          *(undefined1 *)(iVar14 + iVar4 + 2) = 0x80;
          *(undefined1 *)(iVar14 + iVar3 + 2) = 0x80;
        }
        else {
          iVar9 = (iVar10 >> 1) * uVar2 + (iVar9 >> 1);
          *(undefined1 *)(iVar14 + iVar4 + 2) = *(undefined1 *)(iVar9 + param_2);
          *(undefined1 *)(iVar14 + iVar3 + 2) = *(undefined1 *)(iVar9 + param_4);
        }
        iVar9 = *(int *)(iVar8 + 0x18 + param_5[0x10]);
        iVar10 = (*(int *)(iVar8 + 0x18 + param_5[0x11]) * param_6 >> 0x14) + param_5[3];
        if (((iVar9 < 0) || (iVar10 < 0)) || (param_5[1] <= iVar10)) {
          *(undefined1 *)(iVar14 + iVar4 + 3) = 0x80;
          *(undefined1 *)(iVar14 + iVar3 + 3) = 0x80;
        }
        else {
          iVar9 = (iVar10 >> 1) * uVar2 + (iVar9 >> 1);
          *(undefined1 *)(iVar14 + iVar4 + 3) = *(undefined1 *)(iVar9 + param_2);
          *(undefined1 *)(iVar14 + iVar3 + 3) = *(undefined1 *)(iVar9 + param_4);
        }
      }
      else {
        iVar14 = iVar14 + iVar3;
        uVar11 = 0;
        lVar7 = 4;
        iVar9 = iVar8;
        do {
          if ((1 << ((uVar11 & 0x1f) << 1) & (uint)bVar1) == 0) {
LAB_82c708ec:
            *(undefined1 *)(iVar12 + iVar14 + uVar11) = 0x80;
            *(undefined1 *)(iVar14 + uVar11) = 0x80;
          }
          else {
            iVar10 = (*(int *)(param_5[0x11] + iVar9) * param_6 >> 0x14) + param_5[3];
            if (((*(int *)(param_5[0x10] + iVar9) < 0) || (iVar10 < 0)) || (param_5[1] <= iVar10))
            goto LAB_82c708ec;
            iVar10 = (iVar10 >> 1) * uVar2 + (*(int *)(param_5[0x10] + iVar9) >> 1);
            *(undefined1 *)(iVar12 + iVar14 + uVar11) = *(undefined1 *)(iVar10 + param_2);
            *(undefined1 *)(iVar14 + uVar11) = *(undefined1 *)(iVar10 + param_4);
          }
          uVar11 = uVar11 + 1;
          iVar9 = iVar9 + 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar13 = uVar13 + 4;
      iVar8 = iVar8 + 0x20;
    } while ((int)uVar13 < (int)uVar6);
  }
  if ((uVar6 != uVar2) &&
     (bVar1 = *(byte *)(((int)uVar13 >> 2) + param_5[0xf]), (int)uVar13 < (int)uVar2)) {
    lVar7 = (longlong)(int)uVar2 - uVar13;
    param_3 = uVar13 + param_3;
    lVar15 = (uVar13 & 0x1fffffff) << 3;
    do {
      puVar5 = (undefined1 *)param_3;
      if ((1 << ((uint)((uVar13 & 0xffffffff) << 1) & 6) & (uint)bVar1) == 0) {
LAB_82c709b8:
        puVar5[iVar4 - iVar3] = 0x80;
        *puVar5 = 0x80;
      }
      else {
        iVar12 = *(int *)(param_5[0x10] + (int)lVar15);
        iVar8 = (*(int *)(param_5[0x11] + (int)lVar15) * param_6 >> 0x14) + param_5[3];
        if (((iVar12 < 0) || (iVar8 < 0)) || (param_5[1] <= iVar8)) goto LAB_82c709b8;
        iVar12 = (iVar8 >> 1) * uVar2 + (iVar12 >> 1);
        puVar5[iVar4 - iVar3] = *(undefined1 *)(iVar12 + param_2);
        *puVar5 = *(undefined1 *)(iVar12 + param_4);
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 8;
      param_3 = param_3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return (int)uVar2 + param_1;
}

