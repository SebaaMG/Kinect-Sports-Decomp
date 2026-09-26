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
extern int fn_827CC1E8();
extern unsigned int iStack00000014;
extern unsigned int iStack_d0;
extern unsigned int uStack_c0;


void fn_827CC368(int param_1,int param_2,int *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar16;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 *puVar26;
  short sVar28;
  int iVar27;
  short sVar30;
  int iVar29;
  short sVar32;
  int iVar31;
  int iVar33;
  byte *pbVar34;
  short *psVar35;
  short *psVar36;
  int iStack00000014;
  int iStack_d0;
  uint uStack_c0;
  
  piVar5 = *(int **)(param_1 + 0x74);
  iVar6 = *(int *)(param_1 + 0x1a8);
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar8 = *(int *)(param_1 + 0x120);
  iVar9 = *piVar5;
  iVar10 = piVar5[1];
  iVar11 = *(int *)(iVar6 + 0x18);
  iVar12 = *(int *)(iVar6 + 0x28);
  iVar13 = piVar5[2];
  if (0 < (int)param_4) {
    param_2 = param_2 - (int)param_3;
    iStack00000014 = param_1;
    uStack_c0 = param_4;
    do {
      pbVar34 = *(byte **)(param_2 + (int)param_3);
      iVar33 = *param_3;
      if (*(char *)(iVar6 + 0x24) == '\0') {
        psVar35 = *(short **)(iVar6 + 0x20);
        iVar22 = 3;
        iStack_d0 = 1;
        iVar14 = 1;
        *(undefined1 *)(iVar6 + 0x24) = 1;
      }
      else {
        iVar14 = -1;
        pbVar34 = pbVar34 + iVar7 * 3 + -3;
        *(undefined1 *)(iVar6 + 0x24) = 0;
        iVar33 = iVar33 + iVar7 + -1;
        iStack_d0 = -1;
        iVar22 = -3;
        psVar35 = (short *)((iVar7 + 1) * 6 + *(int *)(iVar6 + 0x20));
      }
      iVar17 = 0;
      iVar15 = 0;
      iVar18 = 0;
      iVar27 = 0;
      sVar28 = 0;
      iVar29 = 0;
      sVar30 = 0;
      iVar31 = 0;
      sVar32 = 0;
      if (iVar7 != 0) {
        puVar26 = (undefined1 *)(iVar33 - iVar14);
        iVar33 = iVar7;
        psVar36 = psVar35;
        iVar25 = 0;
        iVar24 = 0;
        iVar23 = 0;
        do {
          psVar35 = psVar36 + iVar22;
          bVar1 = *(byte *)(*(int *)((psVar36[iVar22 + 1] + iVar15 + 8 >> 4) * 4 + iVar12) +
                            (uint)pbVar34[1] + iVar8);
          bVar2 = *(byte *)(*(int *)((psVar36[iVar22 + 2] + iVar17 + 8 >> 4) * 4 + iVar12) +
                            (uint)pbVar34[2] + iVar8);
          bVar3 = *(byte *)(*(int *)((psVar36[iVar22] + iVar18 + 8 >> 4) * 4 + iVar12) +
                            (uint)*pbVar34 + iVar8);
          iVar15 = (((int)(uint)bVar1 >> 2) * 0x20 + ((int)(uint)bVar2 >> 3)) * 2;
          iVar18 = *(int *)(((int)(uint)bVar3 >> 3) * 4 + iVar11);
          if (*(short *)(iVar15 + iVar18) == 0) {
            fn_827CC1E8(iStack00000014);
            iVar14 = iStack_d0;
          }
          iVar33 = iVar33 + -1;
          pbVar34 = pbVar34 + iVar22;
          iVar18 = *(ushort *)(iVar15 + iVar18) - 1;
          puVar26 = puVar26 + iVar14;
          *puVar26 = (char)iVar18;
          bVar4 = *(byte *)(iVar18 + iVar13);
          iVar19 = (uint)bVar3 - (uint)*(byte *)(iVar18 + iVar9);
          iVar20 = (uint)bVar1 - (uint)*(byte *)(iVar18 + iVar10);
          sVar28 = (short)iVar31;
          iVar31 = iVar25 + iVar19 * 5;
          sVar32 = (short)iVar31;
          *psVar36 = sVar28 + (short)iVar19 * 3;
          iVar21 = (uint)bVar2 - (uint)bVar4;
          sVar28 = (short)iVar29;
          iVar29 = iVar24 + iVar20 * 5;
          sVar30 = (short)iVar29;
          psVar36[1] = sVar28 + (short)iVar20 * 3;
          iVar18 = iVar19 * 7;
          psVar36[2] = (short)iVar27 + (short)iVar21 * 3;
          iVar15 = iVar20 * 7;
          iVar27 = iVar23 + iVar21 * 5;
          sVar28 = (short)iVar27;
          iVar17 = iVar21 * 7;
          psVar36 = psVar35;
          iVar25 = iVar19;
          iVar24 = iVar20;
          iVar23 = iVar21;
        } while (iVar33 != 0);
      }
      uVar16 = (ulonglong)uStack_c0;
      param_3 = param_3 + 1;
      *psVar35 = sVar32;
      psVar35[1] = sVar30;
      psVar35[2] = sVar28;
      uStack_c0 = (uint)(uVar16 - 1);
    } while (uVar16 - 1 != 0);
  }
  return;
}

