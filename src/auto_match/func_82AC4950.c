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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern int fn_82AC4188();
extern int fn_82AC42D8();
extern int fn_82AC4408();
extern int fn_82AC4558();
extern int fn_82AC4650();
extern int fn_82AC4708();
extern int fn_82AC4830();
extern unsigned int lbl_820D7A90;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_c0;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_82AC4950(int param_1,int *param_2,uint *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint *puVar16;
  ulonglong *puVar18;
  uint uVar19;
  longlong lVar17;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  byte abStack_d0 [8];
  byte abStack_c8 [8];
  undefined8 uStack_c0;
  uint auStack_b8 [2];
  uint auStack_b0 [2];
  uint uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  
  iVar2 = *param_2;
  puVar22 = (uint *)(param_2 + iVar2 * 4 + 3);
  uVar21 = param_2[iVar2 * 4 + 3];
  uVar10 = uVar21 >> 0xd & 7;
  uVar8 = uVar21 >> 0x13;
  uVar21 = uVar21 >> 0x10 & 7;
  if (((4 < uVar10) || (4 < uVar21)) || (puVar16 = param_3 + uVar8 + 1, *param_3 <= uVar8))
  goto LAB_82ac4db8;
  puVar18 = (ulonglong *)(((int)uVar8 >> 1) * 0xc + param_1);
  uStack_a0 = *(undefined4 *)puVar18;
  uStack_a4 = *(uint *)(puVar18 + 1) >> 0x10;
  uStack_a8 = *(uint *)(puVar18 + 1) << 0x10 | (uint)*puVar18 >> 0x10;
  uStack_9c = (uint)*puVar18 & 0xffff;
  uVar11 = CONCAT44(uStack_a8,uStack_a4);
  if ((uVar8 & 1) == 0) {
    uVar11 = *puVar18 & 0xffffffff0000ffff;
  }
  uVar13 = *puVar16;
  if (uVar13 >> 0x1e == 1) {
    pbVar15 = (byte *)(param_2 + iVar2 * 4 + 4);
    if (pbVar15 == (byte *)0x0) {
LAB_82ac4a4c:
      uVar19 = 0;
    }
    else {
      bVar20 = *pbVar15;
      uVar19 = (uint)bVar20;
      if ((0x22 < bVar20) || (bVar20 == 0)) goto LAB_82ac4a4c;
    }
    if ((uVar13 & 0x3f) == uVar19) {
LAB_82ac4a94:
      uVar13 = *puVar16;
      if (((((((uVar13 >> 0x19 & 1 << uVar10 & 0x1f) != 0) &&
             ((uVar13 >> 0x14 & 1 << uVar21 & 0x1f) != 0)) &&
            (uVar19 = *puVar22, (1 << (uVar19 >> 0xc & 1) & uVar13 >> 0x12 & 3) != 0)) &&
           (((1 << (uVar19 >> 0xb & 1) & uVar13 >> 0x10 & 3) != 0 &&
            ((1 << (uVar19 >> 10 & 1) & uVar13 >> 0xe & 3) != 0)))) &&
          (((1 << (uVar19 >> 9 & 1) & uVar13 >> 0xc & 3) != 0 &&
           (((1 << (uVar19 >> 8 & 1) & uVar13 >> 10 & 3) != 0 &&
            ((1 << (uVar19 >> 7 & 1) & uVar13 >> 8 & 3) != 0)))))) &&
         ((1 << (uVar19 >> 6 & 1) & uVar13 >> 6 & 3) != 0)) {
        return 0;
      }
      goto LAB_82ac4ba4;
    }
    if (pbVar15 != (byte *)0x0) {
      bVar20 = *pbVar15;
      if (((bVar20 < 0x23) && (bVar20 != 0)) && ((uVar13 & 0x3f) == 0)) {
        *puVar16 = bVar20 & 0x3f | uVar13 & 0xffffffc0;
        goto LAB_82ac4a94;
      }
    }
    goto LAB_82ac4db8;
  }
  if (uVar13 >> 0x1e == 0) {
    if ((byte *)(param_2 + iVar2 * 4 + 4) == (byte *)0x0) {
LAB_82ac4b98:
      uVar19 = 0;
    }
    else {
      bVar20 = *(byte *)(param_2 + iVar2 * 4 + 4);
      uVar19 = (uint)bVar20;
      if ((0x22 < bVar20) || (bVar20 == 0)) goto LAB_82ac4b98;
    }
    *puVar16 = uVar19 & 0x3f | uVar13 & 0xffffffc0;
  }
LAB_82ac4ba4:
  uVar13 = *puVar16;
  if ((uVar13 >> 0x1e == 2) || (uVar13 >> 0x1e == 3)) goto LAB_82ac4db8;
  uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar11)) & ((U64)0xFFFFFFFF)) << 32));
  uVar9 = ((1 << uVar10 & 0x1fU) << 5 | 0x400 | 1 << uVar21 & 0x1fU) << 0x14;
  uVar19 = uVar9 | uVar13 & 0x3fffffff;
  *puVar16 = uVar19;
  uVar19 = ((1 << (*puVar22 >> 0xc & 1)) << 0x12 | uVar19) & 0xc0000;
  *puVar16 = uVar9 | uVar13 & 0x3ff3ffff | uVar19;
  uVar3 = ((1 << (*puVar22 >> 0xb & 1)) << 0x10 | uVar13 & 0x3ff3ffff) & 0x30000;
  *puVar16 = uVar9 | uVar13 & 0x3ff0ffff | uVar19 | uVar3;
  uVar4 = ((1 << (*puVar22 >> 10 & 1)) << 0xe | uVar13 & 0x3ff0ffff) & 0xc000;
  *puVar16 = uVar9 | uVar13 & 0x3ff03fff | uVar19 | uVar3 | uVar4;
  uVar5 = ((1 << (*puVar22 >> 9 & 1)) << 0xc | uVar13 & 0x3ff03fff) & 0x3000;
  *puVar16 = uVar9 | uVar13 & 0x3ff00fff | uVar19 | uVar3 | uVar4 | uVar5;
  uVar6 = ((1 << (*puVar22 >> 8 & 1)) << 10 | uVar13 & 0x3ff00fff) & 0xc00;
  *puVar16 = uVar9 | uVar13 & 0x3ff003ff | uVar19 | uVar3 | uVar4 | uVar5 | uVar6;
  uVar7 = ((1 << (*puVar22 >> 7 & 1)) << 8 | uVar13 & 0x3ff003ff) & 0x300;
  *puVar16 = uVar9 | uVar13 & 0x3ff000ff | uVar19 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  *puVar16 = uVar9 | uVar13 & 0x3ff0003f | uVar19 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 |
             ((1 << (*puVar22 >> 6 & 1)) << 6 | uVar13 & 0x3ff000ff) & 0xc0;
  if ((uVar11 & 0x800) != 0) goto LAB_82ac4db8;
  uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar11 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  if ((*puVar22 & 0x100) != 0) {
    switch((((U64)(uStack_c0) >> 32) & 0xFFFFFFFF) >> 0xc) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 7:
    case 10:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      goto LAB_82ac4d38;
    case 5:
    case 6:
      goto code_r0x82ac4d2c;
    case 8:
      uVar13 = (((U64)(uStack_c0) >> 0) & 0xFFFFFFFF) >> 0x15 & 1;
      break;
    case 9:
    case 0xb:
      uVar13 = (((U64)(uStack_c0) >> 0) & 0xFFFFFFFF) >> 0xe & 1;
      break;
    default:
      uVar13 = 1;
    }
    if (uVar13 != 0) {
code_r0x82ac4d2c:
      *puVar22 = *puVar22 & 0xffffeeff;
    }
  }
