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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE6310();


int fn_82D43AA0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar12;
  int *piVar13;
  longlong lVar11;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  puVar12 = (undefined4 *)(param_2 + -4);
  puVar4 = (undefined4 *)(param_1 + -4);
  lVar14 = 5;
  do {
    puVar12 = puVar12 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar12;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar6 = (uint *)(param_1 + 0x14);
  iVar3 = fn_82CE5410();
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_2 + 0x18);
  uVar7 = (ulonglong)uVar2;
  uVar8 = (ulonglong)uVar1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar8 = uVar7;
  }
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x3fffffff) < (int)uVar2) {
    uVar9 = ((ulonglong)*(uint *)(param_1 + 0x1c) & 0x3fffffff) << 1;
    if ((int)uVar9 <= (int)uVar2) {
      uVar9 = uVar7;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),puVar6,uVar9,4);
  }
  lVar14 = uVar1 - uVar7;
  if (0 < lVar14) {
    puVar12 = (undefined4 *)(uVar2 * 4 + *puVar6 + -4);
    do {
      if (puVar12[1] != 0) {
        fn_82CE4118();
      }
      lVar14 = lVar14 + -1;
      puVar12 = puVar12 + 1;
      *puVar12 = 0;
    } while (lVar14 != 0);
  }
  piVar13 = (int *)*puVar6;
  if (0 < (int)uVar8) {
    iVar3 = *(int *)(param_2 + 0x14) - (int)piVar13;
    uVar9 = uVar8;
    do {
      if (*(int *)(iVar3 + (int)piVar13) != 0) {
        fn_82CE4040();
      }
      if (*piVar13 != 0) {
        fn_82CE4118();
      }
      uVar9 = uVar9 - 1;
      *piVar13 = *(int *)(iVar3 + (int)piVar13);
      piVar13 = piVar13 + 1;
    } while (uVar9 != 0);
  }
  lVar5 = (uVar8 & 0x3fffffff) * 4;
  lVar14 = uVar7 - uVar8;
  lVar11 = (ulonglong)*(uint *)(param_2 + 0x14) + lVar5;
  if (0 < lVar14) {
    lVar5 = ((ulonglong)*puVar6 + lVar5) - lVar11;
    do {
      lVar10 = lVar5 + lVar11;
      if (lVar10 != 0) {
        if (*(int *)lVar11 != 0) {
          fn_82CE4040();
        }
        *(int *)lVar10 = *(int *)lVar11;
      }
      lVar14 = lVar14 + -1;
      lVar11 = lVar11 + 4;
    } while (lVar14 != 0);
  }
  *(uint *)(param_1 + 0x18) = uVar2;
  puVar12 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uVar15 = puVar12[1];
  uVar16 = puVar12[2];
  uVar17 = puVar12[3];
  puVar4 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  *puVar4 = *puVar12;
  puVar4[1] = uVar15;
  puVar4[2] = uVar16;
  puVar4[3] = uVar17;
  puVar12 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
  uVar15 = puVar12[1];
  uVar16 = puVar12[2];
  uVar17 = puVar12[3];
  puVar4 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
  *puVar4 = *puVar12;
  puVar4[1] = uVar15;
  puVar4[2] = uVar16;
  puVar4[3] = uVar17;
  return param_1;
}

