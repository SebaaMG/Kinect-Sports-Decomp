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
extern int fn_82CEAC20();
extern int fn_82CEAFA8();
extern int fn_82CFBBF0();
extern unsigned int lbl_8323AEC8;


void fn_82E0ADB8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar7;
  ulonglong uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int *piVar17;
  
  if (*(int *)(param_1[7] + 0xc) < 4) {
    uVar5 = (**(code **)(*param_1 + 0x28))();
    iVar7 = fn_82CFBBF0(uVar5,0xffffffff8214a83c);
    if (iVar7 != 0) {
      uVar6 = (**(code **)(*param_1 + 0x38))(param_1,0xffffffff8214a82c);
      if ((-1 < (int)uVar6) &&
         (uVar12 = *(uint *)((int)((uVar6 + (uVar6 & 0x7fffffff) * 2 & 0xffffffff) << 4) +
                             param_1[8] + 0x18), uVar12 != 0)) {
        iVar7 = (int)((uVar6 & 0xffffffff) << 2);
        if (*(int *)(iVar7 + param_1[9]) != 0) {
          piVar17 = *(int **)(iVar7 + param_1[9]);
          iVar7 = 0;
          lVar15 = (longlong)((int)uVar12 >> 2) + (ulonglong)((int)uVar12 < 0 && (uVar12 & 3) != 0);
          if (0 < lVar15) {
            do {
              iVar14 = *piVar17;
              if (iVar14 == -1) break;
              iVar11 = piVar17[1];
              iVar8 = (**(code **)(*param_1 + 0x3c))(param_1,iVar14,iVar11);
              if (iVar8 != 0) {
                iVar9 = fn_82CE5410();
                if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_2,0xc);
                }
                iVar9 = param_2[1];
                param_2[1] = iVar9 + 1;
                piVar13 = (int *)(iVar9 * 0xc + *param_2);
                *piVar13 = iVar8;
                piVar13[1] = iVar14;
                piVar13[2] = iVar11;
              }
              iVar7 = iVar7 + 2;
              piVar17 = piVar17 + 2;
            } while (iVar7 < (int)lVar15);
          }
        }
      }
      goto LAB_82e0b04c;
    }
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1[7] + 0x14)) {
    iVar11 = 0;
    iVar14 = 0;
    do {
      if (*(int *)(param_1[9] + iVar11) != 0) {
        iVar9 = 0;
        iVar8 = *(int *)(param_1[9] + iVar11);
        iVar16 = param_1[8] + iVar14;
        uVar12 = *(int *)(iVar16 + 0x24) - *(int *)(iVar16 + 0x20);
        if (0 < (longlong)
                ((longlong)((int)uVar12 >> 2) + (ulonglong)((int)uVar12 < 0 && (uVar12 & 3) != 0)))
        {
          piVar17 = (int *)(*(int *)(iVar16 + 0x20) + iVar8 + 8);
          do {
            iVar1 = piVar17[-2];
            if (iVar1 != -1) {
              iVar2 = piVar17[-1];
              iVar3 = *piVar17;
              uVar5 = (**(code **)(*param_1 + 0x3c))(param_1,iVar2,iVar3);
              iVar10 = fn_82CFBBF0(uVar5,0xffffffff82130870);
              if (iVar10 == 0) {
                iVar10 = fn_82CE5410();
                if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar10 + 0x10),param_2,0xc);
                }
                iVar10 = param_2[1];
                param_2[1] = iVar10 + 1;
                piVar13 = (int *)(iVar10 * 0xc + *param_2);
                *piVar13 = iVar1 + iVar8;
                piVar13[1] = iVar2;
                piVar13[2] = iVar3;
              }
            }
            iVar9 = iVar9 + 3;
            piVar17 = piVar17 + 3;
            uVar12 = *(int *)(iVar16 + 0x24) - *(int *)(iVar16 + 0x20);
          } while (iVar9 < (int)(((int)uVar12 >> 2) + (uint)((int)uVar12 < 0 && (uVar12 & 3) != 0)))
          ;
        }
      }
      iVar7 = iVar7 + 1;
      iVar14 = iVar14 + 0x30;
      iVar11 = iVar11 + 4;
    } while (iVar7 < *(int *)(param_1[7] + 0x14));
  }
LAB_82e0b04c:
  iVar7 = 0;
  if (0 < param_2[1]) {
    iVar14 = 0;
    do {
      uVar4 = *(undefined4 *)(iVar14 + *param_2);
      uVar5 = fn_82CEAC20(uVar4);
      iVar11 = fn_82CFBBF0(uVar5,0xffffffff8214a6d8);
      if ((iVar11 == 0) &&
         (iVar11 = fn_82CEAFA8(uVar4,0xffffffff8204ef40), *(int *)(iVar11 + 4) == 0)) {
        *(undefined **)(iVar11 + 4) = &lbl_8323AEC8;
      }
      iVar7 = iVar7 + 1;
      iVar14 = iVar14 + 0xc;
    } while (iVar7 < param_2[1]);
  }
  return;
}

