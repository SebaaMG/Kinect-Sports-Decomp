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
extern unsigned int *auStack_270;
extern unsigned int *auStack_290;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int iStack_27c;
extern unsigned int *lbl_8323B464;
extern unsigned int uRam8323b6c8;
extern unsigned int uRam8323b6cc;
extern unsigned int uRam8323b6d0;
extern unsigned int uStack_274;


undefined4 * fn_82D2C3F8(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 in_r0;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  uint auStack_290 [4];
  int *piStack_280;
  int iStack_27c;
  int *piStack_278;
  undefined4 uStack_274;
  undefined1 auStack_270 [624];
  
  piVar15 = *(int **)(((param_4 >> 0xb) * 0x10 + (param_3 >> 0xb) + 0x97) * 4 + param_2);
  if (piVar15 == (int *)0x0) {
    piVar15 = *(int **)(param_2 + 0x34);
  }
  if (*(int **)(param_2 + 0x34) != (int *)0x0) {
    piVar1 = *(int **)(param_2 + 0x34);
    do {
      uVar13 = 0;
      iVar7 = *(int *)(piVar15[2] + 0xc);
      iVar2 = *(int *)(piVar15[2] + 8);
      lVar16 = (longlong)(*(int *)(piVar15[3] + 8) - iVar2) * (longlong)(param_4 - iVar7) -
               (longlong)(*(int *)(piVar15[3] + 0xc) - iVar7) * (longlong)(param_3 - iVar2);
      while (lVar16 < 0) {
        uVar18 = (ulonglong)(uint)piVar15[(int)uVar13 + 5] & 3;
        piVar15 = (int *)(piVar15[(int)uVar13 + 5] & 0xfffffffc);
        uVar13 = -(ulonglong)(uVar18 != 2) & uVar18 + 1;
        iVar7 = *(int *)(piVar15[(int)uVar13 + 2] + 0xc);
        iVar2 = *(int *)(piVar15[(int)uVar13 + 2] + 8);
        lVar16 = (longlong)
                 (*(int *)(piVar15[(-(uint)(uVar13 != 2) & (int)uVar13 + 1U) + 2] + 8) - iVar2) *
                 (longlong)(param_4 - iVar7) -
                 (longlong)
                 (*(int *)(piVar15[(-(uint)(uVar13 != 2) & (int)uVar13 + 1U) + 2] + 0xc) - iVar7) *
                 (longlong)(param_3 - iVar2);
      }
      uVar18 = (ulonglong)*(uint *)(param_2 + 0x38);
      if (0 < (int)*(uint *)(param_2 + 0x38)) {
        do {
          piStack_280 = piVar15;
          lVar14 = 2;
          uVar8 = -(ulonglong)(uVar13 != 2) & uVar13 + 1;
          iStack_27c = (int)uVar8;
          if (uVar13 != 0) {
            lVar14 = uVar13 - 1;
          }
          uStack_274 = (undefined4)lVar14;
          iVar5 = *(int *)((int)((lVar14 + 2U & 0xffffffff) << 2) + (int)piStack_280);
          iVar7 = *(int *)(piStack_280[iStack_27c + 2] + 0xc);
          iVar6 = *(int *)((int)(((-(ulonglong)(lVar14 != 2) & lVar14 + 1U) + 2 & 0xffffffff) << 2)
                          + (int)piStack_280);
          iVar2 = *(int *)(piStack_280[iStack_27c + 2] + 8);
          iVar3 = *(int *)(iVar5 + 0xc);
          iVar5 = *(int *)(iVar5 + 8);
          uVar11 = (longlong)
                   (*(int *)(piStack_280[(-(uint)(uVar8 != 2) & iStack_27c + 1U) + 2] + 8) - iVar2)
                   * (longlong)(param_4 - iVar7) -
                   (longlong)
                   (*(int *)(piStack_280[(-(uint)(uVar8 != 2) & iStack_27c + 1U) + 2] + 0xc) - iVar7
                   ) * (longlong)(param_3 - iVar2);
          uVar9 = (longlong)(*(int *)(iVar6 + 8) - iVar5) * (longlong)(param_4 - iVar3) -
                  (longlong)(*(int *)(iVar6 + 0xc) - iVar3) * (longlong)(param_3 - iVar5);
          auStack_290[0] = (uint)uVar11;
          auStack_290[1] = (uint)uVar9;
          uVar8 = ((uVar9 & 0xffffffff) >> 0x1f) + (longlong)((int)auStack_290[0] >> 0x1f) +
                  (ulonglong)(uVar9 <= uVar11);
          iVar7 = (int)((uVar8 & 0xffffffff) << 3);
          uVar10 = *(uint *)((int)auStack_290 + (int)((uVar8 & 0xffffffff) << 2));
          if (-1 < (int)uVar10) {
            bVar12 = (-(uVar9 == 0) & 4U) + (-(uVar11 == 0) & 2U) + ((int)lVar16 == 0);
            if (bVar12 < 7) {
              uVar17 = (undefined4)uVar13;
              if (bVar12 == 1) {
                *param_1 = 1;
                param_1[2] = uVar17;
                param_1[1] = piStack_280;
              }
              else if (bVar12 == 2) {
                *param_1 = 1;
                param_1[2] = iStack_27c;
                param_1[1] = piStack_280;
              }
              else if (bVar12 == 3) {
                *param_1 = 2;
                param_1[2] = iStack_27c;
                param_1[1] = piStack_280;
              }
              else if (bVar12 == 4) {
                *param_1 = 1;
                param_1[2] = uStack_274;
                param_1[1] = piStack_280;
              }
              else if (bVar12 == 5) {
                *param_1 = 2;
                param_1[2] = uVar17;
                param_1[1] = piStack_280;
              }
              else if (bVar12 == 0) {
                *param_1 = 0;
                param_1[2] = uVar17;
                param_1[1] = piStack_280;
              }
              else {
                *param_1 = 2;
                param_1[2] = uStack_274;
                param_1[1] = piStack_280;
              }
            }
            else {
              uVar10 = uRam8323b6d0 & 1;
              if ((uRam8323b6d0 & 1) == 0) {
                uRam8323b6d0 = uRam8323b6d0 | 1;
                uRam8323b6cc = 0;
                uRam8323b6c8 = uVar10;
              }
              *param_1 = 3;
              uVar10 = uRam8323b6c8;
              param_1[2] = uRam8323b6cc;
              param_1[1] = uVar10;
            }
            return param_1;
          }
          lVar16 = -(ulonglong)uVar10;
          uVar10 = *(uint *)((*(int *)((int)&iStack_27c + iVar7) + 5) * 4 +
                            *(int *)((int)&piStack_280 + iVar7));
          uVar13 = (ulonglong)uVar10 & 3;
          uVar18 = uVar18 - 1;
          piVar15 = (int *)(uVar10 & 0xfffffffc);
          piStack_278 = piStack_280;
        } while (uVar18 != 0);
      }
      piVar4 = (int *)*piVar1;
      piVar15 = piVar1;
      piVar1 = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  fn_82CEE578(auStack_290,auStack_270,0x200);
  fn_82CEDB38(auStack_290,0xffffffff821349d8);
  iVar7 = (**(code **)(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0xffffffffb8c66b5f,auStack_270,0xffffffff82134970,0x32c);
  if (iVar7 != 0) {
    trapWord(0x1f,in_r0,0x16);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CED958(auStack_290);
}

