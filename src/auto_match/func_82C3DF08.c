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


void fn_82C3DF08(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  short *psVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  iVar15 = 0;
  iVar17 = param_2[7];
  iVar16 = param_2[9];
  iVar13 = param_2[5] * 4 + param_2[6];
  uVar12 = (uint)*(ushort *)(param_1 + 0x22);
  if (*(ushort *)(param_1 + 0x22) != 0) {
    piVar14 = param_3;
    do {
      if (*(int *)((int)piVar14 + (param_4 - (int)param_3)) == 0) {
        iVar8 = *param_2 * (uint)*(ushort *)(param_1 + 0x22) * 2;
        uVar7 = (uint)*(ushort *)(param_1 + 0x22);
      }
      else {
        iVar8 = 0;
        iVar20 = 0;
        uVar12 = *param_2 * uVar12;
        iVar19 = 0;
        iVar18 = ((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0);
        iVar9 = 0;
        if (1 < iVar18) {
          piVar10 = (int *)(iVar13 + -8);
          psVar11 = (short *)(iVar17 + -4);
          do {
            psVar1 = psVar11 + 3;
            iVar9 = iVar9 + 2;
            psVar2 = psVar11 + 5;
            psVar3 = psVar11 + 2;
            psVar11 = psVar11 + 4;
            piVar4 = piVar10 + 3;
            piVar5 = piVar10 + 2;
            piVar6 = piVar10 + 5;
            piVar10 = piVar10 + 4;
            iVar8 = (int)*psVar1 * *piVar4 + (int)*psVar3 * *piVar5 + iVar8;
            iVar20 = (int)*psVar2 * *piVar6 + (int)*psVar11 * *piVar10 + iVar20;
          } while (iVar9 < iVar18 + -1);
        }
        if (iVar9 < iVar18) {
          psVar11 = (short *)(iVar9 * 4 + iVar17);
          piVar10 = (int *)(iVar9 * 8 + iVar13);
          iVar19 = (int)psVar11[1] * piVar10[1] + (int)*psVar11 * *piVar10;
        }
        iVar9 = 0;
        iVar19 = iVar20 + iVar8 + iVar19;
        iVar8 = 0;
        iVar18 = 0;
        if (1 < iVar15) {
          piVar10 = param_3 + -1;
          psVar11 = (short *)(iVar16 + -2);
          iVar9 = 0;
          iVar8 = 0;
          do {
            psVar1 = psVar11 + 1;
            iVar18 = iVar18 + 2;
            psVar11 = psVar11 + 2;
            piVar4 = piVar10 + 1;
            piVar10 = piVar10 + 2;
            iVar9 = (int)*psVar1 * *piVar4 + iVar9;
            iVar8 = (int)*psVar11 * *piVar10 + iVar8;
          } while (iVar18 < iVar15 + -1);
        }
        if (iVar18 < iVar15) {
          iVar19 = (int)*(short *)(iVar18 * 2 + iVar16) * param_3[iVar18] + iVar19;
        }
        iVar8 = param_2[3] + iVar8 + iVar9 + iVar19 >> (param_2[2] & 0x3fU);
        *(int *)((int)piVar14 + (param_4 - (int)param_3)) = iVar8;
        if (param_5 != 0) {
          *piVar14 = *piVar14 + iVar8;
        }
        uVar12 = (uint)*(ushort *)(param_1 + 0x22);
        iVar8 = param_2[1] << 1;
        uVar7 = uVar12;
      }
      iVar15 = iVar15 + 1;
      iVar16 = uVar7 * 2 + iVar16;
      iVar17 = iVar8 + iVar17;
      piVar14 = piVar14 + 1;
    } while (iVar15 < (int)uVar12);
  }
  return;
}

