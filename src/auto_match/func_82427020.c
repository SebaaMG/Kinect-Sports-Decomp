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
extern int fn_82426C30();
extern int fn_82426D20();
extern int fn_82426EA0();
extern int fn_82508078();
extern int fn_82536690();
extern int fn_8265CA20();
extern float lbl_821954D4;
extern float lbl_82195728;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831E48D4;
extern unsigned int lbl_831E48F0;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_68;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82427020(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  char cVar12;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar13;
  undefined4 *puVar14;
  double dVar15;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined4 uStack_68;
  
  iVar11 = *(int *)(param_1 + 4);
  iVar13 = *(int *)(iVar11 + 0x18) * 0x1ac + *(int *)(iVar11 + 8);
  if (((*(int *)(iVar11 + 0xc) - *(int *)(iVar11 + 8)) / 0x1ac != 1) ||
     (bVar6 = true, *(int *)(iVar13 + 4) == 0)) {
    bVar6 = false;
  }
  puStack_70 = (undefined4 *)0x0;
  puStack_6c = (undefined4 *)0x0;
  uStack_68 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  for (iVar11 = *(int *)(*(int *)(param_1 + 4) + 8); iVar11 != iVar1; iVar11 = iVar11 + 0x1ac) {
    if (*(int *)(iVar11 + 8) != *(int *)(iVar13 + 8)) {
      fn_82536690(&puStack_70,iVar11 + 8);
    }
  }
  piVar2 = *(int **)(iVar13 + 8);
  if (*piVar2 == 9) {
    cVar12 = (*(code *)**(undefined4 **)piVar2[9])();
    if (cVar12 == '\0') {
      piVar3 = *(int **)(piVar2[9] + 4);
      if (piVar3 != (int *)0x0) {
        if ((piVar3 == (int *)0x0) || (bVar4 = true, *piVar3 != 10)) {
          bVar4 = false;
        }
        if ((!bVar4) || (*(int *)(piVar2[9] + 8) != 0)) {
          bVar4 = true;
          bVar5 = false;
          uVar8 = fn_82426EA0(piVar2);
          uVar9 = fn_82426D20(piVar2);
          puVar7 = puStack_6c;
          for (puVar14 = puStack_70; puVar14 != puVar7; puVar14 = puVar14 + 1) {
            uVar10 = fn_82426D20(*puVar14);
            bVar4 = (bool)(uVar10 < uVar9 & bVar4);
            if ((uVar8 & 0xffffffff) <= (uVar10 & 0xffffffff)) {
              bVar5 = true;
            }
          }
          if ((bVar4) && (bVar5)) {
            if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
              fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b8848,0);
            }
          }
        }
      }
    }
  }
  piVar2 = *(int **)(iVar13 + 8);
  if (*piVar2 == 9) {
    cVar12 = (*(code *)**(undefined4 **)piVar2[9])();
    if (cVar12 == '\0') {
      piVar3 = *(int **)(piVar2[9] + 4);
      if (piVar3 != (int *)0x0) {
        if ((piVar3 == (int *)0x0) || (bVar4 = true, *piVar3 != 10)) {
          bVar4 = false;
        }
        if ((!bVar4) || (*(int *)(piVar2[9] + 8) != 0)) {
          bVar5 = false;
          bVar4 = true;
          uVar8 = fn_82426EA0(piVar2);
          uVar9 = fn_82426D20(piVar2);
          puVar7 = puStack_6c;
          for (puVar14 = puStack_70; puVar14 != puVar7; puVar14 = puVar14 + 1) {
            uVar10 = fn_82426EA0(*puVar14);
            if ((uVar10 & 0xffffffff) < (uVar9 & 0xffffffff)) {
              bVar5 = true;
            }
            bVar4 = (bool)(uVar8 <= uVar10 & bVar4);
          }
          if ((bVar5) && (bVar4)) {
            if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
              fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b8858,0);
            }
          }
        }
      }
    }
  }
  if (puStack_70 != (undefined4 *)0x0) {
    fn_8265CA20();
  }
  puStack_6c = (undefined4 *)0x0;
  puStack_70 = (undefined4 *)0x0;
  uStack_68 = 0;
  if (**(int **)(iVar13 + 8) == 9) {
    piVar2 = *(int **)((*(int **)(iVar13 + 8))[9] + 4);
    if ((piVar2 == (int *)0x0) || (bVar4 = true, *piVar2 != 10)) {
      bVar4 = false;
    }
    if (bVar4) {
      if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
        fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b8868,0);
      }
    }
  }
  iVar11 = *(int *)(param_1 + 8);
  if ((*(int *)(iVar11 + 0x2c9c) == 3) && (*(int *)(param_1 + 4) == *(int *)(iVar11 + 0x2b20))) {
    fn_82508078(*(undefined4 *)(iVar11 + 0xa4),0xffffffff821b8880,0);
  }
  if (!bVar6) {
    if ((*(uint *)(*(int *)(param_1 + 8) + 0xb48) <= *(uint *)(iVar13 + 0x40)) &&
       (iVar11 = fn_82426C30(iVar13,*(undefined4 *)(*(int *)(param_1 + 8) + 0xb44)), iVar11 != 0))
    {
      if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
        fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b8890,0);
      }
    }
  }
  if ((*(uint *)(*(int *)(param_1 + 8) + 0xb48) <= *(uint *)(iVar13 + 0x40)) &&
     (iVar11 = fn_82426C30(iVar13,*(undefined4 *)(*(int *)(param_1 + 8) + 0xb40)), iVar11 != 0)) {
    if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
      fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b88b0,0);
    }
  }
  dVar15 = (double)lbl_821CA460;
  if (!bVar6) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
      fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),
                        (&lbl_831E48D4)
                        [-(int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) -
                                       dVar15) * lbl_82195728)],0);
    }
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
    fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),
                      (&lbl_831E48F0)
                      [-(int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar15
                                     ) * lbl_821954D4)],0);
  }
  return;
}

