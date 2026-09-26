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


void fn_827CBCB8(int param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  uVar7 = 0;
  iVar16 = 0;
  uVar3 = *param_2;
  iVar15 = 0;
  uVar4 = param_2[2];
  iVar14 = 0;
  uVar5 = param_2[4];
  if ((int)uVar3 <= (int)param_2[1]) {
    iVar10 = uVar3 * 8 + 4;
    piVar12 = (int *)(uVar3 * 4 + *(int *)(*(int *)(param_1 + 0x1a8) + 0x18));
    lVar9 = ((ulonglong)param_2[1] - (ulonglong)uVar3) + 1;
    do {
      if ((int)uVar4 <= (int)param_2[3]) {
        iVar8 = uVar4 * 4 + 2;
        iVar17 = (uVar4 * 0x20 + uVar5) * 2 + *piVar12;
        lVar11 = ((ulonglong)param_2[3] - (ulonglong)uVar4) + 1;
        do {
          if ((int)uVar5 <= (int)param_2[5]) {
            iVar6 = (param_2[5] - uVar5) + 1;
            iVar2 = uVar5 * 8 + 4;
            puVar13 = (ushort *)(iVar17 + -2);
            do {
              puVar13 = puVar13 + 1;
              uVar1 = *puVar13;
              if (uVar1 != 0) {
                uVar7 = uVar1 + uVar7;
                iVar16 = iVar10 * (uint)uVar1 + iVar16;
                iVar15 = iVar8 * (uint)uVar1 + iVar15;
                iVar14 = iVar2 * (uint)uVar1 + iVar14;
              }
              iVar2 = iVar2 + 8;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          lVar11 = lVar11 + -1;
          iVar17 = iVar17 + 0x40;
          iVar8 = iVar8 + 4;
        } while (lVar11 != 0);
      }
      lVar9 = lVar9 + -1;
      piVar12 = piVar12 + 1;
      iVar10 = iVar10 + 8;
    } while (lVar9 != 0);
  }
  iVar8 = (int)uVar7;
  iVar10 = iVar8 >> 1;
  trapWord(6,uVar7,0);
  uVar5 = iVar10 + iVar16;
  uVar4 = iVar10 + iVar15;
  uVar3 = iVar10 + iVar14;
  *(char *)(**(int **)(param_1 + 0x74) + param_3) = (char)((int)uVar5 / iVar8);
  *(char *)(*(int *)(*(int *)(param_1 + 0x74) + 4) + param_3) = (char)((int)uVar4 / iVar8);
  trapWord(6,uVar7,0);
  *(char *)(*(int *)(*(int *)(param_1 + 0x74) + 8) + param_3) = (char)((int)uVar3 / iVar8);
  trapWord(6,uVar7,0);
  trapWord(5,uVar7 & ~((((ulonglong)uVar5 & 0x7fffffff) << 1 | (ulonglong)(uVar5 >> 0x1f)) - 1),
           0xffff);
  trapWord(5,uVar7 & ~((((ulonglong)uVar4 & 0x7fffffff) << 1 | (ulonglong)(uVar4 >> 0x1f)) - 1),
           0xffff);
  trapWord(5,uVar7 & ~((((ulonglong)uVar3 & 0x7fffffff) << 1 | (ulonglong)(uVar3 >> 0x1f)) - 1),
           0xffff);
  return;
}

