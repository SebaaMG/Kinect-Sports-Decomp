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


void fn_827CD2D0(int param_1,int param_2,int *param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  ulonglong uVar19;
  
  iVar4 = *(int *)(param_1 + 0x1a8);
  uVar5 = *(uint *)(param_1 + 0x5c);
  piVar6 = *(int **)(iVar4 + 0x18);
  iVar7 = *piVar6;
  iVar8 = piVar6[1];
  iVar9 = piVar6[2];
  if (0 < (int)param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      iVar10 = *(int *)(iVar4 + 0x30);
      uVar16 = 0;
      iVar11 = *(int *)(iVar4 + 0x34);
      iVar14 = iVar10 * 0x40;
      iVar12 = *(int *)(iVar4 + 0x38);
      iVar13 = *(int *)(iVar4 + 0x3c);
      pbVar17 = *(byte **)(param_2 + (int)param_3);
      if ((ulonglong)uVar5 != 0) {
        pcVar15 = (char *)(*param_3 + -1);
        uVar19 = (ulonglong)uVar5;
        do {
          iVar18 = uVar16 * 4;
          bVar3 = *pbVar17;
          pbVar1 = pbVar17 + 1;
          uVar16 = uVar16 + 1 & 0xf;
          pbVar2 = pbVar17 + 2;
          pbVar17 = pbVar17 + 3;
          pcVar15 = pcVar15 + 1;
          *pcVar15 = *(char *)(*(int *)(iVar18 + iVar13 + iVar14) + (uint)*pbVar2 + iVar9) +
                     *(char *)(*(int *)(iVar18 + iVar12 + iVar14) + (uint)*pbVar1 + iVar8) +
                     *(char *)(*(int *)(iVar18 + iVar11 + iVar14) + (uint)bVar3 + iVar7);
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
      *(uint *)(iVar4 + 0x30) = iVar10 + 1U & 0xf;
    } while (param_4 != 0);
  }
  return;
}

