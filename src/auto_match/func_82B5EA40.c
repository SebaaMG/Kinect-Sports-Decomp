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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_158;
extern unsigned int *auStack_168;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82AA65B0();
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDB58();
extern int fn_82ABDD48();
extern int fn_82ABDD90();
extern int fn_82ABE0A0();
extern int fn_82ABE250();
extern int fn_82ABE870();
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82AC9F28();
extern int fn_82ACB8B8();
extern int fn_82AD1978();
extern int fn_82AD6090();
extern int fn_82AF87E0();
extern int fn_82B1B3F8();
extern int fn_82B207C8();
extern int fn_82B20BC0();
extern int fn_82B24700();
extern int fn_82B45330();
extern int fn_82B45740();
extern int fn_82B46498();
extern int fn_82B46518();
extern int fn_82B46690();
extern int fn_82B469D8();
extern int fn_82B46AC8();
extern int fn_82B46D58();
extern int fn_82B46F08();
extern int fn_82B47068();
extern int fn_82B472B8();
extern int fn_82B477E0();
extern int fn_82B4A218();
extern int fn_82B4B048();
extern int fn_82B4B2A0();
extern int fn_82B4B498();
extern int fn_82B4BAA8();
extern int fn_82B4C160();
extern int fn_82B4C2B8();
extern int fn_82B4C2F8();
extern int fn_82B4DF70();
extern int fn_82B4E060();
extern int fn_82B4E578();
extern int fn_82B4FAE8();
extern int fn_82B4FD60();
extern int fn_82B4FEB0();
extern int fn_82B50338();
extern int fn_82B50498();
extern int fn_82B50558();
extern int fn_82B50730();
extern int fn_82B50B70();
extern int fn_82B50D00();
extern int fn_82B50E90();
extern int fn_82B52828();
extern int fn_82B52FF8();
extern int fn_82B53448();
extern int fn_82B53520();
extern int fn_82B53E88();
extern int fn_82B54318();
extern int fn_82B54820();
extern int fn_82B54948();
extern int fn_82B5E118();
extern int fn_82B841E8();
extern int fn_82B85298();
extern int fn_82B866A0();
extern int fn_82B8F170();
extern int fn_82B8F328();
extern unsigned int iStack_174;
extern unsigned int iStack_180;
extern unsigned int iStack_190;
extern unsigned int iStack_194;
extern unsigned int iStack_198;
extern unsigned int iStack_19c;
extern unsigned int iStack_1a0;
extern unsigned int iStack_1a8;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;


