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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8291E860();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_28280086;
extern unsigned int uStack_a2;
extern unsigned int uStack_a4;
extern unsigned int uStack_ab;
extern unsigned int uStack_ad;


undefined8 fn_8291E8E0(undefined4 *param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  byte bVar22;
  longlong lVar23;
  uint uVar24;
  byte bStack_b0;
  byte bStack_af;
  byte bStack_ae;
  ushort uStack_ad;
  ushort uStack_ab;
  byte bStack_a9;
  ushort uStack_a4;
  ushort uStack_a2;
  byte bStack_a0;
  byte bStack_9f;
  
  bVar3 = false;
  bVar4 = false;
  if ((param_3 & 0xffffffff) < 0x12) {
    return 0xffffffff80004005;
  }
  fn_82F68CC0(&bStack_b0,param_2,0x12);
  fn_8291E860(&bStack_b0,&bStack_b0);
  if ((bStack_af & 0xfe) != 0) {
    return 0xffffffff80004005;
  }
  if ((bStack_ae & 0xf4) != 0) {
    return 0xffffffff80004005;
  }
  uVar15 = (uint)uStack_a4;
  if (uVar15 == 0) {
    return 0xffffffff80004005;
  }
  if (uStack_a2 == 0) {
    return 0xffffffff80004005;
  }
  uVar9 = (ulonglong)bStack_a9;
  if ((((bStack_af != 0) && (uVar9 != 0xf)) && (uVar9 != 0x10)) &&
     ((uVar9 != 0x18 && (uVar9 != 0x20)))) {
    return 0xffffffff80004005;
  }
  bVar2 = bStack_ae & 3;
  if (bVar2 == 1) {
    if (bStack_af == 0) {
      return 0xffffffff80004005;
    }
    if (bStack_a0 != 8) {
      return 0xffffffff80004005;
    }
    bVar3 = true;
    bVar4 = true;
    uVar10 = 8;
    puVar19 = (undefined1 *)0x18280086;
  }
  else if (bVar2 == 2) {
    uVar10 = (ulonglong)bStack_a0;
    puVar19 = (undefined1 *)0x28280043;
    if (uVar10 != 0xf) {
      if (uVar10 == 0x10) {
        puVar19 = (undefined1 *)0x18280043;
      }
      else if (uVar10 == 0x18) {
        puVar19 = &lbl_28280086;
      }
      else {
        puVar19 = (undefined1 *)0x18280086;
        bVar3 = false;
        if (uVar10 != 0x20) {
          return 0xffffffff80004005;
        }
      }
    }
  }
  else {
    if (bVar2 != 3) {
      return 0xffffffff80004005;
    }
    if (bStack_a0 != 8) {
      return 0xffffffff80004005;
    }
    uVar10 = 8;
    puVar19 = (undefined1 *)0x28000002;
  }
  uVar10 = uVar10 + 7 >> 3;
  if ((bVar3) || (uVar17 = uVar10, uVar10 == 3)) {
    uVar17 = 4;
  }
  uVar11 = (ulonglong)bStack_b0;
  bVar2 = bStack_9f >> 5;
  uVar14 = ~(uint)bStack_9f >> 4 & 1;
  if ((param_3 - 0x12 & 0xffffffff) < uVar11) {
    return 0xffffffff80004005;
  }
  uVar20 = (param_3 - 0x12) - uVar11;
  uVar9 = (longlong)(int)(uint)uStack_ab * (longlong)(int)(uVar9 + 7 >> 3);
  if ((uVar20 & 0xffffffff) < uVar9) {
    return 0xffffffff80004005;
  }
  if ((param_1[0x10] != 0) && (bVar4)) {
    if (0x100 < (uint)uStack_ad + (uint)uStack_ab) {
      return 0xffffffff80004005;
    }
    uVar9 = fn_8265C940(0x400,0x24810000);
    param_1[2] = (int)uVar9;
    if ((uVar9 & 0xffffffff) == 0) {
      return 0xffffffff8007000e;
    }
    param_1[0xf] = 1;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar9,0xff,0x400);
  }
  *param_1 = puVar19;
  uVar20 = uVar20 - uVar9;
  lVar23 = uVar9 + uVar11 + param_2 + 0x12;
  param_1[3] = (uint)uStack_a4;
  param_1[1] = (int)lVar23;
  uVar13 = (uint)uStack_a2;
  param_1[4] = uVar13;
  param_1[5] = 1;
  uVar16 = (uint)uStack_a4;
  param_1[0xc] = uVar16 * (int)uVar17;
  uVar9 = (longlong)(int)((uint)uStack_a2 * (uint)uStack_a4) * (longlong)(int)uVar17;
  param_1[0xd] = 0;
  if (param_1[0x10] == 0) goto LAB_8291efa4;
  if ((((bVar4) || ((bStack_ae & 8) != 0)) || ((bVar2 & 1) == 0)) ||
     ((uVar14 == 0 || (uVar10 == 3)))) {
    uVar9 = fn_8265C940(uVar9,0x24810000);
    param_1[1] = (int)uVar9;
    if ((uVar9 & 0xffffffff) == 0) {
      return 0xffffffff8007000e;
    }
    param_1[0xe] = 1;
    if ((bVar2 & 1) == 0) {
      uVar9 = (longlong)(int)(uStack_a2 - 1) * (longlong)(int)param_1[0xc] + uVar9;
    }
    uVar18 = 0;
    if (uVar13 != 0) {
      do {
        uVar21 = 0;
        uVar11 = uVar9;
        if (uVar14 == 0) {
          uVar11 = ((uint)param_1[0xc] - uVar17) + uVar9;
        }
        if (uVar16 != 0) {
          do {
            if ((bStack_ae & 8) == 0) {
              bVar22 = 0;
              uVar24 = uVar15;
            }
            else {
              if ((uVar20 & 0xffffffff) == 0) {
                return 0xffffffff80004005;
              }
              bVar22 = *(byte *)lVar23 & 0x80;
              uVar24 = (*(byte *)lVar23 & 0x7f) + 1;
              if (uVar15 - uVar21 <= uVar24) {
                uVar24 = uVar15 - uVar21;
              }
              lVar23 = lVar23 + 1;
              uVar20 = uVar20 - 1;
            }
            uVar21 = uVar24 + uVar21;
            while (uVar24 != 0) {
              uVar24 = uVar24 - 1;
              if ((uVar20 & 0xffffffff) < uVar10) {
                return 0xffffffff80004005;
              }
              puVar19 = (undefined1 *)uVar11;
              if (bVar4) {
                iVar1 = (uint)*(byte *)lVar23 * 4;
                iVar6 = iVar1 + param_1[2];
                *puVar19 = *(undefined1 *)(iVar1 + param_1[2]);
                puVar19[1] = *(undefined1 *)(iVar6 + 1);
                puVar19[2] = *(undefined1 *)(iVar6 + 2);
                puVar19[3] = *(undefined1 *)(iVar6 + 3);
              }
              else {
                fn_82F68CC0(uVar11,lVar23,uVar10);
                if (uVar10 == 3) {
                  puVar19[3] = 0xff;
                }
              }
              if (bVar22 == 0) {
                lVar23 = uVar10 + lVar23;
                uVar20 = uVar20 - uVar10;
              }
              if (uVar14 == 0) {
                uVar11 = uVar11 - uVar17;
              }
              else {
                uVar11 = uVar11 + uVar17;
              }
            }
            if (bVar22 != 0) {
              lVar23 = uVar10 + lVar23;
              uVar20 = uVar20 - uVar10;
            }
          } while (uVar21 < uVar16);
        }
        uVar11 = (ulonglong)(uint)param_1[0xc];
        if ((bVar2 & 1) == 0) {
          uVar11 = -uVar11;
        }
        uVar9 = uVar11 + uVar9;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar13);
    }
  }
  else {
    if ((uVar20 & 0xffffffff) < (uVar9 & 0xffffffff)) {
      return 0xffffffff80004005;
    }
    param_1[1] = (int)lVar23;
    param_1[0xe] = 0;
  }
  uVar9 = (CONCAT44(*param_1,*param_1) & 0xfffffffffffffe3f) - 0x18280003;
  if (uVar9 == 0) {
    puVar12 = (ushort *)param_1[1];
    puVar5 = (ushort *)(param_1[0xc] * param_1[4] + (int)puVar12);
    if (puVar12 < puVar5) {
      do {
        puVar7 = puVar12 + param_1[3];
        puVar8 = puVar12;
        if (puVar12 < puVar7) {
          do {
            if ((*puVar8 & 0x80) != 0) break;
            puVar8 = puVar8 + 1;
          } while (puVar8 < puVar7);
          if (puVar8 < puVar7) break;
        }
        puVar12 = (ushort *)(param_1[0xc] + (int)puVar12);
      } while (puVar12 < puVar5);
    }
    if (puVar12 != puVar5) goto LAB_8291efa4;
    puVar19 = (undefined1 *)0x28280043;
  }
  else {
    if ((uVar9 & 0xffffffff) != 3) goto LAB_8291efa4;
    uVar15 = param_1[1];
    uVar14 = param_1[0xc] * param_1[4] + uVar15;
    if (uVar15 < uVar14) {
      do {
        uVar16 = uVar15 + param_1[3] * 4;
        uVar13 = uVar15;
        if (uVar15 < uVar16) {
          do {
            if (*(char *)(uVar13 + 3) != '\0') break;
            uVar13 = uVar13 + 4;
          } while (uVar13 < uVar16);
          if (uVar13 < uVar16) break;
        }
        uVar15 = param_1[0xc] + uVar15;
      } while (uVar15 < uVar14);
    }
    if (uVar15 != uVar14) goto LAB_8291efa4;
    puVar19 = &lbl_28280086;
  }
  *param_1 = puVar19;
LAB_8291efa4:
  if (bVar4) {
    if (param_1[2] != 0) {
      fn_8265C990(param_1[2],0x24810000);
      param_1[2] = 0;
    }
    param_1[0xf] = 0;
  }
  return 0;
}

