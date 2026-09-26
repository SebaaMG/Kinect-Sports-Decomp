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
extern int fn_827C1B68();


void fn_827CD3B0(int param_1,int param_2,undefined4 *param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  short sVar13;
  int iVar12;
  int iVar14;
  int iVar15;
  short *psVar16;
  short *psVar17;
  char *pcVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  iVar3 = *(int *)(param_1 + 0x1a8);
  iVar4 = *(int *)(param_1 + 100);
  iVar5 = *(int *)(param_1 + 0x5c);
  iVar6 = *(int *)(param_1 + 0x120);
  if (0 < (int)param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      fn_827C1B68(*param_3,iVar5);
      iVar19 = 0;
      if (0 < iVar4) {
        iVar20 = 0;
        do {
          pcVar18 = (char *)*param_3;
          iVar10 = *(int *)(param_2 + (int)param_3) + iVar19;
          if (*(char *)(iVar3 + 0x54) == '\0') {
            psVar17 = *(short **)(iVar3 + 0x44 + iVar20);
            iVar22 = 1;
            iVar21 = iVar4;
          }
          else {
            pcVar18 = pcVar18 + iVar5 + -1;
            iVar10 = (iVar5 + -1) * iVar4 + iVar10;
            iVar22 = -1;
            psVar17 = (short *)(*(int *)(iVar3 + 0x44 + iVar20) + (iVar5 + 1) * 2);
            iVar21 = -iVar4;
          }
          iVar14 = 0;
          iVar12 = 0;
          sVar13 = 0;
          iVar7 = *(int *)(*(int *)(iVar3 + 0x18) + iVar20);
          iVar8 = *(int *)(iVar20 + *(int *)(iVar3 + 0x10));
          if (iVar5 != 0) {
            pbVar11 = (byte *)(iVar10 - iVar21);
            iVar10 = iVar5;
            psVar16 = psVar17;
            iVar9 = 0;
            do {
              psVar17 = psVar16 + iVar22;
              pbVar11 = pbVar11 + iVar21;
              bVar1 = *(byte *)((psVar16[iVar22] + iVar14 + 8 >> 4) + (uint)*pbVar11 + iVar6);
              bVar2 = *(byte *)((uint)bVar1 + iVar7);
              *pcVar18 = *pcVar18 + bVar2;
              pcVar18 = pcVar18 + iVar22;
              iVar15 = (uint)bVar1 - (uint)*(byte *)((uint)bVar2 + iVar8);
              *psVar16 = (short)iVar12 + (short)iVar15 * 3;
              iVar12 = iVar9 + iVar15 * 5;
              sVar13 = (short)iVar12;
              iVar14 = iVar15 * 7;
              iVar10 = iVar10 + -1;
              psVar16 = psVar17;
              iVar9 = iVar15;
            } while (iVar10 != 0);
          }
          iVar19 = iVar19 + 1;
          *psVar17 = sVar13;
          iVar20 = iVar20 + 4;
        } while (iVar19 < iVar4);
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
      *(bool *)(iVar3 + 0x54) = *(char *)(iVar3 + 0x54) == '\0';
    } while (param_4 != 0);
  }
  return;
}

