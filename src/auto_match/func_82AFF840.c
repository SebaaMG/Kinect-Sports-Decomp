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
extern int fn_82AD1978();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82AFE520();
extern int fn_82B161E8();
extern int fn_82B168F8();
extern int fn_82B16910();
extern int fn_82B841E8();
extern int fn_82B84350();
extern int fn_82B8AC10();
extern unsigned int iStack00000014;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


uint * fn_82AFF840(int param_1,undefined8 *param_2,uint *param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint *puVar3;
  undefined8 uVar2;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined2 uVar8;
  int iVar7;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  int *piVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  int iStack00000014;
  uint *puStack00000034;
  uint uStack_b0;
  undefined8 uStack_a8;
  
  uVar27 = 0;
  uVar21 = *(uint *)(param_2 + 1);
  uStack_b0 = 0;
  uStack_a8 = *param_2;
  uVar5 = 0;
  uVar9 = 0;
  uVar28 = param_3[2] >> 0xe;
  uVar26 = (ulonglong)uVar28 & 7;
  if ((uVar21 & 0x1f) != 0) {
    uVar14 = 0;
    do {
      uVar11 = ((2L << (uVar14 + 3 & 0x3f)) - 1U &
                *(ulonglong *)((int)&uStack_a8 + ((uint)uVar14 >> 3 & 0x1ffffff8)) &
               -1L << (uVar14 & 0x3f)) >> (uVar14 & 0x3f);
      uVar23 = (uVar11 & 0xffffffff) >> 2;
      uVar11 = uVar11 & 3;
      uVar29 = uVar11;
      iVar10 = (int)uVar23;
      if (param_4 == 0) {
        uVar29 = uVar23;
        iVar10 = (int)uVar11;
      }
      uVar12 = (uint)(uVar29 << 1);
      uVar9 = uVar9 + 1;
      uVar27 = (uint)(1 << ((uint)uVar29 & 0x3f)) | uVar27;
      uVar5 = uVar5 & ~(3 << (uVar12 & 0x3e)) | iVar10 << (uVar12 & 0x3e);
      uVar14 = uVar14 + 4;
    } while (uVar9 < (uVar21 & 0x1f));
    uStack_b0 = (uint)uVar27;
  }
  uVar11 = 0;
  uVar14 = ((0x8da691691448U >> (uVar27 & 0x7f)) >> (uVar27 & 0x7f)) >> (uVar27 & 0x7f) & 7;
  uVar23 = uVar26 - uVar14;
  *(uint *)(param_2 + 1) = (uint)(uVar14 << 5) | uVar21 & 0xffffff1f;
  uStack_a8 = CONCAT44((int)uVar23,(int)*param_2);
  if (param_5 == (uint *)0x0) {
    uVar21 = 0xe4;
  }
  else {
    uVar21 = *param_5;
  }
  uVar9 = 0;
  if ((uVar28 & 7) != 0) {
    uVar12 = 0;
    uVar13 = 0;
    uVar29 = uVar26;
    do {
      if (((uint)(1 << (uVar9 & 0x3f)) & uVar27) == 0) {
        uVar15 = uVar12 & 0x3f;
        uVar24 = uVar12 & 0x3f;
        uVar12 = uVar12 + 2;
        uVar11 = uVar11 & ~(ulonglong)(uint)(3 << uVar15) | (ulonglong)(uVar9 << uVar24);
      }
      else {
        uVar15 = uVar5 >> (uVar13 & 0x3f) & 3;
        if (param_5 == (uint *)0x0) {
          uVar15 = uVar21 >> (uVar15 << 1) & 3;
        }
        uVar24 = (1 << (uVar13 & 0x3f)) - 1;
        uVar21 = (uVar21 & ~uVar24 & 0x3f) << 2 | uVar24 & uVar21 | uVar15 << (uVar13 & 0x3f);
      }
      uVar9 = uVar9 + 1;
      uVar13 = uVar13 + 2;
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar21;
  }
  if ((uVar23 & 0xffffffff) == 0) {
    return (uint *)0x0;
  }
  iStack00000014 = param_1;
  puStack00000034 = param_5;
  if (param_5 == (uint *)0x0) {
    puVar3 = param_3 + 1;
    while (puVar16 = (uint *)*puVar3, puVar16 != (uint *)0x0) {
      uVar9 = puVar16[4];
      if (((uVar9 != 0) && ((*puVar16 & 0xe000000) != 0)) &&
         ((*(uint *)(uVar9 + 8) & 0x3f80) == 0x3700)) {
        fn_82B161E8(param_1,uVar9,*(undefined4 *)(param_1 + 0x294));
      }
      if ((uint *)*puVar3 == puVar16) {
        puVar3 = puVar16 + 2;
      }
    }
  }
  puVar3 = (uint *)fn_82B841E8(param_1,param_3[7],0,param_3[2] >> 7 & 0x7f,
                                     param_3[2] >> 0x13 & 7,uVar23);
  if ((*(short *)((int)param_3 + 0xe) != 0) && (uVar27 = 0, (uVar28 & 7) != 0)) {
    uVar28 = 0;
    do {
      uVar2 = fn_82B168F8(param_3,uVar27);
      fn_82B16910(puVar3,uVar21 >> (uVar28 & 0x3f) & 3,0xf,uVar2);
      uVar27 = uVar27 + 1;
      uVar28 = uVar28 + 2;
    } while ((uVar27 & 0xffffffff) < uVar26);
  }
  uVar28 = (uint)puVar3 & 0xfffffffe;
  puVar16 = (uint *)(((uint)param_3 & 0xfffffffe) + 0x24);
  *(uint *)(uVar28 + 0x24) = *puVar16;
  *(uint *)(*puVar16 & 0xfffffffe) = uVar28;
  *(uint *)(uVar28 + 0x28) = (uint)param_3 & 0xfffffffe;
  *puVar16 = uVar28 + 0x28;
  puVar3[5] = puVar3[5] & 0xfffffff8;
  puVar3[4] = puVar3[4] & 0x7fffffff;
  if ((param_3[2] & 1) != 0) {
    puVar3[2] = puVar3[2] | 1;
  }
  puVar16 = puVar3 + 0xb;
  for (uVar28 = 0; puVar4 = param_3, uVar28 < (param_3[2] >> 0x13 & 7); uVar28 = uVar28 + 1) {
    puVar4 = (uint *)fn_82AD1978(puVar3,*(undefined4 *)
                                               (((int)param_3 - (int)puVar3) + (int)puVar16));
    *puVar16 = (uint)puVar4;
    uVar9 = *puVar4 >> 5 & 0xff;
    puVar16 = puVar16 + 1;
    *puVar4 = (uint)((((((ulonglong)(uVar9 >> ((uint)uVar11 >> 5 & 6)) & 3 | (uVar23 & 7) << 0xe) <<
                        2 | (ulonglong)(uVar9 >> ((uint)uVar11 >> 3 & 6)) & 0xffffffff00000003) << 2
                      | (ulonglong)(uVar9 >> ((uint)(uVar11 >> 1) & 6)) & 0xffffffff00000003) << 2 |
                     (ulonglong)(uVar9 >> ((uint)(uVar11 << 1) & 6)) & 0xffffffff00000003) << 5) |
              *puVar4 & 0xf1ffe01f;
  }
  while (puVar16 = (uint *)*puVar4, puVar16 != (uint *)0x0) {
    if ((*puVar16 & 0xe000000) == 0) {
      puVar17 = (uint *)puVar16[4];
      for (puVar20 = (uint *)*puVar17; puVar20 != puVar16; puVar20 = (uint *)puVar20[1]) {
        puVar17 = puVar20 + 1;
      }
      *puVar17 = puVar16[1];
      puVar16[1] = *puVar3;
      *puVar3 = (uint)puVar16;
      puVar16[4] = (uint)puVar3;
    }
    if ((uint *)*puVar4 == puVar16) {
      puVar4 = puVar16 + 1;
    }
  }
  puVar16 = param_3 + 1;
  while (puVar4 = (uint *)*puVar16, puVar4 != (uint *)0x0) {
    uVar28 = puVar4[4];
    if (uVar28 != 0) {
      if ((puStack00000034 == (uint *)0x0) && (uVar9 = *puVar4, (uVar9 & 0xe000000) != 0)) {
        if (((*(uint *)(uVar28 + 8) & 0x3f80) == 0x3700) &&
           ((1 << (uVar9 >> 5 & 3) & uStack_b0) != 0)) {
          uVar5 = fn_82B84350(iStack00000014,*(undefined4 *)(uVar28 + 0x1c),0,
                                    ((ulonglong)(*(uint *)(uVar28 + 8) >> 0x13) & 7) - uVar14);
          uVar9 = uVar5 & 0xfffffffe;
          puVar17 = (uint *)((uVar28 & 0xfffffffe) + 0x24);
          uVar25 = 0;
          iVar10 = 0;
          uVar13 = 0;
          uVar12 = 0;
          *(uint *)(uVar9 + 0x24) = *puVar17;
          uVar24 = 0;
          uVar15 = 0;
          *(uint *)(*puVar17 & 0xfffffffe) = uVar9;
          *(uint *)(uVar9 + 0x28) = uVar28 & 0xfffffffe;
          *puVar17 = uVar9 + 0x28;
          if ((*(uint *)(uVar28 + 8) & 0x380000) != 0) {
            uVar9 = 0;
            puVar17 = (uint *)(uVar5 + 0x2c);
            piVar22 = (int *)(uVar28 + 0x2c);
            do {
              puVar20 = (uint *)*piVar22;
              uVar19 = *puVar20 >> 5 & 3;
              if (((uint *)puVar20[3] == param_3) && ((1 << uVar19 & uStack_b0) != 0)) {
                uVar12 = 1 << (uVar15 & 0x3f) | uVar12;
                uVar13 = uVar13 & ~(3 << (uVar9 & 0x3f)) | uVar19 << (uVar9 & 0x3f);
              }
              else {
                uVar25 = uVar25 & ~(3 << (uVar9 & 0x3f)) | iVar10 << (uVar9 & 0x3f);
                puVar6 = (uint *)fn_82AD1978(uVar5,puVar20);
                *puVar17 = (uint)puVar6;
                puVar18 = (uint *)puVar6[3];
                if (puVar18 == param_3) {
                  uVar26 = (ulonglong)(uVar21 >> (uVar19 << 1));
                  iVar7 = (int)((uVar26 & 3) << 1);
                  puVar18 = puVar18 + 1;
                  *puVar6 = (uint)((uVar26 & 3) << 5) | 0x1c80 | *puVar6 & 0xfffffc9f;
                  uVar24 = uVar24 & ~(3 << iVar7) | iVar10 << iVar7;
                  for (puVar20 = (uint *)*puVar18; puVar20 != puVar6; puVar20 = (uint *)puVar20[2])
                  {
                    puVar18 = puVar20 + 2;
                  }
                  *puVar18 = puVar6[2];
                  puVar6[2] = puVar3[1];
                  puVar3[1] = (uint)puVar6;
                  puVar6[3] = (uint)puVar3;
                }
                else if (puVar18 == puVar3) {
                  uVar19 = *puVar20 >> 4 & 6;
                  uVar24 = uVar24 & ~(3 << uVar19) | iVar10 << uVar19;
                }
                iVar10 = iVar10 + 1;
                puVar17 = puVar17 + 1;
              }
              uVar15 = uVar15 + 1;
              piVar22 = piVar22 + 1;
              uVar9 = uVar9 + 2;
            } while (uVar15 < (*(uint *)(uVar28 + 8) >> 0x13 & 7));
          }
          for (; uVar12 != 0; uVar12 = uVar12 - (uVar12 & ~(uVar12 - 1))) {
            uVar9 = (uint)((0x1fU - LZCOUNT(uVar12 & ~(uVar12 - 1)) & 0xffffffff) << 1);
            uVar25 = (uVar24 >> ((uVar21 >> ((uVar13 >> (uVar9 & 0x3e) & 3) << 1) & 3) << 1) & 3) <<
                     (uVar9 & 0x3e) | uVar25 & ~(3 << (uVar9 & 0x3e));
          }
          fn_82AFE520(iStack00000014,uVar28,uVar5,uVar25,1,1);
          goto LAB_82afff64;
        }
        *puVar4 = ((((uVar21 >> (uVar9 >> 10 & 6) & 3) << 2 | uVar21 >> (uVar9 >> 8 & 6) & 3) << 2 |
                   uVar21 >> (uVar9 >> 6 & 6) & 3) << 2 | uVar21 >> (uVar9 >> 4 & 6) & 3) << 5 |
                  uVar9 & 0xffffe01f;
      }
      puVar20 = (uint *)(puVar4[3] + 4);
      for (puVar17 = (uint *)*puVar20; puVar17 != puVar4; puVar17 = (uint *)puVar17[2]) {
        puVar20 = puVar17 + 2;
      }
      *puVar20 = puVar4[2];
      puVar4[2] = puVar3[1];
      puVar3[1] = (uint)puVar4;
      puVar4[3] = (uint)puVar3;
    }
LAB_82afff64:
    if ((uint *)*puVar16 == puVar4) {
      puVar16 = puVar4 + 2;
    }
  }
  uVar21 = ((1 << ((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) & 0x3f)) + -1) * 2 & 0x1eU | 0x1000000 | puVar3[2] & 0xffffffe1;
  puVar3[2] = uVar21;
  iVar10 = iStack00000014;
  if ((param_3[2] >> 0x17 & 1) == 0) goto LAB_82b00024;
  puVar3[2] = uVar21 | 0x800000;
  uVar8 = fn_82ADD120(param_3);
  iVar10 = iStack00000014;
  *(undefined2 *)((int)puVar3 + 0x12) = uVar8;
  puVar16 = *(uint **)(iStack00000014 + 0x294);
  if ((puVar16[1] & 1) == 0) {
    uVar21 = *puVar16 & 0xfffffffe;
    iVar7 = uVar21 - 4;
    if ((iVar7 == 0) || (*(uint *)(uVar21 + 8) < *(int *)(uVar21 + 4) + 1U)) goto LAB_82affff8;
  }
  else {
LAB_82affff8:
    iVar7 = fn_82AD6090(puVar16,1);
  }
  iVar1 = *(int *)(iVar7 + 8);
  *(int *)(iVar7 + 8) = iVar1 + 1;
  *(uint **)((iVar1 + 4) * 4 + iVar7) = puVar3;
LAB_82b00024:
  fn_82B8AC10(iVar10,param_3,*(undefined4 *)(iVar10 + 0x28c),1);
  return puVar3;
}