void fn_82B5EA40(int param_1,undefined4 *param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined8 uVar6;
  uint uVar19;
  int iVar20;
  longlong lVar7;
  int iVar21;
  undefined4 uVar22;
  int *piVar23;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar24;
  char cVar29;
  undefined4 *puVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar30;
  char *pcVar31;
  char *pcVar32;
  uint uVar33;
  undefined8 *puVar34;
  ulonglong uVar35;
  double dVar36;
  undefined4 *puStack0000001c;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  uint uStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 *puStack_17c;
  char *pcStack_178;
  int iStack_174;
  char *pcStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [16];
  uint auStack_130 [4];
  undefined1 auStack_120 [16];
  uint auStack_110 [4];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [176];
  
  *(undefined4 **)(param_1 + 0x18) = param_2;
  iVar21 = param_2[1];
  *(int *)(param_1 + 0x68) = param_1 + 100;
  *(undefined4 *)(param_1 + 100) = 0;
  *(int *)(param_1 + 0x1c) = iVar21;
  puStack0000001c = param_2;
  iStack_190 = iVar21;
  puVar12 = (uint *)fn_82ABE250(param_1,8,0x1f);
  *(uint **)(param_1 + 0x23c) = puVar12;
  puVar12[1] = (uint)puVar12 | 1;
  *puVar12 = (uint)(puVar12 + 1) | 1;
  puVar13 = (uint *)fn_82ABE250(param_1,8,6);
  puVar12 = puVar13 + 1;
  puVar13[1] = (uint)puVar13 | 1;
  *puVar13 = (uint)puVar12 | 1;
  *(uint **)(param_1 + 0x250) = puVar13;
  puVar14 = (uint *)fn_82ABE250(param_1,8,0x2b);
  puVar14[1] = (uint)puVar14 | 1;
  *puVar14 = (uint)(puVar14 + 1) | 1;
  *(uint **)(param_1 + 0x24c) = puVar14;
  puVar15 = (uint *)fn_82ABE250(param_1,8,0x37);
  puVar15[1] = (uint)puVar15 | 1;
  *puVar15 = (uint)(puVar15 + 1) | 1;
  puVar16 = (uint *)fn_82ABE250(param_1,8,3);
  puVar16[1] = (uint)puVar16 | 1;
  *puVar16 = (uint)(puVar16 + 1) | 1;
  puVar17 = (uint *)fn_82ABE250(param_1,8,0x2a);
  *(uint **)(param_1 + 0x248) = puVar17;
  puVar17[1] = (uint)puVar17 | 1;
  *puVar17 = (uint)(puVar17 + 1) | 1;
  iVar24 = *(int *)(iVar21 + 0x44);
  if (iVar24 != 0) {
    do {
      if (*(int *)(iVar24 + 4) == 0x13) {
        fn_82B4FAE8(param_1,puVar16,iVar24);
        break;
      }
      if (*(int *)(iVar24 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      if ((*(int *)(iVar24 + 8) == 0) || (*(int *)(*(int *)(iVar24 + 8) + 4) != 0x13)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      fn_82B4FAE8(param_1,puVar16);
      iVar24 = *(int *)(iVar24 + 0xc);
    } while (iVar24 != 0);
    fn_82B52828(param_1,puVar16,0xdbe002,0x800,0,0,0,auStack_140);
    uVar19 = *(uint *)(*(int *)(param_1 + 0x240) + 4);
    if (((uVar19 & 1) == 0) && (uVar19 != 0)) {
      fn_82B50E90(param_1);
    }
  }
  uVar18 = fn_82B477E0(param_1);
  *(undefined4 *)(param_1 + 0x234) = uVar18;
  fn_82B53E88(param_1,iVar21,4,*param_2);
  fn_82B54318(param_1,param_2,3,1,puVar15);
  if (((*(uint *)(param_1 + 0x28) & 0x8000) == 0) &&
     (((*(uint *)(param_1 + 0x2c) & 0x10) == 0 ||
      ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000)))) {
    if ((*(uint **)(param_1 + 0x38) == (uint *)0x0) ||
       (bVar5 = true, (**(uint **)(param_1 + 0x38) & 0x800) == 0)) {
      bVar5 = false;
    }
    if (!bVar5) goto LAB_82b5ecc4;
  }
  uVar6 = fn_82B477E0(param_1);
  fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar6,param_1);
  *(int *)(param_1 + 0x234) = (int)uVar6;
LAB_82b5ecc4:
  if (*(int *)(param_1 + 0x2e8) != 0) {
    fn_82B47068(param_1,*(undefined4 *)(param_1 + 0x234),param_2);
  }
  if ((*(uint *)(param_1 + 0x28) & 0x20) != 0) {
    uVar19 = *(uint *)(param_1 + 0x10);
    uVar35 = 0;
    if (uVar19 != 0) {
      iVar24 = 0;
      do {
        puVar17 = (uint *)(iVar24 + *(int *)(param_1 + 0xc));
        if ((*puVar17 & 7) == 2) {
          uVar27 = puVar17[4];
          iVar20 = *(int *)(uVar27 + 0x34);
          if (iVar20 == 0) {
            if ((*(uint *)(uVar27 + 0x2c) & 0x80) == 0) goto LAB_82b5ed48;
            iVar20 = *(int *)(uVar27 + 0x38);
          }
          fn_82B4E578(param_1,puVar15,uVar35,iVar20);
        }
LAB_82b5ed48:
        uVar35 = uVar35 + 1;
        iVar24 = iVar24 + 0x28;
      } while ((uVar35 & 0xffffffff) < (ulonglong)uVar19);
    }
  }
  if ((*(uint *)(param_1 + 0x28) & 0x40) != 0) {
    iVar24 = *(int *)(*(int *)(param_1 + 8) + 0x28);
    if ((iVar24 == 0) || (*(int *)(iVar24 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    do {
      iVar20 = *(int *)(iVar24 + 8);
      if (*(int *)(iVar20 + 4) == 0xc) {
        if (*(int *)(iVar20 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        if (((*(int *)(iVar20 + 0x18) != 0) || (*(int *)(iVar20 + 0x1c) != 0)) ||
           (*(int *)(iVar20 + 0x20) != 0)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        fn_82B54948(param_1,puVar15,*(undefined4 *)(iVar20 + 0x14),0);
      }
      iVar24 = *(int *)(iVar24 + 0xc);
      if ((iVar24 != 0) && (*(int *)(iVar24 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
    } while (iVar24 != 0);
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_82B4FEB0(param_1,param_2,param_3,puVar15);
  }
  iVar24 = *(int *)(param_1 + 0x25c);
  pcStack_178 = "switch";
  pcStack_170 = "Attributes";
  puVar25 = param_2;
  iStack_198 = iVar24;
  do {
    uVar35 = 0;
    bVar5 = true;
    uStack_1c0 = 0;
    uVar19 = *(uint *)(iVar21 + 0x30);
LAB_82b5ee4c:
    uStack_1bc = 0;
LAB_82b5f3d0:
    uVar27 = 0;
    if (uVar19 != 0) break;
LAB_82b5eeb4:
    if (bVar5) {
      if ((uVar35 & 0xffffffff) == 0) {
        uVar19 = (*(uint **)(param_1 + 0x248))[1];
        if (((uVar19 & 1) == 0) && (uVar19 != 0)) {
          if ((uVar19 & 1) == 0) {
            iVar20 = (**(uint **)(param_1 + 0x248) & 0xfffffffe) - 4;
          }
          else {
            iVar20 = 0;
          }
          if (*(int *)(*(int *)(iVar20 + 8) * 0x20 + iVar20 + -0x10) != 2) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          piVar23 = *(int **)(*(int *)(param_1 + 0x234) + 0xc);
          if ((piVar23 == (int *)0x0) || (*piVar23 == 0)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xe28);
          }
        }
        else if ((*(uint *)(param_1 + 0x28) & 8) == 0) {
          fn_82B53520(param_1,param_2,puVar15);
        }
        else {
          fn_82B472B8(param_1,*(undefined4 *)(param_1 + 0x234));
        }
      }
      else {
        fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar35,param_1);
      }
    }
    if (((puVar14[1] & 1) == 0) && (puVar14[1] != 0)) {
      uVar19 = fn_82B4DF70(puVar14,&iStack_174);
      if (iStack_174 == 0) {
        if ((*puVar12 & 1) == 0) {
          puVar17 = (uint *)((*puVar13 & 0xfffffffe) - 4);
        }
        else {
          puVar17 = (uint *)0x0;
        }
        uVar28 = puVar17[2] - 1;
        uVar27 = puVar17[puVar17[2] + 3];
        uVar35 = (ulonglong)uVar27;
        puVar17[2] = uVar28;
        if (uVar28 == 0) {
          *(uint *)(puVar17[1] & 0xfffffffe) = *puVar17;
          *(uint *)(*puVar17 & 0xfffffffe) = puVar17[1];
          fn_82AA6648(puVar13,puVar17,((ulonglong)puVar17[3] + 4 & 0x3fffffff) << 2);
        }
        if ((*puVar12 & 1) == 0) {
          puVar17 = (uint *)((*puVar13 & 0xfffffffe) - 4);
        }
        else {
          puVar17 = (uint *)0x0;
        }
        uVar33 = puVar17[2] - 1;
        uVar28 = puVar17[puVar17[2] + 3];
        puVar17[2] = uVar33;
        uStack_1c0 = uVar27;
        if (uVar33 == 0) {
          *(uint *)(puVar17[1] & 0xfffffffe) = *puVar17;
          *(uint *)(*puVar17 & 0xfffffffe) = puVar17[1];
          fn_82AA6648(puVar13,puVar17,((ulonglong)puVar17[3] + 4 & 0x3fffffff) << 2);
        }
        *(uint *)(param_1 + 0x234) = uVar28;
        bVar5 = true;
        *(uint *)(param_1 + 0x20) = *(uint *)(uVar28 + 0x4c) & 0x7ffff;
        goto LAB_82b5f3d0;
      }
      if (iStack_174 == 4) {
        fn_82B4E060(param_1);
        goto LAB_82b5f2c4;
      }
      if (iStack_174 == 8) {
        if ((*puVar12 & 1) == 0) {
          puVar17 = (uint *)((*puVar13 & 0xfffffffe) - 4);
        }
        else {
          puVar17 = (uint *)0x0;
        }
        uVar28 = puVar17[2] - 1;
        uVar27 = puVar17[puVar17[2] + 3];
        uVar35 = (ulonglong)uVar27;
        puVar17[2] = uVar28;
        if (uVar28 == 0) {
          *(uint *)(puVar17[1] & 0xfffffffe) = *puVar17;
          *(uint *)(*puVar17 & 0xfffffffe) = puVar17[1];
          fn_82AA6648(puVar13,puVar17,((ulonglong)puVar17[3] + 4 & 0x3fffffff) << 2);
        }
        if ((*puVar12 & 1) == 0) {
          puVar17 = (uint *)((*puVar13 & 0xfffffffe) - 4);
        }
        else {
          puVar17 = (uint *)0x0;
        }
        uVar33 = puVar17[2] - 1;
        uVar28 = puVar17[puVar17[2] + 3];
        puVar17[2] = uVar33;
        uStack_1c0 = uVar27;
        if (uVar33 == 0) {
          *(uint *)(puVar17[1] & 0xfffffffe) = *puVar17;
          *(uint *)(*puVar17 & 0xfffffffe) = puVar17[1];
          fn_82AA6648(puVar13,puVar17,((ulonglong)puVar17[3] + 4 & 0x3fffffff) << 2);
        }
        *(uint *)(param_1 + 0x234) = uVar28;
        bVar5 = true;
        uVar27 = *(uint *)(uVar28 + 0x4c);
        *(uint *)(param_1 + 0x2f0) = uVar19;
        *(uint *)(param_1 + 0x20) = uVar27 & 0x7ffff;
        goto LAB_82b5eeb4;
      }
      if (iStack_174 == 0xc) {
        if (*(int *)(uVar19 + 4) != 6) {
          if (((*(uint **)(param_1 + 0x248))[1] & 1) == 0) {
            iVar20 = (**(uint **)(param_1 + 0x248) & 0xfffffffe) - 4;
          }
          else {
            iVar20 = 0;
          }
          iVar20 = *(int *)(iVar20 + 8) * 0x20 + iVar20;
          if (*(int *)(iVar20 + -0x10) == 2) {
            iVar2 = *(int *)(iVar20 + 0xc);
            if (((*(int **)(iVar2 + 0xc) == (int *)0x0) || (**(int **)(iVar2 + 0xc) == 0)) &&
               ((((*(uint *)(iVar2 + 0x24) & 1) != 0 ||
                 (uVar19 = *(uint *)(iVar2 + 0x20) & 0xfffffffe, uVar19 == 0x28)) ||
                ((uVar19 = *(uint *)(uVar19 - 0x20) >> 7 & 0x7f, uVar19 != 0x58 && (uVar19 != 0x53))
                )))) {
              fn_82B8F328(iVar2,*(undefined4 *)(iVar20 + 8),param_1);
            }
          }
          puVar17 = *(uint **)(param_1 + 0x248);
          if ((puVar17[1] & 1) == 0) {
            puVar30 = (uint *)((*puVar17 & 0xfffffffe) - 4);
          }
          else {
            puVar30 = (uint *)0x0;
          }
          uVar19 = puVar30[2];
          puVar30[2] = (uint)((ulonglong)uVar19 - 1);
          if ((ulonglong)uVar19 - 1 == 0) {
            *(uint *)(puVar30[1] & 0xfffffffe) = *puVar30;
            *(uint *)(*puVar30 & 0xfffffffe) = puVar30[1];
            fn_82AA6648(puVar17,puVar30,puVar30[3] * 0x20 + 0x10);
          }
        }
        bVar5 = false;
        goto LAB_82b5eeb4;
      }
      if (iStack_174 != 0x10) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      if (((*(uint **)(param_1 + 0x244))[1] & 1) == 0) {
        iVar20 = (**(uint **)(param_1 + 0x244) & 0xfffffffe) - 4;
      }
      else {
        iVar20 = 0;
      }
      iVar20 = *(int *)(iVar20 + 8) * 0xc + iVar20;
      fn_82B20BC0(*(undefined4 *)(param_1 + 0x240));
      puVar26 = *(undefined4 **)(param_1 + 0x240);
      *puVar26 = *(undefined4 *)(param_1 + 0x3d0);
      *(undefined4 **)(param_1 + 0x3d0) = puVar26;
      *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(iVar20 + 4);
      fn_82B46498(param_1,iVar20 + 4);
      puVar17 = *(uint **)(param_1 + 0x244);
      if ((puVar17[1] & 1) == 0) {
        puVar30 = (uint *)((*puVar17 & 0xfffffffe) - 4);
      }
      else {
        puVar30 = (uint *)0x0;
      }
      uVar27 = puVar30[2];
      puVar30[2] = (uint)((ulonglong)uVar27 - 1);
      if ((ulonglong)uVar27 - 1 == 0) {
        *(uint *)(puVar30[1] & 0xfffffffe) = *puVar30;
        *(uint *)(*puVar30 & 0xfffffffe) = puVar30[1];
        fn_82AA6648(puVar17,puVar30,(ulonglong)puVar30[3] * 0xc + 0x10);
      }
LAB_82b5f2c4:
      bVar5 = false;
      goto LAB_82b5f3d0;
    }
    puVar17 = *(uint **)(param_1 + 0x23c);
    uVar19 = puVar17[1];
    if (((uVar19 & 1) != 0) || (uVar19 == 0)) {
      *(undefined4 **)(param_1 + 0x18) = puVar25;
      uVar19 = *(uint *)(param_1 + 0x28);
      uVar27 = *(uint *)(param_1 + 0x318);
      *(uint *)(param_1 + 0x28) = uVar19 & 0xfffffff7;
      *(undefined4 *)(param_1 + 0x1c) = puVar25[1];
      *(undefined4 *)(param_1 + 0x20) = 0;
      uVar28 = uVar27;
      if (uVar27 == 0) {
        uVar28 = 0x20;
      }
      if (uVar28 < *(uint *)(param_1 + 0x31c)) {
        if (uVar27 == 0) {
          uVar27 = 0x20;
        }
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xe13,uVar27);
      }
      if (((*(uint *)(param_1 + 0x2c) & 0x10) != 0) && ((uVar19 & 0x8000) == 0)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) - 0x10;
      }
      dVar36 = (double)lbl_821AAD20;
      if ((*(uint **)(param_1 + 0x38) != (uint *)0x0) &&
         ((**(uint **)(param_1 + 0x38) & 0x500) != 0)) {
        for (uVar19 = *(uint *)(param_1 + 4); ((uVar19 & 1) == 0 && (uVar19 != 0));
            uVar19 = *(uint *)((uVar19 & 0xfffffffe) + 4)) {
          if ((*(uint *)(uVar19 + 0x44) & 0x40000000) != 0) {
            if (*(int **)(uVar19 + 0xc) == (int *)0x0) {
              iVar24 = 0;
            }
            else {
              iVar24 = **(int **)(uVar19 + 0xc);
            }
            if ((*(uint *)(iVar24 + 0x24) & 1) == 0) {
              lVar7 = ((ulonglong)*(uint *)(iVar24 + 0x20) & 0xfffffffe) - 0x28;
            }
            else {
              lVar7 = 0;
            }
            *(int *)(param_1 + 0x234) = iVar24;
            fn_82B866A0(dVar36,dVar36,dVar36,dVar36,&uStack_1b8,param_1,1);
            if (*(int *)(puVar25[1] + 0x28) != 0) {
              uVar27 = *(uint *)(*(int *)(puVar25[1] + 0x10) * 0x28 + *(int *)(param_1 + 0xc)) >> 3;
              uVar35 = (ulonglong)uVar27 & 0x3fff;
              iVar24 = fn_82B4A218(*(undefined4 *)(param_1 + 0x234),
                                         *(int *)(puVar25[1] + 0x10),param_1);
              if ((uVar27 & 0x3fff) != 0) {
                puVar34 = (undefined8 *)(iVar24 + -8);
                do {
                  puVar34 = puVar34 + 1;
                  *puVar34 = CONCAT44(uStack_1b8,uStack_1b4);
                  uVar35 = uVar35 - 1;
                } while (uVar35 != 0);
              }
            }
            iVar24 = *(int *)(puVar25[1] + 0x2c);
            if ((iVar24 != 0) && (*(int *)(iVar24 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c1);
            }
            while (iVar24 != 0) {
              if (*(int *)(*(int *)(iVar24 + 8) + 4) == 6) {
                iVar21 = *(int *)(*(int *)(iVar24 + 8) + 0x18);
                if ((iVar21 == 0) || (*(int *)(iVar21 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c1);
                }
                if ((*(int *)(iVar21 + 0x14) != 0) && ((*(uint *)(iVar21 + 0x2c) & 0x20) != 0)) {
                  uVar27 = *(uint *)(*(int *)(iVar21 + 0x10) * 0x28 + *(int *)(param_1 + 0xc)) >> 3;
                  uVar35 = (ulonglong)uVar27 & 0x3fff;
                  iVar21 = fn_82B4A218(*(undefined4 *)(param_1 + 0x234),
                                             *(int *)(iVar21 + 0x10),param_1);
                  if ((uVar27 & 0x3fff) != 0) {
                    puVar34 = (undefined8 *)(iVar21 + -8);
                    do {
                      puVar34 = puVar34 + 1;
                      *puVar34 = CONCAT44(uStack_1b8,uStack_1b4);
                      uVar35 = uVar35 - 1;
                    } while (uVar35 != 0);
                  }
                }
              }
              iVar24 = *(int *)(iVar24 + 0xc);
              if ((iVar24 != 0) && (*(int *)(iVar24 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c1);
              }
            }
            if (*(int *)(puVar25[1] + 0x28) != 0) {
              fn_82B52FF8(param_1,puVar15,*(undefined4 *)(puVar25[1] + 0x10),
                            *(undefined4 *)(puVar25[1] + 0x38),lVar7);
            }
            fn_82B53448(param_1,puVar25[1],puVar15,lVar7);
            *(undefined4 *)(*(int *)(param_1 + 0x234) + 0x50) = 0;
          }
        }
      }
      if ((*(uint *)(param_1 + 0x2c) & 0x1000000) == 0) {
        return;
      }
      uVar19 = -(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4);
      *(uint *)(param_1 + 0x234) = uVar19;
      cVar29 = fn_82ABDD48(param_1,0);
      if (cVar29 != '\0') {
        puVar25 = (undefined4 *)fn_82B4A218(uVar19,*(undefined4 *)(param_1 + 0x264),param_1);
        puVar26 = (undefined4 *)
                  fn_82B866A0((double)lbl_82002AE0,dVar36,dVar36,dVar36,&uStack_1b8,param_1,1)
        ;
        *puVar25 = *puVar26;
        puVar25[1] = puVar26[1];
      }
      uVar19 = *(uint *)(param_1 + 4);
      do {
        if ((uVar19 & 1) != 0) {
          return;
        }
        if (uVar19 == 0) {
          return;
        }
        if ((((*(uint *)(uVar19 + 0x24) & 1) == 0) &&
            (uVar27 = *(uint *)(uVar19 + 0x20) & 0xfffffffe, uVar27 != 0x28)) &&
           ((*(uint *)(uVar27 - 0x20) & 0x3f80) == 0x2980)) {
          fn_82B4B498(param_1);
          uVar27 = fn_82B477E0(param_1);
          *(undefined4 *)(param_1 + 0x20) = 0;
          piVar23 = (int *)(uVar19 + 8);
          iVar24 = *(int *)(uVar19 + 8);
          while (iVar24 != 0) {
            iVar21 = *(int *)(iVar24 + 4);
            fn_82B8F170(iVar21,iVar24,uVar27);
            if ((((*(uint *)(iVar21 + 0x24) & 1) == 0) &&
                (lVar7 = ((ulonglong)*(uint *)(iVar21 + 0x20) & 0xfffffffe) - 0x28, lVar7 != 0)) &&
               ((cVar29 = fn_82ABDB58(lVar7), cVar29 != '\0' &&
                (puVar12 = (uint *)fn_82ABE0A0(lVar7,param_1), *puVar12 == uVar19)))) {
              *puVar12 = uVar27;
            }
            if (*piVar23 == iVar24) {
              piVar23 = (int *)(iVar24 + 0xc);
            }
            iVar24 = *piVar23;
          }
          fn_82B8F328(uVar27,uVar19,param_1);
          *(uint *)(uVar27 + 0x30) =
               *(uint *)(uVar19 + 0x30) & 0x200000 | *(uint *)(uVar27 + 0x30) & 0xffdfffff;
          *(uint *)(uVar19 + 0x30) = *(uint *)(uVar19 + 0x30) & 0xffdfffff;
          cVar29 = fn_82ABDD48(param_1,0);
          if (cVar29 != '\0') {
            *(uint *)(param_1 + 0x234) = uVar27;
            fn_82B85298(&uStack_1b8,param_1,uVar27,*(undefined4 *)(param_1 + 0x264),0);
            uVar28 = fn_82B841E8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                       (ulonglong)*(uint *)(param_1 + 0x234) + 0x20,0x75,0,0);
            puVar25 = &uStack_1b8;
LAB_82b61ba0:
            uVar6 = fn_82B4BAA8(param_1,puVar25);
            fn_82AD1978(uVar28,uVar6);
            *(uint *)(uVar28 + 8) = *(uint *)(uVar28 + 8) | 0x2000000;
          }
        }
        else if (((*(uint *)(uVar19 + 0x44) & 0x40000000) != 0) &&
                (cVar29 = fn_82ABDD48(param_1,0), cVar29 != '\0')) {
          *(uint *)(param_1 + 0x234) = uVar19;
          fn_82B85298(&uStack_1b0,param_1,uVar19,*(undefined4 *)(param_1 + 0x264),0);
          uVar28 = fn_82B841E8(param_1,*(undefined4 *)(param_1 + 0x234),0,0x75,0,0);
          iVar24 = *(int *)(param_1 + 0x234);
          uVar27 = uVar28 & 0xfffffffe;
          puVar25 = &uStack_1b0;
          *(undefined4 *)(uVar27 + 0x28) = *(undefined4 *)(iVar24 + 0x24);
          *(uint *)((*(uint *)(iVar24 + 0x24) & 0xfffffffe) + 0x24) = uVar27 + 0x28;
          *(uint *)(uVar27 + 0x24) = iVar24 + 0x24U | 1;
          *(uint *)(iVar24 + 0x24) = uVar27;
          goto LAB_82b61ba0;
        }
        uVar19 = *(uint *)((uVar19 & 0xfffffffe) + 4);
      } while( true );
    }
    if ((uVar19 & 1) == 0) {
      puVar30 = (uint *)((*puVar17 & 0xfffffffe) - 4);
    }
    else {
      puVar30 = (uint *)0x0;
    }
    uVar19 = puVar30[2] - 1;
    param_2 = (undefined4 *)puVar30[puVar30[2] + 3];
    puVar30[2] = uVar19;
    if (uVar19 == 0) {
      *(uint *)(puVar30[1] & 0xfffffffe) = *puVar30;
      *(uint *)(*puVar30 & 0xfffffffe) = puVar30[1];
      fn_82AA6648(puVar17,puVar30,((ulonglong)puVar30[3] + 4 & 0x3fffffff) << 2);
    }
    *(undefined4 *)(param_1 + 0x234) = param_2[3];
    iVar21 = param_2[1];
    *(undefined4 **)(param_1 + 0x18) = param_2;
    *(int *)(param_1 + 0x1c) = iVar21;
    iStack_190 = iVar21;
    if (*(int *)(iVar21 + 0x44) != 0) {
      if ((*(uint *)(param_1 + 0x28) & 8) != 0) {
        fn_82B4FD60(param_1,puVar16);
        fn_82B207C8(*(undefined4 *)(param_1 + 0x244));
      }
      iVar20 = *(int *)(iVar21 + 0x44);
      while (iVar20 != 0) {
        if (*(int *)(iVar20 + 4) == 0x13) {
          fn_82B4FAE8(param_1,puVar16,iVar20);
        }
        else {
          if (*(int *)(iVar20 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          if ((*(int *)(iVar20 + 8) == 0) || (*(int *)(*(int *)(iVar20 + 8) + 4) != 0x13)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          fn_82B4FAE8(param_1,puVar16);
          iVar20 = *(int *)(iVar20 + 0xc);
        }
      }
      uVar35 = fn_82B45330(0xb,0,0,0,0,0,0,0);
      uVar6 = fn_82B45330(1,0,0,0,0,0,0,0);
      fn_82B52828(param_1,puVar16,uVar6,uVar35 | 0xdbe000,0,0,0,auStack_b0);
      uVar19 = *(uint *)(*(int *)(param_1 + 0x240) + 4);
      if (((uVar19 & 1) == 0) && (uVar19 != 0)) {
        fn_82B50E90(param_1);
      }
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
  } while( true );
LAB_82b5f3d8:
  iVar20 = *(int *)(uVar19 + 4);
  uVar18 = (undefined4)uVar35;
  if (iVar20 == 1) {
    do {
      uVar28 = uVar19;
      if (*(int *)(uVar19 + 8) != 0) break;
      uVar19 = *(uint *)(uVar19 + 0xc);
      uVar28 = uVar19;
    } while (uVar19 != 0);
    if (uVar28 == 0) goto LAB_82b61394;
    uVar19 = *(uint *)(uVar28 + 8);
    uVar10 = uVar35;
    if (*(int *)(uVar28 + 0xc) != 0) {
      if (uVar27 != 0) {
        uVar35 = fn_82B477E0(param_1);
        if ((*puVar12 & 1) == 0) {
          uVar33 = *puVar13 & 0xfffffffe;
          iVar20 = uVar33 - 4;
          if ((iVar20 == 0) || (*(uint *)(uVar33 + 8) < *(int *)(uVar33 + 4) + 1U))
          goto LAB_82b5f458;
        }
        else {
LAB_82b5f458:
          iVar20 = fn_82AD6090(puVar13,1);
        }
        iVar2 = *(int *)(iVar20 + 8);
        *(int *)(iVar20 + 8) = iVar2 + 1;
        *(uint *)((iVar2 + 4) * 4 + iVar20) = (uint)uVar35;
        if ((*puVar12 & 1) == 0) {
          uVar33 = *puVar13 & 0xfffffffe;
          iVar20 = uVar33 - 4;
          if ((iVar20 == 0) || (*(uint *)(uVar33 + 8) < *(int *)(uVar33 + 4) + 1U))
          goto LAB_82b5f4ac;
        }
        else {
LAB_82b5f4ac:
          iVar20 = fn_82AD6090(puVar13,1);
        }
        iVar2 = *(int *)(iVar20 + 8);
        *(int *)(iVar20 + 8) = iVar2 + 1;
        *(undefined4 *)((iVar2 + 4) * 4 + iVar20) = uVar18;
        fn_82B50B70(puVar14,uVar27);
        uStack_1c0 = (uint)uVar35;
      }
      uStack_1bc = *(uint *)(uVar28 + 0xc);
      uVar10 = uVar35;
      uVar27 = uStack_1bc;
    }
    uVar35 = uVar10;
    if (*(int *)(uVar19 + 4) == 1) {
      pcVar32 = *(char **)(uVar19 + 0x10);
      pcVar31 = pcStack_170;
      do {
        cVar29 = *pcVar32;
        cVar1 = *pcVar31;
        if (cVar29 == '\0') break;
        pcVar32 = pcVar32 + 1;
        pcVar31 = pcVar31 + 1;
      } while (cVar29 == cVar1);
      if (cVar29 != cVar1) {
        if (*(int *)(param_1 + 0x2e8) != 0) {
          if ((*(uint *)(*(int *)(param_1 + 0x234) + 0x30) & 0x20000000) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          uVar28 = *(uint *)(param_1 + 0x2f0);
          uVar35 = fn_82B477E0();
          uVar33 = *(int *)(param_1 + 0x2ec) + 1;
          *(uint *)(param_1 + 0x2ec) = uVar33;
          *(uint *)(param_1 + 0x2f0) = uVar33;
          if (0x7fffe < uVar33) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xdc9);
          }
          puVar17 = *(uint **)(param_1 + 0x2e8);
          if ((puVar17[1] & 1) == 0) {
            uVar33 = *puVar17 & 0xfffffffe;
            iVar20 = uVar33 - 4;
            if ((iVar20 == 0) || (*(uint *)(uVar33 + 8) < *(int *)(uVar33 + 4) + 1U))
            goto LAB_82b5f5b4;
          }
          else {
LAB_82b5f5b4:
            iVar20 = fn_82AF87E0(puVar17,1);
          }
          iVar2 = *(int *)(iVar20 + 8);
          *(int *)(iVar20 + 8) = iVar2 + 1;
          puVar17 = (uint *)((iVar2 + 2) * 8 + iVar20);
          *puVar17 = *puVar17 & 0xfff80000 | uVar28 & 0x7ffff;
          puVar17[1] = puVar17[1] & 0xfff80000 | *(uint *)(param_1 + 0x2f0) & 0x7ffff;
          fn_82B4B498(param_1);
          uVar6 = fn_82B477E0(param_1);
          fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar6,param_1);
          *(int *)(param_1 + 0x234) = (int)uVar6;
          if ((*puVar12 & 1) == 0) {
            uVar33 = *puVar13 & 0xfffffffe;
            iVar20 = uVar33 - 4;
            if ((iVar20 == 0) || (*(uint *)(uVar33 + 8) < *(int *)(uVar33 + 4) + 1U))
            goto LAB_82b5f650;
          }
          else {
LAB_82b5f650:
            iVar20 = fn_82AD6090(puVar13,1);
          }
          iVar2 = *(int *)(iVar20 + 8);
          *(int *)(iVar20 + 8) = iVar2 + 1;
          *(uint *)((iVar2 + 4) * 4 + iVar20) = (uint)uVar35;
          if ((*puVar12 & 1) == 0) {
            uVar33 = *puVar13 & 0xfffffffe;
            iVar20 = uVar33 - 4;
            if ((iVar20 == 0) || (*(uint *)(uVar33 + 8) < *(int *)(uVar33 + 4) + 1U))
            goto LAB_82b5f6a4;
          }
          else {
LAB_82b5f6a4:
            iVar20 = fn_82AD6090(puVar13,1);
          }
          iVar2 = *(int *)(iVar20 + 8);
          *(int *)(iVar20 + 8) = iVar2 + 1;
          *(int *)((iVar2 + 4) * 4 + iVar20) = (int)uVar10;
          fn_82B50D00(puVar14,uVar28,8);
          puVar25 = puStack0000001c;
          uStack_1c0 = (uint)uVar35;
        }
        if (((puVar16[1] & 1) == 0) && (puVar16[1] != 0)) {
          fn_82B52828(param_1,puVar16,6,0,3,&uStack_1bc,&uStack_1c0,auStack_f0);
          uVar35 = (ulonglong)uStack_1c0;
          uVar27 = uStack_1bc;
        }
      }
    }
    goto LAB_82b5f3d8;
  }
  if (iVar20 == 3) goto LAB_82b61394;
  if (iVar20 == 6) {
    if (*(int *)(uVar19 + 0x10) != 1) goto LAB_82b61394;
    fn_82B54820(param_1,uVar19,puVar15);
    fn_82B50D00(puVar14,uVar19,0xc);
    if (((puVar16[1] & 1) != 0) || (puVar16[1] == 0)) goto LAB_82b61394;
    if (uVar27 != 0) {
      if (((*(int *)(uVar27 + 4) == 0xc) && (iVar24 = *(int *)(uVar27 + 0x14), iVar24 != 0)) &&
         (*(int *)(iVar24 + 4) == 0xe)) {
        bVar4 = *(int *)(iVar24 + 0x1c) == 0x1a;
      }
      else {
        bVar4 = false;
      }
      iVar21 = iStack_190;
      iVar24 = iStack_198;
      puVar25 = puStack0000001c;
      uVar19 = uVar27;
      if (bVar4) goto LAB_82b5ee4c;
      if (*(int *)(uVar27 + 4) == 1) {
        if (((*(int *)(*(int *)(uVar27 + 8) + 4) == 0xc) &&
            (iVar20 = *(int *)(*(int *)(uVar27 + 8) + 0x14), iVar20 != 0)) &&
           (*(int *)(iVar20 + 4) == 0xe)) {
          bVar4 = *(int *)(iVar20 + 0x1c) == 0x1a;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) goto LAB_82b5ee4c;
      }
    }
    fn_82B52828(param_1,puVar16,0,0,3,&uStack_1bc,&uStack_1c0,auStack_d0);
    uVar27 = uStack_1bc;
code_r0x82b61390:
    uVar35 = (ulonglong)uStack_1c0;
    goto LAB_82b61394;
  }
  if (iVar20 != 0xc) {
    if (iVar20 == 0x13) {
      fn_82B4FAE8(param_1,puVar16,uVar19);
      iVar21 = iStack_190;
      iVar24 = iStack_198;
      puVar25 = puStack0000001c;
      uVar19 = uVar27;
      goto LAB_82b5ee4c;
    }
    if (iVar20 != 0x1b) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar28 = *(uint *)(uVar19 + 0x30);
    if (uVar28 < 5) {
LAB_82b5f8cc:
      fn_82B54948(param_1,puVar15,uVar19,0);
    }
    else {
      if (uVar28 != 5) {
        if (7 < uVar28) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        goto LAB_82b61394;
      }
      uVar28 = *(uint *)(uVar19 + 0x34);
      if (uVar28 < 2) goto LAB_82b61394;
      if (uVar28 == 2) {
        if ((*(uint *)(param_1 + 0x28) & 0x40000) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xe34);
        }
        goto LAB_82b61394;
      }
      if (uVar28 == 0xb) {
        if ((*(uint *)(param_1 + 0x28) & 0x40000) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xe34);
        }
        if (*(int *)(uVar19 + 0x5c) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xe34);
        }
        uVar6 = fn_82B54948(param_1,puVar15,*(undefined4 *)(uVar19 + 0x60),2);
        iVar21 = fn_82B1B3F8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                   (ulonglong)*(uint *)(param_1 + 0x234) + 0x20,uVar6);
        *(uint *)(iVar21 + 8) = *(uint *)(iVar21 + 8) | 0x60000;
        iVar24 = *(int *)(uVar19 + 100);
        if ((iVar24 == 0) || (*(int *)(iVar24 + 4) != 0x1c)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        puVar17 = (uint *)fn_82ABE0A0(iVar21,param_1);
        *puVar17 = *(uint *)(iVar24 + 0x18) | 2;
      }
      else {
        if (uVar28 == 0xc) goto LAB_82b5f8cc;
        if (uVar28 != 0x1e) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xe34);
        }
        if ((*(uint *)(param_1 + 0x28) & 0x40000) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xe34);
        }
        lVar7 = fn_82B477E0();
        fn_82B8F328(*(undefined4 *)(param_1 + 0x234),lVar7,param_1);
        *(int *)(param_1 + 0x234) = (int)lVar7;
        iVar21 = fn_82B841E8(param_1,lVar7,lVar7 + 0x18,0x7e,0,0);
        iVar24 = *(int *)(uVar19 + 0x60);
        if ((iVar24 == 0) || (*(int *)(iVar24 + 4) != 0x1c)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        *(undefined4 *)(iVar21 + 0x10) = *(undefined4 *)(iVar24 + 0x18);
      }
      uVar6 = fn_82B477E0(param_1);
      fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar6,param_1);
      *(int *)(param_1 + 0x234) = (int)uVar6;
    }
    goto LAB_82b61394;
  }
  if (*(int *)(uVar19 + 0x2c) != 0) {
    fn_82B50498(&iStack_180,*(int *)(uVar19 + 0x2c),param_1);
    while (iVar20 = fn_82B50558(&iStack_180), iVar20 != 0) {
      if ((iVar20 == 0) || (*(int *)(iVar20 + 4) != 0x13)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      fn_82B4FAE8(param_1,puVar16,iVar20);
    }
    *puStack_17c = *(undefined4 *)(iStack_180 + 0x3d0);
    *(undefined4 **)(iStack_180 + 0x3d0) = puStack_17c;
  }
  switch(*(undefined4 *)(uVar19 + 0x10)) {
  case 0:
    if ((((*(int *)(uVar19 + 0x18) != 0) || (*(int *)(uVar19 + 0x1c) != 0)) ||
        (*(int *)(uVar19 + 0x20) != 0)) || (*(int *)(uVar19 + 0x28) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if (*(int *)(uVar19 + 0x14) == 0) goto LAB_82b61394;
    if (*(int *)(*(int *)(uVar19 + 0x14) + 4) == 0x1d) {
      iVar24 = fn_82B477E0(param_1);
      *(uint *)(iVar24 + 0x30) = *(uint *)(iVar24 + 0x30) | 0x20000000;
      fn_82B8F328(*(undefined4 *)(param_1 + 0x234),iVar24,param_1);
      if (uVar27 != 0) {
        uVar28 = fn_82B477E0(param_1);
        if ((*puVar12 & 1) == 0) {
          uVar33 = *puVar13 & 0xfffffffe;
          iVar21 = uVar33 - 4;
          if ((iVar21 == 0) || (*(uint *)(uVar33 + 8) < *(int *)(uVar33 + 4) + 1U))
          goto code_r0x82b5fa58;
        }
        else {
code_r0x82b5fa58:
          iVar21 = fn_82AD6090(puVar13,1);
        }
        iVar20 = *(int *)(iVar21 + 8);
        *(int *)(iVar21 + 8) = iVar20 + 1;
        *(uint *)((iVar20 + 4) * 4 + iVar21) = uVar28;
        if ((*puVar12 & 1) == 0) {
          uVar33 = *puVar13 & 0xfffffffe;
          iVar21 = uVar33 - 4;
          if ((iVar21 == 0) || (*(uint *)(uVar33 + 8) < *(int *)(uVar33 + 4) + 1U))
          goto code_r0x82b5faac;
        }
        else {
code_r0x82b5faac:
          iVar21 = fn_82AD6090(puVar13,1);
        }
        iVar20 = *(int *)(iVar21 + 8);
        *(int *)(iVar21 + 8) = iVar20 + 1;
        *(undefined4 *)((iVar20 + 4) * 4 + iVar21) = uVar18;
        fn_82B50B70(puVar14,uVar27);
        uStack_1bc = 0;
        uStack_1c0 = uVar28;
      }
      *(int *)(param_1 + 0x234) = iVar24;
    }
    fn_82B52828(param_1,puVar16,0x806,0,3,&uStack_1bc,&uStack_1c0,auStack_c0);
    iVar24 = *(int *)(uVar19 + 0x14);
    if (*(int *)(iVar24 + 4) == 0x1d) {
      uVar27 = fn_82B46D58(param_1,*(undefined4 *)(iVar24 + 0x10));
    }
    else {
      fn_82B54948(param_1,puVar15,iVar24,0);
      uVar27 = uStack_1bc;
    }
    goto code_r0x82b61390;
  case 1:
    if ((*(int *)(uVar19 + 0x1c) != 0) || (*(int *)(uVar19 + 0x20) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    fn_82B52828(param_1,puVar16,0x806,0,3,&uStack_1bc,&uStack_1c0,auStack_e0);
    uVar27 = *(uint *)(param_1 + 0x28);
    iVar24 = *(int *)(uVar19 + 0x14);
    if (*(int *)(iVar21 + 0x28) == 0) {
      if (iVar24 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
    }
    else {
      if ((((((*(int *)(iVar24 + 4) == 0xe) && (*(int *)(iVar24 + 0x1c) == 0x1b)) &&
            (iVar24 = *(int *)(iVar24 + 0x24), *(int *)(iVar24 + 4) == 0xe)) &&
           ((*(int *)(iVar24 + 0x1c) == 0 &&
            (iVar24 = *(int *)(iVar24 + 0x20), *(int *)(iVar24 + 4) == 0xe)))) &&
          (*(int *)(iVar24 + 0x1c) == 1)) &&
         (iVar24 = (**(code **)**(undefined4 **)(iVar21 + 0x28))
                             (*(undefined4 **)(iVar21 + 0x28),*(undefined4 *)(iVar24 + 0x10)),
         iVar24 == 0)) {
        fn_82AA65B0(param_1,0xdf3);
      }
      fn_82B54948(param_1,puVar15,*(undefined4 *)(uVar19 + 0x14),uVar27 >> 2 & 2 | 1);
    }
    if ((*(uint *)(param_1 + 0x28) & 8) == 0) {
      fn_82B53520(param_1,param_2,puVar15);
    }
    else {
      fn_82B472B8(param_1,*(undefined4 *)(param_1 + 0x234));
    }
    uVar35 = (ulonglong)uStack_1c0;
    uVar19 = uStack_1bc;
    break;
  case 2:
    if ((*(int *)(uVar19 + 0x14) != 0) || (*(int *)(uVar19 + 0x28) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    fn_82B52828(param_1,puVar16,0x9fe,0,3,&uStack_1bc,&uStack_1c0,auStack_100);
    fn_82B5E118(param_1,puVar15,auStack_100);
    uVar6 = fn_82B54948(param_1,puVar15,*(undefined4 *)(uVar19 + 0x18),2);
    uVar35 = fn_82B477E0(param_1);
    uVar28 = (uint)uVar35;
    if (*(int *)(uVar19 + 0x1c) == 0) {
      iVar24 = fn_82B1B3F8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                 (ulonglong)*(uint *)(param_1 + 0x234) + 0x20,uVar6);
      uVar27 = *(uint *)(iVar24 + 8);
      *(uint *)(iVar24 + 8) = uVar27 | 0x60000;
      iVar21 = fn_82ABDD90(param_1,uVar27 >> 7 & 0x7f,uVar27 >> 0x13 & 7,uVar27 >> 0xe & 7);
      puVar17 = (uint *)(iVar21 + iVar24 + -0x10);
      *puVar17 = uVar28;
      puVar17[3] = puVar17[3] | 4;
      uVar6 = fn_82B477E0(param_1);
      fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar35,param_1);
      fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar6,param_1);
      if ((*puVar12 & 1) == 0) {
        uVar27 = *puVar13 & 0xfffffffe;
        iVar21 = uVar27 - 4;
        if ((iVar21 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
        goto code_r0x82b5fe0c;
      }
      else {
code_r0x82b5fe0c:
        iVar21 = fn_82AD6090(puVar13,1);
      }
      iVar20 = *(int *)(iVar21 + 8);
      *(int *)(iVar21 + 8) = iVar20 + 1;
      *(uint *)((iVar20 + 4) * 4 + iVar21) = uVar28;
      if ((*puVar12 & 1) == 0) {
        uVar27 = *puVar13 & 0xfffffffe;
        iVar21 = uVar27 - 4;
        if ((iVar21 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
        goto code_r0x82b5fe60;
      }
      else {
code_r0x82b5fe60:
        iVar21 = fn_82AD6090(puVar13,1);
      }
      iVar20 = *(int *)(iVar21 + 8);
      *(int *)(iVar21 + 8) = iVar20 + 1;
      *(uint *)((iVar20 + 4) * 4 + iVar21) = uStack_1c0;
      fn_82B50B70(puVar14,uStack_1bc);
      *(int *)(param_1 + 0x234) = (int)uVar6;
      uVar27 = *(uint *)(uVar19 + 0x20);
    }
    else {
      if (*(int *)(uVar19 + 0x20) == 0) {
        iVar24 = fn_82B1B3F8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                   (ulonglong)*(uint *)(param_1 + 0x234) + 0x20,uVar6);
        uVar27 = *(uint *)(iVar24 + 8);
        *(uint *)(iVar24 + 8) = uVar27 & 0xfff9ffff | 0x20000;
        iVar21 = fn_82ABDD90(param_1,((ulonglong)uVar27 & 0x3f80) >> 7,uVar27 >> 0x13 & 7,
                              ((ulonglong)uVar27 & 0x1c000) >> 0xe);
        puVar17 = (uint *)(iVar21 + iVar24 + -0x10);
        *puVar17 = uVar28;
        puVar17[3] = puVar17[3] & 0xfffffffb;
        uVar6 = fn_82B477E0(param_1);
        fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar35,param_1);
        fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar6,param_1);
        if ((*puVar12 & 1) == 0) {
          uVar27 = *puVar13 & 0xfffffffe;
          iVar21 = uVar27 - 4;
          if ((iVar21 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
          goto code_r0x82b5ff58;
        }
        else {
code_r0x82b5ff58:
          iVar21 = fn_82AD6090(puVar13,1);
        }
        iVar20 = *(int *)(iVar21 + 8);
        *(int *)(iVar21 + 8) = iVar20 + 1;
        *(uint *)((iVar20 + 4) * 4 + iVar21) = uVar28;
        if ((*puVar12 & 1) == 0) {
          uVar27 = *puVar13 & 0xfffffffe;
          iVar21 = uVar27 - 4;
          if ((iVar21 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
          goto code_r0x82b5ffac;
        }
        else {
code_r0x82b5ffac:
          iVar21 = fn_82AD6090(puVar13,1);
        }
        iVar20 = *(int *)(iVar21 + 8);
        *(int *)(iVar21 + 8) = iVar20 + 1;
        *(uint *)((iVar20 + 4) * 4 + iVar21) = uStack_1c0;
        fn_82B50B70(puVar14,uStack_1bc);
        *(int *)(param_1 + 0x234) = (int)uVar6;
      }
      else {
        uVar8 = fn_82B477E0(param_1);
        uVar9 = fn_82B477E0(param_1);
        iVar24 = fn_82B1B3F8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                   (ulonglong)*(uint *)(param_1 + 0x234) + 0x20,uVar6);
        fn_82B46690(iVar24,0,uVar9,0,param_1);
        uVar27 = *(uint *)(iVar24 + 8);
        iVar21 = fn_82ABDD90(param_1,uVar27 >> 7 & 0x7f,uVar27 >> 0x13 & 7,uVar27 >> 0xe & 7);
        puVar17 = (uint *)(iVar21 + iVar24 + -4);
        *puVar17 = *puVar17 | 1;
        fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar9,param_1);
        fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar8,param_1);
        if ((*puVar12 & 1) == 0) {
          uVar27 = *puVar13 & 0xfffffffe;
          iVar21 = uVar27 - 4;
          if ((iVar21 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
          goto code_r0x82b600a8;
        }
        else {
code_r0x82b600a8:
          iVar21 = fn_82AD6090(puVar13,1);
        }
        iVar20 = *(int *)(iVar21 + 8);
        *(int *)(iVar21 + 8) = iVar20 + 1;
        *(uint *)((iVar20 + 4) * 4 + iVar21) = uVar28;
        if ((*puVar12 & 1) == 0) {
          uVar27 = *puVar13 & 0xfffffffe;
          iVar21 = uVar27 - 4;
          if ((iVar21 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
          goto code_r0x82b600fc;
        }
        else {
code_r0x82b600fc:
          iVar21 = fn_82AD6090(puVar13,1);
        }
        iVar20 = *(int *)(iVar21 + 8);
        *(int *)(iVar21 + 8) = iVar20 + 1;
        *(uint *)((iVar20 + 4) * 4 + iVar21) = uStack_1c0;
        fn_82B50B70(puVar14,uStack_1bc);
        if ((*puVar12 & 1) == 0) {
          uVar27 = *puVar13 & 0xfffffffe;
          iVar21 = uVar27 - 4;
          if ((iVar21 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
          goto code_r0x82b60164;
        }
        else {
code_r0x82b60164:
          iVar21 = fn_82AD6090(puVar13,1);
        }
        iVar20 = *(int *)(iVar21 + 8);
        *(int *)(iVar21 + 8) = iVar20 + 1;
        *(int *)((iVar20 + 4) * 4 + iVar21) = (int)uVar9;
        if ((*puVar12 & 1) == 0) {
          uVar27 = *puVar13 & 0xfffffffe;
          iVar21 = uVar27 - 4;
          if ((iVar21 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
          goto code_r0x82b601b8;
        }
        else {
code_r0x82b601b8:
          iVar21 = fn_82AD6090(puVar13,1);
        }
        iVar20 = *(int *)(iVar21 + 8);
        *(int *)(iVar21 + 8) = iVar20 + 1;
        *(uint *)((iVar20 + 4) * 4 + iVar21) = uVar28;
        fn_82B50B70(puVar14,*(undefined4 *)(uVar19 + 0x20));
        *(int *)(param_1 + 0x234) = (int)uVar8;
      }
      uVar27 = *(uint *)(uVar19 + 0x1c);
    }
    uStack_1c0 = uVar28;
    fn_82B46F08(param_1,iVar24,auStack_100);
    goto LAB_82b61394;
  case 3:
    if (*(int *)(uVar19 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar6 = fn_82B45330(1,2,9,10,0xb,0,0,0);
    fn_82B52828(param_1,puVar16,uVar6,0,3,&uStack_1bc,&uStack_1c0,auStack_110);
    uVar27 = *(uint *)(uVar19 + 0x1c);
    iVar24 = *(int *)(uVar19 + 0x28);
    uVar6 = fn_82B477E0(param_1);
    uVar8 = fn_82B477E0(param_1);
    uVar9 = fn_82B477E0(param_1);
    uVar35 = fn_82B477E0(param_1);
    if ((*puVar12 & 1) == 0) {
      uVar28 = *puVar13 & 0xfffffffe;
      iVar21 = uVar28 - 4;
      if ((iVar21 == 0) || (*(uint *)(uVar28 + 8) < *(int *)(uVar28 + 4) + 1U))
      goto code_r0x82b608dc;
    }
    else {
code_r0x82b608dc:
      iVar21 = fn_82AD6090(puVar13,1);
    }
    iVar20 = *(int *)(iVar21 + 8);
    *(int *)(iVar21 + 8) = iVar20 + 1;
    *(int *)((iVar20 + 4) * 4 + iVar21) = (int)uVar6;
    if ((*puVar12 & 1) == 0) {
      uVar28 = *puVar13 & 0xfffffffe;
      iVar21 = uVar28 - 4;
      if ((iVar21 == 0) || (*(uint *)(uVar28 + 8) < *(int *)(uVar28 + 4) + 1U))
      goto code_r0x82b60930;
    }
    else {
code_r0x82b60930:
      iVar21 = fn_82AD6090(puVar13,1);
    }
    iVar20 = *(int *)(iVar21 + 8);
    *(int *)(iVar21 + 8) = iVar20 + 1;
    *(uint *)((iVar20 + 4) * 4 + iVar21) = uStack_1c0;
    fn_82B50B70(puVar14,uStack_1bc);
    puVar25 = (undefined4 *)fn_82B50338(*(undefined4 *)(param_1 + 0x248));
    *puVar25 = 1;
    puVar25[1] = (int)uVar6;
    uVar28 = (uint)uVar35;
    puVar25[2] = uVar28;
    fn_82B50D00(puVar14,uVar19,0xc);
    if (*(int *)(uVar19 + 0x14) != 0) {
      fn_82B54948(param_1,puVar15,*(int *)(uVar19 + 0x14),0);
    }
    fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar8,param_1);
    *(int *)(param_1 + 0x234) = (int)uVar8;
    fn_82B5E118(param_1,puVar15,auStack_110);
    if ((*(int *)(uVar19 + 0x18) == 0) ||
       (lVar7 = fn_82B54948(param_1,puVar15,*(int *)(uVar19 + 0x18),2), lVar7 == 0)) {
      uVar19 = fn_82B45330(9,10,0,0,0,0,0,0);
      if ((uVar19 & auStack_110[0]) != 0) {
        fn_82AA65B0(param_1,0xe00);
      }
      fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar9,param_1);
    }
    else {
      iVar20 = fn_82B1B3F8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                 (ulonglong)*(uint *)(param_1 + 0x234) + 0x20);
      *(uint *)(iVar20 + 8) = *(uint *)(iVar20 + 8) & 0xfff9ffff | 0x20000;
      fn_82AC9F28(iVar20,uVar6,param_1);
      fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar6,param_1);
      fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar9,param_1);
      fn_82B46F08(param_1,iVar20,auStack_110);
      uVar19 = *(uint *)(iVar20 + 8);
      iVar21 = fn_82ABDD90(param_1,uVar19 >> 7 & 0x7f,uVar19 >> 0x13 & 7,uVar19 >> 0xe & 7);
      iVar21 = iVar21 + iVar20 + -0x10;
      uVar19 = *(uint *)(iVar21 + 8);
      if (((uVar19 & 3) == 0) && ((uVar19 >> 2 & 0xf) == 0)) {
        *(uint *)(iVar21 + 8) = uVar19 & 0xfffffe00 | 0xe8;
      }
      *(uint *)(iVar21 + 0xc) = *(uint *)(iVar21 + 0xc) | 8;
    }
    *(uint *)(param_1 + 0x234) = uVar28;
    if (iVar24 != 0) {
      fn_82B54948(param_1,puVar15,iVar24,0);
    }
    fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar8,param_1);
    *(int *)(param_1 + 0x234) = (int)uVar9;
    uStack_1c0 = uVar28;
    goto LAB_82b61394;
  case 4:
    if (((*(int *)(uVar19 + 0x14) != 0) || (*(int *)(uVar19 + 0x20) != 0)) ||
       (*(int *)(uVar19 + 0x28) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar6 = fn_82B45330(1,2,9,10,0xb,0,0,0);
    fn_82B52828(param_1,puVar16,uVar6,0,3,&uStack_1bc,&uStack_1c0,auStack_130);
    uVar35 = fn_82B477E0(param_1);
    uVar6 = fn_82B477E0(param_1);
    uVar8 = fn_82B477E0(param_1);
    fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar35,param_1);
    uVar28 = (uint)uVar35;
    *(uint *)(param_1 + 0x234) = uVar28;
    fn_82B5E118(param_1,puVar15,auStack_130);
    if ((*(int *)(uVar19 + 0x18) == 0) ||
       (lVar7 = fn_82B54948(param_1,puVar15,*(int *)(uVar19 + 0x18),2), lVar7 == 0)) {
      uVar27 = fn_82B45330(9,10,0,0,0,0,0,0);
      if ((uVar27 & auStack_130[0]) != 0) {
        fn_82AA65B0(param_1,0xe00);
      }
      fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar8,param_1);
    }
    else {
      iVar24 = fn_82B1B3F8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                 (ulonglong)*(uint *)(param_1 + 0x234) + 0x20);
      *(uint *)(iVar24 + 8) = *(uint *)(iVar24 + 8) & 0xfff9ffff | 0x20000;
      fn_82AC9F28(iVar24,uVar6,param_1);
      fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar6,param_1);
      fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar8,param_1);
      fn_82B46F08(param_1,iVar24,auStack_130);
      uVar27 = *(uint *)(iVar24 + 8);
      iVar21 = fn_82ABDD90(param_1,uVar27 >> 7 & 0x7f,uVar27 >> 0x13 & 7,uVar27 >> 0xe & 7);
      puVar17 = (uint *)(iVar21 + iVar24 + -4);
      *puVar17 = *puVar17 | 8;
    }
    if ((*puVar12 & 1) == 0) {
      uVar27 = *puVar13 & 0xfffffffe;
      iVar24 = uVar27 - 4;
      if ((iVar24 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
      goto code_r0x82b60d24;
    }
    else {
code_r0x82b60d24:
      iVar24 = fn_82AD6090(puVar13,1);
    }
    iVar21 = *(int *)(iVar24 + 8);
    *(int *)(iVar24 + 8) = iVar21 + 1;
    *(int *)((iVar21 + 4) * 4 + iVar24) = (int)uVar6;
    if ((*puVar12 & 1) == 0) {
      uVar27 = *puVar13 & 0xfffffffe;
      iVar24 = uVar27 - 4;
      if ((iVar24 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
      goto code_r0x82b60d78;
    }
    else {
code_r0x82b60d78:
      iVar24 = fn_82AD6090(puVar13,1);
    }
    iVar21 = *(int *)(iVar24 + 8);
    *(int *)(iVar24 + 8) = iVar21 + 1;
    *(uint *)((iVar21 + 4) * 4 + iVar24) = uStack_1c0;
    fn_82B50B70(puVar14,uStack_1bc);
    puVar25 = (undefined4 *)fn_82B50338(*(undefined4 *)(param_1 + 0x248));
    *puVar25 = 1;
    puVar25[1] = (int)uVar6;
    puVar25[2] = uVar28;
    fn_82B50D00(puVar14,uVar19,0xc);
    uVar27 = *(uint *)(uVar19 + 0x1c);
    *(int *)(param_1 + 0x234) = (int)uVar8;
    uStack_1c0 = uVar28;
    goto LAB_82b61394;
  case 5:
    if (((*(int *)(uVar19 + 0x14) != 0) || (*(int *)(uVar19 + 0x20) != 0)) ||
       (*(int *)(uVar19 + 0x28) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar6 = fn_82B45330(1,2,9,10,0,0,0,0);
    fn_82B52828(param_1,puVar16,uVar6,0,3,&uStack_1bc,&uStack_1c0,auStack_140);
    uVar10 = fn_82B477E0(param_1);
    uVar35 = fn_82B477E0(param_1);
    uVar6 = fn_82B477E0(param_1);
    fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar10,param_1);
    *(int *)(param_1 + 0x234) = (int)uVar35;
    fn_82B5E118(param_1,puVar15,auStack_140);
    uVar8 = fn_82B54948(param_1,puVar15,*(undefined4 *)(uVar19 + 0x18),2);
    iVar24 = fn_82B1B3F8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                               (ulonglong)*(uint *)(param_1 + 0x234) + 0x20,uVar8);
    *(uint *)(iVar24 + 8) = *(uint *)(iVar24 + 8) | 0x60000;
    fn_82AC9F28(iVar24,uVar10,param_1);
    fn_82B8F328(uVar35,uVar10,param_1);
    fn_82B8F328(uVar35,uVar6,param_1);
    fn_82B46F08(param_1,iVar24,auStack_140);
    uVar27 = *(uint *)(iVar24 + 8);
    iVar21 = fn_82ABDD90(param_1,uVar27 >> 7 & 0x7f,uVar27 >> 0x13 & 7,uVar27 >> 0xe & 7);
    puVar17 = (uint *)(iVar21 + iVar24 + -4);
    *puVar17 = *puVar17 | 8;
    if ((*puVar12 & 1) == 0) {
      uVar27 = *puVar13 & 0xfffffffe;
      iVar24 = uVar27 - 4;
      if ((iVar24 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
      goto code_r0x82b60f78;
    }
    else {
code_r0x82b60f78:
      iVar24 = fn_82AD6090(puVar13,1);
    }
    iVar21 = *(int *)(iVar24 + 8);
    *(int *)(iVar24 + 8) = iVar21 + 1;
    *(int *)((iVar21 + 4) * 4 + iVar24) = (int)uVar6;
    if ((*puVar12 & 1) == 0) {
      uVar27 = *puVar13 & 0xfffffffe;
      iVar24 = uVar27 - 4;
      if ((iVar24 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
      goto code_r0x82b60fcc;
    }
    else {
code_r0x82b60fcc:
      iVar24 = fn_82AD6090(puVar13,1);
    }
    iVar21 = *(int *)(iVar24 + 8);
    *(int *)(iVar24 + 8) = iVar21 + 1;
    *(uint *)((iVar21 + 4) * 4 + iVar24) = uStack_1c0;
    fn_82B50B70(puVar14,uStack_1bc);
    puVar25 = (undefined4 *)fn_82B50338(*(undefined4 *)(param_1 + 0x248));
    *puVar25 = 1;
    puVar25[1] = (int)uVar6;
    puVar25[2] = (int)uVar35;
    fn_82B50D00(puVar14,uVar19,0xc);
    goto code_r0x82b60808;
  case 6:
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdac,0xffffffff820d8ba4);
  default:
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  case 9:
    fn_82B53520(param_1,puVar25,puVar15);
    goto code_r0x82b5fc7c;
  case 10:
    fn_82B24700(auStack_168,*(undefined4 *)(param_1 + 0x248));
    fn_82B4C2F8(auStack_168);
    cVar29 = fn_82B4C2B8(auStack_168);
    if (cVar29 != '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xe2a);
    }
    do {
      piVar23 = (int *)fn_82B4B2A0(auStack_168);
      iVar24 = *piVar23;
      if (iVar24 == 2) goto code_r0x82b6108c;
    } while ((iVar24 != 1) && (cVar29 = fn_82B4C2B8(auStack_168), cVar29 == '\0'));
    if (iVar24 == 2) {
code_r0x82b6108c:
      iVar24 = *(int *)(param_1 + 0x234);
      for (piVar3 = *(int **)(iVar24 + 0xc); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        if (piVar23[6] == *piVar3) {
          bVar5 = true;
          goto code_r0x82b610c0;
        }
      }
      bVar5 = false;
code_r0x82b610c0:
      if (!bVar5) {
        iVar21 = piVar23[6];
code_r0x82b61110:
        fn_82B8F328(iVar24,iVar21,param_1);
      }
    }
    else {
      iVar24 = *(int *)(param_1 + 0x234);
      for (piVar3 = *(int **)(iVar24 + 0xc); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        if (piVar23[1] == *piVar3) {
          bVar5 = true;
          goto code_r0x82b61104;
        }
      }
      bVar5 = false;
code_r0x82b61104:
      if (!bVar5) {
        iVar21 = piVar23[1];
        goto code_r0x82b61110;
      }
    }
code_r0x82b5fc7c:
    if (uVar27 != 0) {
      uVar18 = fn_82B477E0(param_1);
      if ((*puVar12 & 1) == 0) {
        uVar19 = *puVar13 & 0xfffffffe;
        iVar24 = uVar19 - 4;
        if ((iVar24 == 0) || (*(uint *)(uVar19 + 8) < *(int *)(uVar19 + 4) + 1U))
        goto code_r0x82b5fcc0;
      }
      else {
code_r0x82b5fcc0:
        iVar24 = fn_82AD6090(puVar13,1);
      }
      iVar21 = *(int *)(iVar24 + 8);
      *(int *)(iVar24 + 8) = iVar21 + 1;
      goto code_r0x82b61214;
    }
    goto code_r0x82b61280;
  case 0xb:
    fn_82B24700(auStack_158,*(undefined4 *)(param_1 + 0x248));
    fn_82B4C2F8(auStack_158);
    cVar29 = fn_82B4C2B8(auStack_158);
    if (cVar29 != '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xe29);
    }
    do {
      piVar23 = (int *)fn_82B4B2A0(auStack_158);
      if (*piVar23 == 1) break;
      cVar29 = fn_82B4C2B8(auStack_158);
    } while (cVar29 == '\0');
    for (piVar3 = *(int **)(*(int *)(param_1 + 0x234) + 0xc); piVar3 != (int *)0x0;
        piVar3 = (int *)piVar3[2]) {
      if (piVar23[2] == *piVar3) {
        bVar5 = true;
        goto code_r0x82b6119c;
      }
    }
    bVar5 = false;
code_r0x82b6119c:
    uVar19 = uVar27;
    if (!bVar5) {
      fn_82B8F328(*(int *)(param_1 + 0x234),piVar23[2],param_1);
    }
    break;
  case 0xc:
    if ((*(int *)(uVar19 + 0x20) != 0) || (*(int *)(uVar19 + 0x28) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    iStack_198 = iVar24 + -1;
    uVar18 = fn_82B477E0(param_1);
    puVar25 = (undefined4 *)fn_82B50338(*(undefined4 *)(param_1 + 0x248));
    *puVar25 = 2;
    puVar25[5] = iVar24;
    puVar25[6] = uVar18;
    uVar22 = fn_82B477E0(param_1);
    puVar25[7] = uVar22;
    uVar6 = fn_82B45330(0x15,0,0,0,0,0,0,0);
    uVar8 = fn_82B45330(1,2,3,4,5,6,7,8);
    fn_82B52828(param_1,puVar16,uVar8,uVar6,3,&uStack_1bc,&uStack_1c0,puVar25 + 1);
    fn_82B5E118(param_1,puVar15,puVar25 + 1);
    iVar21 = *(int *)(uVar19 + 0x18);
    if (*(int *)(iVar21 + 4) == 1) {
      if (*(int *)(iVar21 + 0xc) == 0) {
        cVar29 = thunk_FUN_82b457d4(param_1,*(undefined4 *)(iVar21 + 8),&iStack_19c,&iStack_194);
      }
      else {
        cVar29 = '\0';
      }
    }
    else {
      cVar29 = fn_82B45740(param_1,iVar21,&iStack_19c,&iStack_194);
    }
    if (cVar29 == '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    fn_82B46518(param_1,iVar24,param_2,(longlong)iStack_19c * (longlong)iStack_194,3,pcStack_178
                   );
    uVar6 = fn_82B469D8();
    fn_82B54948(param_1,puVar15,uVar6,0);
    if ((*puVar12 & 1) == 0) {
      uVar27 = *puVar13 & 0xfffffffe;
      iVar24 = uVar27 - 4;
      if ((iVar24 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
      goto code_r0x82b603c4;
    }
    else {
code_r0x82b603c4:
      iVar24 = fn_82AD6090(puVar13,1);
    }
    iVar21 = *(int *)(iVar24 + 8);
    *(int *)(iVar24 + 8) = iVar21 + 1;
    *(undefined4 *)((iVar21 + 4) * 4 + iVar24) = uVar18;
    if ((*puVar12 & 1) == 0) {
      uVar27 = *puVar13 & 0xfffffffe;
      iVar24 = uVar27 - 4;
      if ((iVar24 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
      goto code_r0x82b60418;
    }
    else {
code_r0x82b60418:
      iVar24 = fn_82AD6090(puVar13,1);
    }
    iVar21 = *(int *)(iVar24 + 8);
    *(int *)(iVar24 + 8) = iVar21 + 1;
    *(uint *)((iVar21 + 4) * 4 + iVar24) = uStack_1c0;
    fn_82B50B70(puVar14,uStack_1bc);
    fn_82B50D00(puVar14,uVar19,0xc);
    bVar4 = false;
    uStack_1c0 = puVar25[7];
    uVar35 = (ulonglong)uStack_1c0;
    uVar27 = *(uint *)(uVar19 + 0x1c);
    puVar17 = (uint *)fn_82ABE9F0(param_1,8,0);
    puVar17[1] = (uint)puVar17 | 1;
    *puVar17 = (uint)(puVar17 + 1) | 1;
    fn_82B50498(&uStack_1b0,*(undefined4 *)(uVar19 + 0x1c),param_1);
    while (iVar24 = fn_82B50558(&uStack_1b0), iVar24 != 0) {
      if ((iVar24 == 0) || (*(int *)(iVar24 + 4) != 0xc)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      if (*(int *)(iVar24 + 0x10) != 0xd) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      cVar29 = fn_82B50730(param_1,iVar24);
      if (cVar29 == '\0') {
        fn_82B50498(&uStack_188,*(undefined4 *)(iVar24 + 0x18),param_1);
        while (iVar24 = fn_82B50558(&uStack_188), iVar24 != 0) {
          if (*(int *)(iVar24 + 4) != 0x14) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          iVar24 = *(int *)(iVar24 + 0x10);
          if ((iVar24 == 0) || (*(int *)(iVar24 + 4) != 0xf)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          if (*(int *)(iVar24 + 0x10) != 2) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          uVar18 = *(undefined4 *)(iVar24 + 0x18);
          cVar29 = fn_82ACB8B8(puVar17,uVar18);
          if (cVar29 != '\0') {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xdcc,uVar18);
          }
          if ((puVar17[1] & 1) == 0) {
            uVar19 = *puVar17 & 0xfffffffe;
            iVar24 = uVar19 - 4;
            if ((iVar24 == 0) || (*(uint *)(uVar19 + 8) < *(int *)(uVar19 + 4) + 1U))
            goto code_r0x82b6057c;
          }
          else {
code_r0x82b6057c:
            iVar24 = fn_82AD6090(puVar17,1);
          }
          iVar21 = *(int *)(iVar24 + 8);
          *(int *)(iVar24 + 8) = iVar21 + 1;
          *(undefined4 *)((iVar21 + 4) * 4 + iVar24) = uVar18;
        }
        fn_82AC6808(uStack_188,uStack_184,8,0xf);
      }
      else {
        if (bVar4) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xe3a);
        }
        bVar4 = true;
      }
    }
    fn_82B4B048(puVar17);
    fn_82AC6808(param_1,puVar17,8,0);
    fn_82AC6808(uStack_1b0,uStack_1ac,8,0xf);
    goto LAB_82b61394;
  case 0xd:
    cVar29 = fn_82B50730(param_1,uVar19);
    fn_82B24700(auStack_120,*(undefined4 *)(param_1 + 0x248));
    fn_82B4C2F8(auStack_120);
    do {
      piVar23 = (int *)fn_82B4B2A0(auStack_120);
    } while (*piVar23 != 2);
    if (cVar29 == '\0') {
      uVar10 = fn_82B477E0(param_1);
      fn_82B50498(&uStack_1b8,*(undefined4 *)(uVar19 + 0x18),param_1);
      while (iVar24 = fn_82B50558(&uStack_1b8), iVar24 != 0) {
        if (*(int *)(iVar24 + 4) != 0x14) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        if (*(int *)(iVar24 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        uVar6 = fn_82B46AC8(param_1,piVar23[5]);
        uVar6 = fn_82B54948(param_1,puVar15,uVar6,2);
        uVar6 = fn_82B1B3F8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                  (ulonglong)*(uint *)(param_1 + 0x234) + 0x20,uVar6);
        fn_82B46690(uVar6,1,uVar10,1,param_1);
        uVar8 = fn_82B477E0(param_1);
        fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar10,param_1);
        fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar8,param_1);
        fn_82B46F08(param_1,uVar6,piVar23 + 1);
        *(int *)(param_1 + 0x234) = (int)uVar8;
      }
      fn_82AC6808(uStack_1b8,uStack_1b4,8,0xf);
    }
    else {
      uVar10 = (ulonglong)(uint)piVar23[7];
    }
    uVar22 = *(undefined4 *)(param_1 + 0x234);
    if ((*puVar12 & 1) == 0) {
      uVar28 = *puVar13 & 0xfffffffe;
      iVar24 = uVar28 - 4;
      if ((iVar24 == 0) || (*(uint *)(uVar28 + 8) < *(int *)(uVar28 + 4) + 1U))
      goto code_r0x82b6077c;
    }
    else {
code_r0x82b6077c:
      iVar24 = fn_82AD6090(puVar13,1);
    }
    iVar21 = *(int *)(iVar24 + 8);
    *(int *)(iVar24 + 8) = iVar21 + 1;
    *(undefined4 *)((iVar21 + 4) * 4 + iVar24) = uVar22;
    if ((*puVar12 & 1) == 0) {
      uVar28 = *puVar13 & 0xfffffffe;
      iVar24 = uVar28 - 4;
      if ((iVar24 == 0) || (*(uint *)(uVar28 + 8) < *(int *)(uVar28 + 4) + 1U))
      goto code_r0x82b607d0;
    }
    else {
code_r0x82b607d0:
      iVar24 = fn_82AD6090(puVar13,1);
    }
    iVar21 = *(int *)(iVar24 + 8);
    *(int *)(iVar24 + 8) = iVar21 + 1;
    *(undefined4 *)((iVar21 + 4) * 4 + iVar24) = uVar18;
    fn_82B50B70(puVar14,uVar27);
    uVar35 = 0;
code_r0x82b60808:
    *(int *)(param_1 + 0x234) = (int)uVar10;
    uVar27 = *(uint *)(uVar19 + 0x1c);
    uStack_1c0 = (uint)uVar35;
    goto LAB_82b61394;
  }
  uVar27 = 0;
  if (uVar19 != 0) {
    uVar18 = fn_82B477E0(param_1);
    if ((*puVar12 & 1) == 0) {
      uVar27 = *puVar13 & 0xfffffffe;
      iVar24 = uVar27 - 4;
      if ((iVar24 == 0) || (*(uint *)(uVar27 + 8) < *(int *)(uVar27 + 4) + 1U))
      goto code_r0x82b611f4;
    }
    else {
code_r0x82b611f4:
      iVar24 = fn_82AD6090(puVar13,1);
    }
    iVar21 = *(int *)(iVar24 + 8);
    *(int *)(iVar24 + 8) = iVar21 + 1;
    uVar27 = uVar19;
code_r0x82b61214:
    *(undefined4 *)((iVar21 + 4) * 4 + iVar24) = uVar18;
    if ((*puVar12 & 1) == 0) {
      uVar19 = *puVar13 & 0xfffffffe;
      iVar24 = uVar19 - 4;
      if ((iVar24 == 0) || (*(uint *)(uVar19 + 8) < *(int *)(uVar19 + 4) + 1U))
      goto code_r0x82b61248;
    }
    else {
code_r0x82b61248:
      iVar24 = fn_82AD6090(puVar13,1);
    }
    iVar21 = *(int *)(iVar24 + 8);
    *(int *)(iVar24 + 8) = iVar21 + 1;
    *(int *)((iVar21 + 4) * 4 + iVar24) = (int)uVar35;
    fn_82B50B70(puVar14,uVar27);
    uVar27 = 0;
  }
code_r0x82b61280:
  bVar5 = false;
LAB_82b61394:
  uVar10 = fn_82B45330(3,4,5,6,7,8,0xb,9);
  iStack_1a8 = *(int *)(param_1 + 0x240);
  iStack_1a0 = 0;
  uStack_1a4 = -(uint)((*(uint *)(iStack_1a8 + 4) & 1) == 0) & *(uint *)(iStack_1a8 + 4);
  while( true ) {
    if ((uStack_1a4 == 0) || (bVar4 = false, iStack_1a0 == *(int *)(uStack_1a4 + 8))) {
      bVar4 = true;
    }
    iVar21 = iStack_190;
    iVar24 = iStack_198;
    puVar25 = puStack0000001c;
    uVar19 = uVar27;
    if (bVar4) break;
    iVar24 = *(int *)((iStack_1a0 + 2) * 8 + uStack_1a4);
    uVar11 = fn_82B45330(iVar24,0,0,0,0,0,0,0);
    if ((uVar11 & uVar10) == 0) {
      fn_82ABE870(&iStack_1a8);
    }
    else {
      fn_82B4C160();
      if (iVar24 == 0xb) {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -2;
      }
    }
  }
  goto LAB_82b5ee4c;
}

