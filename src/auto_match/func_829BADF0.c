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


void fn_829BADF0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar11;
  longlong lVar10;
  undefined4 *puVar13;
  longlong lVar12;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  
  iVar15 = 0;
  iVar1 = *(int *)(param_1 + 0x1ac);
  iVar2 = *(int *)(param_1 + 0x140);
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar9 = 0;
    piVar16 = (int *)(*(int *)(param_1 + 0xdc) + 0xc);
    do {
      uVar11 = *piVar16 * piVar16[6];
      uVar3 = *(uint *)(param_1 + 0x140);
      iVar4 = *(int *)(iVar1 + 8 + iVar9);
      puVar5 = *(undefined4 **)(iVar9 + *(int *)(iVar1 + 0x38));
      puVar14 = *(undefined4 **)(iVar9 + *(int *)(iVar1 + 0x3c));
      uVar17 = (int)uVar11 / (int)uVar3;
      trapWord(6,(ulonglong)uVar3,0);
      lVar10 = (longlong)(iVar2 + 2) * (longlong)(int)uVar17;
      trapWord(5,(ulonglong)uVar3 &
                 ~((((ulonglong)uVar11 & 0x7fffffff) << 1 | (ulonglong)(uVar11 >> 0x1f)) - 1),0xffff
              );
      if (0 < lVar10) {
        puVar13 = puVar14;
        do {
          uVar6 = *(undefined4 *)((iVar4 - (int)puVar14) + (int)puVar13);
          *puVar13 = uVar6;
          *(undefined4 *)(((int)puVar5 - (int)puVar14) + (int)puVar13) = uVar6;
          puVar13 = puVar13 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      lVar10 = ((ulonglong)uVar17 & 0x7fffffff) << 1;
      lVar12 = 0;
      if (0 < (int)lVar10) {
        do {
          iVar7 = (int)(((longlong)(int)uVar17 * (longlong)iVar2 + lVar12 & 0xffffffffU) << 2);
          iVar8 = (int)(((longlong)(iVar2 + -2) * (longlong)(int)uVar17 + lVar12 & 0xffffffffU) << 2
                       );
          lVar12 = lVar12 + 1;
          *(undefined4 *)(iVar8 + (int)puVar14) = *(undefined4 *)(iVar7 + iVar4);
          *(undefined4 *)(iVar7 + (int)puVar14) = *(undefined4 *)(iVar8 + iVar4);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (0 < (int)uVar17) {
        puVar14 = puVar5 + -(uVar17 + 1 & 0x3fffffff);
        do {
          puVar14 = puVar14 + 1;
          *puVar14 = *puVar5;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      iVar15 = iVar15 + 1;
      iVar9 = iVar9 + 4;
      piVar16 = piVar16 + 0x15;
    } while (iVar15 < *(int *)(param_1 + 0x24));
  }
  return;
}

