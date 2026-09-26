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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_2f0;
extern unsigned int *auStack_300;
extern unsigned int *auStack_310;
extern unsigned int *auStack_320;
extern unsigned int *auStack_330;
extern unsigned int fStack_404;
extern unsigned int fStack_408;
extern unsigned int fStack_40c;
extern unsigned int fStack_410;
extern unsigned int fStack_414;
extern unsigned int fStack_418;
extern unsigned int fStack_41c;
extern unsigned int fStack_420;
extern unsigned int fStack_424;
extern unsigned int fStack_428;
extern unsigned int fStack_42c;
extern unsigned int fStack_430;
extern unsigned int fStack_434;
extern unsigned int fStack_438;
extern unsigned int fStack_43c;
extern unsigned int fStack_440;
extern unsigned int fStack_4d0;
extern unsigned int fStack_4d4;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CEC350();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDC88();
extern int fn_82CEE578();
extern int fn_82D11CD0();
extern int fn_82D12180();
extern int fn_82D127A0();
extern int fn_82D14790();
extern int fn_82D18590();
extern int fn_82D195F8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int *lbl_8323B464;
extern unsigned int stack0x00000000;
extern unsigned int uStack_500;
extern unsigned int uStack_50c;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x82d1a5ec) */
/* WARNING: Removing unreachable block (ram,0x82d1a494) */
/* WARNING: Removing unreachable block (ram,0x82d1a5ac) */
/* WARNING: Removing unreachable block (ram,0x82d1a62c) */
/* WARNING: Removing unreachable block (ram,0x82d1a51c) */
/* WARNING: Removing unreachable block (ram,0x82d1a55c) */

