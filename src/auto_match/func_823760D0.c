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
extern unsigned int *auStack_78;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_822C6000();
extern int fn_822C6130();
extern int fn_82365BD8();
extern int fn_82373530();
extern int fn_823765C8();
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;


void fn_823760D0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int *piVar6;
  longlong lVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iStack_80;
  int iStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  
  fn_823765C8(&iStack_80);
  piVar1 = *(int **)(param_1 + 0x188);
  iVar13 = iStack_7c;
  iVar15 = iStack_80;
  for (piVar12 = *(int **)(param_1 + 0x184); piVar12 != piVar1; piVar12 = piVar12 + 2) {
    bVar4 = false;
    if (*(int *)(*piVar12 + 0x174) == 0) {
      bVar4 = true;
    }
    else {
      piVar6 = (int *)fn_82365BD8(auStack_78,piVar12);
      iVar14 = piVar6[1];
      piVar6[1] = iVar13;
      iVar16 = *piVar6;
      *piVar6 = iVar15;
      iVar13 = iVar14;
      iVar15 = iVar16;
      if (iStack_74 != 0) {
        fn_822315A0();
      }
    }
    if (!bVar4) break;
  }
  piVar12 = *(int **)(param_1 + 8);
  iVar14 = 0;
  if ((piVar12[1] - *piVar12 & 0xfffffffcU) != 0) {
    iVar16 = 0;
    do {
      uVar17 = 0;
      piVar12 = *(int **)(*piVar12 + iVar16);
      iVar7 = *(int *)(piVar12[4] * 4 + *piVar12);
      if (*(int *)(iVar7 + 8) != 0) {
        do {
          iVar8 = **(int **)(param_1 + 8);
          piVar1 = *(int **)(iVar8 + iVar16);
          lVar5 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),uVar17);
          if (*(int *)(param_1 + 0x54) == 2) {
            iVar2 = *(int *)(param_1 + 0x1e4);
            if (*(int *)(iVar7 + 0x10) != iVar2) goto LAB_823761f4;
            uVar9 = (ulonglong)*(uint *)((int)lVar5 + 0x28);
            iVar7 = fn_82373530(param_1);
            if ((int)uVar9 != iVar7) {
              iVar11 = *(int *)((int)lVar5 + 0x118) + 0x70;
              piVar1 = *(int **)(((uint)LZCOUNT(iVar2) >> 3 & 4) + iVar8);
              iVar7 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),uVar9);
              puVar3 = (undefined4 *)(iVar7 + 0x80U & 0xfffffff0);
              uVar18 = *puVar3;
              uVar19 = puVar3[1];
              uVar20 = puVar3[2];
              uVar21 = puVar3[3];
              *(undefined4 *)(iVar11 + 0x40) = 1;
              puVar3 = (undefined4 *)(iVar11 + 0x30U & 0xfffffff0);
              *puVar3 = uVar18;
              puVar3[1] = uVar19;
              puVar3[2] = uVar20;
              puVar3[3] = uVar21;
            }
          }
          else if (*(int *)(param_1 + 0x54) == 3) {
LAB_823761f4:
            if (iVar15 != 0) {
              lVar10 = lVar5 + 0x80;
              puVar3 = (undefined4 *)(iVar15 + 0x20U & 0xfffffff0);
              uVar18 = *puVar3;
              uVar19 = puVar3[1];
              uVar20 = puVar3[2];
              uVar21 = puVar3[3];
              iVar8 = *(int *)((int)lVar5 + 0x118) + 0x70;
              iVar7 = fn_822C6000(lVar10);
              if (iVar7 != 0) {
                fn_822C6130(lVar10);
                puVar3 = (undefined4 *)(iVar8 + 0x30U & 0xfffffff0);
                *puVar3 = uVar18;
                puVar3[1] = uVar19;
                puVar3[2] = uVar20;
                puVar3[3] = uVar21;
                *(undefined4 *)(iVar8 + 0x40) = 1;
              }
            }
          }
          uVar17 = uVar17 + 1;
          iVar7 = *(int *)(piVar12[4] * 4 + *piVar12);
        } while ((uVar17 & 0xffffffff) < (ulonglong)*(uint *)(iVar7 + 8));
      }
      piVar12 = *(int **)(param_1 + 8);
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 4;
    } while (iVar14 < piVar12[1] - *piVar12 >> 2);
  }
  if (iVar13 != 0) {
    fn_822315A0(iVar13);
  }
  return;
}

