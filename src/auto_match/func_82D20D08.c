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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D2B688();
extern unsigned int iStack_60;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_82D20D08(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar7;
  longlong lVar6;
  uint uVar9;
  longlong lVar8;
  bool bVar10;
  undefined4 uVar12;
  ulonglong uVar11;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  iStack_60 = 0;
  uStack_58 = 0x80000000;
  uStack_5c = 0;
  uVar9 = 0;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      if (0 < (int)uVar9) {
        iVar15 = 0;
        iVar3 = 1;
        do {
          uVar2 = *(uint *)(iVar15 + iStack_60);
          uVar5 = (ulonglong)uVar2;
          if (iVar3 < (int)uVar9) {
            lVar13 = 1 - uVar5;
            iVar16 = iVar3;
            iVar4 = iVar15;
            do {
              iVar4 = iVar4 + 4;
              lVar8 = 0;
              uVar9 = *(uint *)(iVar4 + iStack_60);
              lVar17 = 3;
              lVar6 = uVar5 + 0x14;
              uVar11 = uVar5;
              do {
                puVar7 = (uint *)lVar6;
                if ((*puVar7 & 0xfffffffc) == 0) {
                  uVar12 = (undefined4)uVar11;
                  if ((*(uint *)(uVar9 + 0x14) & 0xfffffffc) == 0) {
                    if ((puVar7[-3] == *(uint *)(uVar9 + 0xc)) &&
                       (*(int *)((int)(((-(ulonglong)(lVar8 != 2) & uVar11 + lVar13) + 2 &
                                       0xffffffff) << 2) + uVar2) == *(int *)(uVar9 + 8))) {
                      bVar10 = true;
                    }
                    else {
                      bVar10 = false;
                    }
                    if (bVar10) {
                      *puVar7 = uVar9;
                      *(undefined4 *)(uVar9 + 0x14) = uVar12;
                    }
                  }
                  if ((*(uint *)(uVar9 + 0x18) & 0xfffffffc) == 0) {
                    if ((puVar7[-3] == *(uint *)(uVar9 + 0x10)) &&
                       (*(int *)((int)(((-(ulonglong)(lVar8 != 2) & uVar11 + lVar13) + 2 &
                                       0xffffffff) << 2) + uVar2) == *(int *)(uVar9 + 0xc))) {
                      bVar10 = true;
                    }
                    else {
                      bVar10 = false;
                    }
                    if (bVar10) {
                      *puVar7 = uVar9 + 1;
                      *(undefined4 *)(uVar9 + 0x18) = uVar12;
                    }
                  }
                  if ((*(uint *)(uVar9 + 0x1c) & 0xfffffffc) == 0) {
                    if ((puVar7[-3] == *(uint *)(uVar9 + 8)) &&
                       (*(int *)((int)(((-(ulonglong)(lVar8 != 2) & uVar11 + lVar13) + 2 &
                                       0xffffffff) << 2) + uVar2) == *(int *)(uVar9 + 0x10))) {
                      bVar10 = true;
                    }
                    else {
                      bVar10 = false;
                    }
                    if (bVar10) {
                      *puVar7 = uVar9 + 2;
                      *(undefined4 *)(uVar9 + 0x1c) = uVar12;
                    }
                  }
                }
                lVar8 = lVar8 + 1;
                lVar6 = lVar6 + 4;
                uVar11 = uVar11 + 1;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              iVar16 = iVar16 + 1;
              uVar9 = uStack_5c;
            } while (iVar16 < (int)uStack_5c);
          }
          iVar15 = iVar15 + 4;
          bVar10 = iVar3 < (int)uVar9;
          iVar3 = iVar3 + 1;
        } while (bVar10);
      }
      iVar3 = *param_2;
      piVar14 = (int *)param_2[1];
      if (iVar3 != 0) {
        *(int **)(iVar3 + 4) = piVar14;
      }
      if (piVar14 == (int *)0x0) {
        *(int *)(param_1 + 0x14) = iVar3;
      }
      else {
        *piVar14 = iVar3;
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      fn_82D2B688(param_1 + 8,param_2);
      iVar3 = fn_82CE5410();
      uStack_5c = 0;
      if ((uStack_58 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                  (*(int **)(iVar3 + 0x10),iStack_60,uStack_58 & 0x3fffffff,4);
      }
      return;
    }
    piVar14 = puVar1 + 2;
    lVar13 = 3;
    do {
      if ((int *)*piVar14 == param_2) {
        iVar3 = fn_82CE5410();
        if (uStack_5c == (uStack_58 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),&iStack_60,4);
        }
        *(undefined4 **)(uStack_5c * 4 + iStack_60) = puVar1;
        uVar9 = uStack_5c + 1;
        *piVar14 = (int)param_3;
        uStack_5c = uVar9;
      }
      else if ((int *)*piVar14 == param_3) {
        iVar3 = fn_82CE5410();
        if (uStack_5c == (uStack_58 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),&iStack_60,4);
        }
        *(undefined4 **)(uStack_5c * 4 + iStack_60) = puVar1;
        uVar9 = uStack_5c + 1;
        uStack_5c = uVar9;
      }
      lVar13 = lVar13 + -1;
      piVar14 = piVar14 + 1;
    } while (lVar13 != 0);
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

