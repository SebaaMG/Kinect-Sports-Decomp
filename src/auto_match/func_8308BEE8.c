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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_8308A4D8();
extern int fn_8308AAA8();
extern int fn_8308B0C0();
extern int fn_8308B338();


void fn_8308BEE8(int param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint *puVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  int *piVar15;
  ulonglong uVar16;
  undefined2 uVar17;
  uint *puVar18;
  int *piVar19;
  ulonglong uVar20;
  int *piVar21;
  
  uVar1 = *param_2;
  uVar8 = *(uint *)(param_1 + 0xa4);
  uVar16 = (ulonglong)uVar8;
  piVar15 = (int *)(param_1 + 0xa0);
  puVar14 = (ushort *)(uVar1 * 0x10 + *(int *)(param_1 + 0xa0));
  piVar4 = (int *)fn_82CE5410();
  puVar2 = (uint *)*piVar4;
  *piVar4 = ((uVar8 >> 3 & 0x1ffffffc) + 0x9f & 0xffffff80) + (int)puVar2;
  piVar19 = (int *)(param_1 + 0xac);
  fn_8308AAA8(param_1,uVar16,*(undefined2 *)((uint)puVar14[4] * 4 + *(int *)(param_1 + 0xac)),
                  puVar14,uVar1 & 0xffff,puVar2);
  iVar6 = *(int *)(param_1 + 0xa4);
  piVar4 = *(int **)(param_1 + 0xa0);
  for (puVar18 = puVar2; puVar18 < puVar2 + (iVar6 >> 5) + 1; puVar18 = puVar18 + 1) {
    uVar20 = (ulonglong)*puVar18;
    piVar21 = piVar4;
    while (uVar20 != 0) {
      if ((uVar20 & 0xff) == 0) {
        piVar21 = piVar21 + 0x20;
        uVar20 = uVar20 >> 8;
      }
      else {
        if (((uVar20 & 1) != 0) &&
           (((*(int *)(puVar14 + 2) - *piVar21 | piVar21[1] - *(int *)puVar14) & 0x80008000U) == 0))
        {
          uVar13 = piVar21[3];
          if ((uVar13 & 1) == 0) {
            iVar5 = fn_82CE5410();
            if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_3,8);
            }
            puVar11 = (undefined8 *)(param_3[1] * 8 + *param_3);
            if (puVar11 != (undefined8 *)0x0) {
              *puVar11 = CONCAT44(param_2,uVar13);
            }
            param_3[1] = param_3[1] + 1;
          }
          else {
            iVar12 = (uVar13 & 0xfffffffe) + *(int *)(param_1 + 0xd8);
            iVar5 = 0;
            if (0 < *(int *)(iVar12 + 8)) {
              puVar9 = *(ushort **)(iVar12 + 4);
              do {
                if ((uint)*puVar9 == (uVar1 & 0xffff)) goto LAB_8308c09c;
                iVar5 = iVar5 + 1;
                puVar9 = puVar9 + 1;
              } while (iVar5 < *(int *)(iVar12 + 8));
            }
            iVar5 = -1;
LAB_8308c09c:
            iVar10 = *(int *)(iVar12 + 8) + -1;
            *(int *)(iVar12 + 8) = iVar10;
            if (iVar10 != iVar5) {
              *(undefined2 *)(iVar5 * 2 + *(int *)(iVar12 + 4)) =
                   *(undefined2 *)(iVar10 * 2 + *(int *)(iVar12 + 4));
            }
          }
        }
        piVar21 = piVar21 + 4;
        uVar20 = uVar20 >> 1;
      }
    }
    piVar4 = piVar4 + 0x80;
  }
  piVar4 = (int *)fn_82CE5410();
  *piVar4 = (int)puVar2;
  iVar6 = *piVar15;
  fn_8308B338(piVar19,puVar14[4],puVar14[5]);
  piVar21 = (int *)(param_1 + 0xb8);
  fn_8308B338(piVar21,*puVar14,puVar14[2]);
  piVar4 = (int *)(param_1 + 0xc4);
  fn_8308B338(piVar4,puVar14[1],puVar14[3]);
  fn_8308A4D8(param_1,iVar6,uVar16,puVar14);
  if ((ulonglong)uVar1 < (uVar16 - 1 & 0xffffffff)) {
    iVar6 = uVar8 * 0x10 + *piVar15;
    *(undefined4 *)puVar14 = *(undefined4 *)(iVar6 + -0x10);
    *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(iVar6 + -0xc);
    *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(iVar6 + -8);
    *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(iVar6 + -4);
    uVar17 = (undefined2)uVar1;
    *(undefined2 *)((uint)puVar14[4] * 4 + *piVar19 + 2) = uVar17;
    *(undefined2 *)((uint)puVar14[5] * 4 + *piVar19 + 2) = uVar17;
    if ((*(uint *)(puVar14 + 6) & 1) == 0) {
      *(undefined2 *)((uint)*puVar14 * 4 + *piVar21 + 2) = uVar17;
      *(undefined2 *)((uint)puVar14[2] * 4 + *piVar21 + 2) = uVar17;
      *(undefined2 *)((uint)puVar14[1] * 4 + *piVar4 + 2) = uVar17;
      *(undefined2 *)((uint)puVar14[3] * 4 + *piVar4 + 2) = uVar17;
      **(uint **)(puVar14 + 6) = uVar1;
    }
    else {
      *(undefined2 *)((*(uint *)(puVar14 + 6) & 0xfffffffe) + *(int *)(param_1 + 0xd8)) = uVar17;
    }
    if ((*(int *)(param_1 + 0xd0) != 0) && ((*(uint *)(puVar14 + 6) & 1) == 0)) {
      uVar8 = 0x10 - *(int *)(param_1 + 0xd4);
      uVar3 = *(ushort *)((uint)puVar14[4] * 4 + *piVar19) >> (uVar8 & 0x3f);
      uVar13 = (uint)uVar3;
      if ((uVar13 != 0) &&
         (puVar14[4] <
          *(ushort *)
           ((uint)*(ushort *)(*(int *)(param_1 + 0xd8) + (uint)uVar3 * 0x10 + -0x10) * 0x10 +
            *piVar15 + 10))) {
        uVar13 = uVar13 - 1;
      }
      iVar6 = (*(ushort *)((uint)puVar14[5] * 4 + *piVar19) >> (uVar8 & 0x3f)) - 1;
      if ((int)uVar13 <= iVar6) {
        iVar5 = (iVar6 - uVar13) + 1;
        iVar6 = uVar13 << 4;
        do {
          iVar10 = 0;
          iVar12 = iVar6 + *(int *)(param_1 + 0xd8);
          if (0 < *(int *)(iVar12 + 8)) {
            puVar14 = *(ushort **)(iVar12 + 4);
            do {
              if ((ulonglong)*puVar14 == (uVar16 + 0xffff & 0xffff)) goto LAB_8308c304;
              iVar10 = iVar10 + 1;
              puVar14 = puVar14 + 1;
            } while (iVar10 < *(int *)(iVar12 + 8));
          }
          iVar10 = -1;
LAB_8308c304:
          iVar6 = iVar6 + 0x10;
          *(undefined2 *)(iVar10 * 2 + *(int *)(iVar12 + 4)) = uVar17;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    fn_8308B0C0(param_1,(ulonglong)uVar1);
  }
  iVar6 = fn_82CE5410();
  iVar5 = (int)(uVar16 - 1);
  if ((int)(*(uint *)(param_1 + 0xa8) & 0x3fffffff) < iVar5) {
    lVar7 = ((ulonglong)*(uint *)(param_1 + 0xa8) & 0x3fffffff) << 1;
    if ((int)lVar7 <= iVar5) {
      lVar7 = uVar16 - 1;
    }
    fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),piVar15,lVar7,0x10);
  }
  *(int *)(param_1 + 0xa4) = iVar5;
  return;
}

