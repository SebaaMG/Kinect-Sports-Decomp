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


void fn_82C3E110(int param_1,int *param_2,longlong param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  short *psVar7;
  int iVar8;
  ulonglong uVar9;
  short *psVar10;
  longlong lVar11;
  
  uVar6 = (ulonglong)*(ushort *)(param_1 + 0x22);
  psVar10 = (short *)param_2[7];
  uVar9 = (ulonglong)(uint)param_2[9];
  lVar3 = 0;
  iVar1 = param_2[6];
  iVar8 = param_2[5] * 2 + param_2[0xb];
  if (*(ushort *)(param_1 + 0x22) != 0) {
    iVar2 = (int)param_3 - (int)param_4;
    do {
      lVar4 = (ulonglong)*(uint *)(iVar2 + (int)param_4) - (ulonglong)*param_4;
      if (lVar4 < 1) {
        if ((int)lVar4 < 0) {
          iVar5 = 0;
          if (0 < (longlong)(int)uVar6 * (longlong)*param_2) {
            psVar7 = psVar10;
            do {
              iVar5 = iVar5 + 1;
              *psVar7 = *psVar7 - *(short *)((iVar8 - (int)psVar10) + (int)psVar7);
              psVar7 = psVar7 + 1;
            } while (iVar5 < (int)((uint)*(ushort *)(param_1 + 0x22) * *param_2));
          }
          lVar4 = param_3;
          uVar6 = uVar9;
          lVar11 = lVar3;
          if (0 < (int)lVar3) {
            do {
              psVar7 = (short *)uVar6;
              if (*(int *)lVar4 < 1) {
                if (*(int *)lVar4 < 0) {
                  *psVar7 = *(short *)(param_2 + 0xc) + *psVar7;
                }
              }
              else {
                *psVar7 = *psVar7 - *(short *)(param_2 + 0xc);
              }
              lVar11 = lVar11 + -1;
              lVar4 = lVar4 + 4;
              uVar6 = uVar6 + 2;
            } while (lVar11 != 0);
          }
        }
      }
      else {
        iVar5 = 0;
        if (0 < (longlong)(int)uVar6 * (longlong)*param_2) {
          psVar7 = psVar10;
          do {
            iVar5 = iVar5 + 1;
            *psVar7 = *(short *)((iVar8 - (int)psVar10) + (int)psVar7) + *psVar7;
            psVar7 = psVar7 + 1;
          } while (iVar5 < (int)((uint)*(ushort *)(param_1 + 0x22) * *param_2));
        }
        lVar4 = param_3;
        uVar6 = uVar9;
        lVar11 = lVar3;
        if (0 < (int)lVar3) {
          do {
            psVar7 = (short *)uVar6;
            if (*(int *)lVar4 < 1) {
              if (*(int *)lVar4 < 0) {
                *psVar7 = *psVar7 - *(short *)(param_2 + 0xc);
              }
            }
            else {
              *psVar7 = *(short *)(param_2 + 0xc) + *psVar7;
            }
            lVar11 = lVar11 + -1;
            lVar4 = lVar4 + 4;
            uVar6 = uVar6 + 2;
          } while (lVar11 != 0);
        }
      }
      uVar6 = (ulonglong)*(ushort *)(param_1 + 0x22);
      lVar3 = lVar3 + 1;
      param_4 = param_4 + 1;
      uVar9 = uVar6 * 2 + uVar9;
      psVar10 = psVar10 + param_2[1];
    } while ((int)lVar3 < (int)(uint)*(ushort *)(param_1 + 0x22));
  }
  if (-1 < (longlong)(uVar6 - 1)) {
    param_3 = (uVar6 - 1 & 0x3fffffff) * 4 + param_3;
    do {
      iVar8 = param_2[5];
      param_2[5] = iVar8 + -1;
      iVar2 = (iVar8 + -1) * 2;
      iVar8 = *(int *)param_3;
      if (*(int *)(param_1 + 0x2d0) < iVar8) {
        *(short *)(iVar2 + iVar1) = (short)*(int *)(param_1 + 0x2d0);
      }
      else if (iVar8 < *(int *)(param_1 + 0x2d4)) {
        *(short *)(iVar2 + iVar1) = (short)*(int *)(param_1 + 0x2d4);
      }
      else {
        *(short *)(iVar2 + iVar1) = (short)iVar8;
      }
      iVar8 = *(int *)param_3;
      if (iVar8 < 1) {
        if (iVar8 < 0) {
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
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_2[5] == 0) {
    fn_82F68CC0((uint)*(ushort *)(param_1 + 0x22) * *param_2 * 2 + iVar1,iVar1,param_2[1] << 1);
    fn_82F68CC0(((longlong)(int)(uint)*(ushort *)(param_1 + 0x22) * (longlong)*param_2 &
                 0x7fffffffU) * 2 + (ulonglong)(uint)param_2[0xb],(ulonglong)(uint)param_2[0xb],
                 param_2[1] << 1);
    param_2[5] = param_2[1];
  }
  return;
}

