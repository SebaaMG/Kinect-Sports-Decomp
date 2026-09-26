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

longlong fn_82D15D48(int param_1,int *param_2,int *param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined8 in_r0;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  longlong lVar16;
  int iVar17;
  char cVar18;
  ulonglong uVar19;
  longlong lVar20;
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
  
  iVar7 = 0;
  lVar16 = 0;
  if (*(char *)(param_1 + 0x1b5) == '\0') {
    fn_82CEE578(auStack_298,auStack_280,0x200);
    uVar1 = *(undefined4 *)(param_1 + 0x1b0);
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
  param_2[1] = 0;
  iVar9 = *(int *)(param_1 + 0x58);
  iVar8 = fn_82CE5410();
  if ((int)(param_2[2] & 0x3fffffffU) < iVar9) {
    iVar17 = (param_2[2] & 0x3fffffffU) << 1;
    if (iVar17 <= iVar9) {
      iVar17 = iVar9;
    }
    fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),param_2,iVar17,1);
  }
  param_3[1] = 0;
  lVar20 = (ulonglong)*(uint *)(param_1 + 0x28) +
           ((ulonglong)*(uint *)(param_1 + 0x28) & 0x7fffffff) * 2;
  iVar9 = fn_82CE5410();
  iVar8 = (int)lVar20;
  if ((int)(param_3[2] & 0x3fffffffU) < iVar8) {
    lVar14 = ((ulonglong)(uint)param_3[2] & 0x3fffffff) << 1;
    if ((int)lVar14 <= iVar8) {
      lVar14 = lVar20;
    }
    fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),param_3,lVar14,2);
  }
  if (*(int *)(param_1 + 0x1a8) == 3) {
    iStack_2c8 = 0;
    iStack_2c4 = 0;
    uStack_2c0 = 0x80000000;
    iVar7 = *(int *)(param_1 + 0x40);
    iVar9 = fn_82CE5410();
    if ((int)(uStack_2c0 & 0x3fffffff) < iVar7) {
      iVar8 = (uStack_2c0 & 0x3fffffff) << 1;
      if (iVar8 <= iVar7) {
        iVar8 = iVar7;
      }
      fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),&iStack_2c8,iVar8,4);
    }
    for (puVar2 = *(undefined4 **)(param_1 + 0x3c); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      *(undefined4 **)(iStack_2c4 * 4 + iStack_2c8) = puVar2;
      iStack_2c4 = iStack_2c4 + 1;
    }
    if (1 < iStack_2c4) {
      fn_82D11050(iStack_2c8,0,iStack_2c4 + -1,0);
    }
    if (0 < iStack_2c4) {
      iVar9 = 0;
      iVar7 = iStack_2c4;
      uVar12 = uRam8323b6a8;
      do {
        iVar8 = *(int *)(iVar9 + iStack_2c8);
        iVar17 = (int)lVar16;
        if (*(int *)(iVar8 + 0x38) == iVar17) {
          if ((uVar12 & 1) == 0) {
            uRam8323b6a8 = uVar12 | 1;
            uRam8323b6a0 = 0;
            uRam8323b6a4 = 0;
            uVar12 = uRam8323b6a8;
          }
          uStack_2b8 = CONCAT44(uRam8323b6a0,uRam8323b6a4);
          iVar10 = 0;
          puVar15 = (uint *)(iVar8 + 0x14);
          do {
            if (*(int *)((*puVar15 & 0xfffffffc) + 0x38) != iVar17) {
              uStack_2b8 = CONCAT44(iVar8,iVar10);
              iStack_2a8 = iVar8;
              iStack_2a4 = iVar10;
              break;
            }
            iVar10 = iVar10 + 1;
            puVar15 = puVar15 + 1;
          } while (iVar10 < 3);
          uVar13 = uStack_2b8 >> 0x20;
          if (uVar13 != 0) {
            uVar19 = uStack_2b8 & 0xffffffff;
            cVar18 = '\0';
            lVar20 = (uVar19 + 2 & 0x3fffffff) * 4 + uVar13;
            iVar8 = *(int *)lVar20;
            do {
              cVar18 = cVar18 + '\x01';
              if (param_4 == '\0') {
                uVar5 = (undefined2)*(undefined4 *)(*(int *)lVar20 + 0x34);
              }
              else {
                uVar5 = (undefined2)*(undefined4 *)(*(int *)lVar20 + 0x1c);
              }
              iVar10 = fn_82CE5410();
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar10 + 0x10),param_3,2);
              }
              iStack_2b0 = (int)uVar13;
              *(undefined2 *)(param_3[1] * 2 + *param_3) = uVar5;
              param_3[1] = param_3[1] + 1;
              uVar13 = -(ulonglong)(uVar19 != 2) & uVar19 + 1;
              uStack_2ac = (undefined4)uVar13;
              uStack_2b8 = CONCAT44(iStack_2b0,uStack_2ac);
              uVar12 = *(uint *)((int)((uVar13 + 5 & 0xffffffff) << 2) + iStack_2b0);
              uVar11 = (ulonglong)uVar12;
              uVar12 = uVar12 & 0xfffffffc;
              iVar10 = *(int *)(uVar12 + 0x38);
              while( true ) {
                if (iVar10 != iVar17) break;
                uVar4 = *(uint *)(((((U64)(uStack_2b8) >> 32) & 0xFFFFFFFF) + 5) * 4 + (((U64)(uStack_2b8) >> 0) & 0xFFFFFFFF));
                uStack_2a0 = uVar4 & 0xfffffffc;
                lVar20 = ((ulonglong)uVar4 & 3) - 2;
                uVar11 = -lVar20;
                uStack_29c = -(uint)(lVar20 != 0) & (int)((ulonglong)uVar4 & 3) + 1U;
                uStack_2b8 = CONCAT44(uVar4,uStack_29c) & 0xfffffffcffffffff;
                iVar10 = *(int *)((*(uint *)((uStack_29c + 5) * 4 + uStack_2a0) & 0xfffffffc) + 0x38
                                 );
              }
              uVar19 = uStack_2b8 & 0xffffffff;
              uVar13 = (ulonglong)(((U64)(uStack_2b8) >> 0) & 0xFFFFFFFF);
              lVar20 = (uVar19 + 2 & 0x3fffffff) * 4 + uVar13;
            } while (*(int *)lVar20 != iVar8);
            iVar8 = fn_82CE5410(uVar12,uVar11);
            if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),param_2,1);
            }
            lVar16 = lVar16 + 1;
            *(char *)(param_2[1] + *param_2) = cVar18;
            param_2[1] = param_2[1] + 1;
            uVar12 = uRam8323b6a8;
          }
        }
        iVar7 = iVar7 + -1;
        iVar9 = iVar9 + 4;
      } while (iVar7 != 0);
    }
    iVar7 = fn_82CE5410();
    iStack_2c4 = 0;
    if ((uStack_2c0 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                (*(int **)(iVar7 + 0x10),iStack_2c8,uStack_2c0 & 0x3fffffff,4);
    }
  }
  else if (*(int *)(param_1 + 0x1a8) == 2) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    iVar9 = fn_82CE5410();
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_2,1);
    }
    *(char *)(param_2[1] + *param_2) = (char)uVar1;
    param_2[1] = param_2[1] + 1;
    if (param_4 == '\0') {
      if (0 < *(int *)(param_1 + 0x28)) {
        do {
          uVar5 = (undefined2)iVar7;
          iVar9 = fn_82CE5410();
          if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_3,2);
          }
          iVar7 = iVar7 + 1;
          *(undefined2 *)(param_3[1] * 2 + *param_3) = uVar5;
          param_3[1] = param_3[1] + 1;
        } while (iVar7 < *(int *)(param_1 + 0x28));
      }
    }
    else {
      piVar3 = *(int **)(param_1 + 0x24);
      if (piVar3 != (int *)0x0) {
        do {
          iVar7 = piVar3[7];
          iVar9 = fn_82CE5410();
          if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_3,2);
          }
          *(short *)(param_3[1] * 2 + *param_3) = (short)iVar7;
          param_3[1] = param_3[1] + 1;
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)0x0);
        return 1;
      }
    }
    lVar16 = 1;
  }
  return lVar16;
}

