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
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82B17F70();


void fn_82B19E50(int param_1,int param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  piVar13 = (int *)fn_82ABE250(param_1,0x18,2);
  iVar14 = fn_82B17F70(param_1,param_2,param_3,piVar13);
  if (iVar14 == 0) {
    *piVar13 = *(int *)(param_1 + 0x3e0);
    *(int **)(param_1 + 0x3e0) = piVar13;
    return;
  }
  while (piVar13[2] == 0) {
    iVar14 = fn_82B17F70(param_1,*(undefined4 *)(*(int *)(*(int *)(iVar14 + 4) + 0x34) + 0xc),
                           param_3,piVar13);
    if (iVar14 == 0) {
      return;
    }
  }
  do {
    if (((*(int *)(*(int *)(param_2 + 4) + 8) != 0) ||
        (iVar14 = *(int *)(*(int *)(param_2 + 4) + 0x10), (*(uint *)(iVar14 + 8) & 0x3f80) != 0x680)
        ) || (*(int *)(*(int *)(iVar14 + 0x34) + 0xc) != param_2)) break;
    iVar15 = fn_82B17F70(param_1,iVar14,param_3,piVar13);
    param_2 = iVar14;
  } while (iVar15 != 0);
  if ((piVar13[1] != 1) && ((uint)piVar13[1] < 0x2000)) {
    piVar13[5] = *(int *)(param_4 + 0x40);
    *(int **)(param_4 + 0x40) = piVar13;
    uVar1 = piVar13[1];
    uVar2 = piVar13[3];
    if ((uVar2 >> 0xd & 0x1fff) == uVar1) {
      puVar3 = (uint *)*piVar13;
      uVar20 = 0;
      uVar5 = *puVar3;
      puVar4 = (uint *)puVar3[2];
      uVar12 = uVar5;
      for (puVar7 = puVar4; puVar7 != (uint *)0x0; puVar7 = (uint *)puVar7[2]) {
        uVar6 = *puVar7;
        if (uVar6 != uVar12 + 1) {
          uVar20 = uVar20 + 1;
        }
        uVar12 = uVar6;
      }
      puVar3 = *(uint **)(puVar3[1] + 0x30);
      uVar6 = puVar3[3];
      uVar8 = *(uint *)(uVar6 + 8);
      iVar14 = fn_82ABDD90(param_1,uVar8 >> 7 & 0x7f,uVar8 >> 0x13 & 7,uVar8 >> 0xe & 7);
      uVar8 = *(uint *)(iVar14 + (uVar6 - 8)) & 0x7fff;
      uVar9 = *(uint *)(uVar8 * 0x28 + *(int *)(param_1 + 0xc) + 4) >> 4 & 7;
      if (((uVar9 == 2) || (uVar9 == 7)) && (uVar20 < 2)) {
        uVar9 = *puVar3;
        uVar21 = 0;
        uVar10 = uVar9 >> 0x19 & 7;
        uVar18 = 0;
        if (uVar10 != 0) {
          uVar16 = 0;
          do {
            uVar18 = uVar18 + 1;
            uVar19 = uVar16 & 0x3f;
            uVar16 = uVar16 + 2;
            uVar21 = 1 << ((uVar9 >> 5 & 0xff) >> uVar19 & 3) | uVar21;
          } while (uVar18 < uVar10);
        }
        uVar9 = *(uint *)(uVar6 + 8);
        iVar14 = fn_82ABDD90(param_1,uVar9 >> 7 & 0x7f,uVar9 >> 0x13 & 7,uVar9 >> 0xe & 7);
        uVar6 = *(uint *)(iVar14 + (uVar6 - 8));
        for (; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[2]) {
          uVar16 = 0;
          uVar19 = 0;
          uVar9 = **(uint **)(puVar4[1] + 0x30);
          uVar10 = (*(uint **)(puVar4[1] + 0x30))[3];
          uVar18 = uVar9 >> 0x19 & 7;
          if (uVar18 != 0) {
            uVar17 = 0;
            do {
              uVar19 = uVar19 + 1;
              uVar11 = uVar17 & 0x3f;
              uVar17 = uVar17 + 2;
              uVar16 = 1 << ((uVar9 >> 5 & 0xff) >> uVar11 & 3) | uVar16;
            } while (uVar19 < uVar18);
          }
          if (uVar16 != uVar21) {
            return;
          }
          uVar9 = *(uint *)(uVar10 + 8);
          iVar14 = fn_82ABDD90(param_1,uVar9 >> 7 & 0x7f,uVar9 >> 0x13 & 7,uVar9 >> 0xe & 7);
          if ((*(uint *)(iVar14 + (uVar10 - 8)) & 0x7fff) != uVar8) {
            return;
          }
          uVar9 = *(uint *)(uVar10 + 8);
          iVar14 = fn_82ABDD90(param_1,uVar9 >> 7 & 0x7f,uVar9 >> 0x13 & 7,uVar9 >> 0xe & 7);
          if ((*(uint *)(iVar14 + (uVar10 - 8)) >> 0xf & 0x3fff) !=
              (*puVar4 - uVar5) + (uVar6 >> 0xf & 0x3fff)) {
            return;
          }
        }
        if (*(double *)(param_4 + 8) < (double)uVar5) {
          uVar20 = uVar20 + 1;
        }
        if ((uVar12 - uVar5) + 1 < (*(uint *)(param_4 + 4) & 0x7fff)) {
          uVar20 = uVar20 + 1;
        }
        piVar13[3] = uVar2 | 0x4000000;
        piVar13[4] = piVar13[4] & 0xffffe000U | uVar20 & 0x1fff;
        *(uint *)(param_4 + 0x4c) = (uVar1 - uVar20) + *(int *)(param_4 + 0x4c);
      }
    }
  }
  return;
}

