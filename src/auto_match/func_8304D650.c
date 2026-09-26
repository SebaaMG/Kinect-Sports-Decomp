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
extern int fn_82F68B64();
extern int fn_82FA5060();
extern unsigned int lbl_831BC770;


void fn_8304D650(int param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x24);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 8);
  uVar9 = 0;
  iVar2 = fn_82F68B64(param_1 + 0x10);
  if ((*(int *)(iVar2 + 8) != 0) && ((*(uint *)(iVar4 + 8) & 4) != 0)) {
    if ((uVar9 & 0xffffffff) == 0) {
      uVar9 = (ulonglong)*(ushort *)(param_2 + 0xe);
    }
    else {
      uVar9 = (ulonglong)*(uint *)uVar9;
    }
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined2 *)(param_2 + 0x10) = 0;
    if ((param_4 & 0xff) == 0) {
      uVar7 = 0;
      if (*(int *)(iVar2 + 4) != 0) {
        iVar8 = 0;
        do {
          uVar1 = *(uint *)(iVar8 + *(int *)(iVar2 + 8) + 4);
          if (((param_3 & 0xffffffff) <= (ulonglong)uVar1) &&
             ((ulonglong)uVar1 < (uVar9 + param_3 & 0xffffffff))) {
            *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
          }
          uVar7 = uVar7 + 1;
          iVar8 = iVar8 + 0xc;
        } while (uVar7 < *(uint *)(iVar2 + 4));
      }
    }
    else {
      uVar7 = 0;
      if (*(int *)(iVar2 + 4) != 0) {
        iVar8 = 0;
        do {
          uVar1 = *(uint *)(iVar8 + *(int *)(iVar2 + 8) + 4);
          if ((((param_3 & 0xffffffff) <= (ulonglong)uVar1) &&
              ((ulonglong)uVar1 < (uVar6 & 0xffffffff))) ||
             (((uVar5 & 0xffffffff) <= (ulonglong)uVar1 &&
              ((ulonglong)uVar1 < ((uVar9 - uVar6) + param_3 + uVar5 & 0xffffffff))))) {
            *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
          }
          uVar7 = uVar7 + 1;
          iVar8 = iVar8 + 0xc;
        } while (uVar7 < *(uint *)(iVar2 + 4));
      }
    }
    if ((ulonglong)*(ushort *)(param_2 + 0x10) != 0) {
      piVar3 = (int *)fn_82FA5060(lbl_831BC770,(ulonglong)*(ushort *)(param_2 + 0x10) * 0x14);
      *(int **)(param_2 + 0x14) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined2 *)(param_2 + 0x10) = 0;
      }
      else {
        uVar7 = 0;
        if ((param_4 & 0xff) == 0) {
          if (*(int *)(iVar2 + 4) != 0) {
            piVar11 = piVar3 + 2;
            iVar8 = 0;
            piVar3 = piVar3 + -5;
            do {
              uVar1 = *(uint *)(iVar8 + *(int *)(iVar2 + 8) + 4);
              if (((param_3 & 0xffffffff) <= (ulonglong)uVar1) &&
                 ((ulonglong)uVar1 < (uVar9 + param_3 & 0xffffffff))) {
                piVar3 = piVar3 + 5;
                *piVar3 = iVar4;
                piVar11[-1] = *(int *)(iVar8 + *(int *)(iVar2 + 8) + 4) - (int)param_3;
                iVar10 = iVar8 + *(int *)(iVar2 + 8);
                *piVar11 = *(int *)(iVar8 + *(int *)(iVar2 + 8));
                piVar11[1] = *(int *)(iVar10 + 4);
                piVar11[2] = *(int *)(iVar10 + 8);
                piVar11 = piVar11 + 5;
              }
              uVar7 = uVar7 + 1;
              iVar8 = iVar8 + 0xc;
            } while (uVar7 < *(uint *)(iVar2 + 4));
          }
        }
        else if (*(int *)(iVar2 + 4) != 0) {
          iVar8 = 0;
          do {
            uVar1 = *(uint *)(iVar8 + *(int *)(iVar2 + 8) + 4);
            if ((((param_3 & 0xffffffff) <= (ulonglong)uVar1) &&
                ((ulonglong)uVar1 < (uVar6 & 0xffffffff))) ||
               (((uVar5 & 0xffffffff) <= (ulonglong)uVar1 &&
                ((ulonglong)uVar1 < ((uVar9 - uVar6) + param_3 + uVar5 & 0xffffffff))))) {
              *piVar3 = iVar4;
              uVar1 = *(uint *)(iVar8 + *(int *)(iVar2 + 8) + 4);
              iVar10 = uVar1 - (int)param_3;
              if ((ulonglong)uVar1 < (param_3 & 0xffffffff)) {
                piVar3[1] = (iVar10 - (int)uVar5) + (int)uVar6;
              }
              else {
                piVar3[1] = iVar10;
              }
              iVar10 = iVar8 + *(int *)(iVar2 + 8);
              piVar3[2] = *(int *)(iVar8 + *(int *)(iVar2 + 8));
              piVar3[3] = *(int *)(iVar10 + 4);
              piVar3[4] = *(int *)(iVar10 + 8);
              piVar3 = piVar3 + 5;
            }
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + 0xc;
          } while (uVar7 < *(uint *)(iVar2 + 4));
        }
      }
    }
  }
  return;
}

