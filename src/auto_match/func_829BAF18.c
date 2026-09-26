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


void fn_829BAF18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  
  iVar15 = 0;
  iVar2 = *(int *)(param_1 + 0x1ac);
  iVar3 = *(int *)(param_1 + 0x140);
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar17 = 0;
    piVar16 = (int *)(*(int *)(param_1 + 0xdc) + 0xc);
    do {
      lVar11 = 0;
      uVar4 = *(uint *)(param_1 + 0x140);
      uVar10 = *piVar16 * piVar16[6];
      puVar6 = *(undefined4 **)(iVar17 + *(int *)(iVar2 + 0x3c));
      iVar7 = *(int *)(iVar17 + *(int *)(iVar2 + 0x38));
      iVar1 = (int)uVar10 / (int)uVar4;
      lVar13 = (longlong)iVar1;
      trapWord(6,(ulonglong)uVar4,0);
      trapWord(5,(ulonglong)uVar4 &
                 ~((((ulonglong)uVar10 & 0x7fffffff) << 1 | (ulonglong)(uVar10 >> 0x1f)) - 1),0xffff
              );
      if (0 < iVar1) {
        puVar14 = puVar6 + -iVar1;
        puVar12 = puVar6;
        do {
          iVar8 = (int)(((longlong)(iVar3 + 1) * (longlong)iVar1 + lVar11 & 0xffffffffU) << 2);
          iVar9 = (int)(((longlong)(iVar3 + 2) * (longlong)iVar1 + lVar11 & 0xffffffffU) << 2);
          lVar11 = lVar11 + 1;
          *(undefined4 *)((iVar7 - (int)puVar6) + (int)puVar14) = *(undefined4 *)(iVar8 + iVar7);
          *puVar14 = *(undefined4 *)(iVar8 + (int)puVar6);
          puVar14 = puVar14 + 1;
          *(undefined4 *)(iVar9 + iVar7) = *(undefined4 *)((iVar7 - (int)puVar6) + (int)puVar12);
          uVar5 = *puVar12;
          puVar12 = puVar12 + 1;
          *(undefined4 *)(iVar9 + (int)puVar6) = uVar5;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      iVar15 = iVar15 + 1;
      iVar17 = iVar17 + 4;
      piVar16 = piVar16 + 0x15;
    } while (iVar15 < *(int *)(param_1 + 0x24));
  }
  return;
}

