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
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82AC8750();
extern int fn_82ACACA8();
extern int fn_82ACADA8();
extern int fn_82ACB098();
extern int fn_82ACB1D8();
extern int fn_82ACB390();
extern int fn_82ACBB48();
extern int fn_82ACBBF8();
extern int fn_82ACBC68();
extern int fn_82ACBDA8();
extern int fn_82ACC398();
extern int fn_82ACC410();
extern int fn_82ACC490();
extern int fn_82ACC4F0();
extern int fn_82F691F0();


void fn_82ACCBB8(int param_1,int *param_2,int param_3,longlong param_4,int *param_5)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 *puVar8;
  char cVar10;
  ulonglong uVar7;
  undefined4 *puVar9;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  bool bVar16;
  uint *puVar15;
  bool bVar17;
  int *piVar18;
  uint *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  int *piVar24;
  ulonglong uVar23;
  
  uVar13 = param_2[2];
  uVar20 = 0;
  if ((uVar13 >> 5 & 1) == 0) {
    if (((uint)param_2[5] >> 0xd & 0xf) == 0) {
      if ((uVar13 & 0x3f80) != 0x3c00) {
        for (puVar1 = (uint *)param_2[1]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
          if ((puVar1[4] != 0) && ((*puVar1 & 0xe000000) != 0)) {
            uVar20 = ((ulonglong)(*puVar1 >> 0xc) & 0x1fe0 | (ulonglong)uVar13 & 0x1e) >> 1;
            fn_82ACC4F0(param_4,uVar20);
            fn_82ACB390(param_4,uVar20,0);
            if (uVar20 != 0) goto LAB_82accc20;
            break;
          }
        }
        if ((param_2[2] & 0x1c000U) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
      }
    }
    else {
      uVar20 = (ulonglong)((uint)param_2[5] >> 0xd) & 0xfff;
      fn_82ACBDA8(param_4,uVar20);
    }
  }
  else {
    for (puVar1 = (uint *)param_2[1];
        (puVar1 != (uint *)0x0 && ((puVar1[4] == 0 || ((*puVar1 & 0xe000000) == 0))));
        puVar1 = (uint *)puVar1[2]) {
    }
    param_2[2] = *puVar1 >> 0xc & 0x1e | uVar13 & 0xffffffe1;
  }
LAB_82accc20:
  for (puVar1 = (uint *)*param_2; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
    if (((*puVar1 & 0xe000000) != 0) &&
       (uVar13 = puVar1[3], (*(uint *)(uVar13 + 8) >> 0x17 & 1) != 0)) {
      uVar6 = fn_82AC8750(puVar1);
      fn_82ACC490(param_4,uVar6);
      fn_82ACB390(param_4,uVar6,uVar13);
    }
  }
  puVar1 = (uint *)*param_2;
  puVar8 = (undefined4 *)0x0;
  puVar9 = (undefined4 *)0x0;
  do {
    if (puVar1 == (uint *)0x0) {
      if (puVar8 != (undefined4 *)0x0) {
        fn_82ACB1D8(puVar8 + 1);
        *puVar8 = *(undefined4 *)(param_1 + 0x3d0);
        *(undefined4 **)(param_1 + 0x3d0) = puVar8;
      }
      if (puVar9 != (undefined4 *)0x0) {
        fn_82ACB1D8(puVar9 + 1);
        *puVar9 = *(undefined4 *)(param_1 + 0x3d0);
        *(undefined4 **)(param_1 + 0x3d0) = puVar9;
      }
      return;
    }
    uVar13 = *puVar1;
    uVar4 = uVar13 >> 0x1e & 1;
    if ((uVar4 != 0) || (bVar16 = false, (uVar13 & 0xe000000) != 0)) {
      bVar16 = true;
    }
    if (bVar16) {
      piVar2 = (int *)puVar1[3];
      if ((uVar4 == 0) || (bVar16 = true, (uVar13 & 0xe000000) != 0)) {
        bVar16 = false;
      }
      if (((!bVar16) && ((~(uVar13 >> 0x1e) & 1) != 0)) && ((piVar2[5] & 0x1e000U) == 0)) {
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)fn_82ABE250(param_1,8,0x22);
        }
        else {
          fn_82ACB1D8(puVar8 + 1);
        }
        fn_82ACC410(puVar8,param_4);
        piVar14 = piVar2;
        if ((piVar2[2] & 0x3f80U) == 0x3700) {
          for (iVar3 = *piVar2; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
            piVar24 = *(int **)(iVar3 + 0xc);
            if ((((uint)piVar24[2] >> 0x1a & 1) != 0) && (((uint)piVar24[4] >> 0x19 & 1) == 0)) {
              if ((param_5 == (int *)0x0) ||
                 (uVar13 = *(uint *)(((uint)param_5 & 0xfffffffe) + 0x24), (uVar13 & 1) != 0)) {
                piVar14 = (int *)0x0;
              }
              else {
                piVar14 = (int *)((uVar13 & 0xfffffffe) - 0x28);
              }
              break;
            }
            bVar16 = true;
            piVar18 = piVar24;
            while ((piVar5 = piVar24, piVar18 != piVar14 && (piVar5 = piVar14, piVar18 != param_2)))
            {
              piVar18 = *(int **)(((uint)piVar18 & 0xfffffffe) + 0x28);
              if ((((uint)piVar18 & 1) != 0) || (piVar18 == (int *)0x0)) {
                if (!bVar16) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                bVar16 = false;
                piVar18 = (int *)(-(uint)((*(uint *)(param_3 + 0x1c) & 1) == 0) &
                                 *(uint *)(param_3 + 0x1c));
              }
            }
            piVar14 = piVar5;
          }
        }
        bVar16 = false;
        piVar24 = param_2;
        do {
          uVar13 = *(uint *)(((uint)piVar24 & 0xfffffffe) + 0x24);
          if (((uVar13 & 1) != 0) ||
             (piVar24 = (int *)((uVar13 & 0xfffffffe) - 0x28), piVar24 == (int *)0x0)) {
            if ((bVar16) || (cVar10 = fn_82ACB098(piVar2), cVar10 != '\0')) break;
            bVar16 = true;
            if ((*(uint *)(param_3 + 0x14) & 1) == 0) {
              piVar24 = (int *)((*(uint *)(param_3 + 0x10) & 0xfffffffe) - 0x28);
            }
            else {
              piVar24 = (int *)0x0;
            }
          }
          if (piVar24 == piVar14) break;
          if (((uint)piVar24[2] >> 0x17 & 1) != 0) {
            puVar19 = (uint *)piVar24[1];
            for (puVar15 = puVar19; puVar15 != (uint *)0x0; puVar15 = (uint *)puVar15[2]) {
              if ((*puVar15 & 0xe000000) != 0) {
                bVar17 = true;
                if ((*puVar15 >> 0x1e & 1) != 0) goto LAB_82accf38;
                break;
              }
            }
            bVar17 = false;
LAB_82accf38:
            if (bVar17) {
              for (; (puVar19 != (uint *)0x0 && ((*puVar19 & 0xe000000) == 0));
                  puVar19 = (uint *)puVar19[2]) {
              }
              fn_82ACC490(puVar8,((ulonglong)(*puVar19 >> 0xc) & 0x1fe0 |
                                   (ulonglong)(uint)piVar24[2] & 0x1e) >> 1);
            }
          }
          for (puVar19 = (uint *)*piVar24; puVar19 != (uint *)0x0; puVar19 = (uint *)puVar19[1]) {
            if (((*puVar19 & 0xe000000) != 0) && ((*(uint *)(puVar19[3] + 8) >> 0x17 & 1) != 0)) {
              uVar6 = fn_82AC8750(puVar19);
              fn_82ACC490(puVar8,uVar6);
            }
          }
        } while (piVar24 != param_5);
        if ((param_2[2] & 0x3f80U) == 0x3700) {
          uVar23 = uVar20 & 0xf;
          uVar7 = (ulonglong)((uint)piVar2[2] >> 1) & 0xf;
          uVar21 = 0;
          uVar13 = 0;
          if ((param_2[2] & 0x380000U) != 0) {
            piVar14 = param_2 + 0xb;
            do {
              uVar11 = uVar23 & ~(uVar23 - 1);
              uVar23 = uVar23 - uVar11;
              if ((int *)((uint *)*piVar14)[3] == piVar2) {
                uVar21 = uVar11 | uVar21;
                uVar7 = uVar7 & ~(ulonglong)(uint)(1 << (*(uint *)*piVar14 >> 5 & 3));
              }
              uVar13 = uVar13 + 1;
              piVar14 = piVar14 + 1;
            } while (uVar13 < ((uint)param_2[2] >> 0x13 & 7));
          }
          uVar11 = uVar20 >> 2 & 0x3ffffffc;
          uVar11 = fn_82ACACA8(param_4 + 4,uVar11,uVar11 + 3);
          uVar23 = uVar23 & ~uVar11;
          for (; uVar7 != 0; uVar7 = uVar7 - (uVar7 & ~(uVar7 - 1))) {
            uVar11 = uVar23 & ~(uVar23 - 1);
            uVar23 = uVar23 - uVar11;
            uVar21 = uVar11 | uVar21;
          }
          uVar23 = uVar20 & 0xfffffff0 | uVar21 & 0xffffffff0000000f;
        }
        else {
          uVar23 = 0;
          uVar21 = (ulonglong)((uint)piVar2[2] >> 0xe) & 7;
          for (puVar19 = (uint *)*piVar2; puVar19 != (uint *)0x0; puVar19 = (uint *)puVar19[1]) {
            if (((*puVar19 & 0xe000000) != 0) && ((*(uint *)(puVar19[3] + 8) >> 0x17 & 1) != 0)) {
              uVar7 = fn_82AC8750(puVar19);
              uVar11 = (uVar7 & 0xffffffff) >> 2 & 0x3ffffffc;
              uVar11 = fn_82ACACA8(puVar8 + 1,uVar11,uVar11 + 3);
              uVar23 = uVar7 & ~uVar11 & 0xf | uVar23;
            }
          }
          if ((uVar23 != 0) && (uVar21 <= (((0x8da691691448U >> uVar23) >> uVar23) >> uVar23 & 7)))
          {
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)fn_82ABE250(param_1,8,0x22);
            }
            else {
              fn_82ACB1D8(puVar9 + 1);
            }
            fn_82ACC398(puVar9,param_1);
            if ((~(uint)puVar8[1] & 1) == 0) {
              lVar12 = 0x1f;
            }
            else {
              lVar12 = ((ulonglong)*(uint *)puVar8[1] & 0x7ffffff) * 0x20 + -1;
            }
            puVar22 = puVar9 + 1;
            fn_82ACBB48(puVar22,lVar12);
            piVar14 = (int *)puVar9[1];
            if ((~(uint)piVar14 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(piVar14 + 1,0xff,*piVar14 << 2);
            }
            *puVar22 = 0xffffffff;
            for (puVar19 = (uint *)*piVar2; puVar19 != (uint *)0x0; puVar19 = (uint *)puVar19[1]) {
              if (((*puVar19 & 0xe000000) != 0) && ((*(uint *)(puVar19[3] + 8) >> 0x17 & 1) != 0)) {
                uVar7 = fn_82AC8750(puVar19);
                uVar11 = (uVar7 & 0xffffffff) >> 2 & 0x3ffffffc;
                uVar23 = fn_82ACACA8(puVar8 + 1,uVar11,uVar11 + 3);
                uVar11 = fn_82ACACA8(puVar22,uVar11,uVar11 + 3);
                uVar23 = uVar11 & ~uVar23 & uVar7 & 0xf;
                if (uVar23 != 0) {
                  uVar7 = (uVar7 & 0xfffffff0) >> 2;
                  fn_82ACADA8(puVar22,uVar7,uVar7 + 3,uVar23);
                }
              }
            }
            uVar23 = fn_82ACBC68(puVar9,uVar21,0);
            if ((int)uVar23 != -1) goto LAB_82acd28c;
          }
          uVar23 = fn_82ACBC68(puVar8,uVar21,1);
          fn_82ACBB48(param_4 + 4,(((uVar23 & 0xffffffff) >> 4) + 1) * 4);
        }
LAB_82acd28c:
        fn_82ACBBF8(param_4,uVar23);
        fn_82ACB390(param_4,uVar23,piVar2);
        piVar2[5] = (uint)((uVar23 & 0xffffffff) << 0xd) & 0x1ffe000 | piVar2[5] & 0xfe001fffU;
      }
    }
    puVar1 = (uint *)puVar1[1];
  } while( true );
}