undefined8 fn_82D19900(int param_1,longlong param_2,char param_3)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 in_r0;
  ulonglong uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong *puVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar22;
  longlong lVar20;
  int iVar23;
  int iVar24;
  longlong lVar21;
  int iVar25;
  uint *puVar26;
  undefined4 *puVar27;
  int *piVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 in_vs32 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar32 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar33 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 uVar37;
  uint uStack_50c;
  ulonglong uStack_500;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  longlong lStack_400;
  longlong lStack_3f8;
  longlong lStack_3f0;
  longlong lStack_3d8;
  longlong lStack_3d0;
  longlong lStack_3c8;
  longlong lStack_3c0;
  longlong lStack_3b8;
  longlong lStack_3b0;
  longlong lStack_3a8;
  longlong lStack_3a0;
  longlong lStack_398;
  longlong lStack_390;
  longlong lStack_388;
  longlong lStack_380;
  longlong lStack_378;
  longlong lStack_370;
  longlong lStack_368;
  longlong lStack_360;
  longlong lStack_358;
  longlong lStack_350;
  longlong lStack_348;
  longlong lStack_340;
  longlong lStack_338;
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [736];
  
  uVar12 = ZEXT48(&stack0x00000000);
  if ((int)param_2 < 4) {
    param_2 = 4;
  }
  puVar26 = (uint *)(param_1 + 0x28);
  iVar25 = (int)param_2;
  if (iVar25 < *(int *)(param_1 + 0x28)) {
    cVar2 = *(char *)(param_1 + 0x1b5);
    cVar3 = *(char *)(param_1 + 0x1b4);
    if (*(int *)(param_1 + 0x1a8) != 3) {
      fn_82CEE578(uVar12 - 1000,uVar12 - 0x2b0,0x200);
      uVar13 = fn_82CEDB38(uVar12 - 1000,0xffffffff82134584);
      uVar13 = fn_82CEDC88(uVar13,3);
      fn_82CEDB38(uVar13,0xffffffff82134578);
      iVar14 = (**(code **)(*lbl_8323B464 + 0xc))
                         (lbl_8323B464,3,0x79f9d888,uVar12 - 0x2b0,0xffffffff8213450c,0x152);
      if (iVar14 != 0) {
        trapWord(0x1f,in_r0,0x16);
      }
      fn_82CED958(uVar12 - 1000);
    }
    if (param_3 != '\0') {
      uVar22 = *puVar26;
      iVar14 = fn_82CE5410();
      if (0 < (int)uVar22) {
        if ((int)uVar22 < 0) {
          uVar22 = 0;
        }
        fn_82CE6310(*(undefined4 *)(iVar14 + 0x10),uVar12 - 0x4e0,uVar22);
      }
      iVar14 = 0;
      for (puVar27 = *(undefined4 **)(param_1 + 0x24); puVar27 != (undefined4 *)0x0;
          puVar27 = (undefined4 *)*puVar27) {
        puVar7 = (undefined4 *)((uint)(puVar27 + 4) & 0xfffffff0);
        uVar34 = puVar7[1];
        uVar35 = puVar7[2];
        uVar36 = puVar7[3];
        puVar8 = (undefined4 *)((int)in_r0 + iVar14 & 0xfffffff0);
        *puVar8 = *puVar7;
        puVar8[1] = uVar34;
        puVar8[2] = uVar35;
        puVar8[3] = uVar36;
        iVar14 = iVar14 + 0x10;
      }
    }
    uVar22 = *puVar26;
    iVar14 = fn_82CE5410();
    if (0 < (int)uVar22) {
      fn_82CE6310(*(undefined4 *)(iVar14 + 0x10),uVar12 - 0x510,uVar22);
    }
    if (iVar25 < (int)*puVar26) {
      puVar27 = (undefined4 *)(param_1 + 0x24);
      dVar29 = (double)lbl_82002AE0;
      dVar30 = (double)lbl_821AAD20;
      do {
        puVar7 = (undefined4 *)*puVar27;
        uStack_50c = 0;
        for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)*puVar7) {
          puVar7[0xb] = (float)dVar30;
        }
        for (puVar7 = *(undefined4 **)(param_1 + 0x3c); puVar7 != (undefined4 *)0x0;
            puVar7 = (undefined4 *)*puVar7) {
          iVar14 = 0;
          piVar28 = puVar7 + 2;
          do {
            if ((double)*(float *)(*piVar28 + 0x2c) == dVar30) {
              fStack_414 = (float)dVar30;
              uStack_500 = CONCAT44(puVar7,iVar14);
              fStack_434 = (float)dVar30;
              dVar31 = dVar30;
              puVar8 = puVar7;
              do {
                uStack_500 = uStack_500 & 0xffffffff;
                iVar15 = *(int *)((int)((uStack_500 + 2 & 0xffffffff) << 2) + (int)puVar8);
                iVar23 = *(int *)((int)(((-(ulonglong)(uStack_500 != 2) & uStack_500 + 1) + 2 &
                                        0xffffffff) << 2) + (int)puVar8);
                lStack_378 = (longlong)*(int *)(iVar15 + 0x28);
                lStack_388 = (longlong)*(int *)(iVar15 + 0x20);
                lStack_3c0 = (longlong)*(int *)(iVar15 + 0x24);
                lStack_3f8 = (longlong)*(int *)(iVar23 + 0x20);
                lStack_3d0 = (longlong)*(int *)(iVar23 + 0x24);
                lStack_338 = (longlong)*(int *)(iVar23 + 0x28);
                lVar20 = 2;
                fStack_420 = (float)lStack_3f8;
                fStack_418 = (float)lStack_338;{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs45,in_vs32); memcpy(auVar32, &_vt0, 16); }
                fStack_41c = (float)lStack_3d0;{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs45,in_vs32); memcpy(in_vs44, &_vt1, 16); }
                if (uStack_500 != 0) {
                  lVar20 = uStack_500 - 1;
                }
                iVar15 = *(int *)((int)((lVar20 + 2U & 0xffffffff) << 2) + (int)puVar8);
                uVar22 = *(uint *)((int)((uStack_500 + 5 & 0xffffffff) << 2) + (int)puVar8);
                lStack_390 = (longlong)*(int *)(iVar15 + 0x20);
                lStack_3a0 = (longlong)*(int *)(iVar15 + 0x24);
                lStack_3b0 = (longlong)*(int *)(iVar15 + 0x28);
                fStack_438 = (float)lStack_3b0;
                fStack_440 = (float)lStack_390;
                fStack_43c = (float)lStack_3a0;
                iVar15 = (int)in_r0;
                puVar9 = (undefined4 *)((int)&fStack_440 + iVar15 & 0xfffffff0);
                uVar34 = *puVar9;
                uVar35 = puVar9[1];
                uVar36 = puVar9[2];
                uVar37 = puVar9[3];{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs45,in_vs32); memcpy(auVar33, &_vt2, 16); }
                if ((uVar22 & 3) == 0) {
                  iVar23 = 2;
                }
                else {
                  iVar23 = (uVar22 & 3) - 1;
                }
                vectorSubtractFloatingPoint(auVar32,in_vs44);{ V16 _vt3 = vectorSubtractFloatingPoint(auVar33,in_vs44); memcpy(in_vs43, &_vt3, 16); }
                iVar24 = *(int *)((iVar23 + 2) * 4 + (uVar22 & 0xfffffffc));
                lStack_370 = (longlong)*(int *)(iVar24 + 0x28);
                iVar23 = *(int *)(iVar24 + 0x24);
                lStack_360 = (longlong)*(int *)(iVar24 + 0x20);
                puVar9 = (undefined4 *)((uint)(auStack_300 + iVar15) & 0xfffffff0);
                *puVar9 = in_register_000100a0;
                puVar9[1] = in_register_000100a4;
                puVar9[2] = in_register_000100a8;
                puVar9[3] = in_vr10;
                lStack_380 = (longlong)iVar23;
                puVar9 = (undefined4 *)((uint)(auStack_2f0 + iVar15) & 0xfffffff0);
                *puVar9 = uVar34;
                puVar9[1] = uVar35;
                puVar9[2] = uVar36;
                puVar9[3] = uVar37;{ V16 _vt4 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs45,in_vs32); memcpy(in_vs32, &_vt4, 16); }
                vectorSubtractFloatingPoint(in_vs32,in_vs44);
                puVar9 = (undefined4 *)((uint)(auStack_2e0 + iVar15) & 0xfffffff0);
                *puVar9 = in_register_00010090;
                puVar9[1] = in_register_00010094;
                puVar9[2] = in_register_00010098;
                puVar9[3] = in_vr9;
                fn_82CEC350(uVar12 - 0x2d0,uVar12 - 0x300);
                lVar20 = 2;
                uVar34 = storeVectorElementWordIndexed(in_vs40,0,uVar12 - 0x4d0);
                *(undefined4 *)(uVar12 - 0x4d0) = uVar34;
                dVar31 = (double)(float)((double)fStack_4d0 + dVar31);
                if (uStack_500 != 0) {
                  lVar20 = uStack_500 - 1;
                }
                uVar22 = *(uint *)((int)((lVar20 + 5U & 0xffffffff) << 2) + (int)puVar8);
                uStack_500 = CONCAT44(uVar22,uVar22) & 0xfffffffc00000003;
                puVar8 = (undefined4 *)(uVar22 & 0xfffffffc);
                if ((uVar22 & 0xfffffffc) == 0) {
                  uVar22 = piVar28[3];
                  uVar16 = -(uint)((uVar22 & 3) != 2) & (uVar22 & 3) + 1;
                  if ((uVar22 & 0xfffffffc) != 0) {
                    fStack_424 = (float)dVar30;
                    fStack_404 = (float)dVar30;
                    do {
                      uVar22 = uVar22 & 0xfffffffc;
                      iVar15 = *(int *)((uVar16 + 2) * 4 + uVar22);
                      iVar23 = *(int *)(((-(uint)(uVar16 != 2) & uVar16 + 1) + 2) * 4 + uVar22);
                      lStack_3d8 = (longlong)*(int *)(iVar15 + 0x28);
                      lStack_340 = (longlong)*(int *)(iVar15 + 0x20);
                      lStack_368 = (longlong)*(int *)(iVar15 + 0x24);
                      lStack_3f0 = (longlong)*(int *)(iVar23 + 0x28);
                      lStack_400 = (longlong)*(int *)(iVar23 + 0x20);
                      lStack_3c8 = (longlong)*(int *)(iVar23 + 0x24);
                      iVar15 = 2;
                      fStack_430 = (float)lStack_340;
                      fStack_428 = (float)lStack_3d8;
                      fStack_42c = (float)lStack_368;{ V16 _vt5 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs45,in_vs32); memcpy(auVar32, &_vt5, 16); }{ V16 _vt6 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs45,in_vs32); memcpy(in_vs44, &_vt6, 16); }
                      if (uVar16 != 0) {
                        iVar15 = uVar16 - 1;
                      }
                      iVar23 = (uVar16 + 5) * 4;
                      iVar15 = *(int *)((iVar15 + 2) * 4 + uVar22);
                      uVar16 = *(uint *)(iVar23 + uVar22);
                      lStack_3a8 = (longlong)*(int *)(iVar15 + 0x24);
                      lStack_350 = (longlong)*(int *)(iVar15 + 0x28);
                      lStack_3b8 = (longlong)*(int *)(iVar15 + 0x20);
                      fStack_410 = (float)lStack_3b8;
                      fStack_40c = (float)lStack_3a8;
                      fStack_408 = (float)lStack_350;
                      iVar15 = (int)in_r0;
                      puVar8 = (undefined4 *)((int)&fStack_410 + iVar15 & 0xfffffff0);
                      uVar34 = *puVar8;
                      uVar35 = puVar8[1];
                      uVar36 = puVar8[2];
                      uVar37 = puVar8[3];{ V16 _vt7 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs45,in_vs32); memcpy(auVar33, &_vt7, 16); }
                      if ((uVar16 & 3) == 0) {
                        iVar24 = 2;
                      }
                      else {
                        iVar24 = (uVar16 & 3) - 1;
                      }
                      vectorSubtractFloatingPoint(auVar32,in_vs44);{ V16 _vt8 = vectorSubtractFloatingPoint(auVar33,in_vs44); memcpy(in_vs43, &_vt8, 16); }
                      iVar5 = *(int *)((iVar24 + 2) * 4 + (uVar16 & 0xfffffffc));
                      iVar24 = *(int *)(iVar5 + 0x20);
                      iVar4 = *(int *)(iVar5 + 0x28);
                      iVar5 = *(int *)(iVar5 + 0x24);
                      puVar8 = (undefined4 *)((uint)(auStack_330 + iVar15) & 0xfffffff0);
                      *puVar8 = in_register_000100a0;
                      puVar8[1] = in_register_000100a4;
                      puVar8[2] = in_register_000100a8;
                      puVar8[3] = in_vr10;
                      lStack_348 = (longlong)iVar4;
                      puVar8 = (undefined4 *)((uint)(auStack_320 + iVar15) & 0xfffffff0);
                      *puVar8 = uVar34;
                      puVar8[1] = uVar35;
                      puVar8[2] = uVar36;
                      puVar8[3] = uVar37;
                      lStack_358 = (longlong)iVar5;
                      lStack_398 = (longlong)iVar24;{ V16 _vt9 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs45,in_vs32); memcpy(in_vs32, &_vt9, 16); }
                      vectorSubtractFloatingPoint(in_vs32,in_vs44);
                      puVar8 = (undefined4 *)((uint)(auStack_310 + iVar15) & 0xfffffff0);
                      *puVar8 = in_register_00010090;
                      puVar8[1] = in_register_00010094;
                      puVar8[2] = in_register_00010098;
                      puVar8[3] = in_vr9;
                      fn_82CEC350(uVar12 - 0x2c0,uVar12 - 0x330);
                      uVar34 = storeVectorElementWordIndexed(in_vs40,0,uVar12 - 0x4d4);
                      *(undefined4 *)(uVar12 - 0x4d4) = uVar34;
                      uVar22 = *(uint *)(iVar23 + uVar22);
                      dVar31 = (double)(float)((double)fStack_4d4 + dVar31);
                      uVar16 = -(uint)((uVar22 & 3) != 2) & (uVar22 & 3) + 1;
                    } while ((uVar22 & 0xfffffffc) != 0);
                  }
                  break;
                }
              } while ((uVar22 & 3) + (uVar22 & 0xfffffffc) != iVar14 + (int)puVar7);
              iVar15 = fn_82CE5410();
              if (uStack_50c == 0) {
                fn_82CE63B0(*(undefined4 *)(iVar15 + 0x10),uVar12 - 0x510,0xc);
              }
              *(float *)((undefined8 *)(uStack_50c * 0xc) + 1) = (float)dVar31;
              *(undefined8 *)(uStack_50c * 0xc) = CONCAT44(puVar7,iVar14);
              *(float *)(*piVar28 + 0x2c) = (float)dVar29;
              uStack_50c = uStack_50c + 1;
            }
            iVar14 = iVar14 + 1;
            piVar28 = piVar28 + 1;
          } while (iVar14 < 3);
        }
        for (puVar7 = (undefined4 *)*puVar27; puVar7 != (undefined4 *)0x0;
            puVar7 = (undefined4 *)*puVar7) {
          puVar7[0xb] = (float)dVar30;
        }
        if (1 < (int)uStack_50c) {
          fn_82D12180(0,0,(ulonglong)uStack_50c - 1,0);
        }
        uVar22 = *puVar26;
        lVar20 = 0;
        if (0 < (longlong)((ulonglong)uVar22 - param_2)) {
          puVar17 = (ulonglong *)0x0;
          do {
            bVar10 = false;
            iVar14 = *(int *)(((int)*puVar17 + 2) * 4 + *(int *)puVar17);
            *(float *)(iVar14 + 0x2c) = (float)((double)*(float *)(iVar14 + 0x2c) + dVar29);
            iVar14 = *(int *)puVar17;
            uVar11 = *puVar17;
            uStack_500 = *puVar17;
LAB_82d1a1e0:
            uVar19 = uStack_500 & 0xffffffff;
            iVar15 = *(int *)((int)(((-(ulonglong)(uVar19 != 2) & uVar19 + 1) + 2 & 0xffffffff) << 2
                                   ) + (((U64)(uStack_500) >> 0) & 0xFFFFFFFF));
            fVar1 = (float)((double)*(float *)(iVar15 + 0x2c) + dVar29);
            *(float *)(iVar15 + 0x2c) = fVar1;
            if (dVar29 < (double)fVar1) {
              bVar10 = true;
            }
            lVar21 = 2;
            if (uVar19 != 0) {
              lVar21 = uVar19 - 1;
            }
            uVar16 = *(uint *)((int)((lVar21 + 5U & 0xffffffff) << 2) + (((U64)(uStack_500) >> 0) & 0xFFFFFFFF));
            uStack_500 = CONCAT44(uVar16,uVar16) & 0xfffffffc00000003;
            if ((uVar16 & 0xfffffffc) != 0) goto code_r0x82d1a25c;
            uVar16 = *(uint *)(((int)uVar11 + 5) * 4 + iVar14);
            uVar18 = -(uint)((uVar16 & 3) != 2) & (uVar16 & 3) + 1;
            while ((uVar16 & 0xfffffffc) != 0) {
              iVar14 = *(int *)(((-(uint)(uVar18 != 2) & uVar18 + 1) + 2) * 4 +
                               (uVar16 & 0xfffffffc));
              fVar1 = (float)((double)*(float *)(iVar14 + 0x2c) + dVar29);
              *(float *)(iVar14 + 0x2c) = fVar1;
              if (dVar29 < (double)fVar1) {
                bVar10 = true;
              }
              uVar16 = *(uint *)((uVar18 + 5) * 4 + (uVar16 & 0xfffffffc));
              uVar18 = -(uint)((uVar16 & 3) != 2) & (uVar16 & 3) + 1;
            }
LAB_82d1a330:
            if (bVar10) break;
            lVar20 = lVar20 + 1;
            puVar17 = (ulonglong *)((int)puVar17 + 0xc);
          } while ((int)lVar20 < (int)((ulonglong)uVar22 - param_2));
          if (0 < (int)lVar20) {
            piVar28 = (int *)0x0;
            do {
              piVar6 = *(int **)((piVar28[1] + 2) * 4 + *piVar28);
              iVar14 = *piVar6;
              piVar6 = (int *)piVar6[1];
              if (iVar14 != 0) {
                *(int **)(iVar14 + 4) = piVar6;
              }
              if (piVar6 == (int *)0x0) {
                *(int *)(param_1 + 0x24) = iVar14;
              }
              else {
                *piVar6 = iVar14;
              }
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
              fn_82D11CD0(param_1 + 0x18);
              lVar20 = lVar20 + -1;
              piVar28 = piVar28 + 3;
            } while (lVar20 != 0);
          }
        }
        uVar22 = *puVar26;
        iVar14 = fn_82CE5410();
        if (0 < (int)uVar22) {
          uVar16 = uVar22;
          if ((int)uVar22 < 0) {
            uVar16 = 0;
          }
          fn_82CE6310(*(undefined4 *)(iVar14 + 0x10),uVar12 - 0x4f0,uVar16,0x10);
        }
        iVar14 = 0;
        for (puVar7 = (undefined4 *)*puVar27; puVar7 != (undefined4 *)0x0;
            puVar7 = (undefined4 *)*puVar7) {
          puVar8 = (undefined4 *)((uint)(puVar7 + 4) & 0xfffffff0);
          uVar34 = puVar8[1];
          uVar35 = puVar8[2];
          uVar36 = puVar8[3];
          puVar9 = (undefined4 *)((int)in_r0 + iVar14 & 0xfffffff0);
          *puVar9 = *puVar8;
          puVar9[1] = uVar34;
          puVar9[2] = uVar35;
          puVar9[3] = uVar36;
          iVar14 = iVar14 + 0x10;
        }
        iVar14 = fn_82D18590(param_1,0,uVar22,0,0);
        if (iVar14 == -1) {
          fn_82CE5410();
          fn_82CE5410();
          fn_82CE5410();
          return 0;
        }
        fn_82CE5410();
      } while (iVar25 < (int)*puVar26);
    }
    if (param_3 != '\0') {
      fn_82D195F8(param_1,uVar12 - 0x4e0);
    }
    if (cVar2 != '\0') {
      fn_82D14790(param_1);
    }
    if (cVar3 != '\0') {
      fn_82D127A0(param_1);
    }
    fn_82CE5410();
    fn_82CE5410();
  }
  return 1;
code_r0x82d1a25c:
  if ((uVar16 & 3) + (uVar16 & 0xfffffffc) == (int)uVar11 + iVar14) goto LAB_82d1a330;
  goto LAB_82d1a1e0;
}

