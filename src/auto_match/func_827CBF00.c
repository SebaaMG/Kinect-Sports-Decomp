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


void fn_827CBF00(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  int aiStack_470 [284];
  
  lVar17 = (ulonglong)param_2 + 0x18;
  uVar2 = *(uint *)(param_1 + 0x70);
  uVar16 = (ulonglong)uVar2;
  iVar19 = param_3 + 0x1c;
  iVar18 = param_4 + 0x18;
  iVar13 = 0x7fffffff;
  iVar15 = 0;
  if (0 < (int)uVar2) {
    piVar7 = *(int **)(param_1 + 0x74);
    piVar14 = aiStack_470;
    iVar3 = piVar7[2];
    uVar20 = uVar16;
    iVar13 = 0x7fffffff;
    do {
      bVar1 = *(byte *)(*piVar7 + iVar15);
      uVar8 = (ulonglong)bVar1;
      if ((int)(uint)bVar1 < (int)param_2) {
        uVar9 = uVar8 - lVar17;
        iVar6 = (int)((uVar8 - param_2 & 0xffffffff) << 1);
        iVar6 = iVar6 * iVar6;
      }
      else {
        if ((int)lVar17 < (int)(uint)bVar1) {
          iVar6 = (int)((uVar8 - lVar17 & 0xffffffff) << 1);
          iVar6 = iVar6 * iVar6;
        }
        else {
          iVar6 = 0;
          if ((int)(uint)bVar1 <= (int)((int)lVar17 + param_2) >> 1) {
            uVar9 = uVar8 - lVar17;
            goto LAB_827cbf94;
          }
        }
        uVar9 = uVar8 - param_2;
      }
LAB_827cbf94:
      iVar4 = (int)((uVar9 & 0xffffffff) << 1);
      bVar1 = *(byte *)(piVar7[1] + iVar15);
      iVar12 = param_3;
      iVar10 = iVar19;
      if (((int)(uint)bVar1 < param_3) ||
         (iVar12 = iVar19, iVar10 = param_3, iVar19 < (int)(uint)bVar1)) {
        iVar5 = ((uint)bVar1 - iVar12) * 3;
        iVar12 = ((uint)bVar1 - iVar10) * 3;
        iVar12 = iVar12 * iVar12;
        iVar6 = iVar5 * iVar5 + iVar6;
      }
      else {
        iVar12 = param_3;
        if ((int)(uint)bVar1 <= iVar19 + param_3 >> 1) {
          iVar12 = iVar19;
        }
        iVar12 = ((uint)bVar1 - iVar12) * 3;
        iVar12 = iVar12 * iVar12;
      }
      bVar1 = *(byte *)(iVar3 + iVar15);
      if ((int)(uint)bVar1 < param_4) {
        iVar5 = (uint)bVar1 - param_4;
        iVar10 = iVar18;
LAB_827cc040:
        iVar10 = ((uint)bVar1 - iVar10) * ((uint)bVar1 - iVar10);
        iVar6 = iVar5 * iVar5 + iVar6;
      }
      else {
        if (iVar18 < (int)(uint)bVar1) {
          iVar5 = (uint)bVar1 - iVar18;
          iVar10 = param_4;
          goto LAB_827cc040;
        }
        if (iVar18 + param_4 >> 1 < (int)(uint)bVar1) {
          iVar10 = (uint)bVar1 - param_4;
        }
        else {
          iVar10 = (uint)bVar1 - iVar18;
        }
        iVar10 = iVar10 * iVar10;
      }
      iVar10 = iVar10 + iVar12 + iVar4 * iVar4;
      *piVar14 = iVar6;
      if (iVar10 < iVar13) {
        iVar13 = iVar10;
      }
      iVar15 = iVar15 + 1;
      piVar14 = piVar14 + 1;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  iVar15 = 0;
  cVar11 = '\0';
  if (0 < (int)uVar2) {
    piVar7 = aiStack_470;
    do {
      if (*piVar7 <= iVar13) {
        *(char *)(iVar15 + param_5) = cVar11;
        iVar15 = iVar15 + 1;
      }
      cVar11 = cVar11 + '\x01';
      piVar7 = piVar7 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}

