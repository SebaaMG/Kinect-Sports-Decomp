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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b8;
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_830C6D68();
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;


undefined8 fn_830C8648(int *param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  short sVar8;
  ushort uVar9;
  short sVar10;
  ushort uVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  ulonglong *puVar16;
  byte *pbVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  bool bVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  uint *puVar29;
  undefined4 *puVar30;
  longlong lVar31;
  int iVar32;
  undefined4 *puVar33;
  ulonglong uVar34;
  ushort *puVar35;
  short *psVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 auStack_b8 [4];
  undefined4 auStack_a8 [42];
  
  uVar7 = *(ushort *)((int)param_1 + 0x32);
  uVar37 = (ulonglong)uVar7;
  uVar13 = *param_5;
  uVar38 = (ulonglong)uVar13;
  iVar14 = param_1[0x57];
  iVar26 = (int)(uint)uVar7 >> 1;
  if ((param_4 == 0) || (bVar22 = false, *(int *)(param_1[0x146] + param_4 * 4) != 0)) {
    bVar22 = true;
  }
  piVar15 = (int *)param_1[0x56];
  sVar8 = *(short *)((int)param_1 + 0x3e);
  uVar9 = *(ushort *)((int)param_1 + 0x42);
  sVar10 = *(short *)(param_1 + 0x10);
  uVar11 = *(ushort *)(param_1 + 0x11);
  puVar16 = (ulonglong *)*param_1;
  if (piVar15 == (int *)0x0) {
    uVar39 = 0;
    *(undefined4 *)((int)puVar16 + 0x14) = 3;
  }
  else {
    iVar23 = *piVar15;
    sVar12 = *(short *)((int)((*puVar16 >> (0x40 - (ulonglong)*(byte *)(piVar15 + 2) & 0x7f) &
                              0xffffffff) << 1) + iVar23);
    uVar39 = (ulonglong)sVar12;
    if (sVar12 < 0) {
      fn_82C4E470(puVar16);
      do {
        uVar34 = *puVar16;
        fn_82C4E470(puVar16,1);
        sVar12 = *(short *)((int)(((uVar39 - ((longlong)uVar34 >> 0x3f)) + 0x8000 & 0xffffffff) << 1
                                 ) + iVar23);
        uVar39 = (ulonglong)sVar12;
      } while (sVar12 < 0);
    }
    else {
      iVar23 = *(int *)(puVar16 + 1);
      iVar28 = (int)(uVar39 & 0xf);
      *puVar16 = *puVar16 << (uVar39 & 0xf);
      *(int *)(puVar16 + 1) = iVar23 - iVar28;
      if (iVar23 < iVar28) {
        do {
          pbVar17 = *(byte **)((int)puVar16 + 0xc);
          if (pbVar17 < (byte *)(*(int *)(puVar16 + 2) - 4U)) {
            bVar1 = *pbVar17;
            bVar2 = pbVar17[1];
            bVar3 = pbVar17[2];
            bVar4 = pbVar17[3];
            bVar5 = pbVar17[4];
            bVar6 = pbVar17[5];
            iVar23 = *(int *)(puVar16 + 1);
            *(byte **)((int)puVar16 + 0xc) = pbVar17 + 6;
            *(int *)(puVar16 + 1) = iVar23 + 0x30;
            *puVar16 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3)
                          * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                        (ulonglong)bVar6 << ((longlong)-iVar23 & 0x7fU)) + *puVar16;
            goto LAB_830c87ac;
          }
          iVar23 = fn_82C4E3B0(puVar16);
        } while (iVar23 == 1);
        uVar39 = (ulonglong)((int)sVar12 >> 4);
      }
      else {
LAB_830c87ac:
        uVar39 = (ulonglong)((int)sVar12 >> 4);
      }
    }
  }
  if (*(int *)(*param_1 + 0x14) != 0) {
    return 1;
  }
  uVar24 = 0;
  if ((uVar39 & 2) != 0) {
    uVar24 = fn_830C6D68(param_1,param_1[0x54]);
  }
  uStack_c0 = 0;
  lVar31 = 0;
  uStack_c4 = 0;
  uStack_c8 = 0;
  if ((param_3 != 0) && ((*(uint *)(param_2 + -0x18) & 0x20000) != 0)) {
    lVar31 = 1;
    uStack_c8 = *(undefined4 *)(uVar13 * 4 + iVar14 + -4);
  }
  if (!bVar22) {
    uVar34 = uVar38 - uVar37;
    puVar29 = (uint *)(param_2 + iVar26 * -0x18);
    if ((*puVar29 & 0x20000) != 0) {
      lVar27 = lVar31 << 2;
      lVar31 = lVar31 + 1;
      iVar23 = (int)lVar27;
      if ((*puVar29 & 0x700) < 0x200) {
        *(undefined4 *)((int)&uStack_c8 + iVar23) =
             *(undefined4 *)((int)((uVar34 & 0xffffffff) << 2) + iVar14);
      }
      else {
        *(undefined4 *)((int)&uStack_c8 + iVar23) =
             *(undefined4 *)((int)((uVar34 - uVar37 & 0xffffffff) << 2) + iVar14);
      }
    }
    if (iVar26 != 1) {
      if (param_3 == iVar26 + -1) {
        uVar34 = uVar34 - 1;
        puVar29 = puVar29 + -6;
      }
      else {
        uVar34 = uVar34 + 2;
        puVar29 = puVar29 + 6;
      }
      if ((*puVar29 & 0x20000) != 0) {
        lVar27 = lVar31 << 2;
        lVar31 = lVar31 + 1;
        iVar23 = (int)lVar27;
        if ((*puVar29 & 0x700) < 0x200) {
          *(undefined4 *)((int)&uStack_c8 + iVar23) =
               *(undefined4 *)((int)((uVar34 & 0xffffffff) << 2) + iVar14);
        }
        else {
          *(undefined4 *)((int)&uStack_c8 + iVar23) =
               *(undefined4 *)((int)((uVar34 - uVar37 & 0xffffffff) << 2) + iVar14);
        }
      }
    }
  }
  iVar28 = 0;
  iVar23 = 0;
  iVar32 = (int)lVar31;
  if (iVar32 == 0) {
LAB_830c8a74:
    uStack_d0 = 0;
  }
  else {
    puVar33 = auStack_b8 + 3;
    puVar30 = &uStack_bc;
    puVar35 = (ushort *)&uStack_c8;
    do {
      if ((*puVar35 & 4) == 0) {
        iVar28 = iVar28 + 1;
        puVar30 = puVar30 + 1;
        *puVar30 = *(undefined4 *)puVar35;
      }
      else {
        iVar23 = iVar23 + 1;
        puVar33 = puVar33 + 1;
        *puVar33 = *(undefined4 *)puVar35;
      }
      puVar35 = puVar35 + 2;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    if (iVar32 == 0) goto LAB_830c8a74;
    if ((iVar28 == 3) || (iVar23 == 3)) {
      uVar19 = (ushort)((uint)((int)(short)(((U64)(uStack_c4) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_c8) >> 16) & 0xFFFF)) >> 0x10);
      uVar18 = (ushort)((uint)((int)(short)(((U64)(uStack_c4) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_c0) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar19;
      uVar19 = (ushort)((uint)((int)(short)(((U64)(uStack_c0) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_c8) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar19;
      uVar21 = (ushort)((uint)((int)(short)(((U64)(uStack_c4) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_c8) >> 0) & 0xFFFF)) >> 0x10);
      uVar20 = (ushort)((uint)((int)(short)(((U64)(uStack_c4) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_c0) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar21;
      uVar21 = (ushort)((uint)((int)(short)(((U64)(uStack_c0) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_c8) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar21;
      uStack_d0 = CONCAT22((((U64)(uStack_c0) >> 0) & 0xFFFF) & ~((short)(uVar20 | uVar21) >> 0xf) |
                           (short)uVar21 >> 0xf & (((U64)(uStack_c8) >> 0) & 0xFFFF) |
                           (short)uVar20 >> 0xf & (((U64)(uStack_c4) >> 0) & 0xFFFF),
                           (((U64)(uStack_c0) >> 16) & 0xFFFF) & ~((short)(uVar18 | uVar19) >> 0xf) |
                           (short)uVar19 >> 0xf & (((U64)(uStack_c8) >> 16) & 0xFFFF) |
                           (short)uVar18 >> 0xf & (((U64)(uStack_c4) >> 16) & 0xFFFF));
    }
    else if (iVar28 < iVar23) {
      uStack_d0 = auStack_a8[0];
    }
    else {
      uStack_d0 = auStack_b8[0];
    }
  }
  psVar36 = (short *)(uVar13 * 4 + iVar14);
  psVar36[1] = ((((U64)(uStack_d0) >> 16) & 0xFFFF) + (short)uVar24 + sVar8 & uVar9) - sVar8;
  uVar25 = 0;
  *psVar36 = ((short)((uint)uVar24 >> 0x10) + (((U64)(uStack_d0) >> 0) & 0xFFFF) + sVar10 & uVar11) - sVar10;
  *(undefined4 *)(psVar36 + 2) = *(undefined4 *)psVar36;
  if ((uVar39 & 1) != 0) {
    uVar25 = fn_830C6D68(param_1,param_1[0x54]);
  }
  uStack_c0 = 0;
  lVar31 = 0;
  uStack_c4 = 0;
  uStack_c8 = 0;
  if ((param_3 != 0) && ((*(uint *)(param_2 + -0x18) & 0x20000) != 0)) {
    lVar31 = 1;
    uStack_c8 = *(undefined4 *)((int)((uVar38 + uVar37 & 0xffffffff) << 2) + iVar14 + -4);
  }
  if (!bVar22) {
    uVar38 = uVar38 - uVar37;
    puVar29 = (uint *)(param_2 + iVar26 * -0x18);
    if ((*puVar29 & 0x20000) != 0) {
      lVar27 = lVar31 << 2;
      lVar31 = lVar31 + 1;
      *(undefined4 *)((int)&uStack_c8 + (int)lVar27) =
           *(undefined4 *)((int)((uVar38 & 0xffffffff) << 2) + iVar14);
    }
    if (iVar26 != 1) {
      if (param_3 == iVar26 + -1) {
        uVar38 = uVar38 - 1;
        puVar29 = puVar29 + -6;
      }
      else {
        uVar38 = uVar38 + 2;
        puVar29 = puVar29 + 6;
      }
      if ((*puVar29 & 0x20000) != 0) {
        lVar27 = lVar31 << 2;
        lVar31 = lVar31 + 1;
        *(undefined4 *)((int)&uStack_c8 + (int)lVar27) =
             *(undefined4 *)((int)((uVar38 & 0xffffffff) << 2) + iVar14);
      }
    }
  }
  iVar28 = 0;
  iVar23 = 0;
  iVar26 = (int)lVar31;
  if (iVar26 != 0) {
    puVar33 = &uStack_bc;
    puVar30 = auStack_b8 + 3;
    puVar35 = (ushort *)&uStack_c8;
    do {
      if ((*puVar35 & 4) == 0) {
        iVar28 = iVar28 + 1;
        puVar30 = puVar30 + 1;
        *puVar30 = *(undefined4 *)puVar35;
      }
      else {
        iVar23 = iVar23 + 1;
        puVar33 = puVar33 + 1;
        *puVar33 = *(undefined4 *)puVar35;
      }
      puVar35 = puVar35 + 2;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    if (iVar26 != 0) {
      if ((iVar28 == 3) || (iVar23 == 3)) {
        uVar19 = (ushort)((uint)((int)(short)(((U64)(uStack_c4) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_c8) >> 16) & 0xFFFF)) >> 0x10)
        ;
        uVar18 = (ushort)((uint)((int)(short)(((U64)(uStack_c4) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_c0) >> 16) & 0xFFFF)) >> 0x10)
                 ^ uVar19;
        uVar19 = (ushort)((uint)((int)(short)(((U64)(uStack_c0) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_c8) >> 16) & 0xFFFF)) >> 0x10)
                 ^ uVar19;
        uVar21 = (ushort)((uint)((int)(short)(((U64)(uStack_c4) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_c8) >> 0) & 0xFFFF)) >> 0x10)
        ;
        uVar20 = (ushort)((uint)((int)(short)(((U64)(uStack_c4) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_c0) >> 0) & 0xFFFF)) >> 0x10)
                 ^ uVar21;
        uVar21 = (ushort)((uint)((int)(short)(((U64)(uStack_c0) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_c8) >> 0) & 0xFFFF)) >> 0x10)
                 ^ uVar21;
        uStack_d0 = CONCAT22((((U64)(uStack_c0) >> 0) & 0xFFFF) & ~((short)(uVar20 | uVar21) >> 0xf) |
                             (short)uVar21 >> 0xf & (((U64)(uStack_c8) >> 0) & 0xFFFF) |
                             (short)uVar20 >> 0xf & (((U64)(uStack_c4) >> 0) & 0xFFFF),
                             (((U64)(uStack_c0) >> 16) & 0xFFFF) & ~((short)(uVar18 | uVar19) >> 0xf) |
                             (short)uVar19 >> 0xf & (((U64)(uStack_c8) >> 16) & 0xFFFF) |
                             (short)uVar18 >> 0xf & (((U64)(uStack_c4) >> 16) & 0xFFFF));
      }
      else if (iVar28 < iVar23) {
        uStack_d0 = auStack_b8[0];
      }
      else {
        uStack_d0 = auStack_a8[0];
      }
      goto LAB_830c8ce8;
    }
  }
  uStack_d0 = 0;
LAB_830c8ce8:
  psVar36 = (short *)((uVar13 + uVar7) * 4 + iVar14);
  *psVar36 = ((short)((uint)uVar25 >> 0x10) + (((U64)(uStack_d0) >> 0) & 0xFFFF) + sVar10 & uVar11) - sVar10;
  psVar36[1] = ((((U64)(uStack_d0) >> 16) & 0xFFFF) + (short)uVar25 + sVar8 & uVar9) - sVar8;
  *(undefined4 *)(psVar36 + 2) = *(undefined4 *)psVar36;
  return 0;
}

