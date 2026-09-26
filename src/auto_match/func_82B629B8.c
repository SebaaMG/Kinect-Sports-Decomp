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
extern unsigned int *auStack_110;
extern unsigned int *auStack_e0;
extern int fn_82636E10();
extern int fn_82930A78();
extern int fn_82931F90();
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AC6560();
extern int fn_82AE60E8();
extern int fn_82B46770();
extern int fn_82B467D8();
extern int fn_82B46830();
extern int fn_82B46928();
extern int fn_82B46D58();
extern int fn_82B4A2A0();
extern int fn_82B4A7C0();
extern int fn_82B4A978();
extern int fn_82B4AA78();
extern int fn_82B5EA40();
extern int fn_82B61D78();
extern int fn_82B8AC10();
extern int fn_82B8F328();


void fn_82B629B8(int param_1,undefined8 param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  bool bVar5;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined8 uVar6;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined2 *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined4 auStack_110 [12];
  undefined4 auStack_e0 [56];
  
  puVar7 = (uint *)(**(code **)(*param_3 + 0xc))(param_3);
  if ((*puVar7 & 0xffffff00) != 0x102a1100) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  uVar2 = puVar7[6];
  iVar11 = 0;
  if (puVar7[4] != 0) {
    iVar11 = (int)puVar7 + puVar7[4] + 4;
  }
  if ((*puVar7 & 1) == 1) {
    *(undefined4 *)(param_1 + 0x30) = 0xfffe0000;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0xffff0000;
  }
  if ((*(uint *)((int)puVar7 + uVar2 + 0xc) & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdac,0xffffffff820d8c84);
  }
  if ((*(uint *)((int)puVar7 + uVar2 + 8) & 0x40000) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdac,0xffffffff820d8c78);
  }
  puVar8 = (undefined4 *)fn_82AC6560(param_1,0x50,0xb);
  fn_82931F90(auStack_e0);
  puVar8[1] = 10;
  puVar16 = puVar8 + 0xc;
  *puVar8 = auStack_e0[0];
  uVar9 = fn_82B46D58(param_1,param_2);
  puVar8[0xc] = uVar9;
  uVar9 = fn_82AC6560(param_1,0x2c,0xd);
  *(undefined4 *)(param_1 + 8) = uVar9;
  fn_82930A78(auStack_110);
  **(undefined4 **)(param_1 + 8) = auStack_110[0];
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 4;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x1c) = 0x2d7;
  uVar6 = fn_82B46770(param_1,2,0xffffffff820d8c68,puVar8);
  uVar9 = fn_82B467D8(param_1,uVar6,0,0xffffffff8202df2c);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x10) = 0x2d7;
  *(undefined4 *)(param_1 + 0x14) = 0x2d7;
  uVar9 = fn_82AE60E8(param_1,0x7198,0);
  *(undefined4 *)(param_1 + 0xc) = uVar9;
  uVar6 = (**(code **)(*param_3 + 0xc))(param_3);
  iVar10 = fn_82636E10(uVar6,param_1,0xffffffff82b4b7a8);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  if ((iVar11 != 0) && (uVar22 = *(uint *)(iVar11 + 0xc), uVar22 != 0)) {
    uVar17 = 0;
    if (uVar22 != 0) {
      puVar19 = (undefined2 *)(*(int *)(iVar11 + 0x10) + iVar11 + -0xe);
      do {
        uVar1 = puVar19[9];
        uVar15 = (ulonglong)(ushort)puVar19[10];
        puVar4 = (ushort *)(*(int *)(puVar19 + 0xd) + iVar11);
        if (uVar1 == 0) {
          if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
            uVar15 = uVar15 + 0x80;
          }
          lVar12 = uVar15 + 0x160;
          uVar6 = 0;
          uVar18 = 0x62;
        }
        else if (uVar1 == 1) {
          if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
            uVar15 = uVar15 + 0x10;
          }
          lVar12 = uVar15 + 0x140;
          uVar6 = 5;
          uVar18 = 0x69;
        }
        else if (uVar1 < 3) {
          lVar12 = uVar15 + 0x40;
          uVar6 = 0xc;
          uVar18 = 99;
        }
        else {
          if (uVar1 != 3) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          lVar12 = uVar15 + 0x2b0;
          uVar6 = 0x21;
          uVar18 = 0x73;
        }
        iVar10 = fn_82B4A7C0(param_1,*(int *)(puVar19 + 7) + iVar11,lVar12,puVar19[0xb],uVar6,
                               (longlong)(int)(uint)puVar4[4] * (longlong)(int)(uint)puVar4[2],
                               puVar4[3],(ulonglong)*(uint *)(param_1 + 8) + 0x28);
        iVar10 = *(int *)(iVar10 + 0x18);
        if ((iVar10 == 0) || (*(int *)(iVar10 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        if (*(int *)(puVar19 + 0xf) != 0) {
          uVar9 = *(undefined4 *)(iVar10 + 0x14);
          uVar6 = fn_82B46830(param_1,*(int *)(puVar19 + 0xf) + iVar11,uVar9);
          uVar9 = fn_82B46928(param_1,uVar6,uVar9);
          *(undefined4 *)(iVar10 + 0x38) = uVar9;
        }
        iVar3 = *(int *)(iVar10 + 0x30);
        if ((iVar3 == 0) || (*(int *)(iVar3 + 4) != 9)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        uVar1 = *puVar4;
        if (uVar1 == 0) {
          uVar9 = 0;
LAB_82b62d3c:
          *(undefined4 *)(iVar3 + 0x10) = uVar9;
        }
        else if (uVar1 == 1) {
          *(undefined4 *)(iVar3 + 0x10) = 1;
        }
        else if (uVar1 < 3) {
          *(undefined4 *)(iVar3 + 0x10) = 2;
        }
        else if (uVar1 == 3) {
          *(undefined4 *)(iVar3 + 0x10) = 2;
          *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) & 0xfffff3ff | 0x800;
        }
        else if (uVar1 < 5) {
          uVar9 = 3;
          goto LAB_82b62d3c;
        }
        puVar19 = puVar19 + 10;
        uVar6 = fn_82B4A2A0(param_1,uVar18,*puVar19);
        uVar9 = fn_82B467D8(param_1,uVar6,0,0xffffffff820d2998);
        uVar17 = uVar17 + 1;
        *(undefined4 *)(iVar10 + 0x40) = uVar9;
      } while (uVar17 < uVar22);
    }
  }
  uVar22 = *(uint *)((int)puVar7 + uVar2 + 8);
  uVar15 = (ulonglong)(uVar22 >> 8);
  if ((*(uint *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000) {
    uVar15 = CONCAT44(uVar22,uVar22);
  }
  uVar21 = 0;
  do {
    fn_82B4A7C0(param_1,0,uVar21,1,0xc,1,4,puVar16);
    uVar21 = uVar21 + 1;
  } while ((uVar21 & 0xffffffff) <= (uVar15 & 0x3f));
  fn_82B4A7C0(param_1,0,0x2d3,1,0xc,1,1,puVar16);
  if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
    uVar15 = 0;
    uVar22 = *(uint *)((int)puVar7 + uVar2 + 0x14) >> 5;
    if ((uVar22 & 0x1f) != 0) {
      puVar20 = (uint *)((int)puVar7 + uVar2 + 0x1c);
      do {
        puVar20 = puVar20 + 1;
        fn_82B4A978(param_1,0xffffffff820d8c44,uVar15,*puVar20 >> 0xc & 0xf,*puVar20 & 0xff,
                      puVar8 + 0xb,puVar16);
        uVar15 = uVar15 + 1;
      } while ((uVar15 & 0xffffffff) < ((ulonglong)uVar22 & 0x1f));
    }
  }
  if ((*(uint *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000) {
    uVar22 = *(uint *)((int)puVar7 + uVar2 + 0x18);
    uVar15 = 0;
    if (uVar22 != 0) {
      puVar20 = (uint *)((int)puVar7 + uVar2 + 0x20);
      do {
        puVar20 = puVar20 + 1;
        fn_82B4A978(param_1,0xffffffff820d8c2c,uVar15,*puVar20 >> 9 & 0xf,*puVar20 & 0xff,
                      puVar8 + 0xb,puVar16);
        uVar15 = uVar15 + 1;
      } while ((uVar15 & 0xffffffff) < (ulonglong)uVar22);
    }
  }
  if ((*(uint *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000) {
    uVar15 = 0;
    uVar22 = *(uint *)((int)puVar7 + uVar2 + 0x14) >> 5;
    if ((uVar22 & 0x1f) != 0) {
      puVar20 = (uint *)((int)puVar7 +
                        (*(int *)((int)puVar7 + uVar2 + 0x1c) + *(int *)((int)puVar7 + uVar2 + 0x18)
                        + 9) * 4 + uVar2 + -4);
      do {
        puVar20 = puVar20 + 1;
        uVar17 = *puVar20;
        fn_82B4AA78(param_1,0xffffffff820d8c08,uVar15,uVar17 >> 0xc & 0xf,uVar17 >> 4 & 0xf,
                      uVar17 & 0xf,puVar8 + 0xb);
        uVar15 = uVar15 + 1;
      } while ((uVar15 & 0xffffffff) < ((ulonglong)uVar22 & 0x1f));
    }
  }
  if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
    for (uVar22 = *(uint *)((int)puVar7 + uVar2 + 0x1c) & 0xf; uVar22 != 0;
        uVar22 = uVar22 - (uVar22 & ~(uVar22 - 1))) {
      lVar12 = 0x1f - LZCOUNT(uVar22 & ~(uVar22 - 1));
      fn_82B4AA78(param_1,0xffffffff820d8bec,lVar12,0xf,10,lVar12,puVar8 + 0xb);
    }
    if ((*(uint *)((int)puVar7 + uVar2 + 0x1c) & 0x10) == 0) goto LAB_82b62ff8;
    uVar14 = 0xc;
    uVar6 = 0xffffffff820d8bd0;
    uVar13 = 1;
    uVar18 = 0x3d;
  }
  else {
    uVar14 = 0;
    uVar6 = 0xffffffff820d8bb8;
    uVar13 = 0xf;
    uVar18 = 0x3e;
  }
  fn_82B4AA78(param_1,uVar6,uVar18,uVar13,uVar14,0,puVar8 + 0xb);
LAB_82b62ff8:
  uVar6 = fn_82B61D78(param_1,*(undefined4 *)(param_1 + 8),puVar8);
  fn_82B5EA40(param_1,uVar6,0);
  uVar2 = *(uint *)(param_1 + 4);
  do {
    if (((uVar2 & 1) != 0) || (uVar2 == 0)) {
      for (uVar2 = *(uint *)(param_1 + 4); ((uVar2 & 1) == 0 && (uVar2 != 0));
          uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 4)) {
        uVar22 = *(uint *)(uVar2 + 0x1c);
        if (((uVar22 & 1) == 0) && ((uVar22 != 0 && ((*(uint *)(uVar22 + 8) & 0x3f80) == 0x3f00))))
        {
          fn_82B8AC10(param_1,uVar22,0,1);
        }
      }
      return;
    }
    if (((*(uint *)(uVar2 + 0x24) & 1) == 0) &&
       (uVar22 = *(uint *)(uVar2 + 0x20) & 0xfffffffe, uVar22 != 0x28)) {
      uVar17 = *(uint *)(uVar22 - 0x20) >> 7 & 0x7f;
      if (((((uVar17 == 0x56) || (uVar17 == 0x57)) || (uVar17 == 0x59)) ||
          ((uVar17 == 0x5a || (uVar17 == 0x54)))) || (bVar5 = false, uVar17 == 0x55)) {
        bVar5 = true;
      }
      if (bVar5) {
        uVar17 = *(uint *)(uVar22 - 0x20);
        iVar11 = fn_82ABDD90(param_1,uVar17 >> 7 & 0x7f,uVar17 >> 0x13 & 7,uVar17 >> 0xe & 7);
        uVar17 = *(uint *)(param_1 + 4);
        puVar7 = (uint *)(iVar11 + (uVar22 - 0x38));
        if (((uVar17 & 1) != 0) || (uVar17 == 0)) {
LAB_82b631fc:
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        do {
          uVar22 = *(uint *)(uVar17 + 0x1c);
          if (((uVar22 & 1) == 0) &&
             (((uVar22 != 0 && ((*(uint *)(uVar22 + 8) & 0x3f80) == 0x3f00)) &&
              ((*puVar7 & 0xfffffffc) == *(uint *)(uVar22 + 0x10))))) break;
          uVar17 = *(uint *)((uVar17 & 0xfffffffe) + 4);
          if ((uVar17 & 1) != 0) goto LAB_82b631fc;
        } while (uVar17 != 0);
        if (uVar17 == 0) goto LAB_82b631fc;
        for (puVar20 = *(uint **)(uVar2 + 0xc); puVar20 != (uint *)0x0; puVar20 = (uint *)puVar20[2]
            ) {
          if (uVar17 == *puVar20) {
            bVar5 = true;
            goto LAB_82b63154;
          }
        }
        bVar5 = false;
LAB_82b63154:
        if (!bVar5) {
          fn_82B8F328(uVar2,uVar17,param_1);
        }
        *puVar7 = uVar17;
      }
    }
    uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 4);
  } while( true );
}

