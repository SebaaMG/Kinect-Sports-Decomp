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
extern int fn_826FA080();
extern unsigned int stack0x0000002f;
extern unsigned int uStack0000002f;


void fn_826FBAE8(int *param_1,ulonglong param_2,ulonglong param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  undefined1 uStack0000002f;
  uint auStack_1a0 [104];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar12 = auStack_1a0;
  uStack0000002f = param_4;
  do {
    while( true ) {
      uVar8 = (uint)param_2;
      uVar7 = (uint)param_3;
      uVar10 = uVar7 - uVar8;
      if ((int)uVar10 < 10) break;
      iVar1 = *param_1;
      iVar5 = (int)((param_2 & 0x3fffffff) << 2);
      iVar2 = *(int *)(iVar5 + iVar1);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      iVar18 = (int)(((longlong)((int)uVar10 >> 1) +
                      (ulonglong)((int)uVar10 < 0 && (uVar10 & 1) != 0) + param_2 & 0x3fffffff) << 2
                    );
      iVar2 = *(int *)(iVar18 + iVar1);
      iVar3 = *(int *)(iVar5 + iVar1);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      if (*(int *)(iVar5 + iVar1) != 0) {
        fn_8267C498();
      }
      *(undefined4 *)(iVar5 + iVar1) = *(undefined4 *)(iVar18 + iVar1);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      if (*(int *)(iVar18 + iVar1) != 0) {
        fn_8267C498();
      }
      *(int *)(iVar18 + iVar1) = iVar3;
      if (iVar3 != 0) {
        fn_8267C498(iVar3);
      }
      uVar13 = param_2 + 1;
      uVar14 = param_3 - 1;
      lVar17 = (uVar13 & 0x3fffffff) << 2;
      lVar16 = (uVar14 & 0x3fffffff) << 2;
      iVar1 = (int)lVar17;
      iVar2 = (int)lVar16;
      cVar9 = fn_826FA080(&stack0x0000002f,*(undefined4 *)(iVar2 + *param_1),
                                *(undefined4 *)(iVar1 + *param_1));
      if (cVar9 != '\0') {
        iVar3 = *param_1;
        iVar18 = *(int *)(iVar2 + iVar3);
        if (iVar18 != 0) {
          *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
        }
        iVar18 = *(int *)(iVar1 + iVar3);
        iVar4 = *(int *)(iVar2 + iVar3);
        if (iVar18 != 0) {
          *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
        }
        if (*(int *)(iVar2 + iVar3) != 0) {
          fn_8267C498();
        }
        *(undefined4 *)(iVar2 + iVar3) = *(undefined4 *)(iVar1 + iVar3);
        if (iVar4 != 0) {
          *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        }
        if (*(int *)(iVar1 + iVar3) != 0) {
          fn_8267C498();
        }
        *(int *)(iVar1 + iVar3) = iVar4;
        if (iVar4 != 0) {
          fn_8267C498(iVar4);
        }
      }
      cVar9 = fn_826FA080(&stack0x0000002f,*(undefined4 *)(iVar5 + *param_1),
                                *(undefined4 *)(iVar1 + *param_1));
      if (cVar9 != '\0') {
        iVar3 = *param_1;
        iVar18 = *(int *)(iVar5 + iVar3);
        if (iVar18 != 0) {
          *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
        }
        iVar18 = *(int *)(iVar1 + iVar3);
        iVar4 = *(int *)(iVar5 + iVar3);
        if (iVar18 != 0) {
          *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
        }
        if (*(int *)(iVar5 + iVar3) != 0) {
          fn_8267C498();
        }
        *(undefined4 *)(iVar5 + iVar3) = *(undefined4 *)(iVar1 + iVar3);
        if (iVar4 != 0) {
          *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        }
        if (*(int *)(iVar1 + iVar3) != 0) {
          fn_8267C498();
        }
        *(int *)(iVar1 + iVar3) = iVar4;
        if (iVar4 != 0) {
          fn_8267C498(iVar4);
        }
      }
      cVar9 = fn_826FA080(&stack0x0000002f,*(undefined4 *)(iVar2 + *param_1),
                                *(undefined4 *)(iVar5 + *param_1));
      if (cVar9 == '\0') goto LAB_826fbdbc;
      iVar1 = *param_1;
      iVar3 = *(int *)(iVar2 + iVar1);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      iVar3 = *(int *)(iVar5 + iVar1);
      iVar18 = *(int *)(iVar2 + iVar1);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      if (*(int *)(iVar2 + iVar1) != 0) {
        fn_8267C498();
      }
      *(undefined4 *)(iVar2 + iVar1) = *(undefined4 *)(iVar5 + iVar1);
      if (iVar18 != 0) {
        *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
      }
      if (*(int *)(iVar5 + iVar1) != 0) {
        fn_8267C498();
      }
      *(int *)(iVar5 + iVar1) = iVar18;
      while( true ) {
        if (iVar18 != 0) {
          fn_8267C498(iVar18);
        }
LAB_826fbdbc:
        do {
          lVar17 = lVar17 + 4;
          uVar13 = uVar13 + 1;
          cVar9 = fn_826FA080(&stack0x0000002f,*(undefined4 *)((int)lVar17 + *param_1),
                                    *(undefined4 *)(iVar5 + *param_1));
        } while (cVar9 != '\0');
        do {
          lVar16 = lVar16 + -4;
          uVar14 = uVar14 - 1;
          cVar9 = fn_826FA080(&stack0x0000002f,*(undefined4 *)(iVar5 + *param_1),
                                    *(undefined4 *)((int)lVar16 + *param_1));
        } while (cVar9 != '\0');
        iVar1 = *param_1;
        uVar15 = (uint)uVar14;
        uVar10 = (uint)uVar13;
        if ((int)uVar15 < (int)uVar10) break;
        lVar17 = (uVar13 & 0x3fffffff) << 2;
        lVar16 = (uVar14 & 0x3fffffff) << 2;
        iVar3 = (int)lVar17;
        iVar2 = *(int *)(iVar3 + iVar1);
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
        iVar4 = (int)lVar16;
        iVar2 = *(int *)(iVar4 + iVar1);
        iVar18 = *(int *)(iVar3 + iVar1);
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
        if (*(int *)(iVar3 + iVar1) != 0) {
          fn_8267C498();
        }
        *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(iVar4 + iVar1);
        if (iVar18 != 0) {
          *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
        }
        if (*(int *)(iVar4 + iVar1) != 0) {
          fn_8267C498();
        }
        *(int *)(iVar4 + iVar1) = iVar18;
      }
      iVar2 = *(int *)(iVar5 + iVar1);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      iVar18 = (int)((uVar14 & 0x3fffffff) << 2);
      iVar2 = *(int *)(iVar18 + iVar1);
      iVar3 = *(int *)(iVar5 + iVar1);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      if (*(int *)(iVar5 + iVar1) != 0) {
        fn_8267C498();
      }
      *(undefined4 *)(iVar5 + iVar1) = *(undefined4 *)(iVar18 + iVar1);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      if (*(int *)(iVar18 + iVar1) != 0) {
        fn_8267C498();
      }
      *(int *)(iVar18 + iVar1) = iVar3;
      if (iVar3 != 0) {
        fn_8267C498(iVar3);
      }
      if ((int)(uVar7 - uVar10) < (int)(uVar15 - uVar8)) {
        *puVar12 = uVar8;
        puVar12[1] = uVar15;
        uVar14 = param_3;
        param_2 = uVar13;
      }
      else {
        puVar12[1] = uVar7;
        *puVar12 = uVar10;
      }
      param_3 = uVar14;
      puVar12 = puVar12 + 2;
    }
LAB_826fc020:
    uVar14 = param_2;
    param_2 = uVar14 + 1;
    if ((int)param_2 < (int)uVar7) {
      while( true ) {
        iVar1 = (int)((uVar14 & 0x3fffffff) << 2);
        puVar11 = (undefined4 *)(*param_1 + iVar1);
        cVar9 = fn_826FA080(&stack0x0000002f,puVar11[1],*puVar11);
        if (cVar9 == '\0') break;
        piVar6 = (int *)(*param_1 + iVar1);
        iVar1 = piVar6[1];
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
        iVar1 = *piVar6;
        iVar2 = piVar6[1];
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
        if (piVar6[1] != 0) {
          fn_8267C498();
        }
        piVar6[1] = *piVar6;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
        if (*piVar6 != 0) {
          fn_8267C498();
        }
        *piVar6 = iVar2;
        if (iVar2 != 0) {
          fn_8267C498(iVar2);
        }
        if ((uint)uVar14 == uVar8) break;
        uVar14 = uVar14 - 1;
      }
      goto LAB_826fc020;
    }
    if (puVar12 <= auStack_1a0) {
      return;
    }
    param_2 = (ulonglong)puVar12[-2];
    param_3 = (ulonglong)puVar12[-1];
    puVar12 = puVar12 + -2;
  } while( true );
}

