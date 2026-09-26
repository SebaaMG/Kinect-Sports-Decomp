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
extern unsigned int *auStack_60;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int iStack_58;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


void fn_82DC8578(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar9;
  int iVar10;
  longlong lVar8;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint auStack_60 [2];
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  if (uVar1 == 0) {
    return;
  }
  iStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0x80000000;
  auStack_60[0] = uVar2;
  if (uVar2 == 0) {
    iStack_58 = 0;
    uStack_54 = 0;
  }
  else {
    iVar4 = fn_82CE5410();
    iStack_58 = (**(code **)(**(int **)(iVar4 + 0x10) + 0xc))
                          (*(int **)(iVar4 + 0x10),auStack_60,0x10);
    uStack_54 = auStack_60[0];
    uStack_50 = auStack_60[0];
    if (auStack_60[0] != 0) goto LAB_82dc85f4;
  }
  uStack_50 = 0x80000000;
LAB_82dc85f4:
  if (0 < (int)uVar2) {
    iVar13 = 0;
    iVar4 = 0;
    uVar11 = (ulonglong)uVar2;
    do {
      iVar7 = 0;
      iVar10 = param_1[1];
      piVar6 = (int *)(iVar13 + *param_2);
      if (0 < iVar10) {
        piVar5 = (int *)*param_1;
        piVar9 = piVar5;
        do {
          if (((*piVar6 != *piVar9) || (piVar6[1] != piVar9[1])) ||
             (bVar3 = true, piVar6[2] != piVar9[2])) {
            bVar3 = false;
          }
          if (bVar3) {
            if (iVar7 != -1) {
              iVar10 = iVar10 + -1;
              param_1[1] = iVar10;
              if (iVar10 != iVar7) {
                piVar6 = piVar5 + iVar7 * 3;
                iVar10 = iVar10 * 0xc - (int)piVar6;
                lVar12 = 3;
                do {
                  *piVar6 = *(int *)((int)piVar5 + iVar10 + (int)piVar6);
                  piVar6 = piVar6 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              goto LAB_82dc8718;
            }
            break;
          }
          iVar7 = iVar7 + 1;
          piVar9 = piVar9 + 3;
        } while (iVar7 < iVar10);
      }
      piVar5 = (int *)(iVar4 + iStack_58);
      iVar4 = iVar4 + 0x10;
      *piVar5 = *piVar6;
      piVar5[1] = piVar6[1];
      piVar5[2] = piVar6[2];
      piVar5[3] = piVar6[3];
LAB_82dc8718:
      uVar11 = uVar11 - 1;
      iVar13 = iVar13 + 0x10;
    } while (uVar11 != 0);
  }
  lVar12 = ((ulonglong)uVar2 - (ulonglong)uVar1) + (ulonglong)(uint)param_1[1];
  iVar4 = fn_82CE5410();
  iVar13 = (int)lVar12;
  if ((int)(uStack_50 & 0x3fffffff) < iVar13) {
    lVar8 = ((ulonglong)uStack_50 & 0x3fffffff) << 1;
    if ((int)lVar8 <= iVar13) {
      lVar8 = lVar12;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),&iStack_58,lVar8,0x10);
  }
  iVar4 = *param_2;
  uStack_54 = param_2[1];
  uVar1 = param_2[2];
  param_2[1] = iVar13;
  *param_2 = iStack_58;
  param_2[2] = uStack_50;
  iStack_58 = iVar4;
  uStack_50 = uVar1;
  iVar4 = fn_82CE5410();
  uStack_54 = 0;
  if ((uStack_50 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_58,uStack_50 & 0x3fffffff,0x10);
  }
  return;
}

