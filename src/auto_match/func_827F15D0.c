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
extern unsigned int *auStack_7c;
extern unsigned int *auStack_80;
extern int fn_827F05E0();
extern int fn_827F08E8();
extern int fn_827F1250();
extern int fn_827F1B20();
extern int fn_827F1B90();
extern int fn_827F1DB0();
extern int fn_827F1F30();
extern int fn_827F3980();
extern int fn_827F3C20();
extern int fn_827F3C30();
extern int fn_827F3C48();
extern int fn_827F3C58();
extern int fn_827F4010();
extern unsigned int uStack_54;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


/* WARNING: Type propagation algorithm not settling */

void fn_827F15D0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ushort *puVar5;
  uint uVar6;
  short sVar12;
  char cVar13;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar3;
  undefined4 ******ppppppuVar10;
  uint uVar11;
  undefined8 uVar4;
  ulonglong uVar14;
  undefined4 *******pppppppuVar16;
  ulonglong uVar15;
  longlong lVar17;
  longlong lVar18;
  ushort uVar20;
  longlong lVar19;
  ushort *puVar21;
  int iVar22;
  int *piVar23;
  ushort auStack_80 [2];
  undefined4 auStack_7c [3];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *******pppppppuStack_68;
  undefined4 *******pppppppuStack_64;
  undefined4 *******pppppppuStack_60;
  undefined4 *******pppppppuStack_5c;
  uint uStack_54;
  
  iVar1 = (int)param_1;
  if ((*(ushort *)(iVar1 + 0xea) >> 1 & 1) == 0) {
    fn_827F08E8();
  }
  *(undefined2 *)(iVar1 + 0xe0) = 0;
  *(undefined2 *)(iVar1 + 0xe2) = 0;
  *(undefined2 *)(iVar1 + 0xe6) = 0;
  *(undefined2 *)(iVar1 + 0xe4) = 1;
  if (*(int *)(iVar1 + 0xf0) != 0xffff) {
    auStack_80[0] = 0xffff;
    uVar20 = *(ushort *)(iVar1 + 0xee);
    puVar5 = (ushort *)fn_827F1F30(auStack_80 + 1,*(undefined2 *)(iVar1 + 0xe8),auStack_80);
    auStack_80[0] = ~uVar20 & ~*puVar5;
    fn_827F1250(param_1,*(uint *)(iVar1 + 0xf0) & 0xffff,auStack_80,param_1 + 0x20,param_1 + 0xe0,
                  param_1 + 0xe4);
    puVar5 = (ushort *)(param_1 + 0xe0);
    *(ushort *)(iVar1 + 0xe2) = *puVar5;
    puVar21 = (ushort *)(param_1 + 0xe4);
    uVar20 = *puVar21;
    uVar6 = (**(code **)(**(int **)(iVar1 + 4) + 4))();
    if ((uVar6 & 0xffff) + 1 <= (uint)uVar20) {
      sVar12 = (**(code **)(**(int **)(iVar1 + 4) + 4))();
      uVar20 = sVar12 + 1;
    }
    *puVar21 = uVar20;
    if (auStack_80[0] != 0) {
      uVar14 = (ulonglong)*(ushort *)(iVar1 + 0xe8);
      while (uVar14 = uVar14 - 1, -1 < (longlong)uVar14) {
        if (((*(ushort *)((int)auStack_80 + ((uint)uVar14 >> 3 & 0x1ffe)) >> ((uint)uVar14 & 0xf) &
             1) != 0) && (cVar13 = fn_827F05E0(param_1,uVar14 & 0xffff), cVar13 == '\0')) {
          fn_827F1250(param_1,uVar14 & 0xffff,auStack_80,
                        ((ulonglong)*(ushort *)(iVar1 + 0xe2) + 8) * 4 + param_1,auStack_80 + 1,
                        auStack_7c);
          *(ushort *)(iVar1 + 0xe2) = *(short *)(iVar1 + 0xe2) + auStack_80[1];
        }
      }
    }
    lVar18 = (ulonglong)*puVar5 - 1;
    if (-1 < lVar18) {
      lVar17 = ((ulonglong)*puVar5 + 7) * 4 + param_1;
      do {
        iVar22 = *puVar5 - 1;
        iVar9 = (int)lVar18;
        if (iVar9 < iVar22) {
          lVar19 = (ulonglong)(*puVar5 + 7) * 4 + param_1;
          do {
            uVar20 = *(ushort *)lVar17;
            iVar7 = fn_827F3C20(*(undefined4 *)((*(ushort *)lVar19 + 0x28) * 4 + iVar1));
            iVar8 = fn_827F3C20(*(undefined4 *)((uVar20 + 0x28) * 4 + iVar1));
            if (iVar8 == iVar7) break;
            iVar22 = iVar22 + -1;
            lVar19 = lVar19 + -4;
          } while (iVar9 < iVar22);
        }
        if (iVar22 == iVar9) {
          *(short *)(iVar1 + 0xe6) = *(short *)(iVar1 + 0xe6) + 1;
        }
        lVar18 = lVar18 + -1;
        lVar17 = lVar17 + -4;
      } while (-1 < lVar18);
    }
  }
  pppppppuStack_68 = &pppppppuStack_68;
  pppppppuStack_60 = &pppppppuStack_68;
  uStack_70 = 0;
  pppppppuStack_64 = &pppppppuStack_68;
  uStack_6c = 0;
  pppppppuStack_5c = &pppppppuStack_68;
  uVar14 = (ulonglong)*(ushort *)(iVar1 + 0xe8) - 1;
  uStack_54 = 0;
  if (-1 < (longlong)uVar14) {
    lVar18 = ((ulonglong)*(ushort *)(iVar1 + 0xe8) + 0x27) * 4 + param_1;
    do {
      piVar23 = (int *)lVar18;
      iVar9 = fn_827F4010(*piVar23);
      piVar23[-0x10] = iVar9;
      if ((*(ushort *)((((uint)((uVar14 & 0xffffffff) >> 4) & 0xfff) + 0x77) * 2 + iVar1) >>
           ((uint)uVar14 & 0xf) & 1) == 0) {
        uVar3 = fn_827F3C30(*piVar23);
        uVar3 = uVar3 & 0xffff;
joined_r0x827f18c4:
        uVar3 = uVar3 - 1;
        if (-1 < (longlong)uVar3) {
          uVar2 = uVar3 & 0xffff;
          ppppppuVar10 = (undefined4 ******)fn_827F3C48(*piVar23,uVar2);
          pppppppuVar16 = pppppppuStack_60;
          if (pppppppuStack_60 != pppppppuStack_5c) goto LAB_827f18e8;
          goto LAB_827f1908;
        }
        goto LAB_827f1988;
      }
      pppppppuVar16 = pppppppuStack_60;
      if (pppppppuStack_60 == pppppppuStack_5c) {
LAB_827f1898:
        uStack_54 = uStack_54 + 1;
        fn_827F1DB0(&uStack_70,pppppppuStack_5c,lVar18);
      }
      else {
        do {
          if (*pppppppuVar16 == (undefined4 ******)*piVar23) break;
          pppppppuVar16 = (undefined4 *******)pppppppuVar16[2];
        } while (pppppppuVar16 != pppppppuStack_5c);
        if (pppppppuVar16 == pppppppuStack_5c) goto LAB_827f1898;
      }
LAB_827f1988:
      uVar14 = uVar14 - 1;
      lVar18 = lVar18 + -4;
    } while (-1 < (longlong)uVar14);
  }
  uVar6 = uStack_54;
  uVar11 = fn_827F3C30(param_1);
  if (uVar6 != (uVar11 & 0xffff)) {
    fn_827F3980(param_1,uStack_54 & 0xffff,0);
  }
  while (pppppppuStack_60 != pppppppuStack_5c) {
    uStack_54 = uStack_54 - 1;
    uVar4 = fn_827F1B90(&uStack_70,pppppppuStack_5c[1]);
    fn_827F3C58(param_1,uStack_54 & 0xffff,uVar4);
  }
  *(ushort *)(iVar1 + 0xea) = *(ushort *)(iVar1 + 0xea) | 1;
  fn_827F1B20();
  return;
