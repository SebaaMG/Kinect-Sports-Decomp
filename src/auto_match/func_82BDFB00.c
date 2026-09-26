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
extern int fn_82BDECB8();
extern int fn_82BDF030();
extern int fn_82BDF890();
extern int fn_82BE0220();
extern int fn_82BE02D0();
extern int fn_82BE09B8();
extern int fn_82F691F0();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_80;
extern unsigned int iStack_90;
extern unsigned int lbl_831739B0;
extern unsigned int lbl_831739B4;
extern unsigned int lbl_831739B8;
extern unsigned int lbl_831739BC;
extern unsigned int lbl_8329EC80;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


undefined8
fn_82BDFB00(int param_1,undefined8 param_2,ulonglong param_3,ushort *param_4,int param_5)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  undefined8 uVar23;
  int iVar25;
  longlong lVar24;
  ulonglong uVar26;
  ushort uVar27;
  ulonglong uVar28;
  int *piVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  undefined4 *puVar33;
  ulonglong uVar34;
  int iVar35;
  int iVar36;
  int iStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined1 auStack_68 [104];
  
  iVar25 = (int)param_2;
  if (iVar25 == 3) {
    param_3 = 1;
  }
  uVar23 = fn_82BE0220(param_2,&iStack_6c,&uStack_88,&uStack_78,&iStack_70,&uStack_84,
                             &uStack_7c,&uStack_74);
  if ((int)uVar23 == 0) {
    uVar30 = (ulonglong)uStack_88;
    *(ushort **)(param_1 + 0x148) = param_4;
    *(undefined4 *)(param_1 + 0x144) = 0;
    if (0 < (int)uStack_88) {
      uVar32 = 0;
      do {
        if (*(int *)(param_1 + 0x144) == 0) {
          sVar1 = **(short **)(param_1 + 0x148);
          *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
          *(undefined4 *)(param_1 + 0x144) = 0x10;
          *(int *)(param_1 + 0x140) = (int)sVar1;
        }
        uVar31 = *(int *)(param_1 + 0x144) - 1;
        *(uint *)(param_1 + 0x144) = uVar31;
        uVar31 = *(int *)(param_1 + 0x140) >> (uVar31 & 0x3f) & 1;
        *(uint *)(param_1 + 0x13c) = uVar31;
        uVar32 = uVar32 << 1 | uVar31;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
      uVar23 = fn_82BDF890(param_2,uVar32,&uStack_8c);
      if ((int)uVar23 != 0) {
        return uVar23;
      }
      if ((iVar25 == 1) || (iVar25 == 2)) {
        uVar30 = param_3 & 0xffffffff;
        param_3 = (ulonglong)uStack_8c;
        if (uVar30 != uStack_8c) {
          return 7;
        }
      }
      else {
        param_3 = (ulonglong)uStack_8c;
      }
    }
    uVar23 = fn_82BE02D0(param_2,param_3,&iStack_90,auStack_68,&iStack_80);
    iVar35 = iStack_90;
    iVar25 = lbl_8329EC80;
    if ((int)uVar23 == 0) {
      *(uint *)(param_1 + 0x138) = (iStack_80 - uStack_88) - uStack_84;
      iVar25 = iVar25 * iStack_90;
      fn_82BDECB8(param_1,iStack_90,param_1 + 0x100,param_1,uStack_7c);
      uVar34 = 0;
      uVar30 = (ulonglong)uStack_78;
      if (0 < (int)uStack_78) {
        do {
          if (*(int *)(param_1 + 0x144) == 0) {
            sVar1 = **(short **)(param_1 + 0x148);
            *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
            *(undefined4 *)(param_1 + 0x144) = 0x10;
            *(int *)(param_1 + 0x140) = (int)sVar1;
          }
          uVar32 = *(int *)(param_1 + 0x144) - 1;
          *(uint *)(param_1 + 0x144) = uVar32;
          uVar28 = (ulonglong)(uint)(*(int *)(param_1 + 0x140) >> (uVar32 & 0x3f)) & 1;
          *(int *)(param_1 + 0x13c) = (int)uVar28;
          uVar34 = (uVar34 & 0x7fffffff) * 2 + uVar28;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
      iVar36 = param_1 + 0x40;
      lVar24 = (ulonglong)*(uint *)(param_1 + 0x138) - (ulonglong)uStack_78;
      *(int *)(param_1 + 0x138) = (int)lVar24;
      fn_82BE09B8(iVar35,lVar24,param_1,iVar36,param_1 + 0x80);
      iVar35 = (int)uVar34;
      if (0 < iVar35) {
        piVar29 = (int *)(param_1 + 0x7c);
        do {
          piVar29 = piVar29 + 1;
          *(int *)(*piVar29 * 4 + iVar36) = *(int *)(*piVar29 * 4 + iVar36) + 1;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      fn_82BDF030(param_1,iStack_90,param_1 + 0x100,iVar36,param_5,uStack_74);
      uVar32 = 0;
      if (*(int *)(param_1 + 0x138) < 1) {
        if ((iVar35 < iStack_70 + -1) && (*(int *)(param_1 + 0x138) < 0)) {
          uVar32 = 2;
        }
      }
      else {
        iVar35 = 0;
        do {
          if (*(int *)(param_1 + 0x144) == 0) {
            sVar1 = **(short **)(param_1 + 0x148);
            *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
            *(undefined4 *)(param_1 + 0x144) = 0x10;
            *(int *)(param_1 + 0x140) = (int)sVar1;
          }
          uVar31 = *(int *)(param_1 + 0x144) - 1;
          *(uint *)(param_1 + 0x144) = uVar31;
          uVar31 = *(int *)(param_1 + 0x140) >> (uVar31 & 0x3f) & 1;
          *(uint *)(param_1 + 0x13c) = uVar31;
          if (uVar31 == 0) {
            uVar32 = 1;
          }
          iVar35 = iVar35 + 1;
        } while (iVar35 < *(int *)(param_1 + 0x138));
      }
      if (0 < iStack_90) {
        piVar29 = (int *)(param_1 + 8);
        lVar24 = (ulonglong)(iStack_90 - 1) / 7 + 1;
        do {
          if ((0x21 < piVar29[-2]) || (piVar29[-2] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < piVar29[-1]) || (piVar29[-1] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < *piVar29) || (*piVar29 < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < piVar29[1]) || (piVar29[1] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < piVar29[2]) || (piVar29[2] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < piVar29[3]) || (piVar29[3] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < piVar29[4]) || (piVar29[4] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          piVar29 = piVar29 + 7;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      if (0 < (int)uStack_84) {
        iStack_80 = iStack_80 >> 4;
        uVar27 = (short)(1 << (uStack_84 & 0x3f)) - 1;
        *(ushort **)(param_1 + 0x148) = param_4 + iStack_80 + -1;
        uVar2 = param_4[iStack_80 + -1];
        *(ushort **)(param_1 + 0x148) = param_4;
        if (iStack_80 == 0x14) {
          uVar3 = *param_4;
          *(ushort **)(param_1 + 0x148) = param_4 + 1;
          uVar4 = param_4[1];
          *(ushort **)(param_1 + 0x148) = param_4 + 2;
          uVar5 = param_4[2];
          *(ushort **)(param_1 + 0x148) = param_4 + 3;
          uVar6 = param_4[3];
          *(ushort **)(param_1 + 0x148) = param_4 + 4;
          uVar7 = param_4[4];
          *(ushort **)(param_1 + 0x148) = param_4 + 5;
          uVar8 = param_4[5];
          *(ushort **)(param_1 + 0x148) = param_4 + 6;
          uVar9 = param_4[6];
          *(ushort **)(param_1 + 0x148) = param_4 + 7;
          uVar10 = param_4[7];
          *(ushort **)(param_1 + 0x148) = param_4 + 8;
          uVar11 = param_4[8];
          *(ushort **)(param_1 + 0x148) = param_4 + 9;
          uVar12 = param_4[9];
          *(ushort **)(param_1 + 0x148) = param_4 + 10;
          uVar13 = param_4[10];
          *(ushort **)(param_1 + 0x148) = param_4 + 0xb;
          uVar14 = param_4[0xb];
          *(ushort **)(param_1 + 0x148) = param_4 + 0xc;
          uVar15 = param_4[0xc];
          *(ushort **)(param_1 + 0x148) = param_4 + 0xd;
          uVar16 = param_4[0xd];
          *(ushort **)(param_1 + 0x148) = param_4 + 0xe;
          uVar17 = param_4[0xe];
          *(ushort **)(param_1 + 0x148) = param_4 + 0xf;
          uVar18 = param_4[0xf];
          *(ushort **)(param_1 + 0x148) = param_4 + 0x10;
          uVar19 = param_4[0x10];
          *(ushort **)(param_1 + 0x148) = param_4 + 0x11;
          uVar20 = param_4[0x11];
          *(ushort **)(param_1 + 0x148) = param_4 + 0x12;
          uVar21 = param_4[0x12];
          *(ushort **)(param_1 + 0x148) = param_4 + 0x13;
          uVar22 = param_4[0x13];
          *(ushort **)(param_1 + 0x148) = param_4 + 0x14;
          uVar30 = ((ulonglong)uVar22 & ~(longlong)(short)uVar27) << 4 ^
                   (ulonglong)uVar21 << 3 ^
                   (ulonglong)uVar20 << 2 ^
                   (ulonglong)uVar19 << 1 ^
                   (ulonglong)uVar17 << 0xe ^ (ulonglong)uVar18 ^
                   (ulonglong)uVar16 << 0xd ^
                   (ulonglong)uVar15 << 0xc ^
                   (ulonglong)uVar14 << 0xb ^
                   (ulonglong)uVar13 << 10 ^
                   (ulonglong)uVar12 << 9 ^
                   (ulonglong)uVar11 << 8 ^
                   (ulonglong)uVar10 << 7 ^
                   (ulonglong)uVar9 << 6 ^
                   (ulonglong)uVar8 << 5 ^
                   (ulonglong)uVar7 << 4 ^
                   (ulonglong)uVar6 << 3 ^
                   (ulonglong)uVar5 << 2 ^ (ulonglong)uVar4 << 1 ^ (ulonglong)uVar3;
        }
        else {
          lVar24 = (longlong)iStack_80 + -1;
          uVar30 = 0;
          uVar34 = 0;
          if (0 < lVar24) {
            do {
              uVar3 = **(ushort **)(param_1 + 0x148);
              *(ushort **)(param_1 + 0x148) = *(ushort **)(param_1 + 0x148) + 1;
              uVar30 = (uint)uVar3 << ((uint)uVar34 & 0x3f) ^ uVar30;
              uVar34 = -(ulonglong)(uVar34 != 0xe) & uVar34 + 1;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
          uVar3 = **(ushort **)(param_1 + 0x148);
          *(ushort **)(param_1 + 0x148) = *(ushort **)(param_1 + 0x148) + 1;
          uVar30 = ((uint)uVar3 & ~(int)(short)uVar27) << ((uint)uVar34 & 0x3f) ^ uVar30;
        }
        uVar30 = (longlong)((int)uVar30 >> 0xf) ^ uVar30 & 0x7fff;
        uVar26 = (longlong)((int)(lbl_831739B0 & uVar30) >> 8) ^ lbl_831739B0 & uVar30;
        uVar26 = (longlong)((int)uVar26 >> 4) ^ uVar26;
        uVar26 = (longlong)((int)uVar26 >> 2) ^ uVar26;
        uVar34 = (longlong)((int)(lbl_831739B4 & uVar30) >> 8) ^ lbl_831739B4 & uVar30;
        uVar34 = (longlong)((int)uVar34 >> 4) ^ uVar34;
        uVar34 = (longlong)((int)uVar34 >> 2) ^ uVar34;
        uVar28 = (longlong)((int)(lbl_831739B8 & uVar30) >> 8) ^ lbl_831739B8 & uVar30;
        uVar28 = (longlong)((int)uVar28 >> 4) ^ uVar28;
        uVar28 = (longlong)((int)uVar28 >> 2) ^ uVar28;
        uVar30 = (longlong)((int)(lbl_831739BC & uVar30) >> 8) ^ lbl_831739BC & uVar30;
        uVar30 = (longlong)((int)uVar30 >> 4) ^ uVar30;
        uVar30 = (longlong)((int)uVar30 >> 2) ^ uVar30;
        if ((((longlong)((int)uVar30 >> 1) ^ uVar30) & 1) +
            ((((longlong)((int)uVar28 >> 1) ^ uVar28) & 1) +
            ((((longlong)((int)uVar34 >> 1) ^ uVar34) & 1) +
            (((longlong)((int)uVar26 >> 1) ^ uVar26) & 1) * 2) * 2) * 2 !=
            (longlong)(short)(uVar2 & uVar27)) {
          uVar32 = uVar32 | 8;
        }
      }
      if ((uVar32 != 0) && (0 < iVar25)) {
        puVar33 = (undefined4 *)(param_5 + -4);
        for (iVar35 = iVar25; iVar35 != 0; iVar35 = iVar35 + -1) {
          puVar33 = puVar33 + 1;
          *puVar33 = 0;
        }
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(iVar25 * 4 + param_5,0,iStack_6c - iVar25 & 0x3fffffff);
    }
  }
  return uVar23;
}

