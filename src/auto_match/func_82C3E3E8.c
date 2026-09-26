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
extern int fn_82F68CC0();


void fn_82C3E3E8(int param_1,int *param_2,longlong param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  short *psVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar7 = (ulonglong)*(ushort *)(param_1 + 0x22);
  psVar3 = (short *)param_2[7];
  lVar4 = 0;
  uVar10 = (ulonglong)(uint)param_2[9];
  iVar9 = param_2[5] * 2 + param_2[0xb];
  iVar1 = param_2[6];
  if (*(ushort *)(param_1 + 0x22) != 0) {
    iVar2 = (int)param_3 - (int)param_4;
    do {
      lVar5 = (ulonglong)*(uint *)(iVar2 + (int)param_4) - (ulonglong)*param_4;
      if (lVar5 < 1) {
        if ((int)lVar5 < 0) {
          iVar6 = 0;
          if (0 < (longlong)(int)uVar7 * (longlong)*param_2) {
            psVar8 = psVar3;
            do {
              iVar6 = iVar6 + 1;
              *psVar8 = *psVar8 - *(short *)((iVar9 - (int)psVar3) + (int)psVar8);
              psVar8 = psVar8 + 1;
            } while (iVar6 < (int)((uint)*(ushort *)(param_1 + 0x22) * *param_2));
          }
          lVar5 = param_3;
          uVar7 = uVar10;
          lVar11 = lVar4;
          if (0 < (int)lVar4) {
            do {
              psVar8 = (short *)uVar7;
              if (*(int *)lVar5 < 1) {
                if (*(int *)lVar5 < 0) {
                  *psVar8 = *(short *)(param_2 + 0xc) + *psVar8;
                }
              }
              else {
                *psVar8 = *psVar8 - *(short *)(param_2 + 0xc);
              }
              lVar11 = lVar11 + -1;
              lVar5 = lVar5 + 4;
              uVar7 = uVar7 + 2;
            } while (lVar11 != 0);
          }
        }
      }
      else {
        iVar6 = 0;
        if (0 < (longlong)(int)uVar7 * (longlong)*param_2) {
          psVar8 = psVar3;
          do {
            iVar6 = iVar6 + 1;
            *psVar8 = *(short *)((iVar9 - (int)psVar3) + (int)psVar8) + *psVar8;
            psVar8 = psVar8 + 1;
          } while (iVar6 < (int)((uint)*(ushort *)(param_1 + 0x22) * *param_2));
        }
        lVar5 = param_3;
        uVar7 = uVar10;
        lVar11 = lVar4;
        if (0 < (int)lVar4) {
          do {
            psVar8 = (short *)uVar7;
            if (*(int *)lVar5 < 1) {
              if (*(int *)lVar5 < 0) {
                *psVar8 = *psVar8 - *(short *)(param_2 + 0xc);
              }
            }
            else {
              *psVar8 = *(short *)(param_2 + 0xc) + *psVar8;
            }
            lVar11 = lVar11 + -1;
            lVar5 = lVar5 + 4;
            uVar7 = uVar7 + 2;
          } while (lVar11 != 0);
        }
      }
      uVar7 = (ulonglong)*(ushort *)(param_1 + 0x22);
      lVar4 = lVar4 + 1;
      param_4 = param_4 + 1;
      uVar10 = uVar7 * 2 + uVar10;
      psVar3 = psVar3 + param_2[1];
    } while ((int)lVar4 < (int)(uint)*(ushort *)(param_1 + 0x22));
  }
  if (-1 < (longlong)(uVar7 - 1)) {
    param_3 = (uVar7 - 1 & 0x3fffffff) * 4 + param_3;
    do {
      iVar9 = param_2[5];
      param_2[5] = iVar9 + -1;
      iVar2 = (iVar9 + -1) * 4;
      iVar9 = *(int *)param_3;
      if (*(int *)(param_1 + 0x2d0) < iVar9) {
        *(int *)(iVar2 + iVar1) = *(int *)(param_1 + 0x2d0);
      }
      else if (iVar9 < *(int *)(param_1 + 0x2d4)) {
        *(int *)(iVar2 + iVar1) = *(int *)(param_1 + 0x2d4);
      }
      else {
        *(int *)(iVar2 + iVar1) = iVar9;
      }
      iVar9 = *(int *)param_3;
      if (iVar9 < 1) {
        if (iVar9 < 0) {
          *(short *)(param_2[5] * 2 + param_2[0xb]) = -*(short *)(param_2 + 0xc);
        }
        else {
          *(undefined2 *)(param_2[5] * 2 + param_2[0xb]) = 0;
        }
      }
      else {
        *(undefined2 *)(param_2[5] * 2 + param_2[0xb]) = *(undefined2 *)(param_2 + 0xc);
      }
      param_3 = param_3 + -4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (param_2[5] == 0) {
    fn_82F68CC0(((longlong)(int)(uint)*(ushort *)(param_1 + 0x22) * (longlong)*param_2 &
                 0x3fffffffU) * 4 + (ulonglong)(uint)param_2[6],(ulonglong)(uint)param_2[6],
                 param_2[1] << 2);
    fn_82F68CC0(((longlong)(int)(uint)*(ushort *)(param_1 + 0x22) * (longlong)*param_2 &
                 0x7fffffffU) * 2 + (ulonglong)(uint)param_2[0xb],(ulonglong)(uint)param_2[0xb],
                 param_2[1] << 1);
    param_2[5] = param_2[1];
  }
  return;
}

