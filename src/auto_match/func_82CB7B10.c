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


void fn_82CB7B10(undefined8 param_1,int *param_2,uint *param_3,int param_4,int param_5,int param_6
                  )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  uint *puVar15;
  uint *puVar16;
  longlong lVar17;
  
  if (param_6 == 0) {
    if (param_5 == 0) {
      iVar13 = 0;
      do {
        piVar14 = (int *)(iVar13 + (int)param_2);
        iVar11 = (1 - (int)param_2) + (int)piVar14;
        lVar17 = 2;
        puVar7 = param_3;
        puVar8 = param_3;
        do {
          uVar1 = *(uint *)((int)puVar8 + iVar11 + param_4);
          uVar2 = *(uint *)((int)puVar8 + iVar13 + param_4);
          *piVar14 = ((uVar1 & 0x3030303) + (*(uint *)(iVar11 + (int)puVar7) & 0x3030303) +
                      (uVar2 & 0x3030303) + (*(uint *)(iVar13 + (int)puVar7) & 0x3030303) +
                      0x1010101 >> 2 & 0x3030303) + (uVar1 >> 2 & 0x3f3f3f3f) +
                     (*(uint *)(iVar11 + (int)puVar7) >> 2 & 0x3f3f3f3f) + (uVar2 >> 2 & 0x3f3f3f3f)
                     + (*(uint *)(iVar13 + (int)puVar7) >> 2 & 0x3f3f3f3f);
          uVar1 = *(uint *)((int)puVar7 + iVar11 + param_4);
          uVar2 = *(uint *)((int)puVar7 + iVar13 + param_4);
          uVar3 = *(uint *)((int)puVar8 + iVar11 + param_4 * 2);
          uVar4 = *(uint *)((int)puVar8 + iVar13 + param_4 * 2);
          *(int *)((int)piVar14 + param_4) =
               ((uVar3 & 0x3030303) + (uVar1 & 0x3030303) + (uVar4 & 0x3030303) +
                (uVar2 & 0x3030303) + 0x1010101 >> 2 & 0x3030303) + (uVar3 >> 2 & 0x3f3f3f3f) +
               (uVar1 >> 2 & 0x3f3f3f3f) + (uVar4 >> 2 & 0x3f3f3f3f) + (uVar2 >> 2 & 0x3f3f3f3f);
          uVar1 = *(uint *)((int)puVar7 + iVar11 + param_4 * 2);
          uVar2 = *(uint *)((int)puVar7 + iVar13 + param_4 * 2);
          uVar3 = *(uint *)((int)puVar8 + iVar13 + param_4 * 3);
          uVar4 = *(uint *)((int)puVar8 + iVar11 + param_4 * 3);
          puVar8 = puVar8 + param_4;
          piVar14 = (int *)((int)piVar14 + param_4 + param_4);
          *piVar14 = ((uVar4 & 0x3030303) + (uVar1 & 0x3030303) + (uVar3 & 0x3030303) +
                      (uVar2 & 0x3030303) + 0x1010101 >> 2 & 0x3030303) + (uVar4 >> 2 & 0x3f3f3f3f)
                     + (uVar1 >> 2 & 0x3f3f3f3f) + (uVar3 >> 2 & 0x3f3f3f3f) +
                     (uVar2 >> 2 & 0x3f3f3f3f);
          uVar1 = *(uint *)((int)puVar7 + iVar11 + param_4 * 3);
          uVar2 = *(uint *)((int)puVar7 + iVar13 + param_4 * 3);
          puVar7 = puVar7 + param_4;
          piVar14 = (int *)((int)piVar14 + param_4);
          *piVar14 = ((*(uint *)((int)puVar8 + iVar11) & 0x3030303) + (uVar1 & 0x3030303) +
                      (*(uint *)((int)puVar8 + iVar13) & 0x3030303) + (uVar2 & 0x3030303) +
                      0x1010101 >> 2 & 0x3030303) +
                     (*(uint *)((int)puVar8 + iVar11) >> 2 & 0x3f3f3f3f) + (uVar1 >> 2 & 0x3f3f3f3f)
                     + (*(uint *)((int)puVar8 + iVar13) >> 2 & 0x3f3f3f3f) +
                     (uVar2 >> 2 & 0x3f3f3f3f);
          piVar14 = (int *)((int)piVar14 + param_4);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        iVar13 = iVar13 + 4;
      } while (iVar13 < 8);
    }
    else {
      lVar17 = 2;
      puVar7 = (uint *)(param_4 * 3 + (int)param_3);
      puVar12 = (uint *)(param_4 * 7 + (int)param_3);
      puVar10 = (uint *)((int)param_3 + param_4);
      puVar9 = (uint *)(param_4 * 2 + (int)param_3);
      puVar8 = param_3 + param_4;
      puVar16 = (uint *)(param_4 * 5 + (int)param_3);
      puVar15 = (uint *)(param_4 * 6 + (int)param_3);
      iVar13 = (int)param_2 - (int)param_3;
      do {
        *(uint *)(iVar13 + (int)param_3) =
             (*puVar10 & *param_3 & 0x1010101) + (*puVar10 >> 1 & 0x7f7f7f7f) +
             (*param_3 >> 1 & 0x7f7f7f7f);
        param_3 = param_3 + 1;
        *(uint *)(iVar13 + (int)puVar10) =
             (*puVar9 >> 1 & 0x7f7f7f7f) + (*puVar10 >> 1 & 0x7f7f7f7f) +
             (*puVar9 & *puVar10 & 0x1010101);
        puVar10 = puVar10 + 1;
        *(uint *)(iVar13 + (int)puVar9) =
             (*puVar7 >> 1 & 0x7f7f7f7f) + (*puVar9 >> 1 & 0x7f7f7f7f) +
             (*puVar7 & *puVar9 & 0x1010101);
        puVar9 = puVar9 + 1;
        *(uint *)(iVar13 + (int)puVar7) =
             (*puVar8 >> 1 & 0x7f7f7f7f) + (*puVar7 >> 1 & 0x7f7f7f7f) +
             (*puVar8 & *puVar7 & 0x1010101);
        puVar7 = puVar7 + 1;
        *(uint *)(iVar13 + (int)puVar8) =
             (*puVar16 >> 1 & 0x7f7f7f7f) + (*puVar16 & *puVar8 & 0x1010101) +
             (*puVar8 >> 1 & 0x7f7f7f7f);
        puVar8 = puVar8 + 1;
        *(uint *)(iVar13 + (int)puVar16) =
             (*puVar15 & *puVar16 & 0x1010101) + (*puVar15 >> 1 & 0x7f7f7f7f) +
             (*puVar16 >> 1 & 0x7f7f7f7f);
        puVar16 = puVar16 + 1;
        *(uint *)(iVar13 + (int)puVar15) =
             (*puVar12 & *puVar15 & 0x1010101) + (*puVar12 >> 1 & 0x7f7f7f7f) +
             (*puVar15 >> 1 & 0x7f7f7f7f);
        puVar15 = puVar15 + 1;
        *(uint *)(iVar13 + (int)puVar12) =
             (*(uint *)((int)puVar12 + param_4) >> 1 & 0x7f7f7f7f) + (*puVar12 >> 1 & 0x7f7f7f7f) +
             (*(uint *)((int)puVar12 + param_4) & *puVar12 & 0x1010101);
        puVar12 = puVar12 + 1;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  else if (param_5 == 0) {
    lVar17 = 2;
    puVar8 = (uint *)((int)param_3 + 1);
    puVar9 = (uint *)((int)param_3 + param_4 * 2 + 1);
    piVar6 = (int *)(param_4 * 2 + (int)param_2);
    piVar14 = param_2 + param_4;
    piVar5 = (int *)(param_4 * 6 + (int)param_2);
    puVar7 = (uint *)((int)param_3 + param_4 * 4 + 1);
    param_3 = (uint *)((int)param_3 + param_4 * 6 + 1);
    iVar13 = -1 - param_4;
    do {
      *param_2 = (*puVar8 >> 1 & 0x7f7f7f7f) + (*puVar8 & *(uint *)((int)puVar8 + -1) & 0x1010101) +
                 (*(uint *)((int)puVar8 + -1) >> 1 & 0x7f7f7f7f);
      puVar10 = (uint *)((int)puVar8 + param_4);
      puVar8 = puVar8 + 1;
      *(uint *)((int)param_2 + param_4) =
           (*puVar10 & *(uint *)(iVar13 + (int)puVar9) & 0x1010101) + (*puVar10 >> 1 & 0x7f7f7f7f) +
           (*(uint *)(iVar13 + (int)puVar9) >> 1 & 0x7f7f7f7f);
      param_2 = param_2 + 1;
      *piVar6 = (*(uint *)((int)puVar9 + -1) & *puVar9 & 0x1010101) +
                (*(uint *)((int)puVar9 + -1) >> 1 & 0x7f7f7f7f) + (*puVar9 >> 1 & 0x7f7f7f7f);
      puVar10 = (uint *)((int)puVar9 + param_4);
      puVar9 = puVar9 + 1;
      *(uint *)((int)piVar6 + param_4) =
           (*puVar10 & *(uint *)(iVar13 + (int)puVar7) & 0x1010101) + (*puVar10 >> 1 & 0x7f7f7f7f) +
           (*(uint *)(iVar13 + (int)puVar7) >> 1 & 0x7f7f7f7f);
      piVar6 = piVar6 + 1;
      *piVar14 = (*puVar7 & *(uint *)((int)puVar7 + -1) & 0x1010101) + (*puVar7 >> 1 & 0x7f7f7f7f) +
                 (*(uint *)((int)puVar7 + -1) >> 1 & 0x7f7f7f7f);
      puVar10 = (uint *)((int)puVar7 + param_4);
      puVar7 = puVar7 + 1;
      *(uint *)((int)piVar14 + param_4) =
           (*puVar10 >> 1 & 0x7f7f7f7f) + (*(uint *)(iVar13 + (int)param_3) >> 1 & 0x7f7f7f7f) +
           (*puVar10 & *(uint *)(iVar13 + (int)param_3) & 0x1010101);
      piVar14 = piVar14 + 1;
      *piVar5 = (*(uint *)((int)param_3 + -1) & *param_3 & 0x1010101) +
                (*(uint *)((int)param_3 + -1) >> 1 & 0x7f7f7f7f) + (*param_3 >> 1 & 0x7f7f7f7f);
      puVar10 = (uint *)((int)param_3 + param_4);
      uVar1 = *(uint *)(param_4 + -1 + (int)param_3);
      param_3 = param_3 + 1;
      *(uint *)((int)piVar5 + param_4) =
           (uVar1 & *puVar10 & 0x1010101) + (uVar1 >> 1 & 0x7f7f7f7f) + (*puVar10 >> 1 & 0x7f7f7f7f)
      ;
      piVar5 = piVar5 + 1;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  else {
    iVar13 = (int)param_2 - (int)param_3;
    lVar17 = 8;
    do {
      *(undefined8 *)(iVar13 + (int)param_3) = *(undefined8 *)param_3;
      param_3 = (uint *)((int)param_3 + param_4);
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return;
}

