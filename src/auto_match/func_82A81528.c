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
extern int fn_82F691F0();


void fn_82A81528(int param_1,longlong param_2,longlong param_3,int *param_4,int *param_5,
                  int param_6,short param_7)

{
  int *piVar1;
  int iVar3;
  ulonglong uVar2;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar9;
  ulonglong uVar8;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  
  uVar11 = 0;
  if (0 < param_6) {
    do {
      iVar10 = 0;
      iVar12 = (int)uVar11;
      piVar1 = (int *)param_2;
      if (iVar12 < param_7) {
        if (*(int *)(param_1 + 0xc0) == 1) {
          if (iVar12 == 0) {
            *piVar1 = *param_4;
          }
          else if (iVar12 == 1) {
            piVar1[1] = param_4[1] + *piVar1;
          }
          else if (1 < iVar12) {
            iVar10 = (int)((uVar11 & 0xffffffff) << 2);
            *(int *)(iVar10 + (int)piVar1) =
                 (*(int *)(iVar10 + (int)param_4) -
                 *(int *)((int)((uVar11 - 2 & 0xffffffff) << 2) + (int)piVar1)) +
                 *(int *)((int)piVar1 + iVar10 + -4) * 2;
          }
        }
        else {
          iVar10 = 0;
          iVar3 = 0;
          lVar7 = (longlong)*(short *)(param_1 + 0xa8);
          if (0 < *(short *)(param_1 + 0xa8)) {
            lVar4 = (uVar11 & 0x3fffffff) * 4 + param_2;
            lVar6 = param_3 + (uVar11 & 0x3fffffff) * -4;
            piVar9 = param_5;
            iVar10 = 0;
            do {
              lVar4 = lVar4 + -4;
              if (iVar3 < iVar12) {
                iVar5 = *(int *)lVar4;
              }
              else {
                iVar5 = *(int *)lVar6;
              }
              iVar10 = iVar5 * *piVar9 + iVar10;
              iVar3 = iVar3 + 1;
              lVar6 = lVar6 + 4;
              piVar9 = piVar9 + 1;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          iVar12 = (int)((uVar11 & 0xffffffff) << 2);
          *(int *)(iVar12 + (int)piVar1) =
               *(int *)(iVar12 + (int)param_4) -
               (iVar10 >> ((int)*(short *)(param_1 + 0xaa) & 0x3fU));
        }
      }
      else {
        iVar12 = 0;
        iVar3 = 0;
        uVar2 = 0;
        if (1 < param_7) {
          uVar8 = uVar11 - 2;
          piVar9 = param_5 + -1;
          lVar7 = (uVar8 & 0x3fffffff) * 4 + param_2;
          iVar12 = 0;
          iVar3 = 0;
          do {
            if ((longlong)(uVar8 + 1) < 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = ((int *)lVar7)[1];
            }
            iVar12 = piVar9[1] * iVar5 + iVar12;
            if ((int)uVar8 < 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)lVar7;
            }
            piVar9 = piVar9 + 2;
            uVar2 = uVar2 + 2;
            lVar7 = lVar7 + -8;
            iVar3 = *piVar9 * iVar5 + iVar3;
            uVar8 = uVar8 - 2;
          } while ((int)uVar2 < param_7 + -1);
        }
        if ((int)uVar2 < (int)param_7) {
          if ((longlong)((uVar11 - uVar2) - 1) < 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)((int)piVar1 + (int)((uVar11 - uVar2 & 0xffffffff) << 2) + -4);
          }
          iVar10 = *(int *)((int)((uVar2 & 0xffffffff) << 2) + (int)param_5) * iVar10;
        }
        iVar5 = (int)((uVar11 & 0xffffffff) << 2);
        *(int *)(iVar5 + (int)piVar1) =
             *(int *)(iVar5 + (int)param_4) -
             (iVar3 + iVar12 + iVar10 >> ((int)*(short *)(param_1 + 0xaa) & 0x3fU));
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < param_6);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_3,0,0xa0);
}