LAB_827f18e8:
  do {
    if (*pppppppuVar16 == ppppppuVar10) break;
    pppppppuVar16 = (undefined4 *******)pppppppuVar16[2];
  } while (pppppppuVar16 != pppppppuStack_5c);
  if (pppppppuVar16 == pppppppuStack_5c) {
LAB_827f1908:
    iVar9 = fn_827F3C48(*piVar23,uVar2);
    uVar15 = (ulonglong)*(ushort *)(iVar1 + 0xe8) - 1;
    if (-1 < (longlong)uVar15) {
      lVar17 = ((ulonglong)*(ushort *)(iVar1 + 0xe8) + 0x27) * 4 + param_1;
      do {
        if (*(int *)lVar17 == iVar9) {
          uVar15 = uVar15 & 0xffff;
          goto LAB_827f1948;
        }
        uVar15 = uVar15 - 1;
        lVar17 = lVar17 + -4;
      } while (-1 < (longlong)uVar15);
    }
    uVar15 = 0xffff;
LAB_827f1948:
    if (uVar15 == 0xffff) {
      auStack_7c[0] = fn_827F3C48(*piVar23,uVar2);
      uStack_54 = uStack_54 + 1;
      fn_827F1DB0(&uStack_70,pppppppuStack_5c,auStack_7c);
    }
  }
  goto joined_r0x827f18c4;
}

