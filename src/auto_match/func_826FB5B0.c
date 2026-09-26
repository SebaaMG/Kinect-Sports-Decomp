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
extern unsigned int *auStack_1a0;
extern int fn_8267C498();


void fn_826FB5B0(int *param_1,ulonglong param_2,ulonglong param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint auStack_1a0 [104];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar11 = auStack_1a0;
  do {
    while( true ) {
      uVar9 = (uint)param_2;
      uVar8 = (uint)param_3;
      uVar10 = uVar8 - uVar9;
      if ((int)uVar10 < 10) break;
      iVar2 = *param_1;
      iVar6 = (int)((param_2 & 0x3fffffff) << 2);
      iVar3 = *(int *)(iVar6 + iVar2);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      iVar17 = (int)(((longlong)((int)uVar10 >> 1) +
                      (ulonglong)((int)uVar10 < 0 && (uVar10 & 1) != 0) + param_2 & 0x3fffffff) << 2
                    );
      iVar3 = *(int *)(iVar17 + iVar2);
      iVar4 = *(int *)(iVar6 + iVar2);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      if (*(int *)(iVar6 + iVar2) != 0) {
        fn_8267C498();
      }
      *(undefined4 *)(iVar6 + iVar2) = *(undefined4 *)(iVar17 + iVar2);
      if (iVar4 != 0) {
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
      if (*(int *)(iVar17 + iVar2) != 0) {
        fn_8267C498();
      }
      *(int *)(iVar17 + iVar2) = iVar4;
      if (iVar4 != 0) {
        fn_8267C498(iVar4);
      }
      uVar12 = param_2 + 1;
      iVar2 = *param_1;
      uVar13 = param_3 - 1;
      lVar16 = (uVar12 & 0x3fffffff) << 2;
      lVar15 = (uVar13 & 0x3fffffff) << 2;
      iVar3 = (int)lVar16;
      iVar4 = (int)lVar15;
      if (*(short *)(*(int *)(iVar4 + iVar2) + 0x90) < *(short *)(*(int *)(iVar3 + iVar2) + 0x90)) {
        iVar17 = *(int *)(iVar4 + iVar2);
        if (iVar17 != 0) {
          *(int *)(iVar17 + 4) = *(int *)(iVar17 + 4) + 1;
        }
        iVar17 = *(int *)(iVar3 + iVar2);
        iVar5 = *(int *)(iVar4 + iVar2);
        if (iVar17 != 0) {
          *(int *)(iVar17 + 4) = *(int *)(iVar17 + 4) + 1;
        }
        if (*(int *)(iVar4 + iVar2) != 0) {
          fn_8267C498();
        }
        *(undefined4 *)(iVar4 + iVar2) = *(undefined4 *)(iVar3 + iVar2);
        if (iVar5 != 0) {
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        }
        if (*(int *)(iVar3 + iVar2) != 0) {
          fn_8267C498();
        }
        *(int *)(iVar3 + iVar2) = iVar5;
        if (iVar5 != 0) {
          fn_8267C498(iVar5);
        }
      }
      iVar2 = *param_1;
      if (*(short *)(*(int *)(iVar6 + iVar2) + 0x90) < *(short *)(*(int *)(iVar3 + iVar2) + 0x90)) {
        iVar17 = *(int *)(iVar6 + iVar2);
        if (iVar17 != 0) {
          *(int *)(iVar17 + 4) = *(int *)(iVar17 + 4) + 1;
        }
        iVar17 = *(int *)(iVar3 + iVar2);
        iVar5 = *(int *)(iVar6 + iVar2);
        if (iVar17 != 0) {
          *(int *)(iVar17 + 4) = *(int *)(iVar17 + 4) + 1;
        }
        if (*(int *)(iVar6 + iVar2) != 0) {
          fn_8267C498();
        }
        *(undefined4 *)(iVar6 + iVar2) = *(undefined4 *)(iVar3 + iVar2);
        if (iVar5 != 0) {
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        }
        if (*(int *)(iVar3 + iVar2) != 0) {
          fn_8267C498();
        }
        *(int *)(iVar3 + iVar2) = iVar5;
        if (iVar5 != 0) {
          fn_8267C498(iVar5);
        }
      }
      iVar2 = *param_1;
      if (*(short *)(*(int *)(iVar6 + iVar2) + 0x90) <= *(short *)(*(int *)(iVar4 + iVar2) + 0x90))
      goto LAB_826fb870;
      iVar3 = *(int *)(iVar4 + iVar2);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      iVar3 = *(int *)(iVar6 + iVar2);
      iVar17 = *(int *)(iVar4 + iVar2);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      if (*(int *)(iVar4 + iVar2) != 0) {
        fn_8267C498();
      }
      *(undefined4 *)(iVar4 + iVar2) = *(undefined4 *)(iVar6 + iVar2);
      if (iVar17 != 0) {
        *(int *)(iVar17 + 4) = *(int *)(iVar17 + 4) + 1;
      }
      if (*(int *)(iVar6 + iVar2) != 0) {
        fn_8267C498();
      }
      *(int *)(iVar6 + iVar2) = iVar17;
      while( true ) {
        if (iVar17 != 0) {
          fn_8267C498(iVar17);
        }
LAB_826fb870:
        iVar2 = *param_1;
        sVar1 = *(short *)(*(int *)(iVar6 + iVar2) + 0x90);
        do {
          lVar16 = lVar16 + 4;
          uVar12 = uVar12 + 1;
        } while (*(short *)(*(int *)((int)lVar16 + iVar2) + 0x90) < sVar1);
        do {
          lVar15 = lVar15 + -4;
          uVar13 = uVar13 - 1;
        } while (sVar1 < *(short *)(*(int *)((int)lVar15 + iVar2) + 0x90));
        uVar14 = (uint)uVar13;
        uVar10 = (uint)uVar12;
        if ((int)uVar14 < (int)uVar10) break;
        lVar16 = (uVar12 & 0x3fffffff) << 2;
        lVar15 = (uVar13 & 0x3fffffff) << 2;
        iVar4 = (int)lVar16;
        iVar3 = *(int *)(iVar4 + iVar2);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        }
        iVar5 = (int)lVar15;
        iVar3 = *(int *)(iVar5 + iVar2);
        iVar17 = *(int *)(iVar4 + iVar2);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        }
        if (*(int *)(iVar4 + iVar2) != 0) {
          fn_8267C498();
        }
        *(undefined4 *)(iVar4 + iVar2) = *(undefined4 *)(iVar5 + iVar2);
        if (iVar17 != 0) {
          *(int *)(iVar17 + 4) = *(int *)(iVar17 + 4) + 1;
        }
        if (*(int *)(iVar5 + iVar2) != 0) {
          fn_8267C498();
        }
        *(int *)(iVar5 + iVar2) = iVar17;
      }
      iVar3 = *(int *)(iVar6 + iVar2);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      iVar17 = (int)((uVar13 & 0x3fffffff) << 2);
      iVar3 = *(int *)(iVar17 + iVar2);
      iVar4 = *(int *)(iVar6 + iVar2);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      if (*(int *)(iVar6 + iVar2) != 0) {
        fn_8267C498();
      }
      *(undefined4 *)(iVar6 + iVar2) = *(undefined4 *)(iVar17 + iVar2);
      if (iVar4 != 0) {
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
      if (*(int *)(iVar17 + iVar2) != 0) {
        fn_8267C498();
      }
      *(int *)(iVar17 + iVar2) = iVar4;
      if (iVar4 != 0) {
        fn_8267C498(iVar4);
      }
      if ((int)(uVar8 - uVar10) < (int)(uVar14 - uVar9)) {
        *puVar11 = uVar9;
        puVar11[1] = uVar14;
        uVar13 = param_3;
        param_2 = uVar12;
      }
      else {
        puVar11[1] = uVar8;
        *puVar11 = uVar10;
      }
      param_3 = uVar13;
      puVar11 = puVar11 + 2;
    }
LAB_826fbac0:
    uVar13 = param_2;
    param_2 = uVar13 + 1;
    if ((int)param_2 < (int)uVar8) {
      while (iVar2 = (int)((uVar13 & 0x3fffffff) << 2), piVar7 = (int *)(iVar2 + *param_1),
            *(short *)(piVar7[1] + 0x90) < *(short *)(*(int *)(iVar2 + *param_1) + 0x90)) {
        iVar2 = piVar7[1];
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
        iVar2 = *piVar7;
        iVar3 = piVar7[1];
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
        if (piVar7[1] != 0) {
          fn_8267C498();
        }
        piVar7[1] = *piVar7;
        if (iVar3 != 0) {
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        }
        if (*piVar7 != 0) {
          fn_8267C498();
        }
        *piVar7 = iVar3;
        if (iVar3 != 0) {
          fn_8267C498(iVar3);
        }
        if ((uint)uVar13 == uVar9) break;
        uVar13 = uVar13 - 1;
      }
      goto LAB_826fbac0;
    }
    if (puVar11 <= auStack_1a0) {
      return;
    }
    param_2 = (ulonglong)puVar11[-2];
    param_3 = (ulonglong)puVar11[-1];
    puVar11 = puVar11 + -2;
  } while( true );
}

