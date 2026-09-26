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


void fn_82F2EDA8(int param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar12;
  longlong lVar11;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  
  uVar12 = *(uint *)(*(int *)(param_1 + 0x74) + 8);
  if (((uVar12 != 0) && (*(int *)(param_1 + 100) != 0)) &&
     (iVar13 = *(int *)(param_1 + 0x60), iVar13 != 0)) {
    uVar2 = *(uint *)(param_1 + 100);
    trapWord(6,(ulonglong)uVar12,0);
    uVar15 = (uVar12 - 1) * uVar2;
    iVar3 = (int)((uint)*(ushort *)(*(int *)(param_1 + 0x74) + 0xe) * iVar13 + 0x1f & 0xffffffe0) >>
            3;
    uVar1 = (int)(((ulonglong)uVar12 & 0xffffff) << 8) / (int)uVar2;
    trapWord(6,(ulonglong)uVar2,0);
    trapWord(5,(ulonglong)uVar2 &
               ~((((ulonglong)uVar12 & 0x7fffff) << 9 | ((ulonglong)uVar12 & 0xffffff) >> 0x17) - 1)
             ,0xffff);
    trapWord(5,(ulonglong)uVar12 &
               ~((((ulonglong)uVar15 & 0x7fffffff) << 1 | (ulonglong)(uVar15 >> 0x1f)) - 1),0xffff);
    iVar14 = (int)uVar15 / (int)uVar12;
    if (param_3 < (int)uVar15 / (int)uVar12) {
      iVar14 = param_3;
    }
    uVar16 = (ulonglong)(uVar1 >> 0x1f) - 1 & (longlong)(int)uVar1;
    iVar9 = (int)uVar16;
    if (*(int *)(param_1 + 0x68) == 0) {
      lVar6 = 0;
    }
    else {
      uVar12 = iVar9 - 0x100;
      lVar6 = (longlong)((int)uVar12 >> 1) + (ulonglong)((int)uVar12 < 0 && (uVar12 & 1) != 0);
    }
    iVar4 = (int)param_2;
    uVar5 = (longlong)iVar9 * (longlong)iVar4 + lVar6;
    puVar10 = (undefined1 *)(iVar3 * iVar4 + *(int *)(param_1 + 0x7c));
    lVar6 = 0;
    if ((longlong)uVar5 < 0) {
      if (iVar9 == 0) {
        uVar16 = 1;
      }
      uVar7 = uVar16 - uVar5;
      trapWord(6,uVar16,0);
      iVar9 = (int)uVar7 / (int)uVar16;
      lVar6 = (longlong)iVar9;
      trapWord(5,uVar16 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (iVar4 < (int)(lVar6 + param_2)) {
        lVar11 = (lVar6 + param_2) - param_2;
        do {
          iVar4 = 0;
          if (0 < iVar13) {
            puVar8 = (undefined1 *)(*(int *)(param_1 + 0x84) + -1);
            do {
              puVar8 = puVar8 + 1;
              iVar4 = iVar4 + 1;
              *puVar10 = *puVar8;
              puVar10 = puVar10 + 1;
              iVar13 = *(int *)(param_1 + 0x60);
            } while (iVar4 < iVar13);
          }
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar5 = (longlong)iVar9 * (longlong)(int)uVar16 + uVar5;
    }
    lVar6 = lVar6 + param_2;
    if ((int)lVar6 < param_3) {
      puVar10 = puVar10 + -1;
      do {
        iVar9 = ((int)uVar5 >> 8) * iVar3 + *(int *)(param_1 + 0x84);
        if (((0x100 - (uVar5 & 0xff) & 0xffffffff) < (uVar5 & 0xff)) && ((int)lVar6 < iVar14)) {
          iVar4 = 0;
          if (0 < iVar13) {
            puVar8 = (undefined1 *)(iVar9 + iVar3 + -1);
            do {
              puVar8 = puVar8 + 1;
              iVar4 = iVar4 + 1;
              puVar10[1] = *puVar8;
              puVar10 = puVar10 + 1;
              iVar13 = *(int *)(param_1 + 0x60);
            } while (iVar4 < iVar13);
          }
        }
        else {
          iVar4 = 0;
          if (0 < iVar13) {
            puVar8 = (undefined1 *)(iVar9 + -1);
            do {
              puVar8 = puVar8 + 1;
              iVar4 = iVar4 + 1;
              puVar10 = puVar10 + 1;
              *puVar10 = *puVar8;
              iVar13 = *(int *)(param_1 + 0x60);
            } while (iVar4 < iVar13);
          }
        }
        lVar6 = lVar6 + 1;
        uVar5 = uVar5 + uVar16;
      } while ((int)lVar6 < param_3);
    }
  }
  return;
}

