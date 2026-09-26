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


void fn_827C9310(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar13;
  longlong lVar12;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  
  iVar15 = 0;
  iVar2 = *(int *)(param_1 + 0x184);
  iVar3 = *(int *)(param_1 + 0x118);
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar17 = 0;
    piVar16 = (int *)(*(int *)(param_1 + 0xc4) + 0xc);
    do {
      lVar10 = 0;
      uVar13 = *piVar16 * piVar16[6];
      uVar4 = *(uint *)(param_1 + 0x118);
      iVar6 = *(int *)(iVar17 + *(int *)(iVar2 + 0x38));
      puVar7 = *(undefined4 **)(iVar17 + *(int *)(iVar2 + 0x3c));
      iVar1 = (int)uVar13 / (int)uVar4;
      lVar12 = (longlong)iVar1;
      trapWord(6,(ulonglong)uVar4,0);
      trapWord(5,(ulonglong)uVar4 &
                 ~((((ulonglong)uVar13 & 0x7fffffff) << 1 | (ulonglong)(uVar13 >> 0x1f)) - 1),0xffff
              );
      if (0 < iVar1) {
        puVar14 = puVar7 + -iVar1;
        puVar11 = puVar7;
        do {
          iVar8 = (int)(((longlong)(iVar3 + 1) * (longlong)iVar1 + lVar10 & 0xffffffffU) << 2);
          iVar9 = (int)(((longlong)(iVar3 + 2) * (longlong)iVar1 + lVar10 & 0xffffffffU) << 2);
          lVar10 = lVar10 + 1;
          *(undefined4 *)((iVar6 - (int)puVar7) + (int)puVar14) = *(undefined4 *)(iVar8 + iVar6);
          *puVar14 = *(undefined4 *)(iVar8 + (int)puVar7);
          puVar14 = puVar14 + 1;
          *(undefined4 *)(iVar9 + iVar6) = *(undefined4 *)((iVar6 - (int)puVar7) + (int)puVar11);
          uVar5 = *puVar11;
          puVar11 = puVar11 + 1;
          *(undefined4 *)(iVar9 + (int)puVar7) = uVar5;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      iVar15 = iVar15 + 1;
      iVar17 = iVar17 + 4;
      piVar16 = piVar16 + 0x15;
    } while (iVar15 < *(int *)(param_1 + 0x24));
  }
  return;
}

