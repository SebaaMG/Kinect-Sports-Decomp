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
extern unsigned int *auStack_110;
extern unsigned int *auStack_118;
extern unsigned int *auStack_120;
extern unsigned int *auStack_e0;
extern int fn_82230190();
extern int fn_822301D0();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D2BB28();
extern int fn_82D2D830();
extern int fn_82D2D908();
extern int fn_82D2DA50();
extern int fn_82D2ED10();
extern int fn_82D310C8();
extern int iRam8323b6cc;
extern unsigned int iStack0000001c;
extern unsigned int uRam8323b6c8;
extern unsigned int uRam8323b6d0;
extern unsigned int uStack_124;
extern unsigned int uStack_128;


undefined4 *
fn_82D31238(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5,
             uint *param_6,char param_7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  int *piVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  undefined4 *puStack00000014;
  int iStack0000001c;
  char cStack00000037;
  uint uStack_128;
  uint uStack_124;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [224];
  
  uVar16 = *param_6;
  uVar27 = param_6[1];
  uVar26 = param_6[2];
  uVar25 = (ulonglong)uVar26;
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  cStack00000037 = param_5;
  if (uVar16 == 0) {
    iVar15 = fn_82D2D830(param_2 + 0x10);
    *(undefined4 *)(iVar15 + 0xc) = param_4;
    *(undefined4 *)(iVar15 + 8) = param_3;
    uVar17 = uVar25 + 1;
    uVar24 = -(ulonglong)(uVar25 != 2) & uVar17;
    *(undefined4 *)(iVar15 + 0x10) = 0xffffffff;
    iVar13 = *(int *)((int)(((-(ulonglong)(uVar24 != 2) & uVar24 + 1) + 2 & 0xffffffff) << 2) +
                     uVar27);
    iVar2 = *(int *)((int)((uVar24 + 2 & 0xffffffff) << 2) + uVar27);
    iVar12 = *(int *)(iVar13 + 8);
    if ((*(int *)(iVar2 + 8) < iVar12) ||
       ((*(int *)(iVar2 + 8) <= iVar12 &&
        ((iVar12 = *(int *)(iVar13 + 0xc), *(int *)(iVar2 + 0xc) < iVar12 ||
         (*(int *)(iVar2 + 0xc) <= iVar12)))))) {
      bVar29 = true;
    }
    else {
      bVar29 = false;
    }
    if ((bVar29) ||
       (bVar29 = false,
       (*(uint *)((int)((uVar24 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)) {
      bVar29 = true;
    }
    uVar18 = uVar24;
    uVar16 = uVar27;
    if (!bVar29) {
      uVar16 = *(uint *)((int)((uVar24 + 5 & 0xffffffff) << 2) + uVar27);
      uVar18 = (ulonglong)uVar16 & 3;
      uVar16 = uVar16 & 0xfffffffc;
    }
    bVar29 = ((uint)(*(ushort *)(uVar16 + 0x20) >> 0xd) & 1 << ((uint)uVar18 & 0x3f)) != 0;
    if (bVar29) {
      iVar13 = *(int *)((int)(((-(ulonglong)(uVar24 != 2) & uVar24 + 1) + 2 & 0xffffffff) << 2) +
                       uVar27);
      iVar12 = *(int *)(iVar13 + 8);
      if ((*(int *)(iVar2 + 8) < iVar12) ||
         ((*(int *)(iVar2 + 8) <= iVar12 &&
          ((iVar12 = *(int *)(iVar13 + 0xc), *(int *)(iVar2 + 0xc) < iVar12 ||
           (*(int *)(iVar2 + 0xc) <= iVar12)))))) {
        bVar30 = true;
      }
      else {
        bVar30 = false;
      }
      if ((bVar30) ||
         (bVar30 = false,
         (*(uint *)((int)((uVar24 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)) {
        bVar30 = true;
      }
      uVar16 = uVar27;
      if (!bVar30) {
        uVar16 = *(uint *)((int)((uVar24 + 5 & 0xffffffff) << 2) + uVar27);
        uVar24 = (ulonglong)uVar16 & 3;
        uVar16 = uVar16 & 0xfffffffc;
      }
      *(ushort *)(uVar16 + 0x20) =
           ((ushort)((~(ulonglong)(uint)(1 << ((uint)uVar24 & 0x3f)) & 0xffffffff) << 0xd) | 0x1fff)
           & *(ushort *)(uVar16 + 0x20);
    }
    uVar24 = 2;
    if (uVar25 != 0) {
      uVar24 = uVar25 - 1;
    }
    iVar13 = *(int *)((int)((uVar24 + 2 & 0xffffffff) << 2) + uVar27);
    iVar2 = *(int *)((int)(((-(ulonglong)(uVar24 != 2) & uVar24 + 1) + 2 & 0xffffffff) << 2) +
                    uVar27);
    iVar12 = *(int *)(iVar2 + 8);
    if ((*(int *)(iVar13 + 8) < iVar12) ||
       ((*(int *)(iVar13 + 8) <= iVar12 &&
        ((iVar12 = *(int *)(iVar2 + 0xc), *(int *)(iVar13 + 0xc) < iVar12 ||
         (*(int *)(iVar13 + 0xc) <= iVar12)))))) {
      bVar30 = true;
    }
    else {
      bVar30 = false;
    }
    if ((bVar30) ||
       (bVar30 = false,
       (*(uint *)((int)((uVar24 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)) {
      bVar30 = true;
    }
    uVar18 = uVar24;
    uVar16 = uVar27;
    if (!bVar30) {
      uVar16 = *(uint *)((int)((uVar24 + 5 & 0xffffffff) << 2) + uVar27);
      uVar18 = (ulonglong)uVar16 & 3;
      uVar16 = uVar16 & 0xfffffffc;
    }
    bVar30 = ((uint)(*(ushort *)(uVar16 + 0x20) >> 0xd) & 1 << ((uint)uVar18 & 0x3f)) != 0;
    if (bVar30) {
      iVar2 = *(int *)((int)(((-(ulonglong)(uVar24 != 2) & uVar24 + 1) + 2 & 0xffffffff) << 2) +
                      uVar27);
      iVar12 = *(int *)(iVar2 + 8);
      if ((*(int *)(iVar13 + 8) < iVar12) ||
         ((*(int *)(iVar13 + 8) <= iVar12 &&
          ((iVar12 = *(int *)(iVar2 + 0xc), *(int *)(iVar13 + 0xc) < iVar12 ||
           (*(int *)(iVar13 + 0xc) <= iVar12)))))) {
        bVar31 = true;
      }
      else {
        bVar31 = false;
      }
      if ((bVar31) ||
         (bVar31 = false,
         (*(uint *)((int)((uVar24 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)) {
        bVar31 = true;
      }
      uVar16 = uVar27;
      if (!bVar31) {
        uVar16 = *(uint *)((int)((uVar24 + 5 & 0xffffffff) << 2) + uVar27);
        uVar24 = (ulonglong)uVar16 & 3;
        uVar16 = uVar16 & 0xfffffffc;
      }
      *(ushort *)(uVar16 + 0x20) =
           ((ushort)((~(ulonglong)(uint)(1 << ((uint)uVar24 & 0x3f)) & 0xffffffff) << 0xd) | 0x1fff)
           & *(ushort *)(uVar16 + 0x20);
    }
    lVar21 = 2;
    if (uVar25 != 0) {
      lVar21 = uVar25 - 1;
    }
    iVar12 = *(int *)((int)((lVar21 + 2U & 0xffffffff) << 2) + uVar27);
    iVar13 = *(int *)((int)(((-(ulonglong)(uVar25 != 2) & uVar17) + 2 & 0xffffffff) << 2) + uVar27);
    uVar16 = fn_82D2D908(param_2 + 0x28,auStack_110);
    iVar2 = iStack0000001c;
    *(undefined2 *)(uVar16 + 0x20) = 0;
    *(int *)(uVar16 + 8) = iVar13;
    *(int *)(uVar16 + 0xc) = iVar12;
    *(int *)(uVar16 + 0x10) = iVar15;
    *(undefined2 *)(uVar16 + 0x22) = 0;
    lVar21 = 2;
    *(uint *)((((*(int *)(iVar13 + 0xc) + *(int *)(iVar12 + 0xc) + *(int *)(iVar15 + 0xc)) / 3 >>
               0xb) * 0x10 +
               ((*(int *)(iVar13 + 8) + *(int *)(iVar12 + 8) + *(int *)(iVar15 + 8)) / 3 >> 0xb) +
              0x97) * 4 + iStack0000001c) = uVar16;
    *(ushort *)(uVar16 + 0x20) = *(ushort *)(uVar16 + 0x20) | 0x1000;
    if (uVar25 != 0) {
      lVar21 = uVar25 - 1;
    }
    iVar12 = *(int *)((int)((uVar25 + 2 & 0xffffffff) << 2) + uVar27);
    iVar13 = *(int *)((int)((lVar21 + 2U & 0xffffffff) << 2) + uVar27);
    uVar11 = fn_82D2D908(param_2 + 0x28,auStack_110);
    *(undefined2 *)(uVar11 + 0x20) = 0;
    *(int *)(uVar11 + 0x10) = iVar15;
    *(int *)(uVar11 + 8) = iVar13;
    *(int *)(uVar11 + 0xc) = iVar12;
    *(undefined2 *)(uVar11 + 0x22) = 0;
    lVar21 = 2;
    *(uint *)((((*(int *)(iVar13 + 0xc) + *(int *)(iVar12 + 0xc) + *(int *)(iVar15 + 0xc)) / 3 >>
               0xb) * 0x10 +
               ((*(int *)(iVar13 + 8) + *(int *)(iVar12 + 8) + *(int *)(iVar15 + 8)) / 3 >> 0xb) +
              0x97) * 4 + iVar2) = uVar11;
    *(ushort *)(uVar11 + 0x20) = *(ushort *)(uVar11 + 0x20) | 0x1000;
    if (uVar25 != 0) {
      lVar21 = uVar25 - 1;
    }
    *(int *)((int)((lVar21 + 2U & 0xffffffff) << 2) + uVar27) = iVar15;
    uVar1 = *(undefined2 *)(uVar27 + 0x22);
    *(undefined2 *)(uVar11 + 0x22) = uVar1;
    *(undefined2 *)(uVar16 + 0x22) = uVar1;
    uVar19 = *(uint *)((int)(((-(ulonglong)(uVar25 != 2) & uVar17) + 5 & 0xffffffff) << 2) + uVar27)
    ;
    uVar10 = uVar19 & 0xfffffffc;
    uVar19 = uVar19 & 3;
    *(uint *)(uVar16 + 0x14) = uVar10 + uVar19;
    if (uVar10 != 0) {
      *(uint *)((uVar19 + 5) * 4 + uVar10) = uVar16;
    }
    lVar21 = 2;
    if (uVar25 != 0) {
      lVar21 = uVar25 - 1;
    }
    uVar19 = *(uint *)((int)((lVar21 + 5U & 0xffffffff) << 2) + uVar27);
    uVar10 = uVar19 & 0xfffffffc;
    uVar19 = uVar19 & 3;
    *(uint *)(uVar11 + 0x14) = uVar10 + uVar19;
    if (uVar10 != 0) {
      *(uint *)((uVar19 + 5) * 4 + uVar10) = uVar11;
    }
    *(uint *)(uVar16 + 0x18) = uVar11 + 2;
    *(uint *)(uVar11 + 0x1c) = uVar16 + 1;
    uVar17 = -(ulonglong)(uVar25 != 2) & uVar17;
    *(uint *)(uVar16 + 0x1c) = uVar27 + (int)uVar17;
    *(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar27) = uVar16 + 2;
    lVar21 = 2;
    if (uVar25 != 0) {
      lVar21 = uVar25 - 1;
    }
    *(uint *)(uVar11 + 0x18) = (int)lVar21 + uVar27;
    *(uint *)((int)((lVar21 + 5U & 0xffffffff) << 2) + uVar27) = uVar11 + 1;
    if (bVar29) {
      iVar12 = *(int *)(*(int *)(uVar16 + 0xc) + 8);
      iVar13 = *(int *)(*(int *)(uVar16 + 8) + 8);
      if ((iVar13 < iVar12) ||
         ((iVar13 <= iVar12 &&
          ((iVar12 = *(int *)(*(int *)(uVar16 + 8) + 0xc),
           iVar13 = *(int *)(*(int *)(uVar16 + 0xc) + 0xc), iVar12 < iVar13 || (iVar12 <= iVar13))))
         )) {
        bVar29 = true;
      }
      else {
        bVar29 = false;
      }
      if ((bVar29) || (bVar29 = false, (*(uint *)(uVar16 + 0x14) & 0xfffffffc) == 0)) {
        bVar29 = true;
      }
      if (bVar29) {
        uVar19 = 0;
        uVar10 = uVar16;
      }
      else {
        uVar19 = *(uint *)(uVar16 + 0x14) & 3;
        uVar10 = *(uint *)(uVar16 + 0x14) & 0xfffffffc;
      }
      *(ushort *)(uVar10 + 0x20) =
           *(ushort *)(uVar10 + 0x20) & 0x1fff |
           (ushort)((1 << uVar19) << 0xd) | *(ushort *)(uVar10 + 0x20) & 0xe000;
    }
    if (bVar30) {
      iVar12 = *(int *)(*(int *)(uVar11 + 0xc) + 8);
      iVar13 = *(int *)(*(int *)(uVar11 + 8) + 8);
      if ((iVar13 < iVar12) ||
         ((iVar13 <= iVar12 &&
          ((iVar12 = *(int *)(*(int *)(uVar11 + 8) + 0xc),
           iVar13 = *(int *)(*(int *)(uVar11 + 0xc) + 0xc), iVar12 < iVar13 || (iVar12 <= iVar13))))
         )) {
        bVar29 = true;
      }
      else {
        bVar29 = false;
      }
      if ((bVar29) || (bVar29 = false, (*(uint *)(uVar11 + 0x14) & 0xfffffffc) == 0)) {
        bVar29 = true;
      }
      if (bVar29) {
        uVar19 = 0;
        uVar10 = uVar11;
      }
      else {
        uVar19 = *(uint *)(uVar11 + 0x14) & 3;
        uVar10 = *(uint *)(uVar11 + 0x14) & 0xfffffffc;
      }
      *(ushort *)(uVar10 + 0x20) =
           *(ushort *)(uVar10 + 0x20) & 0x1fff |
           (ushort)((1 << uVar19) << 0xd) | *(ushort *)(uVar10 + 0x20) & 0xe000;
    }
    uVar4 = *(undefined4 *)(uVar16 + 0x10);
    uVar19 = 2;
    if (param_5 != '\0') {
      piVar28 = (int *)(iVar2 + 0x40);
      iVar12 = fn_82CE5410();
      if (*(uint *)(iVar2 + 0x44) == (*(uint *)(iVar2 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar28,8);
      }
      puVar14 = (uint *)(*(int *)(iVar2 + 0x44) * 8 + *piVar28);
      if (puVar14 != (uint *)0x0) {
        *puVar14 = uVar16;
        puVar14[1] = 0;
      }
      *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + 1;
      iVar12 = fn_82CE5410();
      if (*(uint *)(iVar2 + 0x44) == (*(uint *)(iVar2 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar28,8);
      }
      puVar14 = (uint *)(*(int *)(iVar2 + 0x44) * 8 + *piVar28);
      if (puVar14 != (uint *)0x0) {
        *puVar14 = uVar11;
        puVar14[1] = 0;
      }
      *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + 1;
      iVar12 = fn_82CE5410();
      if (*(uint *)(iVar2 + 0x44) == (*(uint *)(iVar2 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar28,8);
      }
      puVar14 = (uint *)(*(int *)(iVar2 + 0x44) * 8 + *piVar28);
      if (puVar14 != (uint *)0x0) {
        *puVar14 = uVar27;
        puVar14[1] = uVar26;
      }
      *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + 1;
      fn_82D2DA50(iVar2);
      uStack_124 = 2;
      uStack_128 = uVar16;
      puVar14 = (uint *)fn_82D2BB28(auStack_118,iVar2,&uStack_128,uVar4);
      uVar16 = *puVar14;
      uVar19 = puVar14[1];
    }
    *puStack00000014 = 0;
    puStack00000014[2] = uVar19;
    puStack00000014[1] = uVar16;
    return puStack00000014;
  }
  if (uVar16 != 1) {
    if (2 < uVar16) {
      uVar16 = uRam8323b6d0 & 1;
      if ((uRam8323b6d0 & 1) == 0) {
        uRam8323b6d0 = uRam8323b6d0 | 1;
        iRam8323b6cc = 0;
        uRam8323b6c8 = uVar16;
      }
      *param_1 = 10;
      uVar16 = uRam8323b6c8;
      param_1[2] = iRam8323b6cc;
      param_1[1] = uVar16;
      return param_1;
    }
    iVar12 = *(int *)((int)((uVar25 + 2 & 0xffffffff) << 2) + uVar27);
    uVar16 = *(uint *)(iVar12 + 0x10);
    if ((uVar16 & 0x80000000) == 0) {
      *(uint *)(iVar12 + 0x10) = uVar16 | 0x80000000;
      *param_1 = 0;
      param_1[1] = uVar27;
      param_1[2] = uVar26;
      return param_1;
    }
    *param_1 = 1;
    param_1[1] = uVar27;
    param_1[2] = uVar26;
    return param_1;
  }
  if (param_7 == '\0') {
    iVar2 = *(int *)((int)((uVar25 + 2 & 0xffffffff) << 2) + uVar27);
    iVar15 = *(int *)((int)(((-(ulonglong)(uVar25 != 2) & uVar25 + 1) + 2 & 0xffffffff) << 2) +
                     uVar27);
    iVar12 = *(int *)(iVar2 + 8);
    iVar13 = *(int *)(iVar15 + 8);
    if ((iVar12 < iVar13) ||
       ((iVar12 <= iVar13 &&
        ((iVar12 = *(int *)(iVar2 + 0xc), iVar13 = *(int *)(iVar15 + 0xc), iVar12 < iVar13 ||
         (iVar12 <= iVar13)))))) {
      bVar29 = true;
    }
    else {
      bVar29 = false;
    }
    if ((bVar29) ||
       (bVar29 = false,
       (*(uint *)((int)((uVar25 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)) {
      bVar29 = true;
    }
    uVar16 = uVar26;
    uVar11 = uVar27;
    if (!bVar29) {
      uVar11 = *(uint *)((int)((uVar25 + 5 & 0xffffffff) << 2) + uVar27);
      uVar16 = uVar11 & 3;
      uVar11 = uVar11 & 0xfffffffc;
    }
    if (((uint)(*(ushort *)(uVar11 + 0x20) >> 0xd) & 1 << (uVar16 & 0x3f)) != 0) {
      *param_1 = 2;
      param_1[1] = uVar27;
      param_1[2] = uVar26;
      return param_1;
    }
  }
  iVar9 = fn_82D2D830(param_2 + 0x10,auStack_110);
  uVar24 = uVar25 + 1;
  *(undefined4 *)(iVar9 + 8) = param_3;
  *(undefined4 *)(iVar9 + 0xc) = param_4;
  *(undefined4 *)(iVar9 + 0x10) = 0xffffffff;
  iVar15 = (int)((uVar25 + 2 & 0x3fffffff) << 2);
  iVar13 = *(int *)(iVar15 + uVar27);
  iVar2 = *(int *)((int)(((-(ulonglong)(uVar25 != 2) & uVar24) + 2 & 0xffffffff) << 2) + uVar27);
  iVar12 = *(int *)(iVar2 + 8);
  if ((*(int *)(iVar13 + 8) < iVar12) ||
     ((*(int *)(iVar13 + 8) <= iVar12 &&
      ((iVar12 = *(int *)(iVar2 + 0xc), *(int *)(iVar13 + 0xc) < iVar12 ||
       (*(int *)(iVar13 + 0xc) <= iVar12)))))) {
    bVar29 = true;
  }
  else {
    bVar29 = false;
  }
  if ((bVar29) ||
     (bVar29 = false, (*(uint *)((int)((uVar25 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)
     ) {
    bVar29 = true;
  }
  uVar16 = uVar26;
  uVar11 = uVar27;
  if (!bVar29) {
    uVar11 = *(uint *)((int)((uVar25 + 5 & 0xffffffff) << 2) + uVar27);
    uVar16 = uVar11 & 3;
    uVar11 = uVar11 & 0xfffffffc;
  }
  bVar29 = ((uint)(*(ushort *)(uVar11 + 0x20) >> 0xd) & 1 << (uVar16 & 0x3f)) != 0;
  if (bVar29) {
    iVar2 = *(int *)((int)(((-(ulonglong)(uVar25 != 2) & uVar24) + 2 & 0xffffffff) << 2) + uVar27);
    iVar12 = *(int *)(iVar2 + 8);
    if ((*(int *)(iVar13 + 8) < iVar12) ||
       ((*(int *)(iVar13 + 8) <= iVar12 &&
        ((iVar12 = *(int *)(iVar2 + 0xc), *(int *)(iVar13 + 0xc) < iVar12 ||
         (*(int *)(iVar13 + 0xc) <= iVar12)))))) {
      bVar30 = true;
    }
    else {
      bVar30 = false;
    }
    if ((bVar30) ||
       (bVar30 = false,
       (*(uint *)((int)((uVar25 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)) {
      bVar30 = true;
    }
    uVar16 = uVar26;
    uVar11 = uVar27;
    if (!bVar30) {
      uVar11 = *(uint *)((int)((uVar25 + 5 & 0xffffffff) << 2) + uVar27);
      uVar16 = uVar11 & 3;
      uVar11 = uVar11 & 0xfffffffc;
    }
    *(ushort *)(uVar11 + 0x20) =
         ((ushort)((~(ulonglong)(uint)(1 << (uVar16 & 0x3f)) & 0xffffffff) << 0xd) | 0x1fff) &
         *(ushort *)(uVar11 + 0x20);
  }
  fn_82230190(auStack_e0,0x20,2,0xffffffff82d2da28);
  if (bVar29) {
    uStack_128 = uVar27;
    uStack_124 = uVar26;
    fn_82D310C8(param_2,&uStack_128,auStack_e0);
  }
  iVar13 = iStack0000001c;
  uVar17 = 2;
  iVar12 = (int)((uVar25 + 5 & 0xffffffff) << 2);
  uVar16 = *(uint *)(iVar12 + uVar27);
  if ((uVar16 & 0xfffffffc) == 0) {
    if (uVar25 != 0) {
      uVar17 = uVar25 - 1;
    }
    iVar2 = *(int *)((int)((uVar17 + 2 & 0xffffffff) << 2) + uVar27);
    iVar3 = *(int *)((int)(((-(ulonglong)(uVar17 != 2) & uVar17 + 1) + 2 & 0xffffffff) << 2) +
                    uVar27);
    iVar12 = *(int *)(iVar3 + 8);
    if ((*(int *)(iVar2 + 8) < iVar12) ||
       ((*(int *)(iVar2 + 8) <= iVar12 &&
        ((iVar12 = *(int *)(iVar3 + 0xc), *(int *)(iVar2 + 0xc) < iVar12 ||
         (*(int *)(iVar2 + 0xc) <= iVar12)))))) {
      bVar30 = true;
    }
    else {
      bVar30 = false;
    }
    if ((bVar30) ||
       (bVar30 = false,
       (*(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)) {
      bVar30 = true;
    }
    uVar18 = uVar17;
    uVar16 = uVar27;
    if (!bVar30) {
      uVar16 = *(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar27);
      uVar18 = (ulonglong)uVar16 & 3;
      uVar16 = uVar16 & 0xfffffffc;
    }
    bVar30 = ((uint)(*(ushort *)(uVar16 + 0x20) >> 0xd) & 1 << ((uint)uVar18 & 0x3f)) != 0;
    if (bVar30) {
      iVar3 = *(int *)((int)(((-(ulonglong)(uVar17 != 2) & uVar17 + 1) + 2 & 0xffffffff) << 2) +
                      uVar27);
      iVar12 = *(int *)(iVar3 + 8);
      if ((*(int *)(iVar2 + 8) < iVar12) ||
         ((*(int *)(iVar2 + 8) <= iVar12 &&
          ((iVar12 = *(int *)(iVar3 + 0xc), *(int *)(iVar2 + 0xc) < iVar12 ||
           (*(int *)(iVar2 + 0xc) <= iVar12)))))) {
        bVar31 = true;
      }
      else {
        bVar31 = false;
      }
      if ((bVar31) ||
         (bVar31 = false,
         (*(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)) {
        bVar31 = true;
      }
      uVar16 = uVar27;
      if (!bVar31) {
        uVar16 = *(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar27);
        uVar17 = (ulonglong)uVar16 & 3;
        uVar16 = uVar16 & 0xfffffffc;
      }
      *(ushort *)(uVar16 + 0x20) =
           ((ushort)((~(ulonglong)(uint)(1 << ((uint)uVar17 & 0x3f)) & 0xffffffff) << 0xd) | 0x1fff)
           & *(ushort *)(uVar16 + 0x20);
    }
    lVar21 = 2;
    if (uVar25 != 0) {
      lVar21 = uVar25 - 1;
    }
    iVar12 = *(int *)(iVar15 + uVar27);
    iVar2 = *(int *)((int)((lVar21 + 2U & 0xffffffff) << 2) + uVar27);
    uVar11 = fn_82D2D908(iStack0000001c + 0x28,auStack_110);
    *(undefined2 *)(uVar11 + 0x20) = 0;
    *(undefined2 *)(uVar11 + 0x22) = 0;
    *(int *)(uVar11 + 8) = iVar2;
    *(int *)(uVar11 + 0x10) = iVar9;
    *(int *)(uVar11 + 0xc) = iVar12;
    *(uint *)((((*(int *)(iVar2 + 0xc) + *(int *)(iVar12 + 0xc) + *(int *)(iVar9 + 0xc)) / 3 >> 0xb)
               * 0x10 + ((*(int *)(iVar2 + 8) + *(int *)(iVar12 + 8) + *(int *)(iVar9 + 8)) / 3 >>
                        0xb) + 0x97) * 4 + iVar13) = uVar11;
    *(ushort *)(uVar11 + 0x20) = *(ushort *)(uVar11 + 0x20) | 0x1000;
    *(undefined2 *)(uVar11 + 0x22) = *(undefined2 *)(uVar27 + 0x22);
    lVar21 = 2;
    *(int *)(iVar15 + uVar27) = iVar9;
    if (uVar25 != 0) {
      lVar21 = uVar25 - 1;
    }
    uVar16 = *(uint *)((int)((lVar21 + 5U & 0xffffffff) << 2) + uVar27);
    uVar19 = uVar16 & 0xfffffffc;
    uVar16 = uVar16 & 3;
    *(uint *)(uVar11 + 0x14) = uVar19 + uVar16;
    if (uVar19 != 0) {
      *(uint *)((uVar16 + 5) * 4 + uVar19) = uVar11;
    }
    if ((uRam8323b6d0 & 1) == 0) {
      uRam8323b6d0 = uRam8323b6d0 | 1;
      uRam8323b6c8 = 0;
      iRam8323b6cc = 0;
    }
    *(uint *)(uVar11 + 0x18) = iRam8323b6cc + uRam8323b6c8;
    if (uRam8323b6c8 != 0) {
      *(uint *)((iRam8323b6cc + 5) * 4 + uRam8323b6c8) = uVar11 + 1;
    }
    lVar21 = 2;
    if (uVar25 != 0) {
      lVar21 = uVar25 - 1;
    }
    *(uint *)(uVar11 + 0x1c) = (int)lVar21 + uVar27;
    *(uint *)((int)((lVar21 + 5U & 0xffffffff) << 2) + uVar27) = uVar11 + 2;
    if (bVar30) {
      iVar12 = *(int *)(*(int *)(uVar11 + 0xc) + 8);
      iVar2 = *(int *)(*(int *)(uVar11 + 8) + 8);
      if ((iVar2 < iVar12) ||
         ((iVar2 <= iVar12 &&
          ((iVar12 = *(int *)(*(int *)(uVar11 + 8) + 0xc),
           iVar2 = *(int *)(*(int *)(uVar11 + 0xc) + 0xc), iVar12 < iVar2 || (iVar12 <= iVar2))))))
      {
        bVar30 = true;
      }
      else {
        bVar30 = false;
      }
      if ((bVar30) || (bVar30 = false, (*(uint *)(uVar11 + 0x14) & 0xfffffffc) == 0)) {
        bVar30 = true;
      }
      if (bVar30) {
        uVar16 = 0;
        uVar19 = uVar11;
      }
      else {
        uVar16 = *(uint *)(uVar11 + 0x14) & 3;
        uVar19 = *(uint *)(uVar11 + 0x14) & 0xfffffffc;
      }
      *(ushort *)(uVar19 + 0x20) =
           *(ushort *)(uVar19 + 0x20) & 0x1fff |
           (short)(1 << uVar16) << 0xd | *(ushort *)(uVar19 + 0x20) & 0xe000;
    }
    if ((param_7 != '\0') && (bVar29)) {
      iVar12 = *(int *)(*(int *)(uVar11 + 0x10) + 8);
      iVar2 = *(int *)(*(int *)(uVar11 + 0xc) + 8);
      if ((iVar2 < iVar12) ||
         ((iVar2 <= iVar12 &&
          ((iVar12 = *(int *)(*(int *)(uVar11 + 0xc) + 0xc),
           iVar2 = *(int *)(*(int *)(uVar11 + 0x10) + 0xc), iVar12 < iVar2 || (iVar12 <= iVar2))))))
      {
        bVar29 = true;
      }
      else {
        bVar29 = false;
      }
      if ((bVar29) || (bVar29 = false, (*(uint *)(uVar11 + 0x18) & 0xfffffffc) == 0)) {
        bVar29 = true;
      }
      if (bVar29) {
        uVar16 = 1;
        uVar19 = uVar11;
      }
      else {
        uVar16 = *(uint *)(uVar11 + 0x18) & 3;
        uVar19 = *(uint *)(uVar11 + 0x18) & 0xfffffffc;
      }
      *(ushort *)(uVar19 + 0x20) =
           *(ushort *)(uVar19 + 0x20) & 0x1fff |
           (short)(1 << uVar16) << 0xd | *(ushort *)(uVar19 + 0x20) & 0xe000;
      uVar19 = *(uint *)(uVar11 + 0x1c) & 3;
      uVar16 = *(uint *)(uVar11 + 0x1c) & 0xfffffffc;
      uVar19 = -(uint)(uVar19 != 2) & uVar19 + 1;
      iVar9 = *(int *)((uVar19 + 2) * 4 + uVar16);
      iVar3 = *(int *)(((-(uint)(uVar19 != 2) & uVar19 + 1) + 2) * 4 + uVar16);
      iVar12 = *(int *)(iVar9 + 8);
      iVar2 = *(int *)(iVar3 + 8);
      if ((iVar12 < iVar2) ||
         ((iVar12 <= iVar2 &&
          ((iVar12 = *(int *)(iVar9 + 0xc), iVar2 = *(int *)(iVar3 + 0xc), iVar12 < iVar2 ||
           (iVar12 <= iVar2)))))) {
        bVar29 = true;
      }
      else {
        bVar29 = false;
      }
      if ((bVar29) || (bVar29 = false, (*(uint *)((uVar19 + 5) * 4 + uVar16) & 0xfffffffc) == 0)) {
        bVar29 = true;
      }
      if (!bVar29) {
        uVar16 = *(uint *)((uVar19 + 5) * 4 + uVar16);
        uVar19 = uVar16 & 3;
        uVar16 = uVar16 & 0xfffffffc;
      }
      uStack_124 = 1;
      *(ushort *)(uVar16 + 0x20) =
           *(ushort *)(uVar16 + 0x20) & 0x1fff |
           (ushort)((1 << uVar19) << 0xd) | *(ushort *)(uVar16 + 0x20) & 0xe000;
      uStack_128 = uVar11;
      fn_82D2ED10(iVar13,&uStack_128,auStack_e0);
      uVar16 = *(uint *)(uVar11 + 0x1c) & 3;
      uStack_128 = *(uint *)(uVar11 + 0x1c) & 0xfffffffc;
      uStack_124 = -(uint)(uVar16 != 2) & uVar16 + 1;
      fn_82D2ED10(iVar13,&uStack_128,auStack_e0);
    }
    iVar12 = iStack0000001c;
    if (param_5 != '\0') {
      piVar28 = (int *)(iStack0000001c + 0x40);
      iVar13 = fn_82CE5410();
      if (*(uint *)(iVar12 + 0x44) == (*(uint *)(iVar12 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar13 + 0x10),piVar28,8);
      }
      puVar14 = (uint *)(*(int *)(iVar12 + 0x44) * 8 + *piVar28);
      if (puVar14 != (uint *)0x0) {
        *puVar14 = uVar27;
        puVar14[1] = -(uint)(uVar25 != 2) & (uint)uVar24;
      }
      goto LAB_82d3262c;
    }
  }
  else {
    uVar18 = (ulonglong)uVar16 & 3;
    uVar19 = uVar16 & 0xfffffffc;
    if (uVar25 != 0) {
      uVar17 = uVar25 - 1;
    }
    iVar2 = *(int *)((int)((uVar17 + 2 & 0xffffffff) << 2) + uVar27);
    iVar3 = *(int *)((int)(((-(ulonglong)(uVar17 != 2) & uVar17 + 1) + 2 & 0xffffffff) << 2) +
                    uVar27);
    iVar13 = *(int *)(iVar3 + 8);
    if ((*(int *)(iVar2 + 8) < iVar13) ||
       ((*(int *)(iVar2 + 8) <= iVar13 &&
        ((iVar13 = *(int *)(iVar3 + 0xc), *(int *)(iVar2 + 0xc) < iVar13 ||
         (*(int *)(iVar2 + 0xc) <= iVar13)))))) {
      bVar30 = true;
    }
    else {
      bVar30 = false;
    }
    if ((bVar30) ||
       (bVar30 = false,
       (*(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)) {
      bVar30 = true;
    }
    uVar20 = uVar17;
    uVar11 = uVar27;
    if (!bVar30) {
      uVar11 = *(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar27);
      uVar20 = (ulonglong)uVar11 & 3;
      uVar11 = uVar11 & 0xfffffffc;
    }
    bVar30 = ((uint)(*(ushort *)(uVar11 + 0x20) >> 0xd) & 1 << ((uint)uVar20 & 0x3f)) != 0;
    if (bVar30) {
      iVar3 = *(int *)((int)(((-(ulonglong)(uVar17 != 2) & uVar17 + 1) + 2 & 0xffffffff) << 2) +
                      uVar27);
      iVar13 = *(int *)(iVar3 + 8);
      if ((*(int *)(iVar2 + 8) < iVar13) ||
         ((*(int *)(iVar2 + 8) <= iVar13 &&
          ((iVar13 = *(int *)(iVar3 + 0xc), *(int *)(iVar2 + 0xc) < iVar13 ||
           (*(int *)(iVar2 + 0xc) <= iVar13)))))) {
        bVar31 = true;
      }
      else {
        bVar31 = false;
      }
      if ((bVar31) ||
         (bVar31 = false,
         (*(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)) {
        bVar31 = true;
      }
      uVar11 = uVar27;
      if (!bVar31) {
        uVar11 = *(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar27);
        uVar17 = (ulonglong)uVar11 & 3;
        uVar11 = uVar11 & 0xfffffffc;
      }
      *(ushort *)(uVar11 + 0x20) =
           ((ushort)((~(ulonglong)(uint)(1 << ((uint)uVar17 & 0x3f)) & 0xffffffff) << 0xd) | 0x1fff)
           & *(ushort *)(uVar11 + 0x20);
    }
    uVar17 = 2;
    if ((uVar16 & 3) != 0) {
      uVar17 = uVar18 - 1;
    }
    iVar2 = *(int *)((int)((uVar17 + 2 & 0xffffffff) << 2) + uVar19);
    iVar3 = *(int *)((int)(((-(ulonglong)(uVar17 != 2) & uVar17 + 1) + 2 & 0xffffffff) << 2) +
                    uVar19);
    iVar13 = *(int *)(iVar3 + 8);
    if ((*(int *)(iVar2 + 8) < iVar13) ||
       ((*(int *)(iVar2 + 8) <= iVar13 &&
        ((iVar13 = *(int *)(iVar3 + 0xc), *(int *)(iVar2 + 0xc) < iVar13 ||
         (*(int *)(iVar2 + 0xc) <= iVar13)))))) {
      bVar31 = true;
    }
    else {
      bVar31 = false;
    }
    if ((bVar31) ||
       (bVar31 = false,
       (*(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar19) & 0xfffffffc) == 0)) {
      bVar31 = true;
    }
    uVar20 = uVar17;
    uVar11 = uVar19;
    if (!bVar31) {
      uVar11 = *(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar19);
      uVar20 = (ulonglong)uVar11 & 3;
      uVar11 = uVar11 & 0xfffffffc;
    }
    bVar31 = ((uint)(*(ushort *)(uVar11 + 0x20) >> 0xd) & 1 << ((uint)uVar20 & 0x3f)) != 0;
    if (bVar31) {
      iVar3 = *(int *)((int)(((-(ulonglong)(uVar17 != 2) & uVar17 + 1) + 2 & 0xffffffff) << 2) +
                      uVar19);
      iVar13 = *(int *)(iVar3 + 8);
      if ((*(int *)(iVar2 + 8) < iVar13) ||
         ((*(int *)(iVar2 + 8) <= iVar13 &&
          ((iVar13 = *(int *)(iVar3 + 0xc), *(int *)(iVar2 + 0xc) < iVar13 ||
           (*(int *)(iVar2 + 0xc) <= iVar13)))))) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((bVar6) ||
         (bVar6 = false,
         (*(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar19) & 0xfffffffc) == 0)) {
        bVar6 = true;
      }
      uVar11 = uVar19;
      if (!bVar6) {
        uVar11 = *(uint *)((int)((uVar17 + 5 & 0xffffffff) << 2) + uVar19);
        uVar17 = (ulonglong)uVar11 & 3;
        uVar11 = uVar11 & 0xfffffffc;
      }
      *(ushort *)(uVar11 + 0x20) =
           ((ushort)((~(ulonglong)(uint)(1 << ((uint)uVar17 & 0x3f)) & 0xffffffff) << 0xd) | 0x1fff)
           & *(ushort *)(uVar11 + 0x20);
    }
    lVar21 = 2;
    if (uVar25 != 0) {
      lVar21 = uVar25 - 1;
    }
    uStack_128 = *(uint *)(iVar15 + uVar27);
    uVar4 = *(undefined4 *)((int)((lVar21 + 2U & 0xffffffff) << 2) + uVar27);
    uVar10 = fn_82D2D908(param_2 + 0x28,auStack_110);
    *(undefined2 *)(uVar10 + 0x20) = 0;
    *(undefined2 *)(uVar10 + 0x22) = 0;
    iVar2 = (int)uVar18;
    *(int *)(uVar10 + 0x10) = iVar9;
    iVar13 = (iVar2 + 2) * 4;
    *(undefined4 *)(uVar10 + 8) = uVar4;
    *(uint *)(uVar10 + 0xc) = uStack_128;
    *(uint *)((((*(int *)(*(int *)(uVar10 + 8) + 0xc) + *(int *)(*(int *)(uVar10 + 0xc) + 0xc) +
                *(int *)(iVar9 + 0xc)) / 3 >> 0xb) * 0x10 +
               ((*(int *)(*(int *)(uVar10 + 8) + 8) + *(int *)(*(int *)(uVar10 + 0xc) + 8) +
                *(int *)(iVar9 + 8)) / 3 >> 0xb) + 0x97) * 4 + iStack0000001c) = uVar10;
    lVar21 = 2;
    *(ushort *)(uVar10 + 0x20) = *(ushort *)(uVar10 + 0x20) | 0x1000;
    if ((uVar16 & 3) != 0) {
      lVar21 = uVar18 - 1;
    }
    uStack_128 = *(uint *)(iVar13 + uVar19);
    iVar3 = *(int *)((int)((lVar21 + 2U & 0xffffffff) << 2) + uVar19);
    uVar11 = fn_82D2D908(param_2 + 0x28,auStack_110);
    iVar8 = iStack0000001c;
    *(int *)(uVar11 + 0x10) = iVar9;
    *(undefined2 *)(uVar11 + 0x20) = 0;
    *(undefined2 *)(uVar11 + 0x22) = 0;
    *(uint *)(uVar11 + 0xc) = uStack_128;
    *(int *)(uVar11 + 8) = iVar3;
    *(uint *)((((*(int *)(iVar3 + 0xc) + *(int *)(*(int *)(uVar11 + 0xc) + 0xc) +
                *(int *)(iVar9 + 0xc)) / 3 >> 0xb) * 0x10 +
               ((*(int *)(iVar3 + 8) + *(int *)(*(int *)(uVar11 + 0xc) + 8) + *(int *)(iVar9 + 8)) /
                3 >> 0xb) + 0x97) * 4 + iStack0000001c) = uVar11;
    *(ushort *)(uVar11 + 0x20) = *(ushort *)(uVar11 + 0x20) | 0x1000;
    *(undefined2 *)(uVar10 + 0x22) = *(undefined2 *)(uVar27 + 0x22);
    *(undefined2 *)(uVar11 + 0x22) = *(undefined2 *)(uVar19 + 0x22);
    lVar21 = 2;
    *(int *)(iVar13 + uVar19) = iVar9;
    *(int *)(iVar15 + uVar27) = iVar9;
    if (uVar25 != 0) {
      lVar21 = uVar25 - 1;
    }
    uVar23 = *(uint *)((int)((lVar21 + 5U & 0xffffffff) << 2) + uVar27);
    uVar5 = uVar23 & 0xfffffffc;
    uVar23 = uVar23 & 3;
    *(uint *)(uVar10 + 0x14) = uVar5 + uVar23;
    if (uVar5 != 0) {
      *(uint *)((uVar23 + 5) * 4 + uVar5) = uVar10;
    }
    lVar21 = 2;
    if ((uVar16 & 3) != 0) {
      lVar21 = uVar18 - 1;
    }
    uVar23 = *(uint *)((int)((lVar21 + 5U & 0xffffffff) << 2) + uVar19);
    uVar5 = uVar23 & 0xfffffffc;
    uVar23 = uVar23 & 3;
    *(uint *)(uVar11 + 0x14) = uVar5 + uVar23;
    if (uVar5 != 0) {
      *(uint *)((uVar23 + 5) * 4 + uVar5) = uVar11;
    }
    *(uint *)(uVar10 + 0x18) = iVar2 + uVar19;
    *(uint *)((iVar2 + 5) * 4 + uVar19) = uVar10 + 1;
    lVar21 = 2;
    *(uint *)(uVar11 + 0x18) = uVar27 + uVar26;
    *(uint *)(iVar12 + uVar27) = uVar11 + 1;
    if (uVar25 != 0) {
      lVar21 = uVar25 - 1;
    }
    *(uint *)(uVar10 + 0x1c) = (int)lVar21 + uVar27;
    lVar22 = 2;
    *(uint *)((int)((lVar21 + 5U & 0xffffffff) << 2) + uVar27) = uVar10 + 2;
    if ((uVar16 & 3) != 0) {
      lVar22 = uVar18 - 1;
    }
    *(uint *)(uVar11 + 0x1c) = (int)lVar22 + uVar19;
    *(uint *)((int)((lVar22 + 5U & 0xffffffff) << 2) + uVar19) = uVar11 + 2;
    if (bVar30) {
      iVar12 = *(int *)(*(int *)(uVar10 + 0xc) + 8);
      iVar13 = *(int *)(*(int *)(uVar10 + 8) + 8);
      if ((iVar13 < iVar12) ||
         ((iVar13 <= iVar12 &&
          ((iVar12 = *(int *)(*(int *)(uVar10 + 8) + 0xc),
           iVar13 = *(int *)(*(int *)(uVar10 + 0xc) + 0xc), iVar12 < iVar13 || (iVar12 <= iVar13))))
         )) {
        bVar30 = true;
      }
      else {
        bVar30 = false;
      }
      if ((bVar30) || (bVar30 = false, (*(uint *)(uVar10 + 0x14) & 0xfffffffc) == 0)) {
        bVar30 = true;
      }
      if (bVar30) {
        uVar16 = 0;
        uVar23 = uVar10;
      }
      else {
        uVar16 = *(uint *)(uVar10 + 0x14) & 3;
        uVar23 = *(uint *)(uVar10 + 0x14) & 0xfffffffc;
      }
      *(ushort *)(uVar23 + 0x20) =
           *(ushort *)(uVar23 + 0x20) & 0x1fff |
           (short)(1 << uVar16) << 0xd | *(ushort *)(uVar23 + 0x20) & 0xe000;
    }
    if (bVar31) {
      iVar12 = *(int *)(*(int *)(uVar11 + 0xc) + 8);
      iVar13 = *(int *)(*(int *)(uVar11 + 8) + 8);
      if ((iVar13 < iVar12) ||
         ((iVar13 <= iVar12 &&
          ((iVar12 = *(int *)(*(int *)(uVar11 + 8) + 0xc),
           iVar13 = *(int *)(*(int *)(uVar11 + 0xc) + 0xc), iVar12 < iVar13 || (iVar12 <= iVar13))))
         )) {
        bVar30 = true;
      }
      else {
        bVar30 = false;
      }
      if ((bVar30) || (bVar30 = false, (*(uint *)(uVar11 + 0x14) & 0xfffffffc) == 0)) {
        bVar30 = true;
      }
      if (bVar30) {
        uVar16 = 0;
        uVar23 = uVar11;
      }
      else {
        uVar16 = *(uint *)(uVar11 + 0x14) & 3;
        uVar23 = *(uint *)(uVar11 + 0x14) & 0xfffffffc;
      }
      *(ushort *)(uVar23 + 0x20) =
           *(ushort *)(uVar23 + 0x20) & 0x1fff |
           (short)(1 << uVar16) << 0xd | *(ushort *)(uVar23 + 0x20) & 0xe000;
    }
    if ((param_7 != '\0') && (bVar29)) {
      iVar12 = *(int *)(*(int *)(uVar10 + 0x10) + 8);
      iVar13 = *(int *)(*(int *)(uVar10 + 0xc) + 8);
      if ((iVar13 < iVar12) ||
         ((iVar13 <= iVar12 &&
          ((iVar12 = *(int *)(*(int *)(uVar10 + 0xc) + 0xc),
           iVar13 = *(int *)(*(int *)(uVar10 + 0x10) + 0xc), iVar12 < iVar13 || (iVar12 <= iVar13)))
          ))) {
        bVar29 = true;
      }
      else {
        bVar29 = false;
      }
      if ((bVar29) || (bVar29 = false, (*(uint *)(uVar10 + 0x18) & 0xfffffffc) == 0)) {
        bVar29 = true;
      }
      if (bVar29) {
        uVar16 = 1;
        uVar23 = uVar10;
      }
      else {
        uVar16 = *(uint *)(uVar10 + 0x18) & 3;
        uVar23 = *(uint *)(uVar10 + 0x18) & 0xfffffffc;
      }
      *(ushort *)(uVar23 + 0x20) =
           *(ushort *)(uVar23 + 0x20) & 0x1fff |
           (short)(1 << uVar16) << 0xd | *(ushort *)(uVar23 + 0x20) & 0xe000;
      iVar12 = *(int *)(*(int *)(uVar11 + 0x10) + 8);
      iVar13 = *(int *)(*(int *)(uVar11 + 0xc) + 8);
      if ((iVar13 < iVar12) ||
         ((iVar13 <= iVar12 &&
          ((iVar12 = *(int *)(*(int *)(uVar11 + 0xc) + 0xc),
           iVar13 = *(int *)(*(int *)(uVar11 + 0x10) + 0xc), iVar12 < iVar13 || (iVar12 <= iVar13)))
          ))) {
        bVar29 = true;
      }
      else {
        bVar29 = false;
      }
      if ((bVar29) || (bVar29 = false, (*(uint *)(uVar11 + 0x18) & 0xfffffffc) == 0)) {
        bVar29 = true;
      }
      if (bVar29) {
        uVar16 = 1;
        uVar23 = uVar11;
      }
      else {
        uVar16 = *(uint *)(uVar11 + 0x18) & 3;
        uVar23 = *(uint *)(uVar11 + 0x18) & 0xfffffffc;
      }
      uStack_124 = 1;
      *(ushort *)(uVar23 + 0x20) =
           *(ushort *)(uVar23 + 0x20) & 0x1fff |
           (ushort)((1 << uVar16) << 0xd) | *(ushort *)(uVar23 + 0x20) & 0xe000;
      uStack_128 = uVar10;
      fn_82D2ED10(iStack0000001c,&uStack_128,auStack_e0);
      uStack_124 = *(uint *)(uVar11 + 0x18) & 3;
      uStack_128 = *(uint *)(uVar11 + 0x18) & 0xfffffffc;
      fn_82D2ED10(iVar8,&uStack_128,auStack_e0);
    }
    param_5 = cStack00000037;
    if (cStack00000037 == '\0') goto LAB_82d326c4;
    piVar28 = (int *)(iVar8 + 0x40);
    iVar12 = fn_82CE5410();
    if (*(uint *)(iVar8 + 0x44) == (*(uint *)(iVar8 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar28,8);
    }
    puVar14 = (uint *)(*(int *)(iVar8 + 0x44) * 8 + *piVar28);
    if (puVar14 != (uint *)0x0) {
      *puVar14 = uVar27;
      puVar14[1] = -(uint)(uVar25 != 2) & (uint)uVar24;
    }
    *(int *)(iVar8 + 0x44) = *(int *)(iVar8 + 0x44) + 1;
    iVar12 = fn_82CE5410();
    if (*(uint *)(iVar8 + 0x44) == (*(uint *)(iVar8 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar28,8);
    }
    puVar14 = (uint *)(*(int *)(iVar8 + 0x44) * 8 + *piVar28);
    if (puVar14 != (uint *)0x0) {
      *puVar14 = uVar19;
      puVar14[1] = -(uint)(uVar18 != 2) & iVar2 + 1U;
    }
    *(int *)(iVar8 + 0x44) = *(int *)(iVar8 + 0x44) + 1;
    iVar12 = fn_82CE5410();
    if (*(uint *)(iVar8 + 0x44) == (*(uint *)(iVar8 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar28,8);
    }
    puVar14 = (uint *)(*(int *)(iVar8 + 0x44) * 8 + *piVar28);
    if (puVar14 != (uint *)0x0) {
      *puVar14 = uVar10;
      puVar14[1] = 0;
    }
LAB_82d3262c:
    piVar28[1] = piVar28[1] + 1;
    iVar12 = fn_82CE5410();
    if (piVar28[1] == (piVar28[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar28,8);
    }
    puVar14 = (uint *)(piVar28[1] * 8 + *piVar28);
    if (puVar14 != (uint *)0x0) {
      *puVar14 = uVar11;
      puVar14[1] = 0;
    }
    piVar28[1] = piVar28[1] + 1;
  }
  iVar12 = iStack0000001c;
  if (param_5 != '\0') {
    uVar4 = *(undefined4 *)(iVar15 + uVar27);
    fn_82D2DA50(iStack0000001c);
    uStack_128 = uVar27;
    uStack_124 = uVar26;
    puVar14 = (uint *)fn_82D2BB28(auStack_120,iVar12,&uStack_128,uVar4);
    uVar27 = *puVar14;
    uVar26 = puVar14[1];
  }
LAB_82d326c4:
  puVar7 = puStack00000014;
  *puStack00000014 = 0;
  puStack00000014[1] = uVar27;
  puStack00000014[2] = uVar26;
  fn_822301D0(auStack_e0,0x20,2,0xffffffff82d2da20);
  return puVar7;
}

