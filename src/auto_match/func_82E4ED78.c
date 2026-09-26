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
extern int fn_82EDDA58();
extern int fn_82EDF558();


void fn_82E4ED78(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  longlong lVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  
  iVar12 = *(int *)(param_7 + 0x3924);
  iVar1 = *(int *)(param_7 + 0x38bc);
  uVar10 = iVar12 * param_5;
  iVar20 = ((int)uVar10 >> 2) + (uint)((int)uVar10 < 0 && (uVar10 & 3) != 0);
  param_1 = iVar1 * param_5 + *(int *)(param_7 + 0x38c4) + param_1;
  param_2 = *(int *)(param_7 + 0x38a4) + uVar10 + param_2;
  param_3 = *(int *)(param_7 + 0x38a8) + iVar20 + param_3;
  param_4 = *(int *)(param_7 + 0x38ac) + iVar20 + param_4;
  if (*(int *)(param_7 + 0x3960) == 0) {
    lVar14 = (longlong)(param_6 - param_5 >> 2);
    if (0 < lVar14) {
      iVar20 = *(int *)(param_7 + 0x388c) >> 1;
      do {
        iVar2 = *(int *)(param_7 + 0x38bc);
        iVar7 = 0;
        iVar3 = *(int *)(param_7 + 0x3924);
        iVar17 = iVar2 + iVar2 + param_1;
        iVar5 = iVar3 + iVar3 + param_2;
        if (0 < iVar20) {
          puVar18 = (undefined1 *)(*(int *)(param_7 + 0x3958) + param_4 + -1);
          puVar19 = (undefined1 *)(*(int *)(param_7 + 0x3958) + param_3 + -1);
          pbVar16 = (byte *)(iVar3 + iVar5 + -1);
          pbVar13 = (byte *)(iVar5 + -1);
          pbVar4 = (byte *)(iVar3 + param_2 + -1);
          pbVar15 = (byte *)(param_1 + -3);
          pbVar6 = (byte *)(param_2 + -1);
          pbVar9 = (byte *)(iVar2 + iVar17 + -3);
          pbVar11 = (byte *)(iVar17 + -3);
          pbVar8 = (byte *)(iVar2 + param_1 + -3);
          do {
            pbVar6[1] = pbVar15[3];
            pbVar4[1] = pbVar8[3];
            pbVar13[1] = pbVar11[3];
            pbVar16[1] = pbVar9[3];
            pbVar6 = pbVar6 + 2;
            *pbVar6 = pbVar15[5];
            pbVar4 = pbVar4 + 2;
            *pbVar4 = pbVar8[5];
            pbVar13 = pbVar13 + 2;
            *pbVar13 = pbVar11[5];
            pbVar16 = pbVar16 + 2;
            *pbVar16 = pbVar9[5];
            *(char *)(iVar7 + param_3) =
                 (char)((int)((uint)pbVar15[6] + (uint)pbVar15[6] * 2 + (uint)pbVar11[6] + 2) >> 2);
            puVar19 = puVar19 + 1;
            *puVar19 = (char)((int)((uint)pbVar9[6] + (uint)pbVar9[6] * 2 + (uint)pbVar8[6] + 2) >>
                             2);
            pbVar11 = pbVar11 + 4;
            pbVar15 = pbVar15 + 4;
            *(char *)(iVar7 + param_4) =
                 (char)((int)((uint)*pbVar15 + (uint)*pbVar15 * 2 + (uint)*pbVar11 + 2) >> 2);
            iVar7 = iVar7 + 1;
            pbVar8 = pbVar8 + 4;
            pbVar9 = pbVar9 + 4;
            puVar18 = puVar18 + 1;
            *puVar18 = (char)((int)((uint)*pbVar9 + (uint)*pbVar9 * 2 + (uint)*pbVar8 + 2) >> 2);
            iVar20 = *(int *)(param_7 + 0x388c) >> 1;
          } while (iVar7 < iVar20);
        }
        param_1 = iVar1 * 4 + param_1;
        param_2 = iVar12 * 4 + param_2;
        param_3 = *(int *)(param_7 + 0x3924) + param_3;
        param_4 = *(int *)(param_7 + 0x3924) + param_4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    if ((param_6 - param_5 & 3U) == 2) {
      iVar12 = 0;
      if (0 < (int)(*(uint *)(param_7 + 0x388c) & 0xfffffffe)) {
        pbVar4 = (byte *)(*(int *)(param_7 + 0x3924) + param_2 + -1);
        pbVar16 = (byte *)(param_1 + -3);
        pbVar6 = (byte *)(param_2 + -1);
        pbVar13 = (byte *)(*(int *)(param_7 + 0x38bc) + param_1 + -3);
        do {
          pbVar6[1] = pbVar16[3];
          pbVar4[1] = pbVar13[3];
          pbVar6 = pbVar6 + 2;
          *pbVar6 = pbVar16[5];
          pbVar4 = pbVar4 + 2;
          *pbVar4 = pbVar13[5];
          *(char *)(iVar12 + param_3) = (char)((int)((uint)pbVar16[6] + (uint)pbVar13[6] + 1) >> 1);
          pbVar13 = pbVar13 + 4;
          pbVar16 = pbVar16 + 4;
          *(char *)(iVar12 + param_4) = (char)((int)((uint)*pbVar16 + (uint)*pbVar13 + 1) >> 1);
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(param_7 + 0x388c) >> 1);
      }
    }
  }
  else {
    fn_82EDF558(param_1);
    fn_82EDDA58(param_1 + 3,param_1 + 1,param_3,param_4,*(undefined4 *)(param_7 + 0x38bc),
                    *(undefined4 *)(param_7 + 0x3958),4,1);
    iVar12 = *(int *)(param_7 + 0x3958);
    param_1 = *(int *)(param_7 + 0x38bc) + param_1;
    fn_82EDDA58(param_1 + 3,param_1 + 1,iVar12 + param_3,iVar12 + param_4,
                    *(int *)(param_7 + 0x38bc),iVar12,4,1);
  }
  return;
}

