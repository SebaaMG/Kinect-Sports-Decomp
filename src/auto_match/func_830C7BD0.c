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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_830C6D68();
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_c0;


undefined8 fn_830C7BD0(int *param_1,int param_2,int param_3,int param_4,uint *param_5)

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
  ushort uVar12;
  short sVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  ulonglong *puVar17;
  byte *pbVar18;
  undefined4 uVar19;
  longlong lVar20;
  int iVar21;
  ushort *puVar22;
  ushort *puVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  bool bVar32;
  int iVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  longlong lVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  uint *puVar40;
  int iVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined4 uStack_c0;
  short sStack_bc;
  short sStack_ba;
  short sStack_b8;
  short sStack_b6;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  uVar7 = *(ushort *)((int)param_1 + 0x32);
  uVar44 = (ulonglong)uVar7;
  uVar14 = *param_5;
  uVar43 = (ulonglong)uVar14;
  iVar41 = (int)(uint)uVar7 >> 1;
  if ((param_4 == 0) || (bVar32 = false, *(int *)(param_1[0x146] + param_4 * 4) != 0)) {
    bVar32 = true;
  }
  piVar15 = (int *)param_1[0x55];
  iVar16 = param_1[0x57];
  sVar8 = *(short *)((int)param_1 + 0x3e);
  uVar9 = *(ushort *)((int)param_1 + 0x42);
  sVar10 = *(short *)(param_1 + 0x10);
  uVar11 = *(ushort *)(param_1 + 0x11);
  puVar17 = (ulonglong *)*param_1;
  if (piVar15 == (int *)0x0) {
    uVar45 = 0;
    *(undefined4 *)((int)puVar17 + 0x14) = 3;
  }
  else {
    iVar33 = *piVar15;
    sVar13 = *(short *)((int)((*puVar17 >> (0x40 - (ulonglong)*(byte *)(piVar15 + 2) & 0x7f) &
                              0xffffffff) << 1) + iVar33);
    uVar45 = (ulonglong)sVar13;
    if (sVar13 < 0) {
      fn_82C4E470(puVar17);
      do {
        uVar42 = *puVar17;
        fn_82C4E470(puVar17,1);
        sVar13 = *(short *)((int)(((uVar45 - ((longlong)uVar42 >> 0x3f)) + 0x8000 & 0xffffffff) << 1
                                 ) + iVar33);
        uVar45 = (ulonglong)sVar13;
      } while (sVar13 < 0);
    }
    else {
      iVar33 = *(int *)(puVar17 + 1);
      iVar21 = (int)(uVar45 & 0xf);
      *puVar17 = *puVar17 << (uVar45 & 0xf);
      *(int *)(puVar17 + 1) = iVar33 - iVar21;
      if (iVar33 < iVar21) {
        do {
          pbVar18 = *(byte **)((int)puVar17 + 0xc);
          if (pbVar18 < (byte *)(*(int *)(puVar17 + 2) - 4U)) {
            bVar1 = *pbVar18;
            bVar2 = pbVar18[1];
            bVar3 = pbVar18[2];
            bVar4 = pbVar18[3];
            bVar5 = pbVar18[4];
            bVar6 = pbVar18[5];
            iVar33 = *(int *)(puVar17 + 1);
            *(byte **)((int)puVar17 + 0xc) = pbVar18 + 6;
            *(int *)(puVar17 + 1) = iVar33 + 0x30;
            *puVar17 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3)
                          * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                        (ulonglong)bVar6 << ((longlong)-iVar33 & 0x7fU)) + *puVar17;
            goto LAB_830c7d34;
          }
          iVar33 = fn_82C4E3B0(puVar17);
        } while (iVar33 == 1);
        uVar45 = (ulonglong)((int)sVar13 >> 4);
      }
      else {
LAB_830c7d34:
        uVar45 = (ulonglong)((int)sVar13 >> 4);
      }
    }
  }
  if (*(int *)(*param_1 + 0x14) != 0) {
    return 1;
  }
  uVar34 = 0;
  if ((uVar45 & 8) != 0) {
    uVar34 = fn_830C6D68(param_1,param_1[0x54]);
  }
  uStack_b0 = 0;
  lVar36 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  if (param_3 != 0) {
    uVar42 = uVar43 - 1;
    if ((*(uint *)(param_2 + -0x18) & 0x20000) != 0) {
      if ((*(uint *)(param_2 + -0x18) & 0x700) < 0x200) {
        uStack_c0 = *(uint *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
      }
      else {
        uVar35 = *(undefined4 *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
        uVar19 = *(undefined4 *)((int)((uVar42 + uVar44 & 0xffffffff) << 2) + iVar16);
        sStack_ba = (short)uVar19;
        sStack_bc = (short)((uint)uVar19 >> 0x10);
        sStack_b8 = (short)((uint)uVar35 >> 0x10);
        sStack_b6 = (short)uVar35;
        uStack_c0 = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                             (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
      }
      lVar36 = 1;
      uStack_b0 = uStack_c0;
    }
  }
  if (!bVar32) {
    uVar42 = uVar43 - uVar44;
    puVar40 = (uint *)(param_2 + iVar41 * -0x18);
    if ((*puVar40 & 0x20000) != 0) {
      if ((*puVar40 & 0x700) < 0x200) {
        uStack_c0 = *(undefined4 *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
      }
      else {
        uVar35 = *(undefined4 *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
        uVar19 = *(undefined4 *)((int)((uVar42 - uVar44 & 0xffffffff) << 2) + iVar16);
        sStack_b6 = (short)uVar19;
        sStack_ba = (short)uVar35;
        sStack_bc = (short)((uint)uVar35 >> 0x10);
        sStack_b8 = (short)((uint)uVar19 >> 0x10);
        uStack_c0 = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                             (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
      }
      lVar20 = lVar36 << 2;
      lVar36 = lVar36 + 1;
      *(uint *)((int)&uStack_b0 + (int)lVar20) = uStack_c0;
    }
    if (iVar41 != 1) {
      if (param_3 == iVar41 + -1) {
        uVar42 = uVar42 - 1;
        puVar40 = puVar40 + -6;
      }
      else {
        uVar42 = uVar42 + 2;
        puVar40 = puVar40 + 6;
      }
      if ((*puVar40 & 0x20000) != 0) {
        if ((*puVar40 & 0x700) < 0x200) {
          uStack_c0 = *(undefined4 *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
        }
        else {
          uVar35 = *(undefined4 *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
          uVar19 = *(undefined4 *)((int)((uVar42 - uVar44 & 0xffffffff) << 2) + iVar16);
          sStack_b6 = (short)uVar19;
          sStack_ba = (short)uVar35;
          sStack_bc = (short)((uint)uVar35 >> 0x10);
          sStack_b8 = (short)((uint)uVar19 >> 0x10);
          uStack_c0 = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                               (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
        }
        lVar20 = lVar36 << 2;
        lVar36 = lVar36 + 1;
        *(uint *)((int)&uStack_b0 + (int)lVar20) = uStack_c0;
      }
    }
  }
  if ((uint)lVar36 < 2) {
    uStack_c0 = -(uint)(lVar36 == 1) & uStack_b0;
  }
  else {
    uVar25 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 16) & 0xFFFF)) >> 0x10);
    uVar24 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_a8) >> 16) & 0xFFFF)) >> 0x10) ^
             uVar25;
    uVar25 = (ushort)((uint)((int)(short)(((U64)(uStack_a8) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 16) & 0xFFFF)) >> 0x10) ^
             uVar25;
    uVar27 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 0) & 0xFFFF)) >> 0x10);
    uVar26 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_a8) >> 0) & 0xFFFF)) >> 0x10) ^
             uVar27;
    uVar27 = (ushort)((uint)((int)(short)(((U64)(uStack_a8) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 0) & 0xFFFF)) >> 0x10) ^
             uVar27;
    uStack_c0 = CONCAT22((((U64)(uStack_a8) >> 0) & 0xFFFF) & ~((short)(uVar26 | uVar27) >> 0xf) |
                         (short)uVar27 >> 0xf & (((U64)(uStack_b0) >> 0) & 0xFFFF) |
                         (short)uVar26 >> 0xf & (((U64)(uStack_ac) >> 0) & 0xFFFF),
                         (((U64)(uStack_a8) >> 16) & 0xFFFF) & ~((short)(uVar24 | uVar25) >> 0xf) |
                         (short)uVar25 >> 0xf & (((U64)(uStack_b0) >> 16) & 0xFFFF) |
                         (short)uVar24 >> 0xf & (((U64)(uStack_ac) >> 16) & 0xFFFF));
  }
  puVar40 = (uint *)(uVar14 * 4 + iVar16);
  *(ushort *)((int)puVar40 + 2) = ((((U64)(uStack_c0) >> 16) & 0xFFFF) + (short)uVar34 + sVar8 & uVar9) - sVar8;
  uVar35 = 0;
  *(ushort *)(uVar14 * 4 + iVar16) =
       ((short)((uint)uVar34 >> 0x10) + (((U64)(uStack_c0) >> 0) & 0xFFFF) + sVar10 & uVar11) - sVar10;
  if ((uVar45 & 4) != 0) {
    uVar35 = fn_830C6D68(param_1,param_1[0x54]);
  }
  uStack_b0 = *puVar40;
  uVar38 = 1;
  uStack_a8 = 0;
  uStack_ac = 0;
  if (!bVar32) {
    lVar36 = uVar43 - uVar44;
    uVar42 = lVar36 + 1;
    puVar37 = (uint *)(param_2 + iVar41 * -0x18);
    if ((*puVar37 & 0x20000) != 0) {
      if ((*puVar37 & 0x700) < 0x200) {
        uStack_c0 = *(uint *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
      }
      else {
        uVar34 = *(undefined4 *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
        uVar19 = *(undefined4 *)((int)((uVar42 - uVar44 & 0xffffffff) << 2) + iVar16);
        sStack_ba = (short)uVar34;
        sStack_b6 = (short)uVar19;
        sStack_b8 = (short)((uint)uVar19 >> 0x10);
        sStack_bc = (short)((uint)uVar34 >> 0x10);
        uStack_c0 = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                             (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
      }
      uVar38 = 2;
      uStack_ac = uStack_c0;
    }
    uVar39 = uVar38;
    if (iVar41 != 1) {
      if (param_3 == iVar41 + -1) {
        uVar42 = lVar36 - 1;
        puVar37 = puVar37 + -6;
      }
      else {
        uVar42 = lVar36 + 2;
        puVar37 = puVar37 + 6;
      }
      if ((*puVar37 & 0x20000) != 0) {
        if ((*puVar37 & 0x700) < 0x200) {
          uStack_c0 = *(uint *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
        }
        else {
          uVar34 = *(undefined4 *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
          uVar19 = *(undefined4 *)((int)((uVar42 - uVar44 & 0xffffffff) << 2) + iVar16);
          sStack_bc = (short)((uint)uVar34 >> 0x10);
          sStack_b6 = (short)uVar19;
          sStack_ba = (short)uVar34;
          sStack_b8 = (short)((uint)uVar19 >> 0x10);
          uStack_c0 = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                               (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
        }
        uVar39 = uVar38 + 1;
        (&uStack_b0)[uVar38] = uStack_c0;
      }
    }
    if (1 < uVar39) {
      uVar25 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 16) & 0xFFFF)) >> 0x10);
      uVar24 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_a8) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar25;
      uVar25 = (ushort)((uint)((int)(short)(((U64)(uStack_a8) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar25;
      uVar27 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 0) & 0xFFFF)) >> 0x10);
      uVar26 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_a8) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar27;
      uVar27 = (ushort)((uint)((int)(short)(((U64)(uStack_a8) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar27;
      uStack_c0 = CONCAT22((((U64)(uStack_a8) >> 0) & 0xFFFF) & ~((short)(uVar26 | uVar27) >> 0xf) |
                           (short)uVar27 >> 0xf & (((U64)(uStack_b0) >> 0) & 0xFFFF) |
                           (short)uVar26 >> 0xf & (((U64)(uStack_ac) >> 0) & 0xFFFF),
                           (((U64)(uStack_a8) >> 16) & 0xFFFF) & ~((short)(uVar24 | uVar25) >> 0xf) |
                           (short)uVar25 >> 0xf & (((U64)(uStack_b0) >> 16) & 0xFFFF) |
                           (short)uVar24 >> 0xf & (((U64)(uStack_ac) >> 16) & 0xFFFF));
      goto LAB_830c8350;
    }
    if (uVar39 != 1) goto LAB_830c8350;
  }
  uStack_c0 = uStack_b0;
LAB_830c8350:
  *(ushort *)((int)puVar40 + 6) = ((((U64)(uStack_c0) >> 16) & 0xFFFF) + (short)uVar35 + sVar8 & uVar9) - sVar8;
  uVar34 = 0;
  *(ushort *)(puVar40 + 1) =
       ((short)((uint)uVar35 >> 0x10) + (((U64)(uStack_c0) >> 0) & 0xFFFF) + sVar10 & uVar11) - sVar10;
  if ((uVar45 & 2) != 0) {
    uVar34 = fn_830C6D68(param_1,param_1[0x54]);
  }
  iVar41 = 0;
  uStack_a8 = 0;
  if (param_3 != 0) {
    uVar43 = (uVar43 + uVar44) - 1;
    if ((*(uint *)(param_2 + -0x18) & 0x20000) != 0) {
      if ((*(uint *)(param_2 + -0x18) & 0x700) < 0x200) {
        uStack_b0 = *(uint *)((int)((uVar43 & 0xffffffff) << 2) + iVar16);
      }
      else {
        uVar35 = *(undefined4 *)((int)((uVar43 & 0xffffffff) << 2) + iVar16);
        uVar19 = *(undefined4 *)((int)((uVar43 - uVar44 & 0xffffffff) << 2) + iVar16);
        sStack_ba = (short)uVar35;
        sStack_b6 = (short)uVar19;
        sStack_bc = (short)((uint)uVar35 >> 0x10);
        sStack_b8 = (short)((uint)uVar19 >> 0x10);
        uStack_b0 = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                             (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
      }
      iVar41 = 1;
    }
  }
  uVar38 = puVar40[1];
  (&uStack_b0)[iVar41] = *puVar40;
  (&uStack_ac)[iVar41] = uVar38;
  puVar22 = (ushort *)((uVar14 + uVar7) * 4 + iVar16);
  uVar25 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 16) & 0xFFFF)) >> 0x10);
  uVar24 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_a8) >> 16) & 0xFFFF)) >> 0x10) ^
           uVar25;
  uVar25 = (ushort)((uint)((int)(short)(((U64)(uStack_a8) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 16) & 0xFFFF)) >> 0x10) ^
           uVar25;
  uVar27 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 0) & 0xFFFF)) >> 0x10);
  uVar26 = (ushort)((uint)((int)(short)(((U64)(uStack_ac) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_a8) >> 0) & 0xFFFF)) >> 0x10) ^
           uVar27;
  uVar27 = (ushort)((uint)((int)(short)(((U64)(uStack_a8) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_b0) >> 0) & 0xFFFF)) >> 0x10) ^
           uVar27;
  puVar22[1] = (((((U64)(uStack_a8) >> 16) & 0xFFFF) & ~((short)(uVar24 | uVar25) >> 0xf) |
                 (short)uVar25 >> 0xf & (((U64)(uStack_b0) >> 16) & 0xFFFF) | (short)uVar24 >> 0xf & (((U64)(uStack_ac) >> 16) & 0xFFFF)) +
                (short)uVar34 + sVar8 & uVar9) - sVar8;
  uVar35 = 0;
  *puVar22 = ((short)((uint)uVar34 >> 0x10) +
              ((((U64)(uStack_a8) >> 0) & 0xFFFF) & ~((short)(uVar26 | uVar27) >> 0xf) |
               (short)uVar27 >> 0xf & (((U64)(uStack_b0) >> 0) & 0xFFFF) | (short)uVar26 >> 0xf & (((U64)(uStack_ac) >> 0) & 0xFFFF)) +
              sVar10 & uVar11) - sVar10;
  if ((uVar45 & 1) != 0) {
    uVar35 = fn_830C6D68(param_1,param_1[0x54]);
  }
  uVar24 = puVar22[1];
  uVar25 = *puVar22;
  puVar23 = (ushort *)(((uVar14 + uVar7) - (uint)uVar7) * 4 + iVar16);
  uVar7 = puVar23[1];
  uVar26 = puVar23[3];
  uVar27 = puVar23[2];
  uVar12 = *puVar23;
  uVar31 = (ushort)((uint)((int)(short)uVar26 - (int)(short)uVar7) >> 0x10);
  uVar30 = (ushort)((uint)((int)(short)uVar26 - (int)(short)uVar24) >> 0x10) ^ uVar31;
  uVar31 = (ushort)((uint)((int)(short)uVar24 - (int)(short)uVar7) >> 0x10) ^ uVar31;
  uVar29 = (ushort)((uint)((int)(short)uVar27 - (int)(short)uVar12) >> 0x10);
  uVar28 = (ushort)((uint)((int)(short)uVar27 - (int)(short)uVar25) >> 0x10) ^ uVar29;
  uVar29 = (ushort)((uint)((int)(short)uVar25 - (int)(short)uVar12) >> 0x10) ^ uVar29;
  puVar22[2] = ((short)((uint)uVar35 >> 0x10) +
                (uVar25 & ~((short)(uVar28 | uVar29) >> 0xf) | (short)uVar29 >> 0xf & uVar12 |
                (short)uVar28 >> 0xf & uVar27) + sVar10 & uVar11) - sVar10;
  puVar22[3] = ((uVar24 & ~((short)(uVar30 | uVar31) >> 0xf) | (short)uVar30 >> 0xf & uVar26 |
                (short)uVar31 >> 0xf & uVar7) + (short)uVar35 + sVar8 & uVar9) - sVar8;
  return 0;
}

