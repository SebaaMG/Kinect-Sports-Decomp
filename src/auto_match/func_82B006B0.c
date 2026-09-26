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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDBE8();
extern int fn_82ABE250();
extern int fn_82ACA5E0();
extern int fn_82AD17B0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AD1A40();
extern int fn_82AD1B28();
extern int fn_82AD20C0();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82ADD810();
extern int fn_82AE0148();
extern int fn_82AF4BA8();
extern int fn_82AF5458();
extern int fn_82AF6658();
extern int fn_82AF6CC8();
extern int fn_82AF77E0();
extern int fn_82AF9758();
extern int fn_82AFA378();
extern int fn_82AFA410();
extern int fn_82AFA520();
extern int fn_82AFBD10();
extern int fn_82AFC3B8();
extern int fn_82AFF840();
extern int fn_82B0FC78();
extern int fn_82B16910();
extern int fn_82B84350();
extern int fn_82B843F0();
extern int fn_82B85910();
extern int fn_82B8AC10();
extern int fn_82B8AE98();
extern int fn_82B8D3D0();
extern unsigned int iStack00000014;
extern unsigned int iStack0000002c;
extern unsigned int lbl_820D7D2F;
extern unsigned int lbl_820D7D3F;
extern unsigned int uStack_b8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff38 : 0x82b00fe8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * fn_82B006B0(int param_1,uint *param_2,uint *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  char cVar21;
  uint *puVar11;
  int iVar12;
  undefined2 uVar20;
  uint *puVar13;
  undefined8 uVar10;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar22;
  uint *puVar23;
  int *piVar24;
  ulonglong uVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined4 *puVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int iStack00000014;
  uint *puStack0000001c;
  uint *puStack00000024;
  int iStack0000002c;
  uint uStack_d0;
  uint uStack_cc;
  uint auStack_c8 [2];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [176];
  
  for (puVar17 = (uint *)param_2[1]; puVar17 != (uint *)0x0; puVar17 = (uint *)puVar17[2]) {
    uStack_cc = puVar17[4];
    if (((uStack_cc != 0) && ((*(uint *)(uStack_cc + 8) & 0x3f80) == 0x3700)) &&
       ((*puVar17 & 0xe000000) != 0)) goto LAB_82b00730;
  }
  uStack_cc = 0;
LAB_82b00730:
  uVar37 = 0;
  puVar22 = param_3 + 1;
  for (puVar17 = (uint *)param_3[1]; puVar17 != (uint *)0x0; puVar17 = (uint *)puVar17[2]) {
    uVar34 = puVar17[4];
    if (((uVar34 != 0) && ((*(uint *)(uVar34 + 8) & 0x3f80) == 0x3700)) &&
       ((*puVar17 & 0xe000000) != 0)) goto LAB_82b0077c;
  }
  uVar34 = 0;
LAB_82b0077c:
  iStack00000014 = param_1;
  puStack0000001c = param_2;
  puStack00000024 = param_3;
  iStack0000002c = param_4;
  fn_82B8D3D0(param_1,param_2,param_3,1,0);
  cVar21 = fn_82ACA5E0(param_2);
  if (cVar21 == '\0') {
    uVar30 = 2;
    uVar31 = 2;
  }
  else {
    uVar30 = (ulonglong)(param_2[2] >> 0xe) & 7;
    uVar31 = (ulonglong)(param_3[2] >> 0xe) & 7;
  }
  uVar2 = *(ushort *)((int)param_3 + 0xe);
  uVar32 = uVar31 + uVar30;
  uStack_d0 = (uint)(byte)(&lbl_820D7D3F)[(int)uVar30];
  puVar17 = puStack00000024;
  puVar11 = param_3;
  if ((param_4 != 0) && ((*(uint *)(param_4 + 8) & 0x1f) != 0)) {
    puVar11 = (uint *)fn_82AFF840(param_1,param_4,param_3,1,&uStack_d0);
    uVar35 = uStack_d0;
    uVar29 = *(uint *)(param_4 + 8);
    uVar32 = uVar32 - ((ulonglong)(uVar29 >> 5) & 7);
    puVar17 = param_3;
    if (puVar11 == (uint *)0x0) {
      while (puVar11 = (uint *)*puVar17, puVar11 != (uint *)0x0) {
        if ((*puVar11 & 0xe000000) == 0) {
          puVar27 = (uint *)puVar11[4];
          for (puVar13 = (uint *)*puVar27; puVar13 != puVar11; puVar13 = (uint *)puVar13[1]) {
            puVar27 = puVar13 + 1;
          }
          *puVar27 = puVar11[1];
          puVar11[1] = *param_2;
          *param_2 = (uint)puVar11;
          puVar11[4] = (uint)param_2;
        }
        if ((uint *)*puVar17 == puVar11) {
          puVar17 = puVar11 + 1;
        }
      }
      while (puVar17 = (uint *)*puVar22, puVar17 != (uint *)0x0) {
        if (puVar17[4] != 0) {
          puVar27 = (uint *)(puVar17[3] + 4);
          for (puVar11 = (uint *)*puVar27; puVar11 != puVar17; puVar11 = (uint *)puVar11[2]) {
            puVar27 = puVar11 + 2;
          }
          *puVar27 = puVar17[2];
          puVar17[2] = param_2[1];
          param_2[1] = (uint)puVar17;
          uVar37 = *puVar17;
          puVar17[3] = (uint)param_2;
          if ((uVar37 & 0xe000000) != 0) {
            *puVar17 = ((((uVar35 >> (uVar37 >> 10 & 6) & 3) << 2 | uVar35 >> (uVar37 >> 8 & 6) & 3)
                         << 2 | uVar35 >> (uVar37 >> 6 & 6) & 3) << 2 |
                       uVar35 >> (uVar37 >> 4 & 6) & 3) << 5 | uVar37 & 0xffffe01f;
            fn_82AFA378(param_1,puVar17[4]);
          }
        }
        if ((uint *)*puVar22 == puVar17) {
          puVar22 = puVar17 + 2;
        }
      }
      if ((param_3[2] >> 0x17 & 1) == 0) goto LAB_82b00a24;
      if ((param_2[2] >> 0x17 & 1) != 0) {
        uStack_b8 = 0;
        fn_82AF6658(param_1,param_2,param_3,auStack_c0,0,0);
      }
      if (((param_2[2] >> 0x17 & 1) == 0) || ((param_2[4] & 0x70000) != 0)) {
        param_2[2] = param_2[2] | 0x800000;
        param_2[4] = param_2[4] & 0xfff8ffff;
        puVar17 = *(uint **)(param_1 + 0x294);
        if ((puVar17[1] & 1) == 0) {
          uVar37 = *puVar17 & 0xfffffffe;
          iVar12 = uVar37 - 4;
          if ((iVar12 == 0) || (*(uint *)(uVar37 + 8) < *(int *)(uVar37 + 4) + 1U))
          goto LAB_82b009e8;
        }
        else {
LAB_82b009e8:
          iVar12 = fn_82AD6090(puVar17,1);
        }
        iVar4 = *(int *)(iVar12 + 8);
        *(int *)(iVar12 + 8) = iVar4 + 1;
        *(uint **)((iVar4 + 4) * 4 + iVar12) = param_2;
      }
      if ((param_2[2] >> 0x17 & 1) == 0) {
        uVar20 = fn_82ADD120(param_3);
        *(undefined2 *)((int)param_2 + 0x12) = uVar20;
      }
LAB_82b00a24:
      fn_82B8AC10(param_1,param_3,*(undefined4 *)(param_1 + 0x28c),1);
      if (uVar34 != 0) {
        if (uStack_cc == 0) {
          uStack_cc = uVar34;
        }
        fn_82AFBD10(param_1,uStack_cc,param_2,uVar30,uVar34,0,0,0);
      }
      fn_82AFA378(param_1,param_2);
      return param_2;
    }
    puVar17 = puVar11;
    if (uVar34 != 0) {
      uVar35 = 0;
      if ((uVar29 & 0x1f) != 0) {
        uVar25 = 0;
        do {
          uVar35 = uVar35 + 1;
          uVar37 = 1 << ((uint)(((2L << (uVar25 + 3 & 0x3f)) - 1U &
                                 *(ulonglong *)(((uint)uVar25 >> 3 & 0x1ffffff8) + param_4) &
                                -1L << (uVar25 & 0x3f)) >> (uVar25 & 0x3f)) & 3) | uVar37;
          uVar25 = uVar25 + 4;
        } while (uVar35 < (uVar29 & 0x1f));
      }
      bVar1 = (&lbl_820D7D2F)[(param_3[2] >> 1 & 0xf) - uVar37];
      puVar13 = (uint *)fn_82ABE250(param_1,8,0x1c);
      puVar27 = puVar13 + 1;
      puVar13[1] = (uint)puVar13 | 1;
      *puVar13 = (uint)puVar27 | 1;
      for (puVar22 = (uint *)puVar11[1]; uVar29 = uStack_d0, puVar22 != (uint *)0x0;
          puVar22 = (uint *)puVar22[2]) {
        if ((puVar22[4] != 0) && ((*puVar22 & 0xe000000) != 0)) {
          if ((*puVar27 & 1) == 0) {
            uVar29 = *puVar13 & 0xfffffffe;
            iVar12 = uVar29 - 4;
            if ((iVar12 == 0) || (*(uint *)(uVar29 + 8) < *(int *)(uVar29 + 4) + 1U))
            goto LAB_82b00b8c;
          }
          else {
LAB_82b00b8c:
            iVar12 = fn_82AD6090(puVar13,1);
          }
          iVar4 = *(int *)(iVar12 + 8);
          *(int *)(iVar12 + 8) = iVar4 + 1;
          *(uint **)((iVar4 + 4) * 4 + iVar12) = puVar22;
        }
      }
      while (((*puVar27 & 1) == 0 && (*puVar27 != 0))) {
        puVar28 = (uint *)(*puVar13 & 0xfffffffe);
        puVar19 = puVar28 + -1;
        uVar35 = puVar28[1] - 1;
        puVar22 = (uint *)puVar19[puVar28[1] + 3];
        puVar28[1] = uVar35;
        if (uVar35 == 0) {
          *(uint *)(*puVar28 & 0xfffffffe) = *puVar19;
          *(uint *)(*puVar19 & 0xfffffffe) = *puVar28;
          fn_82AA6648(puVar13,puVar19,((ulonglong)puVar28[2] + 4 & 0x3fffffff) << 2);
        }
        uVar35 = *puVar22;
        uVar36 = 0;
        uVar15 = 0;
        if ((uVar35 & 0xe000000) != 0) {
          uVar26 = 0;
          do {
            uVar15 = uVar15 + 1;
            uVar36 = 1 << ((uVar35 >> 5 & 0xff) >> (uVar26 & 0x3f) & 3) | uVar36;
            uVar26 = uVar26 + 2;
          } while (uVar15 < (uVar35 >> 0x19 & 7));
        }
        uVar15 = uVar36 & uVar37;
        if (uVar15 == 0) {
          *puVar22 = ((((bVar1 >> (uVar35 >> 10 & 6) & 3) << 2 | bVar1 >> (uVar35 >> 8 & 6) & 3) <<
                       2 | bVar1 >> (uVar35 >> 6 & 6) & 3) << 2 | bVar1 >> (uVar35 >> 4 & 6) & 3) <<
                     5 | uVar35 & 0xffffe01f;
        }
        else {
          uVar36 = uVar36 & ~uVar37;
          if (uVar36 == 0) {
            puVar19 = (uint *)(puVar22[3] + 4);
            for (puVar28 = (uint *)*puVar19; puVar28 != puVar22; puVar28 = (uint *)puVar28[2]) {
              puVar19 = puVar28 + 2;
            }
            *puVar19 = puVar22[2];
            puVar22[2] = param_2[1];
            param_2[1] = (uint)puVar22;
            puVar22[3] = (uint)param_2;
            uVar35 = *puVar22;
            *puVar22 = ((((uVar29 >> (uVar35 >> 10 & 6) & 3) << 2 | uVar29 >> (uVar35 >> 8 & 6) & 3)
                         << 2 | uVar29 >> (uVar35 >> 6 & 6) & 3) << 2 |
                       uVar29 >> (uVar35 >> 4 & 6) & 3) << 5 | uVar35 & 0xffffe01f;
          }
          else {
            uVar26 = 0;
            uVar35 = 0;
            puVar28 = auStack_c8 + 1;
            for (; uVar15 != 0; uVar15 = uVar15 - (uVar15 & ~(uVar15 - 1))) {
              uVar14 = (uint)((0x1fU - LZCOUNT(uVar15 & ~(uVar15 - 1)) & 0xffffffff) << 1);
              uVar35 = uVar35 & ~(3 << (uVar14 & 0x3e)) | uVar26 << (uVar14 & 0x3e);
              uVar10 = fn_82AD1918(iStack00000014,param_2,uVar29 >> (uVar14 & 0x3e) & 3,
                                         *puVar22 & 0x1f);
              uVar14 = fn_82AF77E0(iStack00000014,1,param_2,uVar10,uVar10);
              puVar28 = puVar28 + 1;
              *puVar28 = uVar14;
              uVar26 = uVar26 + 1;
            }
            puVar28 = auStack_c8 + uVar26 + 1;
            for (; iVar12 = iStack00000014, uVar36 != 0; uVar36 = uVar36 - (uVar36 & ~(uVar36 - 1)))
            {
              uVar15 = (uint)((0x1fU - LZCOUNT(uVar36 & ~(uVar36 - 1)) & 0xffffffff) << 1);
              uVar35 = uVar35 & ~(3 << (uVar15 & 0x3e)) | uVar26 << (uVar15 & 0x3e);
              uVar10 = fn_82AD1918(iStack00000014,puVar11,bVar1 >> (uVar15 & 0x3e) & 3,
                                         *puVar22 & 0x1f);
              uVar15 = fn_82AF77E0(iVar12,1,puVar11,uVar10,uVar10);
              puVar28 = puVar28 + 1;
              *puVar28 = uVar15;
              uVar26 = uVar26 + 1;
            }
            if ((uVar26 == 0) || (4 < uVar26)) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(iStack00000014,0x12c0);
            }
            uVar36 = auStack_c8[uVar26 + 1];
            uVar14 = fn_82B84350(iStack00000014,*(undefined4 *)(uVar36 + 0x1c),0,uVar26);
            uVar36 = uVar36 & 0xfffffffe;
            uVar15 = uVar14 & 0xfffffffe;
            *(undefined4 *)(uVar15 + 0x28) = *(undefined4 *)(uVar36 + 0x28);
            *(uint *)((*(uint *)(uVar36 + 0x28) & 0xfffffffe) + 0x24) = uVar15 + 0x28;
            *(uint *)(uVar15 + 0x24) = uVar36 + 0x28;
            *(uint *)(uVar36 + 0x28) = uVar15;
            if (uVar26 != 0) {
              puVar33 = (undefined4 *)(uVar14 + 0x28);
              puVar28 = auStack_c8 + 1;
              do {
                puVar28 = puVar28 + 1;
                uVar36 = *puVar28;
                uVar10 = fn_82AD17B0(iStack00000014,uVar36);
                uVar16 = fn_82AD1978(uVar14,uVar10);
                puVar33 = puVar33 + 1;
                *puVar33 = uVar16;
                fn_82AD1B28(uVar36);
                uVar26 = uVar26 - 1;
                *(uint *)(uVar36 + 8) = *(uint *)(uVar36 + 8) | 0x1000000;
              } while (uVar26 != 0);
            }
            param_1 = iStack00000014;
            puVar19 = (uint *)(puVar22[3] + 4);
            for (puVar28 = (uint *)*puVar19; puVar28 != puVar22; puVar28 = (uint *)puVar28[2]) {
              puVar19 = puVar28 + 2;
            }
            *puVar19 = puVar22[2];
            puVar22[2] = *(uint *)(uVar14 + 4);
            *(uint **)(uVar14 + 4) = puVar22;
            puVar22[3] = uVar14;
            uVar36 = (uint)((ulonglong)*puVar22 & 0xffffffe0);
            *puVar22 = ((((uVar35 >> (uVar36 >> 10 & 6) & 3) << 2 | uVar35 >> (uVar36 >> 8 & 6) & 3)
                         << 2 | uVar35 >> (uVar36 >> 6 & 6) & 3) << 2 |
                       uVar35 >> ((uint)(((ulonglong)*puVar22 & 0xffffffe0) >> 4) & 6) & 3) << 5 |
                       uVar36 & 0xffffe01f;
            fn_82B0FC78(iStack00000014,uVar14);
            *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) | 0x1000000;
            fn_82AFA378(param_1,uVar14);
            param_2 = puStack0000001c;
            param_3 = puStack00000024;
          }
        }
      }
      *puVar13 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar13;
      uStack_d0 = (uint)(byte)(&lbl_820D7D3F)[(int)uVar30];
      if (uStack_cc != 0) {
        fn_82AFBD10(param_1,uStack_cc,param_2,uVar30,uVar34,param_3,0,0);
        for (puVar22 = (uint *)param_2[1];
            (puVar22 != (uint *)0x0 &&
            (((puVar22[4] == 0 || ((*(uint *)(puVar22[4] + 8) & 0x3f80) != 0x3700)) ||
             ((*puVar22 & 0xe000000) == 0)))); puVar22 = (uint *)puVar22[2]) {
        }
      }
    }
  }
  puStack00000024 = puVar17;
  uStack_b8 = 0;
  fn_82AF6658(param_1,param_2,puVar11,auStack_c0,0,0);
  iVar12 = fn_82AFA520(param_1,param_2,puVar11,param_2,0,0,0);
  if (iVar12 == -1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  puVar17 = (uint *)fn_82B843F0(param_1,param_2);
  puVar17[4] = puVar17[4] & 0xfff8ffff;
  puVar17[2] = (uint)((uVar32 & 0xffffffff) << 0xe) & 0x1c000 | puVar17[2] & 0xbbfe3fff;
  uVar3 = *(ushort *)((int)param_2 + 0xe);
  puVar17[3] = (uint)uVar3 | puVar17[3] & 0xffff0000;
  if ((uVar3 != 0) && (uVar31 != 0)) {
    uVar37 = 0;
    uVar29 = 0;
    do {
      uVar32 = (ulonglong)(uStack_d0 >> (uVar29 & 0x3f)) & 3;
      if (uVar30 <= uVar32) {
        fn_82B16910(puVar17,uVar32,0xf,uVar2 >> (uVar37 & 0x3f) & 0xf);
      }
      uVar31 = uVar31 - 1;
      uVar29 = uVar29 + 2;
      uVar37 = uVar37 + 4;
    } while (uVar31 != 0);
  }
  cVar21 = fn_82B85910(param_2,puVar11);
  puVar22 = param_2;
  if (cVar21 != '\0') {
    puVar22 = puVar11;
  }
  uVar37 = (uint)puVar17 & 0xfffffffe;
  puVar27 = (uint *)(((uint)puVar22 & 0xfffffffe) + 0x24);
  uVar29 = 0;
  iVar12 = (int)param_2 - (int)puVar11;
  puVar13 = puVar11 + 0xb;
  *(uint *)(uVar37 + 0x24) = *puVar27;
  *(uint *)(*puVar27 & 0xfffffffe) = uVar37;
  *(uint *)(uVar37 + 0x28) = (uint)puVar22 & 0xfffffffe;
  *puVar27 = uVar37 + 0x28;
  puVar17[5] = puVar17[5] & 0xfffffff8;
  puVar17[4] = puVar17[4] & 0x7fffffff;
  for (uVar37 = 0; iVar4 = iStack00000014, uVar37 < (param_2[2] >> 0x13 & 7); uVar37 = uVar37 + 1) {
    iVar6 = *(int *)(uVar29 + (int)puVar13);
    iVar7 = *(int *)((int)puVar13 + iVar12 + uVar29);
    iVar4 = *(int *)(iVar7 + 0xc);
    uVar35 = *(uint *)(iVar4 + 8) >> 7 & 0x7f;
    if ((uVar35 == 0) || (bVar8 = true, 0x66 < uVar35)) {
      bVar8 = false;
    }
    if (bVar8) {
      fn_82AD1A40(puVar17,iVar4,iStack00000014);
    }
    iVar4 = *(int *)(iVar6 + 0xc);
    uVar35 = *(uint *)(iVar4 + 8) >> 7 & 0x7f;
    if ((uVar35 == 0) || (bVar8 = true, 0x66 < uVar35)) {
      bVar8 = false;
    }
    if (bVar8) {
      fn_82AD1A40(puVar17,iVar4,iStack00000014);
    }
    uVar35 = 0;
    puVar11 = puVar13;
    if (uVar37 != 0) {
      do {
        cVar21 = fn_82ABDBE8(iVar7,*(undefined4 *)(iVar12 + (int)puVar11));
        if ((cVar21 != '\0') && (cVar21 = fn_82ABDBE8(iVar6,*puVar11), cVar21 != '\0')) break;
        uVar35 = uVar35 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar35 < uVar37);
      if (uVar35 < uVar37) {
        uVar36 = uVar29 >> 3 & 0x1ffffffc;
        *(uint *)((int)auStack_c8 + uVar36) =
             uVar35 + 1 << (uVar29 & 0x1f) | *(uint *)((int)auStack_c8 + uVar36);
      }
    }
    uVar29 = uVar29 + 4;
    param_2 = puStack0000001c;
    puVar11 = puStack00000024;
  }
  for (uVar37 = param_2[1]; uVar37 != 0; uVar37 = *(uint *)(uVar37 + 8)) {
    iVar6 = *(int *)(uVar37 + 0x10);
    if (iVar6 != 0) {
      uVar29 = *(uint *)(iVar6 + 8) >> 7 & 0x7f;
      if ((uVar29 == 0) || (bVar8 = true, 0x66 < uVar29)) {
        bVar8 = false;
      }
      if ((bVar8) && (cVar21 = fn_82B85910(iVar6,puVar17), cVar21 != '\0')) {
        fn_82AD1A40(*(undefined4 *)(uVar37 + 0x10),puVar17,iVar4);
      }
    }
  }
  puVar27 = puVar11 + 1;
  for (uVar37 = puVar11[1]; puVar28 = puStack00000024, puVar11 = puStack0000001c,
      iVar6 = iStack00000014, uVar37 != 0; uVar37 = *(uint *)(uVar37 + 8)) {
    iVar6 = *(int *)(uVar37 + 0x10);
    if (iVar6 != 0) {
      uVar29 = *(uint *)(iVar6 + 8) >> 7 & 0x7f;
      if ((uVar29 == 0) || (bVar8 = true, 0x66 < uVar29)) {
        bVar8 = false;
      }
      if ((bVar8) && (cVar21 = fn_82B85910(iVar6,puVar17), cVar21 != '\0')) {
        fn_82AD1A40(*(undefined4 *)(uVar37 + 0x10),puVar17,iVar4);
      }
    }
  }
  uVar30 = 0;
  iVar7 = -0x29 - (int)puStack00000024;
  iVar4 = (int)puVar17 - (int)puStack00000024;
  iVar9 = -0x2c - (int)puStack00000024;
  for (uVar37 = 0; uVar37 < (puVar11[2] >> 0x13 & 7); uVar37 = uVar37 + 1) {
    uVar35 = (int)puVar13 + iVar9;
    uVar16 = *(undefined4 *)((int)puVar13 + iVar12);
    uVar29 = *puVar13;
    uVar36 = uVar35 & 0x1f;
    uVar35 = ((2 << ((int)puVar13 + iVar7 & 0x1fU)) - 1U &
              *(uint *)((int)auStack_c8 + (uVar35 >> 3 & 0x1ffffffc)) & -1 << uVar36) >> uVar36;
    if (uVar35 == 0) {
      iVar18 = fn_82AF9758(iVar6,puVar11,uVar16,puVar28,uVar29,puVar22,auStack_c0,1);
      if (iVar18 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(iVar6,0x12c0);
      }
      puVar19 = (uint *)fn_82AFC3B8(iVar6,puVar11,uVar16,puVar28,uVar29,puVar17[7],puVar17,
                                          auStack_c0);
    }
    else {
      puVar19 = (uint *)puVar17[uVar35 + 10];
    }
    uVar16 = fn_82AD1978(puVar17,puVar19);
    *(undefined4 *)((int)puVar13 + iVar4) = uVar16;
    uVar29 = *(uint *)(puVar19[3] + 8) >> 7 & 0x7f;
    if ((uVar29 == 0x7d) || (bVar8 = false, uVar29 == 0x7c)) {
      bVar8 = true;
    }
    if (bVar8) {
      uVar29 = *puVar19;
      uVar31 = fn_82AF4BA8(iVar6,puVar19[3],uVar29 >> 0x19 & 7,uVar29 >> 5 & 0xff,
                                 uVar29 & 0x1f,auStack_b0);
      uVar30 = uVar31 | uVar30;
    }
    puVar13 = puVar13 + 1;
  }
  fn_82AF6CC8(iVar6,puVar17,uVar30);
  puVar13 = puVar17;
  while (puVar19 = (uint *)*puVar13, puVar19 != (uint *)0x0) {
    if ((*puVar19 & 0xe000000) == 0) {
      fn_82AD20C0(puVar17,puVar19,iVar6);
    }
    if ((uint *)*puVar13 == puVar19) {
      puVar13 = puVar19 + 1;
    }
  }
  puVar19 = puVar17 + 1;
  puVar13 = puVar19;
  while (uVar37 = uStack_d0, puVar23 = (uint *)*puVar13, puVar23 != (uint *)0x0) {
    if ((puVar23[4] != 0) && ((*puVar23 & 0xe000000) == 0)) {
      fn_82AD20C0(puVar23[4],puVar23,iVar6);
    }
    if ((uint *)*puVar13 == puVar23) {
      puVar13 = puVar23 + 2;
    }
  }
  while (puVar13 = (uint *)*puVar22, puVar13 != (uint *)0x0) {
    if ((*puVar13 & 0xe000000) == 0) {
      puVar23 = (uint *)puVar13[4];
      for (puVar5 = (uint *)*puVar23; puVar5 != puVar13; puVar5 = (uint *)puVar5[1]) {
        puVar23 = puVar5 + 1;
      }
      *puVar23 = puVar13[1];
      puVar13[1] = *puVar17;
      *puVar17 = (uint)puVar13;
      puVar13[4] = (uint)puVar17;
    }
    if ((uint *)*puVar22 == puVar13) {
      puVar22 = puVar13 + 1;
    }
  }
  puVar22 = puVar11 + 1;
  while (uVar29 = *puVar22, uVar29 != 0) {
    if (*(int *)(uVar29 + 0x10) != 0) {
      puVar13 = (uint *)(*(int *)(uVar29 + 0xc) + 4);
      for (uVar35 = *puVar13; uVar35 != uVar29; uVar35 = *(uint *)(uVar35 + 8)) {
        puVar13 = (uint *)(uVar35 + 8);
      }
      *puVar13 = *(uint *)(uVar29 + 8);
      *(uint *)(uVar29 + 8) = *puVar19;
      *puVar19 = uVar29;
      *(uint **)(uVar29 + 0xc) = puVar17;
    }
    if (*puVar22 == uVar29) {
      puVar22 = (uint *)(uVar29 + 8);
    }
  }
  while (puVar22 = (uint *)*puVar27, puVar22 != (uint *)0x0) {
    if (puVar22[4] != 0) {
      uVar29 = *puVar22;
      if ((uVar29 & 0xe000000) != 0) {
        *puVar22 = ((((uVar37 >> (uVar29 >> 10 & 6) & 3) << 2 | uVar37 >> (uVar29 >> 8 & 6) & 3) <<
                     2 | uVar37 >> (uVar29 >> 6 & 6) & 3) << 2 | uVar37 >> (uVar29 >> 4 & 6) & 3) <<
                   5 | uVar29 & 0xffffe01f;
        fn_82AFA378(iVar6);
      }
      puVar23 = (uint *)(puVar22[3] + 4);
      for (puVar13 = (uint *)*puVar23; puVar13 != puVar22; puVar13 = (uint *)puVar13[2]) {
        puVar23 = puVar13 + 2;
      }
      *puVar23 = puVar22[2];
      puVar22[2] = *puVar19;
      *puVar19 = (uint)puVar22;
      puVar22[3] = (uint)puVar17;
    }
    if ((uint *)*puVar27 == puVar22) {
      puVar27 = puVar22 + 2;
    }
  }
  fn_82AD1B28(puVar17);
  puVar17[2] = puVar17[2] | 0x1000000;
  if ((puVar11[2] >> 0x17 & 1) == 0) goto LAB_82b01840;
  uVar30 = fn_82ADD810(iVar6,puVar11);
  uVar31 = fn_82ADD810(iVar6,puVar28);
  if ((uVar30 & 0xffffffff) != (uVar31 & 0xffffffff)) {
    fn_82AE0148(iVar6,uVar30,uVar31,uVar34,0,0,0,0);
  }
  puVar17[2] = puVar17[2] | 0x800000;
  uVar20 = fn_82ADD120(puVar11);
  *(undefined2 *)((int)puVar17 + 0x12) = uVar20;
  puVar22 = *(uint **)(iVar6 + 0x294);
  if ((puVar22[1] & 1) == 0) {
    uVar37 = *puVar22 & 0xfffffffe;
    iVar12 = uVar37 - 4;
    if ((iVar12 == 0) || (*(uint *)(uVar37 + 8) < *(int *)(uVar37 + 4) + 1U)) goto LAB_82b0181c;
  }
  else {
LAB_82b0181c:
    iVar12 = fn_82AD6090(puVar22,1);
  }
  iVar4 = *(int *)(iVar12 + 8);
  *(int *)(iVar12 + 8) = iVar4 + 1;
  *(uint **)((iVar4 + 4) * 4 + iVar12) = puVar17;
LAB_82b01840:
  fn_82AF5458(iVar6,puVar11,puVar17);
  fn_82AF5458(iVar6,puVar28);
  fn_82AFA378(iVar6,puVar17);
  if ((iStack0000002c != 0) && ((*(uint *)(iStack0000002c + 8) & 0x1f) != 0)) {
    fn_82AFA410(iVar6,puVar28);
  }
  fn_82B8AE98(iVar6,puVar11);
  fn_82B8AE98(iVar6,puVar28);
  puVar22 = puVar19;
  do {
    uVar37 = *puVar22;
    if (uVar37 == 0) {
      return puVar17;
    }
    iVar12 = *(int *)(uVar37 + 0x10);
    if ((iVar12 != 0) && ((*(uint *)(iVar12 + 8) & 0x3f80) == 0x3700)) {
      uVar35 = 0;
      uVar29 = 0;
      piVar24 = (int *)(iVar12 + 0x2c);
      for (uVar34 = 0; uVar34 < (*(uint *)(iVar12 + 8) >> 0x13 & 7); uVar34 = uVar34 + 1) {
        if ((uint *)((uint *)*piVar24)[3] != puVar17) goto LAB_82b01a24;
        uVar35 = (*(uint *)*piVar24 >> 5 & 3) << (uVar29 & 0x3f) | uVar35 & ~(3 << (uVar29 & 0x3f));
        piVar24 = piVar24 + 1;
        uVar29 = uVar29 + 2;
      }
      puVar11 = (uint *)(iVar12 + 4);
      uVar34 = **(uint **)(iVar12 + 0x2c);
      while (puVar27 = (uint *)*puVar11, puVar27 != (uint *)0x0) {
        if (puVar27[4] != 0) {
          puVar28 = (uint *)(puVar27[3] + 4);
          for (puVar13 = (uint *)*puVar28; puVar13 != puVar27; puVar13 = (uint *)puVar13[2]) {
            puVar28 = puVar13 + 2;
          }
          *puVar28 = puVar27[2];
          puVar27[2] = *puVar19;
          *puVar19 = (uint)puVar27;
          puVar27[3] = (uint)puVar17;
          uVar29 = *puVar27;
          if ((uVar29 & 0xe000000) != 0) {
            uVar29 = ((((uVar35 >> (uVar29 >> 10 & 6) & 3) << 2 | uVar35 >> (uVar29 >> 8 & 6) & 3)
                       << 2 | uVar35 >> (uVar29 >> 6 & 6) & 3) << 2 |
                     uVar35 >> (uVar29 >> 4 & 6) & 3) << 5 | uVar29 & 0xffffe01f;
            *puVar27 = uVar29;
            if ((uVar34 & 1) != 0) {
              *puVar27 = uVar34 & 1 | uVar29;
            }
          }
          fn_82AFA378(iVar6,puVar27[4]);
        }
        if ((uint *)*puVar11 == puVar27) {
          puVar11 = puVar27 + 2;
        }
      }
      fn_82B8AC10(iVar6,iVar12,*(undefined4 *)(iVar6 + 0x28c),1);
    }
LAB_82b01a24:
    if (*puVar22 == uVar37) {
      puVar22 = (uint *)(uVar37 + 8);
    }
  } while( true );
}

