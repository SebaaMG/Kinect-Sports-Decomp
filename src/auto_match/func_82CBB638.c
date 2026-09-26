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
extern unsigned int iStack0000003c;


void fn_82CBB638(int param_1,int param_2,longlong param_3,longlong param_4,longlong param_5,
                  int param_6,longlong param_7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar14;
  int iVar13;
  short *psVar15;
  bool bVar16;
  longlong lVar17;
  longlong lVar18;
  int iStack0000003c;
  
  iVar5 = (int)param_7;
  uVar1 = *(uint *)(param_1 + 0x88);
  iVar13 = uVar1 * 2;
  param_2 = (uint)(param_7 != 0) + param_2;
  iVar6 = uVar1 << 3;
  iVar11 = uVar1 << 4;
  psVar9 = (short *)(iVar13 * param_2 * 4 + *(int *)(param_1 + 0x6f0));
  psVar7 = (short *)(uVar1 * param_2 * 2 + *(int *)(param_1 + 0x6f8));
  iStack0000003c = param_6;
  if (iVar5 == 0) {
    iVar12 = 0;
    if (0 < iVar13) {
      lVar17 = 0;
      psVar8 = psVar9 + uVar1 * 2;
      psVar15 = psVar9;
      do {
        if (iVar12 != 0) {
          if ((*psVar15 == 0x4000) && (psVar15[-1] == 0x4000)) {
            (**(code **)(param_1 + 0xca4))((ulonglong)*(uint *)(param_1 + 0xbc8) + lVar17,iVar11);
          }
          if ((*psVar8 == 0x4000) && (psVar8[-1] == 0x4000)) {
            (**(code **)(param_1 + 0xca4))((ulonglong)*(uint *)(param_1 + 0xbd0) + lVar17,iVar11);
          }
        }
        iVar12 = iVar12 + 1;
        psVar15 = psVar15 + 1;
        psVar8 = psVar8 + 1;
        lVar17 = lVar17 + 0x10;
      } while (iVar12 < iVar13);
    }
    iVar12 = 0;
    if (0 < *(int *)(param_1 + 0x88)) {
      lVar17 = 0;
      psVar15 = psVar7;
      do {
        if (((iVar12 != 0) && (*psVar15 == 0x4000)) && (psVar15[-1] == 0x4000)) {
          (**(code **)(param_1 + 0xca4))((ulonglong)*(uint *)(param_1 + 0xbd4) + lVar17,iVar6);
          (**(code **)(param_1 + 0xca4))(lVar17 + (ulonglong)*(uint *)(param_1 + 0xbdc),iVar6);
        }
        iVar12 = iVar12 + 1;
        psVar15 = psVar15 + 1;
        lVar17 = lVar17 + 0x10;
      } while (iVar12 < *(int *)(param_1 + 0x88));
    }
  }
  lVar17 = 0;
  if (0 < iVar13) {
    lVar18 = 0;
    psVar8 = psVar9 + uVar1 * 2;
    psVar15 = psVar9 + (uVar1 & 0x3fffffff) * -2;
    lVar10 = param_3;
    do {
      if ((iStack0000003c != 0) || (iVar12 = 1, *psVar15 != 0x4000)) {
        iVar12 = 0;
      }
      bVar16 = false;
      bVar14 = false;
      if (iVar5 == 0) {
        bVar16 = *psVar9 == 0x4000;
        bVar14 = *psVar8 == 0x4000;
      }
      if ((iVar12 == 0) && (bVar16 == false)) {
LAB_82cbb884:
        if (bVar14 != false) goto LAB_82cbb88c;
      }
      else {
        (**(code **)(param_1 + 0xca8))
                  ((ulonglong)*(uint *)(param_1 + 0xbcc) + lVar18,
                   lVar18 + (ulonglong)*(uint *)(param_1 + 0xbc8),iVar11,lVar10,
                   *(undefined4 *)(param_1 + 0xcc),iVar12,bVar16,0);
        if (bVar16 == false) goto LAB_82cbb884;
LAB_82cbb88c:
        (**(code **)(param_1 + 0xca8))
                  (lVar18 + (ulonglong)*(uint *)(param_1 + 0xbc8),
                   (ulonglong)*(uint *)(param_1 + 0xbd0) + lVar18,iVar11,
                   ((ulonglong)*(uint *)(param_1 + 0xcc) + lVar17 & 0x1fffffff) * 8 + param_3,
                   (ulonglong)*(uint *)(param_1 + 0xcc),bVar16,bVar14,0);
      }
      lVar17 = lVar17 + 1;
      psVar15 = psVar15 + 1;
      psVar9 = psVar9 + 1;
      psVar8 = psVar8 + 1;
      lVar10 = lVar10 + 8;
      lVar18 = lVar18 + 0x10;
    } while ((int)lVar17 < iVar13);
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar17 = 0;
    param_4 = param_4 - param_5;
    psVar9 = psVar7;
    do {
      if (iStack0000003c == 0) {
        iVar13 = 1;
        if (psVar7[iVar11 - *(int *)(param_1 + 0x88)] != 0x4000) goto LAB_82cbb92c;
      }
      else {
LAB_82cbb92c:
        iVar13 = 0;
      }
      if ((iVar5 != 0) || (iVar12 = 1, *psVar9 != 0x4000)) {
        iVar12 = 0;
      }
      if ((iVar13 != 0) || (iVar12 != 0)) {
        (**(code **)(param_1 + 0xca8))
                  ((ulonglong)*(uint *)(param_1 + 0xbd8) + lVar17,
                   lVar17 + (ulonglong)*(uint *)(param_1 + 0xbd4),iVar6,param_5 + param_4,
                   *(undefined4 *)(param_1 + 0xd0),iVar13,iVar12,0);
        (**(code **)(param_1 + 0xca8))
                  ((ulonglong)*(uint *)(param_1 + 0xbe0) + lVar17,
                   lVar17 + (ulonglong)*(uint *)(param_1 + 0xbdc),iVar6,param_5,
                   *(undefined4 *)(param_1 + 0xd0),iVar13,iVar12,0);
      }
      iVar11 = iVar11 + 1;
      psVar9 = psVar9 + 1;
      param_5 = param_5 + 8;
      lVar17 = lVar17 + 0x10;
    } while (iVar11 < *(int *)(param_1 + 0x88));
  }
  uVar2 = *(undefined4 *)(param_1 + 0xbd0);
  uVar3 = *(undefined4 *)(param_1 + 0xbd4);
  uVar4 = *(undefined4 *)(param_1 + 0xbdc);
  *(undefined4 *)(param_1 + 0xbd0) = *(undefined4 *)(param_1 + 0xbcc);
  *(undefined4 *)(param_1 + 0xbcc) = uVar2;
  *(undefined4 *)(param_1 + 0xbd4) = *(undefined4 *)(param_1 + 0xbd8);
  *(undefined4 *)(param_1 + 0xbd8) = uVar3;
  *(undefined4 *)(param_1 + 0xbdc) = *(undefined4 *)(param_1 + 0xbe0);
  *(undefined4 *)(param_1 + 0xbe0) = uVar4;
  return;
}

