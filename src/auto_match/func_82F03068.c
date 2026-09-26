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


void fn_82F03068(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar7 = *(int *)(param_1 + 0x6b8);
  iVar11 = *(int *)(param_1 + 0x6bc);
  iVar16 = *(int *)(param_1 + 0x4a94);
  iVar15 = iVar11 * iVar7;
  iVar14 = *(int *)(param_1 + 0x4a98);
  iVar12 = *(int *)(param_1 + 0x4a9c);
  iVar3 = iVar7 >> 1;
  iVar4 = iVar11 >> 1;
  iVar8 = iVar15 + param_2;
  iVar1 = 1 << (*(uint *)(param_1 + 0x10) & 1);
  iVar2 = 1 << ((int)*(uint *)(param_1 + 0x10) >> 1 & 1U);
  iVar10 = (iVar15 >> 2) + iVar8;
  if (iVar1 == 2) {
    (**(code **)(param_1 + 0x818))(param_2,iVar8,iVar10,iVar16,iVar14,iVar12,iVar7,iVar11);
    if (iVar2 != 2) goto LAB_82f03168;
    iVar13 = iVar15 + *(int *)(param_1 + 0x1c40);
    iVar6 = *(int *)(param_1 + 0x1c40);
    iVar8 = iVar14;
    iVar10 = iVar12;
    iVar12 = (iVar15 >> 2) + iVar13;
    param_2 = iVar16;
  }
  else {
    iVar6 = iVar16;
    iVar13 = iVar14;
    if (iVar2 != 2) goto LAB_82f03168;
  }
  iVar16 = iVar6;
  (**(code **)(param_1 + 0x81c))(param_2,iVar8,iVar10,iVar16,iVar13,iVar12,iVar7,iVar11);
  iVar14 = iVar13;
LAB_82f03168:
  puVar9 = *(undefined1 **)(param_1 + 0x1c40);
  iVar8 = 0;
  if (0 < iVar11) {
    do {
      iVar10 = 0;
      if (0 < iVar7) {
        do {
          puVar5 = (undefined1 *)(iVar10 + iVar16);
          iVar10 = iVar10 + iVar1;
          *puVar9 = *puVar5;
          puVar9 = puVar9 + 1;
        } while (iVar10 < iVar7);
      }
      iVar8 = iVar8 + iVar2;
      iVar16 = iVar7 * iVar2 + iVar16;
    } while (iVar8 < iVar11);
  }
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar11 = 0;
      if (0 < iVar3) {
        do {
          puVar5 = (undefined1 *)(iVar11 + iVar14);
          iVar11 = iVar11 + iVar1;
          *puVar9 = *puVar5;
          puVar9 = puVar9 + 1;
        } while (iVar11 < iVar3);
      }
      iVar7 = iVar7 + iVar2;
      iVar14 = iVar3 * iVar2 + iVar14;
    } while (iVar7 < iVar4);
  }
  iVar7 = 0;
  if (0 < iVar4) {
    puVar9 = puVar9 + -1;
    do {
      iVar11 = 0;
      if (0 < iVar3) {
        do {
          puVar5 = (undefined1 *)(iVar11 + iVar12);
          iVar11 = iVar11 + iVar1;
          puVar9 = puVar9 + 1;
          *puVar9 = *puVar5;
        } while (iVar11 < iVar3);
      }
      iVar7 = iVar7 + iVar2;
      iVar12 = iVar3 * iVar2 + iVar12;
    } while (iVar7 < iVar4);
  }
  return;
}

