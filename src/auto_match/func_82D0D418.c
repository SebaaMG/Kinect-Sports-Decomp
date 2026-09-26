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
extern unsigned int *auStack_280;
extern unsigned int *auStack_298;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDCF0();
extern int fn_82CEE578();
extern int fn_82D11050();
extern int fn_82F68B4C();
extern unsigned int iStack_2a4;
extern unsigned int iStack_2a8;
extern unsigned int iStack_2b0;
extern unsigned int iStack_2c4;
extern unsigned int iStack_2c8;
extern unsigned int *lbl_8323B464;
extern unsigned int uRam8323b6a0;
extern unsigned int uRam8323b6a4;
extern unsigned int uRam8323b6a8;
extern unsigned int uStack_29c;
extern unsigned int uStack_2a0;
extern unsigned int uStack_2ac;
extern unsigned int uStack_2b8;
extern unsigned int uStack_2c0;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82D0D418(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  undefined8 in_r0;
  int iVar7;
  undefined8 uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iStack_2c8;
  int iStack_2c4;
  uint uStack_2c0;
  undefined8 uStack_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [640];
  
  uVar13 = (ulonglong)(param_2 == 0);
  iVar7 = fn_82F68B4C(*(undefined4 *)(param_1 + 8));
  iVar18 = 0;
  lVar19 = 0;
  if (*(char *)(iVar7 + 0x1b5) == '\0') {
    fn_82CEE578(auStack_298,auStack_280,0x200);
    uVar1 = *(undefined4 *)(iVar7 + 0x1b0);
    uVar6 = fn_82CEDB38(auStack_298,0xffffffff82134540);
    uVar6 = fn_82CEDCF0(uVar6,uVar1);
    fn_82CEDB38(uVar6,0xffffffff821c24f0);
    iVar7 = (**(code **)(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x79f9d886,auStack_280,0xffffffff8213450c,0x146);
    if (iVar7 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_298);
  }
  piVar3 = (int *)param_3;
  piVar3[1] = 0;
  iVar9 = *(int *)(iVar7 + 0x58);
  iVar8 = fn_82CE5410();
  if ((int)(piVar3[2] & 0x3fffffffU) < iVar9) {
    iVar20 = (piVar3[2] & 0x3fffffffU) << 1;
    if (iVar20 <= iVar9) {
      iVar20 = iVar9;
    }
    fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),param_3,iVar20,4);
  }
  piVar5 = (int *)param_4;
  piVar5[1] = 0;
  lVar22 = (ulonglong)*(uint *)(iVar7 + 0x28) +
           ((ulonglong)*(uint *)(iVar7 + 0x28) & 0x7fffffff) * 2;
  iVar9 = fn_82CE5410();
  iVar8 = (int)lVar22;
  if ((int)(piVar5[2] & 0x3fffffffU) < iVar8) {
    lVar16 = ((ulonglong)(uint)piVar5[2] & 0x3fffffff) << 1;
    if ((int)lVar16 <= iVar8) {
      lVar16 = lVar22;
    }
    fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),param_4,lVar16,4);
  }
  if (*(int *)(iVar7 + 0x1a8) == 3) {
    iStack_2c8 = 0;
    iStack_2c4 = 0;
    uStack_2c0 = 0x80000000;
    iVar18 = *(int *)(iVar7 + 0x40);
    iVar9 = fn_82CE5410();
    if ((int)(uStack_2c0 & 0x3fffffff) < iVar18) {
      iVar8 = (uStack_2c0 & 0x3fffffff) << 1;
      if (iVar8 <= iVar18) {
        iVar8 = iVar18;
      }
      fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),&iStack_2c8,iVar8,4);
    }
    for (puVar2 = *(undefined4 **)(iVar7 + 0x3c); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      *(undefined4 **)(iStack_2c4 * 4 + iStack_2c8) = puVar2;
      iStack_2c4 = iStack_2c4 + 1;
    }
    if (1 < iStack_2c4) {
      fn_82D11050(iStack_2c8,0,iStack_2c4 + -1,0);
    }
    if (0 < iStack_2c4) {
      iVar18 = 0;
      iVar7 = iStack_2c4;
      uVar14 = uRam8323b6a8;
      do {
        iVar9 = *(int *)(iVar18 + iStack_2c8);
        iVar8 = (int)lVar19;
        if (*(int *)(iVar9 + 0x38) == iVar8) {
          if ((uVar14 & 1) == 0) {
            uRam8323b6a8 = uVar14 | 1;
            uRam8323b6a0 = 0;
            uRam8323b6a4 = 0;
            uVar14 = uRam8323b6a8;
          }
          uStack_2b8 = CONCAT44(uRam8323b6a0,uRam8323b6a4);
          iVar20 = 0;
          puVar17 = (uint *)(iVar9 + 0x14);
          do {
            if (*(int *)((*puVar17 & 0xfffffffc) + 0x38) != iVar8) {
              uStack_2b8 = CONCAT44(iVar9,iVar20);
              iStack_2a8 = iVar9;
              iStack_2a4 = iVar20;
              break;
            }
            iVar20 = iVar20 + 1;
            puVar17 = puVar17 + 1;
          } while (iVar20 < 3);
          uVar15 = uStack_2b8 >> 0x20;
          if (uVar15 != 0) {
            uVar21 = uStack_2b8 & 0xffffffff;
            iVar20 = 0;
            lVar22 = (uVar21 + 2 & 0x3fffffff) * 4 + uVar15;
            iVar9 = *(int *)lVar22;
            do {
              iVar20 = iVar20 + 1;
              if ((uVar13 & 0xff) == 0) {
                iVar10 = *(int *)lVar22;
                iVar11 = fn_82CE5410();
                if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar11 + 0x10),param_4,4);
                }
                *(undefined4 *)(piVar5[1] * 4 + *piVar5) = *(undefined4 *)(iVar10 + 0x34);
                piVar5[1] = piVar5[1] + 1;
              }
              else {
                uVar14 = *(uint *)(*(int *)lVar22 + 0x1c);
                iVar10 = fn_82CE5410();
                if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar10 + 0x10),param_4,4);
                }
                *(uint *)(piVar5[1] * 4 + *piVar5) = uVar14 & 0xc0ffffff;
                piVar5[1] = piVar5[1] + 1;
              }
              iStack_2b0 = (int)uVar15;
              uVar15 = -(ulonglong)(uVar21 != 2) & uVar21 + 1;
              uStack_2ac = (undefined4)uVar15;
              uStack_2b8 = CONCAT44(iStack_2b0,uStack_2ac);
              uVar14 = *(uint *)((int)((uVar15 + 5 & 0xffffffff) << 2) + iStack_2b0);
              uVar12 = (ulonglong)uVar14;
              uVar14 = uVar14 & 0xfffffffc;
              iVar10 = *(int *)(uVar14 + 0x38);
              while( true ) {
                if (iVar10 != iVar8) break;
                uVar4 = *(uint *)(((((U64)(uStack_2b8) >> 32) & 0xFFFFFFFF) + 5) * 4 + (((U64)(uStack_2b8) >> 0) & 0xFFFFFFFF));
                uStack_2a0 = uVar4 & 0xfffffffc;
                lVar22 = ((ulonglong)uVar4 & 3) - 2;
                uVar12 = -lVar22;
                uStack_29c = -(uint)(lVar22 != 0) & (int)((ulonglong)uVar4 & 3) + 1U;
                uStack_2b8 = CONCAT44(uVar4,uStack_29c) & 0xfffffffcffffffff;
                iVar10 = *(int *)((*(uint *)((uStack_29c + 5) * 4 + uStack_2a0) & 0xfffffffc) + 0x38
                                 );
              }
              uVar21 = uStack_2b8 & 0xffffffff;
              uVar15 = (ulonglong)(((U64)(uStack_2b8) >> 0) & 0xFFFFFFFF);
              lVar22 = (uVar21 + 2 & 0x3fffffff) * 4 + uVar15;
            } while (*(int *)lVar22 != iVar9);
            iVar9 = fn_82CE5410(uVar14,uVar12);
            if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_3,4);
            }
            lVar19 = lVar19 + 1;
            *(int *)(piVar3[1] * 4 + *piVar3) = iVar20;
            piVar3[1] = piVar3[1] + 1;
            uVar14 = uRam8323b6a8;
          }
        }
        iVar7 = iVar7 + -1;
        iVar18 = iVar18 + 4;
      } while (iVar7 != 0);
    }
    iVar7 = fn_82CE5410();
    iStack_2c4 = 0;
    if ((uStack_2c0 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                (*(int **)(iVar7 + 0x10),iStack_2c8,uStack_2c0 & 0x3fffffff,4);
    }
  }
  else if (*(int *)(iVar7 + 0x1a8) == 2) {
    uVar1 = *(undefined4 *)(iVar7 + 0x28);
    iVar9 = fn_82CE5410();
    if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_3,4);
    }
    *(undefined4 *)(piVar3[1] * 4 + *piVar3) = uVar1;
    piVar3[1] = piVar3[1] + 1;
    if ((uVar13 & 0xff) == 0) {
      if (0 < *(int *)(iVar7 + 0x28)) {
        do {
          iVar9 = fn_82CE5410();
          if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_4,4);
          }
          *(int *)(piVar5[1] * 4 + *piVar5) = iVar18;
          iVar18 = iVar18 + 1;
          piVar5[1] = piVar5[1] + 1;
        } while (iVar18 < *(int *)(iVar7 + 0x28));
      }
    }
    else {
      piVar3 = *(int **)(iVar7 + 0x24);
      if (piVar3 != (int *)0x0) {
        do {
          uVar14 = piVar3[7];
          iVar7 = fn_82CE5410();
          if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),param_4,4);
          }
          *(uint *)(piVar5[1] * 4 + *piVar5) = uVar14 & 0xc0ffffff;
          piVar5[1] = piVar5[1] + 1;
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)0x0);
        return 1;
      }
    }
    lVar19 = 1;
  }
  return lVar19;
}

