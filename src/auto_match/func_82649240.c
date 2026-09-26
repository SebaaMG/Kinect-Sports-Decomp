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
extern unsigned int fStack_a0;
extern int fn_82645110();
extern int fn_82F691F0();


undefined8 fn_82649240(int *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  int iVar38;
  int iVar39;
  ulonglong uVar40;
  byte *pbVar41;
  undefined8 uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  longlong lVar46;
  longlong lVar47;
  int iVar49;
  ulonglong uVar48;
  uint uVar50;
  uint *puVar51;
  float fStack_a0;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar38 = *param_1;
  if ((bVar1 & 0x40) == 0) {
    return 0xffffffff8876086a;
  }
  iVar49 = param_1[1];
  if (iVar49 == 9) {
    iVar49 = param_1[6];
    if ((iVar49 == 0) ||
       (iVar39 = *(int *)(iVar38 + 0x2a9c),
       (uint)(iVar39 - **(int **)(iVar38 + 0x2a90)) <= (uint)(iVar39 - iVar49))) {
      *param_2 = 0;
      if (0xf < param_3) {
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
      }
      uVar45 = param_1[0x25];
      uVar50 = 0;
      puVar51 = (uint *)(param_1 + 7);
      do {
        lVar46 = ((ulonglong)(*puVar51 >> 0x14) + 0x200 & 0x1000) +
                 ((ulonglong)*puVar51 & 0x1fffffff);
        lVar47 = lVar46 + -0x40000000;
        dataCacheBlockFlush(lVar47);
        iVar49 = (int)lVar46;
        uVar43 = *(uint *)(iVar49 + -0x3fffffec);
        uVar44 = *(uint *)(iVar49 + -0x3ffffff0);
        *param_2 = ((*param_2 -
                    ((uint)*(byte *)(iVar49 + -0x3fffffcd) << 0x18 |
                     (uint)*(byte *)(iVar49 + -0x3fffffce) << 0x10 |
                     (uint)*(byte *)(iVar49 + -0x3fffffcf) << 8 |
                    (uint)*(byte *)(iVar49 + -0x3fffffd0))) -
                   ((uint)*(byte *)(iVar49 + -0x3fffffc9) << 0x18 |
                    (uint)*(byte *)(iVar49 + -0x3fffffca) << 0x10 |
                    (uint)*(byte *)(iVar49 + -0x3fffffcb) << 8 |
                   (uint)*(byte *)(iVar49 + -0x3fffffcc))) +
                   (uVar43 << 0x18 | (uVar43 & 0xff00) << 8 | uVar43 >> 8 & 0xff00 | uVar43 >> 0x18)
                   + (uVar44 << 0x18 |
                     (uVar44 & 0xff00) << 8 | uVar44 >> 8 & 0xff00 | uVar44 >> 0x18);
        if (0xf < param_3) {
          pbVar41 = (byte *)lVar47;
          bVar6 = pbVar41[3];
          bVar14 = pbVar41[2];
          bVar22 = pbVar41[1];
          bVar30 = *pbVar41;
          bVar7 = *(byte *)(iVar49 + -0x3fffffc1);
          bVar15 = *(byte *)(iVar49 + -0x3fffffc2);
          bVar23 = *(byte *)(iVar49 + -0x3fffffc3);
          bVar31 = *(byte *)(iVar49 + -0x3fffffc4);
          bVar8 = *(byte *)(iVar49 + -0x3fffffc5);
          bVar16 = *(byte *)(iVar49 + -0x3fffffc6);
          bVar24 = *(byte *)(iVar49 + -0x3fffffc7);
          bVar32 = *(byte *)(iVar49 + -0x3fffffc8);
          bVar9 = *(byte *)(iVar49 + -0x3fffffdd);
          bVar17 = *(byte *)(iVar49 + -0x3fffffde);
          bVar25 = *(byte *)(iVar49 + -0x3fffffdf);
          bVar33 = *(byte *)(iVar49 + -0x3fffffe0);
          bVar10 = *(byte *)(iVar49 + -0x3fffffd9);
          bVar18 = *(byte *)(iVar49 + -0x3fffffda);
          bVar26 = *(byte *)(iVar49 + -0x3fffffdb);
          bVar34 = *(byte *)(iVar49 + -0x3fffffdc);
          bVar11 = *(byte *)(iVar49 + -0x3fffffe1);
          bVar19 = *(byte *)(iVar49 + -0x3fffffe2);
          bVar27 = *(byte *)(iVar49 + -0x3fffffe3);
          bVar35 = *(byte *)(iVar49 + -0x3fffffe4);
          bVar12 = *(byte *)(iVar49 + -0x3ffffff9);
          bVar20 = *(byte *)(iVar49 + -0x3ffffffa);
          bVar28 = *(byte *)(iVar49 + -0x3ffffffb);
          bVar36 = *(byte *)(iVar49 + -0x3ffffffc);
          bVar13 = *(byte *)(iVar49 + -0x3fffffe5);
          bVar21 = *(byte *)(iVar49 + -0x3fffffe6);
          bVar29 = *(byte *)(iVar49 + -0x3fffffe7);
          bVar37 = *(byte *)(iVar49 + -0x3fffffe8);
          param_2[1] = ((param_2[1] -
                        ((uint)*(byte *)(iVar49 + -0x3fffffd5) << 0x18 |
                         (uint)*(byte *)(iVar49 + -0x3fffffd6) << 0x10 |
                         (uint)*(byte *)(iVar49 + -0x3fffffd7) << 8 |
                        (uint)*(byte *)(iVar49 + -0x3fffffd8))) -
                       ((uint)*(byte *)(iVar49 + -0x3fffffd1) << 0x18 |
                        (uint)*(byte *)(iVar49 + -0x3fffffd2) << 0x10 |
                        (uint)*(byte *)(iVar49 + -0x3fffffd3) << 8 |
                       (uint)*(byte *)(iVar49 + -0x3fffffd4))) +
                       ((uint)*(byte *)(iVar49 + -0x3ffffff1) << 0x18 |
                        (uint)*(byte *)(iVar49 + -0x3ffffff2) << 0x10 |
                        (uint)*(byte *)(iVar49 + -0x3ffffff3) << 8 |
                       (uint)*(byte *)(iVar49 + -0x3ffffff4)) +
                       ((uint)*(byte *)(iVar49 + -0x3ffffff5) << 0x18 |
                        (uint)*(byte *)(iVar49 + -0x3ffffff6) << 0x10 |
                        (uint)*(byte *)(iVar49 + -0x3ffffff7) << 8 |
                       (uint)*(byte *)(iVar49 + -0x3ffffff8));
          param_2[2] = ((param_2[2] -
                        ((uint)bVar8 << 0x18 | (uint)bVar16 << 0x10 | (uint)bVar24 << 8 |
                        (uint)bVar32)) -
                       ((uint)bVar7 << 0x18 | (uint)bVar15 << 0x10 | (uint)bVar23 << 8 |
                       (uint)bVar31)) +
                       ((uint)bVar11 << 0x18 | (uint)bVar19 << 0x10 | (uint)bVar27 << 8 |
                       (uint)bVar35) +
                       ((uint)bVar13 << 0x18 | (uint)bVar21 << 0x10 | (uint)bVar29 << 8 |
                       (uint)bVar37);
          param_2[3] = ((param_2[3] -
                        ((uint)bVar9 << 0x18 | (uint)bVar17 << 0x10 | (uint)bVar25 << 8 |
                        (uint)bVar33)) -
                       ((uint)bVar10 << 0x18 | (uint)bVar18 << 0x10 | (uint)bVar26 << 8 |
                       (uint)bVar34)) +
                       ((uint)bVar12 << 0x18 | (uint)bVar20 << 0x10 | (uint)bVar28 << 8 |
                       (uint)bVar36) +
                       ((uint)bVar6 << 0x18 | (uint)bVar14 << 0x10 | (uint)bVar22 << 8 |
                       (uint)bVar30);
        }
        uVar50 = uVar50 + 1;
        puVar51 = puVar51 + 1;
      } while (uVar50 < uVar45);
      if ((*(byte *)(iVar38 + 0x2abd) & 2) != 0) {
        uVar44 = 0;
        *param_2 = 1;
        uVar43 = 0;
      }
      if ((uVar44 != 0xfffffeed) || (uVar43 != 0xfffffeed)) {
        *(byte *)(param_1 + 5) = bVar1 & 0x7f | 0x80;
        goto LAB_82649680;
      }
      *param_2 = 1;
    }
    else {
      if (iVar49 == iVar39) {
        fn_82645110();
      }
      *param_2 = 1;
    }
    if (0xf < param_3) {
      param_2[2] = 0;
      param_2[1] = 0;
      param_2[3] = 1;
    }
LAB_826492d8:
    uVar42 = 1;
  }
  else {
    if (iVar49 == 10) {
      if ((*(byte *)(iVar38 + 0x2abd) & 2) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_2,0,0x18);
      }
      iVar49 = param_1[6];
      if ((uint)(*(int *)(iVar38 + 0x2a9c) - iVar49) <
          (uint)(*(int *)(iVar38 + 0x2a9c) - **(int **)(iVar38 + 0x2a90))) {
LAB_826494c4:
        if (iVar49 == *(int *)(iVar38 + 0x2a9c)) {
          fn_82645110();
        }
        goto LAB_826492d8;
      }
      lVar46 = ((ulonglong)((uint)param_1[7] >> 0x14) + 0x200 & 0x1000) +
               ((ulonglong)(uint)param_1[7] & 0x1fffffff);
      lVar47 = lVar46 + -0x40000000;
      dataCacheBlockFlush(lVar47);
      iVar49 = (int)lVar46;
      uVar2 = *(ushort *)(iVar49 + -0x3ffffffe);
      uVar3 = *(ushort *)(iVar49 + -0x3ffffffa);
      uVar4 = *(ushort *)(iVar49 + -0x3ffffffc);
      uVar5 = *(ushort *)(iVar38 + 0x2888);
      *param_2 = (uint)*(ushort *)lVar47 << 3;
      param_2[2] = (uint)uVar4 << 3;
      param_2[1] = (uVar2 + 1) * 8;
      param_2[3] = (uVar3 + 1) * 8;
      if ((uVar5 & 1) == 1) {
        uVar2 = *(ushort *)(iVar49 + -0x3ffffff8);
        uVar40 = (ulonglong)uVar2 & 0x7ff;
        if ((uVar2 & 0x7ff) == 0) {
          uVar45 = 0;
        }
        else if ((uVar2 & 0x780) == 0) {
          lVar46 = LZCOUNT((int)(uVar40 << 0x19));
          uVar45 = (uint)((0x71U - (lVar46 + 1) & 0xffffffff) << 0x17) |
                   (int)(uVar40 << 0xd) << ((int)lVar46 + 4U & 0x3f) & 0x7fffffU;
        }
        else {
          uVar45 = (uint)((0x7f - ((~(uVar40 << 0xd) & 0xffffffff) >> 0x14 & 0xf) & 0xffffffff) <<
                         0x17) | (uint)(uVar40 << 0x10) & 0x7ffff8;
        }
        uVar2 = *(ushort *)(iVar49 + -0x3ffffff6);
        param_2[4] = uVar45;
        uVar40 = ((ulonglong)uVar2 + 1) * 0x2000;
        uVar48 = uVar40 & 0xffe000;
        if (uVar48 == 0) {
          fStack_a0 = 0.0;
        }
        else if ((uVar40 & 0xf00000) == 0) {
          lVar46 = LZCOUNT((int)(uVar48 << 0xc));
          fStack_a0 = (float)((uint)((0x71U - (lVar46 + 1) & 0xffffffff) << 0x17) |
                             (int)uVar48 << ((int)lVar46 + 4U & 0x3f) & 0x7fffffU);
        }
        else {
          fStack_a0 = (float)((uint)((0x7f - ((~uVar48 & 0xffffffff) >> 0x14 & 0xf) & 0xffffffff) <<
                                    0x17) | (uint)(uVar48 << 3) & 0x7ffff8);
        }
      }
      else {
        fStack_a0 = (float)(longlong)(int)((*(ushort *)(iVar49 + -0x3ffffff6) + 1) * 0x2000);
        param_2[4] = (int)(float)(longlong)(int)((uint)*(ushort *)(iVar49 + -0x3ffffff8) << 0xd);
      }
      param_2[5] = (int)fStack_a0;
    }
    else if (iVar49 == 8) {
      *param_2 = 1;
      iVar49 = param_1[6];
      if ((uint)(*(int *)(iVar38 + 0x2a9c) - iVar49) <
          (uint)(*(int *)(iVar38 + 0x2a9c) - **(int **)(iVar38 + 0x2a90))) goto LAB_826494c4;
    }
LAB_82649680:
    uVar42 = 0;
  }
  return uVar42;
}

