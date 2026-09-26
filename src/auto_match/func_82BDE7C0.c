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
extern unsigned int *auStack_68;
extern unsigned int *auStack_6c;
extern int fn_82BDDE08();
extern int fn_82BDE5A8();
extern int fn_82BE0220();
extern int fn_82BE02D0();
extern int fn_82BE09B8();
extern unsigned int iStack_74;
extern unsigned int uRam831724e4;
extern unsigned int uRam831724e8;
extern unsigned int uRam831724ec;
extern unsigned int uRam831724f0;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


undefined8
fn_82BDE7C0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,longlong param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ushort uVar12;
  longlong lVar13;
  short sVar14;
  ushort uVar15;
  int *piVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [104];
  
  uVar3 = fn_82BE0220(param_2,auStack_68,&uStack_8c,&uStack_88,&uStack_78,&uStack_80,
                            &uStack_7c,auStack_6c);
  if (((int)uVar3 == 0) &&
     (uVar3 = fn_82BE02D0(param_2,param_3,&uStack_90,&iStack_74,&uStack_84), uVar5 = uStack_90,
     (int)uVar3 == 0)) {
    puVar21 = (uint *)(param_1 + 0x140);
    lVar4 = fn_82BDDE08(uStack_90,param_4,param_1 + 0x100,puVar21,param_1,uStack_7c);
    lVar4 = ((((ulonglong)uStack_84 - (ulonglong)uStack_8c) - (ulonglong)uStack_88) -
            (ulonglong)uStack_80) - lVar4;
    fn_82BE09B8(uVar5,lVar4,param_1,param_1 + 0x40,param_1 + 0x80);
    uVar19 = (ulonglong)uStack_90;
    if (0 < (int)uStack_90) {
      piVar16 = (int *)(param_1 + -4);
      lVar13 = ((uVar19 - 1 & 0xffffffff) >> 1) + 1;
      do {
        piVar1 = piVar16 + 2;
        piVar16[1] = piVar16[1] + 0x18;
        piVar16 = piVar16 + 2;
        *piVar16 = *piVar1 + 0x18;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar20 = (uint *)(param_1 + 0x180);
    puVar17 = (undefined8 *)(param_1 + 0x178);
    lVar13 = 7;
    do {
      puVar17 = puVar17 + 1;
      *puVar17 = 0;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    puVar24 = (uint *)(param_1 + 0x1c0);
    fn_82BDE5A8(uVar19,uStack_78,lVar4,param_4,param_1,param_1 + 0x40,param_1 + 0x80,&uStack_70);
    lVar4 = 0x10 - (ulonglong)uStack_8c;
    *(uint *)((int)((uVar19 + 0x40 & 0xffffffff) << 2) + param_1) = uStack_88;
    uVar5 = 0;
    *(undefined4 *)((int)((uVar19 + 0x50 & 0xffffffff) << 2) + param_1) = uStack_70;
    uVar10 = 0;
    uVar6 = 0;
    sVar14 = (short)(iStack_74 << ((uint)lVar4 & 0x3f));
    if (-1 < (int)uStack_90) {
      lVar8 = uVar19 + 1;
      lVar13 = param_5 + -2;
      do {
        uVar18 = *puVar21;
        lVar9 = (ulonglong)puVar21[-0x10] - lVar4;
        uVar7 = (uint)lVar9;
        if (lVar9 < 0) {
          lVar4 = lVar4 - (ulonglong)puVar21[-0x10];
          sVar14 = (short)(uVar18 << (-uVar7 & 0x3f)) + sVar14;
        }
        else {
          uVar15 = (short)(uVar18 >> (uVar7 & 0x3f)) + sVar14;
          lVar13 = lVar13 + 2;
          *(ushort *)lVar13 = uVar15;
          uVar11 = (uint)uVar10;
          uVar10 = -(ulonglong)(uVar10 != 0xe) & uVar10 + 1;
          uVar5 = (uint)uVar15 << (uVar11 & 0x3f) ^ uVar5;
          sVar14 = (short)(uVar18 << (0x10 - uVar7 & 0x3f));
          uVar6 = uVar6 + 1;
          lVar4 = 0x10 - lVar9;
        }
        puVar21 = puVar21 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    iVar22 = 0;
    if (0 < (int)uStack_90) {
      do {
        lVar13 = (uVar6 & 0xfffffff) << 4;
        if ((int)uStack_84 <= (int)lVar13) break;
        uVar18 = *puVar20;
        uVar23 = (ulonglong)uVar18;
        uVar19 = 0x20;
        if ((int)uVar18 < 0x21) {
          uVar19 = uVar23;
        }
        uVar7 = *puVar24;
        if (0 < (int)uVar18) {
          lVar8 = (uVar6 & 0x7fffffff) * 2 + param_5 + -2;
          puVar21 = puVar24;
          do {
            if ((int)uStack_84 <= (int)lVar13) break;
            uVar18 = (uint)lVar4;
            if ((int)uVar19 < (int)uVar18) {
              lVar4 = lVar4 - uVar19;
              sVar14 = (short)((uVar7 >> (0x20U - (int)uVar19 & 0x3f)) << ((uint)lVar4 & 0x3f)) +
                       sVar14;
LAB_82bdea9c:
              uVar23 = uVar23 - 0x20;
              puVar21 = puVar21 + 1;
              uVar7 = *puVar21;
              uVar19 = 0x20;
              if ((int)uVar23 < 0x21) {
                uVar19 = uVar23;
              }
            }
            else {
              uVar19 = uVar19 - lVar4;
              uVar15 = (short)(uVar7 >> (0x20 - uVar18 & 0x3f)) + sVar14;
              uVar7 = uVar7 << (uVar18 & 0x3f);
              uVar6 = uVar6 + 1;
              lVar8 = lVar8 + 2;
              *(ushort *)lVar8 = uVar15;
              lVar13 = lVar13 + 0x10;
              uVar5 = (uint)uVar15 << ((uint)uVar10 & 0x3f) ^ uVar5;
              sVar14 = 0;
              lVar4 = 0x10;
              uVar10 = -(ulonglong)(uVar10 != 0xe) & uVar10 + 1;
              if ((int)uVar19 == 0) goto LAB_82bdea9c;
            }
          } while (0 < (int)uVar23);
        }
        iVar22 = iVar22 + 1;
        puVar24 = puVar24 + 4;
        puVar20 = puVar20 + 1;
      } while (iVar22 < (int)uStack_90);
    }
    lVar13 = (uVar6 & 0xfffffff) << 4;
    if ((int)lVar13 < (int)uStack_84) {
      lVar8 = (uVar6 & 0x7fffffff) * 2 + param_5 + -2;
      do {
        uVar15 = (short)(0xffff >> (0x10U - (int)lVar4 & 0x3f)) + sVar14;
        lVar13 = lVar13 + 0x10;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 2;
        *(ushort *)lVar8 = uVar15;
        sVar14 = 0;
        uVar5 = (uint)uVar15 << ((uint)uVar10 & 0x3f) ^ uVar5;
        lVar4 = 0x10;
        uVar10 = -(ulonglong)(uVar10 != 0xe) & uVar10 + 1;
      } while ((int)lVar13 < (int)uStack_84);
    }
    if (0 < (int)uStack_80) {
      iVar2 = (int)((uVar6 - 1 & 0xffffffff) << 1);
      iVar22 = (int)param_5;
      uVar15 = *(ushort *)(iVar2 + iVar22);
      lVar4 = uVar10 - 1;
      uVar12 = (ushort)(-1 << (uStack_80 & 0x3f)) & uVar15;
      *(ushort *)(iVar2 + iVar22) = uVar12;
      if (lVar4 < 0) {
        lVar4 = 0xe;
      }
      uVar5 = (uint)(uVar15 ^ uVar12) << ((uint)lVar4 & 0x3f) ^ uVar5;
      iVar2 = (int)((uVar6 - 1 & 0xffffffff) << 1);
      uVar11 = (int)uVar5 >> 0xf ^ uVar5 & 0x7fff;
      uVar5 = (int)(uRam831724e4 & uVar11) >> 8 ^ uRam831724e4 & uVar11;
      uVar5 = (int)uVar5 >> 4 ^ uVar5;
      uVar5 = (int)uVar5 >> 2 ^ uVar5;
      uVar18 = (int)(uRam831724e8 & uVar11) >> 8 ^ uRam831724e8 & uVar11;
      uVar18 = (int)uVar18 >> 4 ^ uVar18;
      uVar18 = (int)uVar18 >> 2 ^ uVar18;
      uVar7 = (int)(uRam831724ec & uVar11) >> 8 ^ uRam831724ec & uVar11;
      uVar7 = (int)uVar7 >> 4 ^ uVar7;
      uVar7 = (int)uVar7 >> 2 ^ uVar7;
      uVar11 = (int)(uRam831724f0 & uVar11) >> 8 ^ uRam831724f0 & uVar11;
      uVar11 = (int)uVar11 >> 4 ^ uVar11;
      uVar11 = (int)uVar11 >> 2 ^ uVar11;
      *(ushort *)(iVar2 + iVar22) =
           (short)(1 << (uStack_80 & 0x3f)) - 1U &
           (((ushort)((int)uVar11 >> 1) ^ (ushort)uVar11) & 1) +
           ((((ushort)((int)uVar7 >> 1) ^ (ushort)uVar7) & 1) +
           ((((ushort)((int)uVar18 >> 1) ^ (ushort)uVar18) & 1) +
           (((ushort)((int)uVar5 >> 1) ^ (ushort)uVar5) & 1) * 2) * 2) * 2 |
           *(ushort *)(iVar2 + iVar22);
    }
    uVar3 = 0;
  }
  return uVar3;
}

