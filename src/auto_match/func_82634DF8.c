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
extern unsigned int *auStack_e0;
extern int fn_82634B70();
extern int fn_82634C38();
extern int fn_82637168();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_821CC058;
extern unsigned int uStack_e4;
extern unsigned int uStack_f0;


/* WARNING: Type propagation algorithm not settling */

void fn_82634DF8(int *param_1,char param_2,char param_3,char param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uStack_f0;
  uint uStack_e4;
  uint auStack_e0 [56];
  
  if (((~(ulonglong)*(uint *)(*param_1 + 0x4db4) & 0xffffffff) >> 4 & 1) == 0) {
    return;
  }
  iVar7 = param_1[0x1c];
  if (((iVar7 == 0) || (iVar12 = iVar7 * 8 + param_1[0x1b], iVar12 == 8)) ||
     (bVar3 = true, (1 << (*(uint *)(iVar12 + -4) >> 0xc & 0xf) & 0x607eU) == 0)) {
    bVar3 = false;
  }
  piVar13 = param_1 + 0x1b;
  if (bVar3) {
    iVar7 = iVar7 * 8 + param_1[0x1b];
    if ((0x5fff < (*(uint *)(iVar7 + -8) & 0x7000)) || (param_1[0x1e] != 0)) {
      if (param_1[0x14] < 0) {
        return;
      }
      uVar10 = (ulonglong)(*(uint *)(iVar7 + -4) >> 0xc) & 0xf;
      if (param_1[0x1e] == 0) {
        uVar14 = uVar10;
        uVar10 = (ulonglong)(byte)(&lbl_821CC058)[(int)uVar10];
      }
      else {
        uVar14 = (ulonglong)(byte)(&lbl_821CC058)[(int)uVar10];
      }
      *(uint *)(iVar7 + -4) = (uint)(uVar10 << 0xc) & 0xf000 | *(uint *)(iVar7 + -4) & 0xffff0fff;
      uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)*(undefined8 *)(iVar7 + -8))) & ((U64)0xFFFFFFFF)) << 32));
      uStack_f0 = ((((U64)(uStack_f0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)((ulonglong)*(undefined8 *)(iVar7 + -8) >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      uStack_f0 = CONCAT44((((U64)(uStack_f0) >> 0) & 0xFFFFFFFF) & 0x8000 | param_1[0x19] & 0xfffU,
                           (uint)(uVar14 << 0xc) & 0xf000 | (((U64)(uStack_f0) >> 32) & 0xFFFFFFFF) & 0xffff07fc);
      goto LAB_82634f5c;
    }
  }
  else {
    uStack_f0 = CONCAT44(param_1[0x19],0x1000) & 0xfffffffffff;
LAB_82634f5c:
    fn_82637168(piVar13,&uStack_f0,param_1 + 0x14);
  }
  param_1[0x1e] = 0;
  if (param_1[0x14] < 0) {
    return;
  }
  iVar7 = param_1[0x1c];
  iVar12 = param_1[0x1c] * 8 + *piVar13;
  uVar8 = *(uint *)(iVar12 + -8);
  uVar10 = (ulonglong)(uVar8 >> 0xc) & 7;
  uVar1 = (uVar8 & 0xfffff000) + 0x1000 & 0x7000;
  uVar6 = uVar8 & 0xffff8fff | uVar1;
  *(uint *)(iVar12 + -8) = uVar6;
  if (param_2 != '\0') {
    *(uint *)(iVar12 + -8) =
         uVar8 & 0xf0008fff | uVar1 | ((1 << (int)(uVar10 << 1)) << 0x10 | uVar6) & 0xfff0000;
  }
  iVar11 = (int)uVar10;
  if (((~(ulonglong)*(uint *)(*param_1 + 0x4db4) & 0xffffffff) >> 5 & 1) == 0) goto LAB_82635598;
  bVar3 = false;
  auStack_e0[8] = 0;
  auStack_e0[9] = 0;
  auStack_e0[2] = 0;
  auStack_e0[3] = 0;
  auStack_e0[10] = 0;
  auStack_e0[0xb] = 0;
  auStack_e0[4] = 0;
  auStack_e0[5] = 0;
  auStack_e0[0xc] = 0;
  auStack_e0[0xd] = 0;
  auStack_e0[6] = 0;
  auStack_e0[7] = 0;
  auStack_e0[0xe] = 0;
  auStack_e0[0xf] = 0;
  if ((param_1[1] != 0) &&
     (((param_2 == '\0' || ((*param_5 & 0x1f) != 0)) || ((param_5[1] & 0x40000000) == 0)))) {
    puVar5 = (uint *)(param_1 + 3);
    puVar9 = (uint *)(param_1 + 0x1f);
    lVar15 = 8;
    do {
      puVar5 = puVar5 + 1;
      puVar2 = puVar9 + 1;
      puVar9 = puVar9 + 1;
      *puVar9 = *puVar5 | *puVar2;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    puVar5 = (uint *)(param_1 + 0xb);
    puVar9 = (uint *)(param_1 + 0x2f);
    lVar15 = 8;
    do {
      puVar5 = puVar5 + 1;
      puVar2 = puVar9 + 1;
      puVar9 = puVar9 + 1;
      *puVar9 = *puVar5 | *puVar2;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    param_1[1] = 0;
  }
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x1f) != '\0') {
LAB_826353f0:
      bVar3 = true;
    }
  }
  else {
    uVar8 = *param_5;
    if ((uVar8 & 0x40000) == 0) {
      fn_82634B70(auStack_e0 + 8,uVar8 >> 0xc & 0x3f,param_5);
    }
    else {
      uVar14 = 0;
      do {
        fn_82634B70(auStack_e0 + 8,uVar14,param_5);
        uVar14 = uVar14 + 1;
      } while ((uVar14 & 0xffffffff) < 0x40);
    }
    if (((uVar8 & 0x1f) != 0) || ((param_5[1] & 0x40000000) == 0)) {
      if ((uVar8 & 0x800) == 0) {
        fn_82634C38(auStack_e0,uVar8 >> 5 & 0x3f,param_3,param_5);
      }
      else {
        uVar14 = 0;
        do {
          fn_82634C38(auStack_e0,uVar14,param_3,param_5);
          uVar14 = uVar14 + 1;
        } while ((uVar14 & 0xffffffff) < 0x40);
      }
    }
    if (*(char *)(param_1 + 0x1f) != '\0') {
      if (((uVar8 & 0x1f) < 0x18) || (0x1a < (uVar8 & 0x1f))) {
        if (((uVar8 & 0x1f) == 0) && ((param_3 != '\0' && (param_4 == '\0')))) {
          if ((param_5[1] & 0x40000000) == 0) {
            param_1[2] = iVar7 + -1;
            param_1[3] = iVar11;
            param_1[1] = 1;
            fn_82F68CC0(param_1 + 4,auStack_e0,0x20);
          }
          else {
            if (param_1[1] == 0) goto LAB_82635218;
            puVar9 = &uStack_e4;
            puVar5 = (uint *)(param_1 + 3);
            lVar15 = 8;
            do {
              puVar2 = puVar9 + 1;
              puVar5 = puVar5 + 1;
              puVar9 = puVar9 + 1;
              *puVar9 = *puVar5 | *puVar2;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            puVar9 = auStack_e0 + 7;
            puVar5 = (uint *)(param_1 + 0xb);
            lVar15 = 8;
            do {
              puVar2 = puVar9 + 1;
              puVar5 = puVar5 + 1;
              puVar9 = puVar9 + 1;
              *puVar9 = *puVar5 | *puVar2;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            fn_82F68CC0(param_1 + 4,auStack_e0,0x20);
          }
          fn_82F68CC0(param_1 + 0xc,auStack_e0 + 8,0x20);
        }
      }
      else {
        bVar3 = true;
      }
    }
LAB_82635218:
    fn_82F68CC0(auStack_e0 + 0x10,param_1 + 0x30,0x20);
    puVar9 = auStack_e0 + 0xf;
    puVar5 = (uint *)(param_1 + 0x37);
    lVar15 = 8;
    do {
      puVar2 = puVar9 + 1;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
      *puVar9 = *puVar5 | *puVar2;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    iVar7 = 0;
    lVar15 = 8;
    do {
      puVar9 = (uint *)((int)auStack_e0 + iVar7 + 0x40U);
      puVar5 = (uint *)((int)auStack_e0 + iVar7);
      iVar7 = iVar7 + 4;
      *puVar9 = *puVar5 & *puVar9;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    uVar8 = 0;
    puVar5 = auStack_e0 + 0x10;
    do {
      if (*puVar5 != 0) break;
      uVar8 = uVar8 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar8 < 7);
    uVar8 = uVar8 << 5;
    if (uVar8 < 0x100) {
      do {
        if ((1 << (uVar8 & 0x1f) & *(uint *)((int)auStack_e0 + (uVar8 >> 3 & 0x1ffffffc) + 0x40)) !=
            0) break;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x100);
      if (uVar8 < 0x100) goto LAB_826353f0;
    }
    if (param_3 == '\0') {
      fn_82F68CC0(auStack_e0 + 0x10,param_1 + 0x20,0x20);
      puVar9 = auStack_e0 + 0xf;
      puVar5 = (uint *)(param_1 + 0x2f);
      lVar15 = 8;
      do {
        puVar2 = puVar9 + 1;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
        *puVar9 = *puVar5 | *puVar2;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    else {
      fn_82F68CC0(auStack_e0 + 0x10,param_1 + 0x28,0x20);
      puVar9 = auStack_e0 + 0xf;
      puVar5 = (uint *)(param_1 + 0x37);
      lVar15 = 8;
      do {
        puVar2 = puVar9 + 1;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
        *puVar9 = *puVar5 | *puVar2;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    iVar7 = 0;
    lVar15 = 8;
    do {
      puVar5 = (uint *)((int)auStack_e0 + iVar7 + 0x40U);
      iVar4 = iVar7 + 0x20;
      iVar7 = iVar7 + 4;
      *puVar5 = *(uint *)((int)auStack_e0 + iVar4) & *puVar5;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    uVar8 = 0;
    puVar5 = auStack_e0 + 0x10;
    do {
      if (*puVar5 != 0) break;
      uVar8 = uVar8 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar8 < 7);
    uVar8 = uVar8 << 5;
    if (uVar8 < 0x100) {
      do {
        if ((1 << (uVar8 & 0x1f) & *(uint *)((int)auStack_e0 + (uVar8 >> 3 & 0x1ffffffc) + 0x40)) !=
            0) break;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x100);
      if (uVar8 < 0x100) goto LAB_826353f0;
    }
  }
  if (bVar3) {
    if (param_1[1] != 0) {
      uVar8 = *(uint *)(param_1[2] * 8 + *piVar13);
      *(uint *)(param_1[2] * 8 + *piVar13) =
           uVar8 & 0xf000ffff | ((2 << ((param_1[3] & 0x1fU) << 1)) << 0x10 | uVar8) & 0xfff0000;
      param_1[1] = 0;
      fn_82F68CC0(param_1 + 0x20,param_1 + 4);
      fn_82F68CC0(param_1 + 0x30,param_1 + 0xc,0x20);
      *(undefined1 *)(param_1 + 0x1f) = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1 + 0x28,0,0x20);
    }
    *(uint *)(iVar12 + -8) =
         *(uint *)(iVar12 + -8) & 0xf000ffff |
         ((2 << (int)(uVar10 << 1)) << 0x10 | *(uint *)(iVar12 + -8)) & 0xfff0000;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1 + 0x20,0,0x20);
  }
  if ((param_2 != '\0') && (param_1[1] == 0)) {
    if (((*param_5 & 0x1f) < 0x18) || (0x1a < (*param_5 & 0x1f))) {
      *(undefined1 *)(param_1 + 0x1f) = 1;
    }
    lVar15 = 8;
    if (param_3 == '\0') {
      puVar5 = (uint *)(param_1 + 0x28);
      iVar7 = (int)auStack_e0 - (int)puVar5;
      do {
        *puVar5 = *(uint *)(iVar7 + (int)puVar5) | *puVar5;
        puVar5 = puVar5 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      puVar5 = (uint *)(param_1 + 0x38);
      iVar7 = 0x20 - (int)puVar5;
      lVar15 = 8;
      do {
        *puVar5 = *(uint *)((int)auStack_e0 + iVar7 + (int)puVar5) | *puVar5;
        puVar5 = puVar5 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    else {
      puVar5 = (uint *)(param_1 + 0x20);
      iVar7 = (int)auStack_e0 - (int)puVar5;
      do {
        *puVar5 = *(uint *)(iVar7 + (int)puVar5) | *puVar5;
        puVar5 = puVar5 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      puVar5 = (uint *)(param_1 + 0x30);
      iVar7 = 0x20 - (int)puVar5;
      lVar15 = 8;
      do {
        *puVar5 = *(uint *)((int)auStack_e0 + iVar7 + (int)puVar5) | *puVar5;
        puVar5 = puVar5 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
LAB_82635598:
  if (param_3 != '\0') {
    if (uVar10 < 4) {
      *(uint *)(iVar12 + -8) =
           *(uint *)(iVar12 + -8) & 0xfffffff |
           (1 << iVar11) << 0x1c | *(uint *)(iVar12 + -8) & 0xf0000000;
    }
    else {
      *(uint *)(iVar12 + -4) =
           *(uint *)(iVar12 + -4) & 0xfffffffc |
           (1 << (iVar11 - 4U & 0x3f) | *(uint *)(iVar12 + -4)) & 3;
    }
  }
  return;
}

