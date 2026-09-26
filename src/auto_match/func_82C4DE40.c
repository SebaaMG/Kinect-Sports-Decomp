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


void fn_82C4DE40(int param_1,ushort *param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  
  uVar3 = *(uint *)(param_1 + 0x24);
  iVar9 = *param_3;
  pbVar13 = *(byte **)(*(int *)(param_1 + 0x28) + 0x5608);
  if (uVar3 == 1) {
    uVar11 = 0xffffff00;
  }
  else {
    uVar11 = -(uint)(uVar3 != 2);
  }
  iVar6 = 0;
  puVar5 = param_2;
  if ((((uint)param_2 & 1) != 0) && (0 < iVar9)) {
    if (((uVar11 & 0xffff) != 0) || (*(byte *)param_2 != 3)) {
      *pbVar13 = *(byte *)param_2;
      pbVar13 = pbVar13 + 1;
    }
    iVar6 = 1;
    puVar5 = (ushort *)((int)param_2 + 1);
    uVar11 = (uVar11 & 0xff) << 8 | (uint)*(byte *)param_2;
  }
  iVar14 = iVar9 + -1;
  if (iVar6 < iVar14) {
    lVar10 = (ulonglong)((iVar14 - iVar6) - 1U >> 1) + 1;
    iVar6 = (int)lVar10 * 2 + iVar6;
    uVar8 = uVar11;
    do {
      uVar2 = *puVar5;
      uVar11 = (uint)uVar2;
      bVar1 = (byte)(uVar2 >> 8);
      if ((uVar8 & 0xffff & uVar11) == 0) {
        if (((uVar8 & 0xffff) == 0) && ((uVar11 & 0xff00) == 0x300)) {
          *pbVar13 = (byte)uVar2;
          pbVar13 = pbVar13 + 1;
        }
        else {
          if (((uVar8 & 0xff) != 0) || (uVar11 != 3)) goto LAB_82c4df60;
          *pbVar13 = bVar1;
          pbVar13 = pbVar13 + 1;
        }
      }
      else {
LAB_82c4df60:
        pbVar13[1] = (byte)uVar2;
        *pbVar13 = bVar1;
        pbVar13 = pbVar13 + 2;
      }
      puVar5 = puVar5 + 1;
      lVar10 = lVar10 + -1;
      uVar8 = uVar11;
    } while (lVar10 != 0);
  }
  if (iVar6 == iVar14) {
    bVar1 = *(byte *)puVar5;
    if ((uVar11 & 0xffff) == 0) {
      if (bVar1 != 3) {
        *pbVar13 = bVar1;
        pbVar13 = pbVar13 + 1;
      }
      lVar10 = 0;
      uVar8 = 0;
      if ((bVar1 == 0) && (uVar3 + iVar9 != 0)) {
        pbVar12 = (byte *)(iVar9 + (int)param_2);
        iVar6 = 0;
        do {
          pbVar12 = pbVar12 + -1;
          if ((iVar6 < iVar9) && (uVar8 = (uint)lVar10, *pbVar12 != 0)) break;
          iVar6 = iVar6 + 1;
          lVar4 = (longlong)(int)(lVar10 + 1);
          uVar7 = lVar4 / 3 + (lVar4 >> 0x3f);
          uVar7 = (uVar7 & 0xffffffff) + ((uVar7 & 0xffffffff) >> 0x1f);
          lVar10 = (lVar10 + 1) - (uVar7 + (uVar7 & 0x7fffffff) * 2);
          uVar8 = (uint)lVar10;
        } while (iVar6 < (int)(uVar3 + iVar9));
      }
    }
    else {
      *pbVar13 = bVar1;
      pbVar13 = pbVar13 + 1;
      if ((uVar11 & 0xff) == 0) {
        uVar8 = -(uint)(bVar1 == 0) & 2;
      }
      else {
        uVar8 = (uint)LZCOUNT((uint)bVar1) >> 5;
      }
    }
  }
  else {
    uVar8 = uVar3;
    if (iVar6 == iVar9) {
      if ((uVar11 & 0xffff) == 0) {
        lVar10 = 0;
        uVar8 = 0;
        iVar6 = 0;
        if (uVar3 + iVar9 != 0) {
          pbVar12 = (byte *)(iVar9 + (int)param_2);
          do {
            uVar8 = (uint)lVar10;
            pbVar12 = pbVar12 + -1;
            if ((iVar6 < iVar9) && (*pbVar12 != 0)) break;
            iVar6 = iVar6 + 1;
            lVar4 = (longlong)(int)(lVar10 + 1);
            uVar7 = lVar4 / 3 + (lVar4 >> 0x3f);
            uVar7 = (uVar7 & 0xffffffff) + ((uVar7 & 0xffffffff) >> 0x1f);
            lVar10 = (lVar10 + 1) - (uVar7 + (uVar7 & 0x7fffffff) * 2);
            uVar8 = (uint)lVar10;
          } while (iVar6 < (int)(uVar3 + iVar9));
        }
      }
      else {
        uVar8 = (uint)LZCOUNT(uVar11 & 0xff) >> 5;
      }
    }
  }
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x5608);
  *(uint *)(param_1 + 0x24) = uVar8;
  iVar9 = (int)pbVar13 - iVar9;
  iVar6 = *(int *)(*(int *)(param_1 + 0x28) + 0x5608);
  *(int *)(param_1 + 0xc) = iVar6;
  *(int *)(param_1 + 0x10) = iVar6 + iVar9 + -1;
  *param_3 = iVar9;
  return;
}