LAB_82ac4d38:
  uVar13 = (((U64)(uStack_c0) >> 32) & 0xFFFFFFFF) >> 0xc;
  uStack_c0 = uVar11;
  switch(uVar13) {
  case 0:
    puVar16 = auStack_b8;
    pbVar15 = (byte *)&uStack_c0;
    do {
      bVar20 = *(byte *)puVar16;
      bVar1 = *pbVar15;
      if ((ulonglong)bVar20 - (ulonglong)bVar1 != 0) break;
      puVar16 = (uint *)((int)puVar16 + 1);
      pbVar15 = pbVar15 + 1;
    } while (puVar16 != auStack_b0);
    if ((int)((ulonglong)bVar20 - (ulonglong)bVar1) != 0) goto LAB_82ac4db8;
    goto code_r0x82ac4fb8;
  case 1:
  case 2:
    pbVar14 = abStack_d0;
    pbVar15 = (byte *)&uStack_c0;
    do {
      lVar17 = (ulonglong)*pbVar14 - (ulonglong)*pbVar15;
      if (lVar17 != 0) break;
      pbVar14 = pbVar14 + 1;
      pbVar15 = pbVar15 + 1;
    } while (pbVar14 != abStack_c8);
    goto code_r0x82ac4e40;
  case 3:
  case 4:
  case 0xd:
  case 0xe:
    goto code_r0x82ac4e48;
  case 5:
  case 6:
    pbVar14 = abStack_c8;
    pbVar15 = (byte *)&uStack_c0;
    do {
      lVar17 = (ulonglong)*pbVar14 - (ulonglong)*pbVar15;
      if (lVar17 != 0) break;
      pbVar14 = pbVar14 + 1;
      pbVar15 = pbVar15 + 1;
    } while (pbVar14 != (byte *)&uStack_c0);
code_r0x82ac4e40:
    if ((int)lVar17 == 0) {
code_r0x82ac4e48:
      uVar12 = fn_82AC4188(uVar11,param_2,param_3,param_1,param_4);
      break;
    }
    goto LAB_82ac4db8;
  case 7:
    uVar12 = fn_82AC42D8(uVar11,param_2,param_3,uVar8);
    break;
  case 8:
    uVar12 = fn_82AC4408(uVar11,param_2,param_3,uVar8);
    break;
  case 9:
    uVar12 = fn_82AC4558(uVar11,param_2,param_3);
    break;
  case 10:
    uVar12 = fn_82AC4650(uVar11,param_2);
    break;
  case 0xb:
    uVar12 = fn_82AC4708(uVar11,param_2,param_3,uVar8);
    break;
  case 0xc:
    uVar12 = fn_82AC4830(uVar11,param_2,param_4);
    break;
  case 0xf:
    puVar16 = auStack_b0;
    pbVar15 = (byte *)&uStack_c0;
    do {
      bVar20 = *(byte *)puVar16;
      bVar1 = *pbVar15;
      if ((ulonglong)bVar20 - (ulonglong)bVar1 != 0) break;
      puVar16 = (uint *)((int)puVar16 + 1);
      pbVar15 = pbVar15 + 1;
    } while (puVar16 != &uStack_a8);
    if (((int)((ulonglong)bVar20 - (ulonglong)bVar1) == 0) && (*(char *)(param_4 + 0x28) == '\0')) {
      uVar12 = 0;
      break;
    }
  default:
    goto LAB_82ac4db8;
  }
  if (-1 < (int)uVar12) {
code_r0x82ac4fb8:
    if ((((uVar13 != 2) && (uVar13 != 4)) && (uVar13 != 6)) && (uVar13 != 0xe))
    goto code_r0x82ac5050;
    param_2[2] = 1;
    if (((uVar10 == 0) && (uVar21 == 0)) && ((byte *)(param_2 + iVar2 * 4 + 4) != (byte *)0x0)) {
      bVar20 = *(byte *)(param_2 + iVar2 * 4 + 4);
      if ((0x22 < bVar20) || (bVar20 == 0)) {
        bVar20 = 0;
      }
      if (bVar20 == 0x22) {
        uVar21 = *puVar22;
        if (*(char *)(param_4 + 0x28) == '\0') {
          if (((uVar21 & 0x400) != 0) && (((uVar21 & 0x800) != 0 && ((uVar21 & 0x80) != 0)))) {
code_r0x82ac5050:
                    /* WARNING: Could not recover jumptable at 0x82ac5074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar12 = (*(code *)(*(ushort *)(&lbl_820D7A90 + uVar13 * 2) + 0x82ac4b6c))();
            return uVar12;
          }
        }
        else if (((uVar21 & 0x400) != 0) && ((uVar21 & 0x40) == 0)) goto code_r0x82ac5050;
      }
    }
LAB_82ac4db8:
    uVar12 = 0xffffffff80004005;
  }
  return uVar12;
}

