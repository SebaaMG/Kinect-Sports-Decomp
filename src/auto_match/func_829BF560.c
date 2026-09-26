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


void fn_829BF560(int param_1,int *param_2,int param_3,int param_4,longlong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  int *piVar19;
  ulonglong uVar20;
  
  iVar4 = *(int *)(param_1 + 0x1cc);
  param_5 = param_5 + -1;
  uVar5 = *(uint *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x148);
  iVar7 = *(int *)(iVar4 + 8);
  iVar8 = *(int *)(iVar4 + 0xc);
  iVar9 = *(int *)(iVar4 + 0x10);
  iVar4 = *(int *)(iVar4 + 0x14);
  if (-1 < param_5) {
    param_3 = param_3 << 2;
    piVar19 = (int *)(param_4 + -4);
    do {
      piVar19 = piVar19 + 1;
      piVar10 = (int *)(*param_2 + param_3);
      pbVar18 = *(byte **)(param_3 + param_2[1]);
      piVar11 = (int *)(param_2[2] + param_3);
      piVar12 = (int *)(param_3 + param_2[3]);
      param_3 = param_3 + 4;
      if ((ulonglong)uVar5 != 0) {
        pbVar17 = (byte *)(*piVar19 + -1);
        iVar14 = *piVar10 - (int)pbVar18;
        iVar13 = *piVar11 - (int)pbVar18;
        iVar16 = *piVar12 - (int)pbVar18;
        uVar20 = (ulonglong)uVar5;
        do {
          bVar2 = pbVar18[iVar13];
          bVar1 = *pbVar18;
          bVar3 = pbVar18[iVar14];
          pbVar17[1] = *(byte *)(((iVar6 - *(int *)((uint)bVar2 * 4 + iVar7)) - (uint)bVar3) + 0xff)
          ;
          pbVar17[2] = *(byte *)(((iVar6 - (*(int *)((uint)bVar1 * 4 + iVar4) +
                                            *(int *)((uint)bVar2 * 4 + iVar9) >> 0x10)) -
                                 (uint)bVar3) + 0xff);
          pbVar17[3] = *(byte *)(((iVar6 - *(int *)((uint)bVar1 * 4 + iVar8)) - (uint)bVar3) + 0xff)
          ;
          pbVar15 = pbVar18 + iVar16;
          pbVar18 = pbVar18 + 1;
          pbVar17 = pbVar17 + 4;
          *pbVar17 = *pbVar15;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

