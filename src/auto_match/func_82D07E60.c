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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CFC050();


/* WARNING: Removing unreachable block (ram,0x82d07e30) */
/* WARNING: Removing unreachable block (ram,0x82d07e38) */
/* WARNING: Removing unreachable block (ram,0x82d07e40) */

void fn_82D07E60(byte *param_1,uint *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  short sVar11;
  undefined2 *puVar12;
  int iVar14;
  short *psVar15;
  short sVar17;
  longlong lVar13;
  undefined2 *puVar16;
  longlong lVar18;
  
  if (param_1[0x14] == 0) {
    iVar8 = *(int *)(param_1 + 0xc);
    uVar4 = *(uint *)(param_1 + 8);
    uVar9 = (ulonglong)uVar4;
    if (*param_1 == 3) {
      iVar7 = fn_82CE5410();
      uVar3 = param_2[1];
      lVar13 = uVar3 + uVar9;
      iVar14 = (int)lVar13;
      if ((int)(param_2[2] & 0x3fffffff) < iVar14) {
        lVar18 = ((ulonglong)param_2[2] & 0x3fffffff) << 1;
        if (iVar14 < (int)lVar18) {
          lVar13 = lVar18;
        }
        fn_82CE6310(*(undefined4 *)(iVar7 + 0x10),param_2,lVar13,2);
      }
      sVar17 = 0;
      param_2[1] = param_2[1] + uVar4;
      if (0 < (int)uVar4) {
        psVar15 = (short *)(uVar3 * 2 + *param_2 + -2);
        do {
          sVar11 = sVar17 + (short)iVar8;
          sVar17 = sVar17 + 1;
          psVar15 = psVar15 + 1;
          *psVar15 = sVar11;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else if (*param_1 == 4) {
      lVar18 = (uVar9 - 2) + (uVar9 - 2 & 0x7fffffff) * 2;
      iVar7 = fn_82CE5410();
      uVar3 = param_2[1];
      lVar13 = (ulonglong)uVar3 + lVar18;
      iVar14 = (int)lVar13;
      if ((int)(param_2[2] & 0x3fffffff) < iVar14) {
        lVar6 = ((ulonglong)param_2[2] & 0x3fffffff) << 1;
        if (iVar14 < (int)lVar6) {
          lVar13 = lVar6;
        }
        fn_82CE6310(*(undefined4 *)(iVar7 + 0x10),param_2,lVar13,2);
      }
      bVar10 = false;
      psVar15 = (short *)(uVar3 * 2 + *param_2);
      param_2[1] = param_2[1] + (int)lVar18;
      if (2 < (int)uVar4) {
        lVar13 = uVar9 - 2;
        iVar8 = iVar8 + 2;
        do {
          sVar17 = (short)iVar8;
          *psVar15 = sVar17 + -2;
          if (bVar10) {
            psVar15[1] = sVar17;
            psVar15[2] = sVar17 + -1;
          }
          else {
            psVar15[1] = sVar17 + -1;
            psVar15[2] = sVar17;
          }
          psVar15 = psVar15 + 3;
          bVar10 = (bool)(bVar10 ^ 1);
          iVar8 = iVar8 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
  }
  else {
    if (param_1[0x14] != 1) {
      return;
    }
    bVar1 = *param_1;
    if (bVar1 < 3) {
      return;
    }
    if (4 < bVar1) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 8);
    uVar9 = (ulonglong)uVar4;
    puVar5 = *(undefined2 **)(param_1 + 0x18);
    if (bVar1 == 3) {
      iVar8 = fn_82CE5410();
      uVar3 = param_2[1];
      lVar13 = uVar3 + uVar9;
      iVar7 = (int)lVar13;
      if ((int)(param_2[2] & 0x3fffffff) < iVar7) {
        lVar18 = ((ulonglong)param_2[2] & 0x3fffffff) << 1;
        if (iVar7 < (int)lVar18) {
          lVar13 = lVar18;
        }
        fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),param_2,lVar13,2);
      }
      param_2[1] = param_2[1] + uVar4;
      fn_82CFC050(((ulonglong)uVar3 & 0x7fffffff) * 2 + (ulonglong)*param_2,puVar5,uVar4 << 1);
    }
    else if (bVar1 == 4) {
      lVar18 = (uVar9 - 2) + (uVar9 - 2 & 0x7fffffff) * 2;
      iVar8 = fn_82CE5410();
      uVar3 = param_2[1];
      lVar13 = (ulonglong)uVar3 + lVar18;
      iVar7 = (int)lVar13;
      if ((int)(param_2[2] & 0x3fffffff) < iVar7) {
        lVar6 = ((ulonglong)param_2[2] & 0x3fffffff) << 1;
        if (iVar7 < (int)lVar6) {
          lVar13 = lVar6;
        }
        fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),param_2,lVar13,2);
      }
      bVar10 = false;
      puVar16 = (undefined2 *)(uVar3 * 2 + *param_2);
      param_2[1] = param_2[1] + (int)lVar18;
      if (2 < (int)uVar4) {
        lVar13 = uVar9 - 2;
        do {
          puVar12 = puVar5 + 1;
          *puVar16 = *puVar5;
          if (bVar10) {
            puVar16[1] = puVar5[2];
            uVar2 = *puVar12;
          }
          else {
            puVar16[1] = *puVar12;
            uVar2 = puVar5[2];
          }
          bVar10 = (bool)(bVar10 ^ 1);
          puVar16[2] = uVar2;
          puVar16 = puVar16 + 3;
          lVar13 = lVar13 + -1;
          puVar5 = puVar12;
        } while (lVar13 != 0);
      }
    }
  }
  return;
}

