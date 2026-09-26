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
extern int fn_82A70960();
extern int fn_82A70E08();
extern int fn_82C2B580();


undefined8 fn_82A70FB8(int param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  
  uVar14 = 0;
  puVar3 = (uint *)0x0;
  uVar11 = 0;
  iVar5 = 0;
  puVar12 = (uint *)0x0;
  iVar13 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    puVar3 = (uint *)fn_82C2B580(0x1004);
    puVar12 = (uint *)0x0;
    iVar5 = 0;
    if (puVar3 != (uint *)0x0) {
      puVar12 = puVar3 + -1;
      do {
        if ((uVar11 & 0x7ffff) == 0x400) {
          uVar6 = 0;
        }
        else {
          uVar6 = fn_82A70960(0xffffffff8208fe44);
        }
        uVar4 = fn_82A70E08(param_1,uVar6);
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 1;
        *puVar12 = uVar4;
      } while ((int)uVar11 < 0x401);
      if (0x13fffff < (int)*puVar3) {
        *puVar3 = puVar3[1];
      }
      iVar5 = fn_82C2B580(0x1004);
      puVar12 = puVar3;
      if (iVar5 != 0) {
        lVar7 = 0;
        lVar15 = 0x400;
        puVar9 = puVar3;
        do {
          lVar10 = (ulonglong)puVar9[1] - (ulonglong)*puVar9;
          if (lVar10 < 1) {
            lVar10 = (ulonglong)*puVar9 - (ulonglong)puVar9[1];
          }
          if ((int)lVar7 < (int)lVar10) {
            lVar7 = lVar10;
          }
          puVar9 = puVar9 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        if ((int)lVar7 < 3) {
          lVar7 = 2;
        }
        uVar4 = 0;
        uVar11 = 0;
        if (1 < (lVar7 - 1U & 0xffffffff)) {
          do {
            uVar4 = uVar11 + 1;
            uVar11 = uVar4;
          } while (1 < (uint)(lVar7 - 1U) >> (uVar4 & 0x3f));
        }
        iVar13 = (int)((param_2 & 0x3fffffff) << 2);
        *(uint *)(iVar13 + *(int *)(param_1 + 0x128)) = 0x1d - uVar4;
        if (*(int *)(iVar13 + *(int *)(param_1 + 0x128)) < 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(iVar13 + *(int *)(param_1 + 0x128));
        }
        iVar2 = iVar5 - (int)puVar3;
        *(undefined4 *)(iVar13 + *(int *)(param_1 + 0x128)) = uVar8;
        lVar7 = 0x400;
        puVar9 = puVar3;
        do {
          iVar1 = (int)(puVar9[1] - *puVar9 <<
                       (*(uint *)(iVar13 + *(int *)(param_1 + 0x128)) & 0x3f)) >> 0xd;
          *(int *)(iVar2 + (int)puVar9) = iVar1;
          uVar11 = puVar9[1];
          if ((int)*puVar9 < (int)uVar11) {
            if ((int)uVar11 <
                (int)((iVar1 * 0x1fff >> (*(uint *)(iVar13 + *(int *)(param_1 + 0x128)) & 0x3f)) +
                     *puVar9)) {
LAB_82a711b8:
              *(undefined4 *)(iVar2 + (int)puVar9) = 0;
            }
          }
          else if ((int)((*(int *)(iVar2 + (int)puVar9) * 0x1fff >>
                         (*(uint *)(iVar13 + *(int *)(param_1 + 0x128)) & 0x3f)) + *puVar9) <
                   (int)uVar11) goto LAB_82a711b8;
          puVar9 = puVar9 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        *(undefined4 *)(iVar5 + 0x1000) = 0;
        iVar13 = iVar5;
        goto LAB_82a711c8;
      }
    }
    uVar14 = 0xffffffff8007000e;
  }
LAB_82a711c8:
  iVar2 = (int)((param_2 & 0x3fffffff) << 2);
  *(uint **)(*(int *)(param_1 + 0x10c) + iVar2) = puVar3;
  *(uint **)(*(int *)(param_1 + 0x104) + iVar2) = puVar12;
  *(int *)(*(int *)(param_1 + 0x110) + iVar2) = iVar5;
  *(int *)(*(int *)(param_1 + 0x108) + iVar2) = iVar13;
  return uVar14;
}

