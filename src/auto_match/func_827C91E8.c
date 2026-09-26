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


void fn_827C91E8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  
  iVar15 = 0;
  iVar1 = *(int *)(param_1 + 0x184);
  iVar2 = *(int *)(param_1 + 0x118);
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar11 = 0;
    piVar8 = (int *)(*(int *)(param_1 + 0xc4) + 0xc);
    do {
      iVar9 = 0;
      uVar3 = *(uint *)(param_1 + 0x118);
      uVar12 = *piVar8 * piVar8[6];
      iVar4 = *(int *)(iVar1 + 8 + iVar11);
      puVar5 = *(undefined4 **)(iVar11 + *(int *)(iVar1 + 0x38));
      puVar14 = *(undefined4 **)(iVar11 + *(int *)(iVar1 + 0x3c));
      iVar16 = (int)uVar12 / (int)uVar3;
      trapWord(6,(ulonglong)uVar3,0);
      lVar10 = (longlong)(iVar2 + 2) * (longlong)iVar16;
      trapWord(5,(ulonglong)uVar3 &
                 ~((((ulonglong)uVar12 & 0x7fffffff) << 1 | (ulonglong)(uVar12 >> 0x1f)) - 1),0xffff
              );
      if (0 < lVar10) {
        puVar13 = puVar14;
        do {
          uVar6 = *(undefined4 *)((iVar4 - (int)puVar14) + (int)puVar13);
          iVar9 = iVar9 + 1;
          *puVar13 = uVar6;
          *(undefined4 *)(((int)puVar5 - (int)puVar14) + (int)puVar13) = uVar6;
          puVar13 = puVar13 + 1;
        } while (iVar9 < (int)lVar10);
      }
      lVar10 = 0;
      if (iVar16 << 1 != 0) {
        do {
          iVar9 = (int)(((longlong)iVar16 * (longlong)iVar2 + lVar10 & 0xffffffffU) << 2);
          iVar7 = (int)(((longlong)(iVar2 + -2) * (longlong)iVar16 + lVar10 & 0xffffffffU) << 2);
          lVar10 = lVar10 + 1;
          *(undefined4 *)(iVar7 + (int)puVar14) = *(undefined4 *)(iVar9 + iVar4);
          *(undefined4 *)(iVar9 + (int)puVar14) = *(undefined4 *)(iVar7 + iVar4);
        } while ((int)lVar10 < iVar16 << 1);
      }
      if (0 < iVar16) {
        puVar14 = puVar5 + -(iVar16 + 1U & 0x3fffffff);
        do {
          puVar14 = puVar14 + 1;
          *puVar14 = *puVar5;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      iVar15 = iVar15 + 1;
      iVar11 = iVar11 + 4;
      piVar8 = piVar8 + 0x15;
    } while (iVar15 < *(int *)(param_1 + 0x24));
  }
  return;
}

