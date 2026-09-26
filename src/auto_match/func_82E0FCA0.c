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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_d4;
extern int fn_82BA02A8();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82CEAC20();
extern int fn_82CFBBF0();
extern int fn_82D003F0();
extern int fn_82D00450();
extern int fn_82E0EC10();
extern int fn_82E0F3A0();
extern int fn_82E0F620();
extern int fn_82E0F818();
extern int fn_82E12520();
extern int fn_82E12770();
extern int fn_82E12850();
extern unsigned int iStack_100;
extern unsigned int iStack_10c;
extern unsigned int iStack_120;
extern unsigned int iStack_e0;
extern unsigned int iStack_f0;
extern unsigned int lbl_8214AF58;
extern unsigned int uStack_108;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_82E0FCA0(int *param_1,int *param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar4;
  undefined8 uVar2;
  int iVar5;
  undefined8 uVar3;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  int iStack_120;
  uint uStack_11c;
  uint uStack_118;
  int *piStack_110;
  int iStack_10c;
  uint uStack_108;
  int iStack_100;
  uint uStack_fc;
  uint uStack_f8;
  int iStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  int iStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint auStack_d4 [5];
  undefined **appuStack_c0 [2];
  undefined1 auStack_b8 [16];
  int *piStack_a8;
  undefined4 *puStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined1 auStack_90 [144];
  
  fn_82E12770(appuStack_c0,*param_3,param_4);
  for (puVar11 = (undefined4 *)param_3[3]; puVar11 != (undefined4 *)0x0;
      puVar11 = (undefined4 *)puVar11[3]) {
    fn_82E12520(appuStack_c0,*puVar11);
  }
  piStack_110 = (int *)0x0;
  iStack_10c = 0;
  uStack_108 = 0x80000000;
  fn_82E12850(auStack_90,param_3,param_1,&piStack_110);
  iStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0x80000000;
  iStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0x80000000;
  puStack_a0 = (undefined4 *)0x0;
  uStack_98 = 0x80000000;
  iVar4 = fn_82CE5410();
  uVar10 = 0x80000000;
  puVar11 = (undefined4 *)0x0;
  if (0 < param_1[1]) {
    auStack_d4[0] = param_1[1];
    puStack_a0 = (undefined4 *)
                 (**(code **)(**(int **)(iVar4 + 0xc) + 0xc))(*(int **)(iVar4 + 0xc),auStack_d4,8);
    uStack_98 = auStack_d4[0];
    uVar10 = auStack_d4[0];
    puVar11 = puStack_a0;
  }
  uStack_9c = param_1[1];
  uVar8 = (ulonglong)uStack_9c;
  iVar4 = *param_1;
  if (0 < (int)uStack_9c) {
    puVar17 = puVar11;
    do {
      uVar8 = uVar8 - 1;
      *puVar17 = *(undefined4 *)((iVar4 - (int)puVar11) + (int)puVar17);
      puVar17[1] = *(undefined4 *)((int)puVar17 + (iVar4 - (int)puVar11) + 4);
      puVar17 = puVar17 + 2;
    } while (uVar8 != 0);
  }
  iVar4 = 0;
  iStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0x80000000;
  iStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0x80000000;
  if (0 < iStack_10c) {
    iVar12 = 0;
    do {
      iVar13 = *(int *)((int)piStack_110 + iVar12);
      iVar6 = iVar13 * 8;
      uVar2 = fn_82CEAC20(*(undefined4 *)(*param_1 + iVar6 + 4));
      iVar5 = fn_82D00450(auStack_90,uVar2,0);
      uVar3 = fn_82D00450(auStack_b8,uVar2,uVar2);
      if (piStack_a8 == (int *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(*piStack_a8 + 0x10))(piStack_a8,uVar3);
      }
      if ((*(uint *)(iVar5 + 8) & 0x10) == 0) {
        *(int *)(*param_1 + iVar6 + 4) = (int)uVar8;
        if ((uVar8 & 0xffffffff) == 0) {
          iVar4 = fn_82CE5410();
          uStack_ec = 0;
          if ((uStack_e8 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
                      (*(int **)(iVar4 + 0xc),iStack_f0,uStack_e8 & 0x3fffffff,4);
          }
          iStack_f0 = 0;
          uStack_e8 = 0x80000000;
          iVar4 = fn_82CE5410();
          uStack_dc = 0;
          if ((uStack_d8 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
                      (*(int **)(iVar4 + 0xc),iStack_e0,uStack_d8 & 0x3fffffff,4);
          }
          iStack_e0 = 0;
          uStack_d8 = 0x80000000;
          iVar4 = fn_82CE5410();
          if ((uVar10 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
                      (*(int **)(iVar4 + 0xc),puVar11,uVar10 & 0x3fffffff,8);
          }
          iVar4 = fn_82CE5410();
          uStack_fc = 0;
          if ((uStack_f8 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
                      (*(int **)(iVar4 + 0xc),iStack_100,uStack_f8 & 0x3fffffff,4);
          }
          iStack_100 = 0;
          uStack_f8 = 0x80000000;
          iVar4 = fn_82CE5410();
          uStack_11c = 0;
          if ((uStack_118 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
                      (*(int **)(iVar4 + 0xc),iStack_120,uStack_118 & 0x3fffffff,4);
          }
          iStack_120 = 0;
          uStack_118 = 0x80000000;
          fn_82D003F0(auStack_90);
          iVar4 = fn_82CE5410();
          iStack_10c = 0;
          if ((uStack_108 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
                      (*(int **)(iVar4 + 0xc),piStack_110,uStack_108 & 0x3fffffff,4);
          }
          piStack_110 = (int *)0x0;
          uStack_108 = 0x80000000;
          appuStack_c0[0] = &lbl_8214AF58;
          if (piStack_a8 != (int *)0x0) {
            fn_82CE4118();
          }
          fn_82D003F0(auStack_b8);
          return 1;
        }
        uVar1 = *(uint *)(iVar5 + 8);
        if ((uVar1 & 2) == 0) {
          if ((uVar1 & 8) == 0) {
            if ((uVar1 & 4) != 0) {
              fn_82E0EC10(puVar11[iVar13 * 2],puVar11[iVar13 * 2 + 1],uVar8);
              (**(code **)(*param_2 + 0x20))(param_2,puVar11[iVar13 * 2]);
              iVar6 = *param_2;
              uVar3 = fn_82CEAC20(uVar8);
              (**(code **)(iVar6 + 0x1c))(param_2,puVar11[iVar13 * 2],uVar3);
            }
          }
          else {
            iVar6 = fn_82CE5410();
            if (uStack_11c == (uStack_118 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(undefined4 *)(iVar6 + 0xc),&iStack_120,4);
            }
            *(int *)(uStack_11c * 4 + iStack_120) = iVar13;
            uStack_11c = uStack_11c + 1;
          }
        }
        if ((*(uint *)(iVar5 + 8) & 0x20) != 0) {
          iVar6 = fn_82CE5410();
          if (uStack_dc == (uStack_d8 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar6 + 0xc),&iStack_e0,4);
          }
          *(int *)(uStack_dc * 4 + iStack_e0) = iVar13;
          uStack_dc = uStack_dc + 1;
        }
        if ((*(uint *)(iVar5 + 8) & 0x40) != 0) {
          iVar6 = fn_82CE5410();
          if (uStack_ec == (uStack_e8 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar6 + 0xc),&iStack_f0,4);
          }
          *(int *)(uStack_ec * 4 + iStack_f0) = iVar13;
          uStack_ec = uStack_ec + 1;
        }
        uVar3 = fn_82CEAC20(uVar8);
        iVar6 = fn_82CFBBF0(uVar3,uVar2);
        if (iVar6 != 0) {
          (**(code **)(*param_2 + 0x20))(param_2,puVar11[iVar13 * 2]);
          iVar6 = *param_2;
          uVar2 = fn_82CEAC20(uVar8);
          (**(code **)(iVar6 + 0x1c))(param_2,puVar11[iVar13 * 2],uVar2);
        }
      }
      else {
        (**(code **)(*param_2 + 0x20))(param_2,*(undefined4 *)(*param_1 + iVar6));
        iVar6 = fn_82CE5410();
        if (uStack_fc == (uStack_f8 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar6 + 0xc),&iStack_100,4);
        }
        *(int *)(uStack_fc * 4 + iStack_100) = iVar13;
        uStack_fc = uStack_fc + 1;
      }
      iVar4 = iVar4 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar4 < iStack_10c);
  }
  fn_82E0F818(&puStack_a0,param_1,&iStack_120,param_2);
  auStack_d4[1] = 0;
  auStack_d4[2] = 0;
  auStack_d4[3] = 0xffffffff;
  iVar4 = fn_82CE5410();
  fn_82CEAB00(auStack_d4 + 1,*(undefined4 *)(iVar4 + 0x10),0);
  iVar4 = 0;
  if (0 < (int)uStack_dc) {
    iVar12 = 0;
    do {
      puVar17 = (undefined4 *)(*(int *)(iStack_e0 + iVar12) * 8 + *param_1);
      fn_82E0F3A0(param_2,*puVar17,puVar17[1],appuStack_c0,1,auStack_d4 + 1);
      iVar4 = iVar4 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar4 < (int)uStack_dc);
  }
  iVar4 = 0;
  if (0 < (int)uStack_ec) {
    iVar12 = 0;
    do {
      puVar17 = (undefined4 *)(*(int *)(iStack_f0 + iVar12) * 8 + *param_1);
      fn_82E0F620(param_2,*puVar17,puVar17[1],appuStack_c0,1,auStack_d4 + 1);
      iVar4 = iVar4 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar4 < (int)uStack_ec);
  }
  iVar4 = fn_82CE5410();
  fn_82CEA4B8(auStack_d4 + 1,*(undefined4 *)(iVar4 + 0x10));
  fn_82BA02A8(auStack_d4 + 1);
  iVar4 = fn_82CE5410();
  uStack_ec = 0;
  if ((uStack_e8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
              (*(int **)(iVar4 + 0xc),iStack_f0,uStack_e8 & 0x3fffffff,4);
  }
  iStack_f0 = 0;
  uStack_e8 = 0x80000000;
  iVar4 = fn_82CE5410();
  uStack_dc = 0;
  if ((uStack_d8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
              (*(int **)(iVar4 + 0xc),iStack_e0,uStack_d8 & 0x3fffffff,4);
  }
  iVar13 = 0;
  iVar12 = param_1[1] + 1;
  iStack_e0 = 0;
  uStack_d8 = 0x80000000;
  iVar4 = iVar12;
  if (iStack_10c != 0) {
    iVar4 = *piStack_110;
  }
  iVar5 = 0;
  iVar6 = iStack_10c;
  piVar9 = piStack_110;
  if (0 < param_1[1]) {
    iVar14 = 0;
    iVar15 = 0;
    do {
      if (iVar5 < iVar4) {
        puVar17 = (undefined4 *)(*param_1 + iVar15);
        uVar2 = fn_82CEAC20(puVar17[1]);
        uVar8 = fn_82D00450(auStack_b8,uVar2,0);
        if ((uVar8 & 0xffffffff) != 0) {
          (**(code **)(*param_2 + 0x20))(param_2,*puVar17);
          (**(code **)(*param_2 + 0x1c))(param_2,*puVar17,uVar8);
        }
        uVar2 = fn_82CEAC20(puVar17[1]);
        uVar2 = fn_82D00450(auStack_b8,uVar2,uVar2);
        if (piStack_a8 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (**(code **)(*piStack_a8 + 0x10))(piStack_a8,uVar2);
        }
        puVar17[1] = iVar7;
        iVar6 = iStack_10c;
        piVar9 = piStack_110;
        if (iVar7 == 0) {
          iVar4 = fn_82CE5410();
          if ((uVar10 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
                      (*(int **)(iVar4 + 0xc),puVar11,uVar10 & 0x3fffffff,8);
          }
          iVar4 = fn_82CE5410();
          uStack_fc = 0;
          if ((uStack_f8 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
                      (*(int **)(iVar4 + 0xc),iStack_100,uStack_f8 & 0x3fffffff,4);
          }
          iStack_100 = 0;
          uStack_f8 = 0x80000000;
          iVar4 = fn_82CE5410();
          uStack_11c = 0;
          if ((uStack_118 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
                      (*(int **)(iVar4 + 0xc),iStack_120,uStack_118 & 0x3fffffff,4);
          }
          iStack_120 = 0;
          uStack_118 = 0x80000000;
          fn_82D003F0(auStack_90);
          iVar4 = fn_82CE5410();
          iStack_10c = 0;
          if ((uStack_108 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
                      (*(int **)(iVar4 + 0xc),piStack_110,uStack_108 & 0x3fffffff,4);
          }
          piStack_110 = (int *)0x0;
          uStack_108 = 0x80000000;
          appuStack_c0[0] = &lbl_8214AF58;
          if (piStack_a8 != (int *)0x0) {
            fn_82CE4118();
          }
          fn_82D003F0(auStack_b8);
          return 1;
        }
      }
      else if (iVar5 == iVar4) {
        iVar13 = iVar13 + 1;
        iVar14 = iVar14 + 4;
        iVar4 = iVar12;
        if (iVar13 < iVar6) {
          iVar4 = *(int *)(iVar14 + (int)piVar9);
        }
      }
      iVar5 = iVar5 + 1;
      iVar15 = iVar15 + 8;
    } while (iVar5 < param_1[1]);
  }
  iVar4 = 0;
  if (0 < iVar6) {
    iVar12 = 0;
    do {
      iVar6 = *(int *)(iVar12 + (int)piVar9);
      iVar13 = *param_1;
      uVar2 = fn_82CEAC20((puVar11 + iVar6 * 2)[1]);
      iVar5 = fn_82D00450(auStack_90,uVar2,0);
      if ((iVar5 != 0) && (*(code **)(iVar5 + 0x10) != (code *)0x0)) {
        (**(code **)(iVar5 + 0x10))(puVar11 + iVar6 * 2,iVar6 * 8 + iVar13,param_2);
      }
      iVar4 = iVar4 + 1;
      iVar12 = iVar12 + 4;
      piVar9 = piStack_110;
    } while (iVar4 < iStack_10c);
  }
  iVar4 = 0;
  if (0 < (int)uStack_11c) {
    iVar12 = 0;
    do {
      puVar17 = (undefined4 *)(*(int *)(iVar12 + iStack_120) * 8 + *param_1);
      (**(code **)(*param_2 + 0x18))
                (param_2,puVar11[*(int *)(iVar12 + iStack_120) * 2],*puVar17,puVar17[1]);
      iVar4 = iVar4 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar4 < (int)uStack_11c);
  }
  uVar8 = (ulonglong)uStack_fc - 1;
  if (-1 < (longlong)uVar8) {
    lVar16 = (uVar8 & 0x3fffffff) << 2;
    do {
      iVar4 = *(int *)((int)lVar16 + iStack_100);
      (**(code **)(*param_2 + 0x18))(param_2,puVar11[iVar4 * 2],0,0);
      iVar12 = param_1[1] + -1;
      param_1[1] = iVar12;
      if (iVar12 != iVar4) {
        puVar17 = (undefined4 *)(iVar4 * 8 + *param_1);
        iVar4 = (iVar12 * 8 + *param_1) - (int)puVar17;
        lVar18 = 2;
        do {
          *puVar17 = *(undefined4 *)(iVar4 + (int)puVar17);
          puVar17 = puVar17 + 1;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      uVar8 = uVar8 - 1;
      lVar16 = lVar16 + -4;
    } while (-1 < (longlong)uVar8);
  }
  iVar4 = fn_82CE5410();
  if ((uVar10 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
              (*(int **)(iVar4 + 0xc),puVar11,uVar10 & 0x3fffffff,8);
  }
  iVar4 = fn_82CE5410();
  uStack_fc = 0;
  if ((uStack_f8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
              (*(int **)(iVar4 + 0xc),iStack_100,uStack_f8 & 0x3fffffff,4);
  }
  iStack_100 = 0;
  uStack_f8 = 0x80000000;
  iVar4 = fn_82CE5410();
  uStack_11c = 0;
  if ((uStack_118 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
              (*(int **)(iVar4 + 0xc),iStack_120,uStack_118 & 0x3fffffff,4);
  }
  iStack_120 = 0;
  uStack_118 = 0x80000000;
  fn_82D003F0(auStack_90);
  iVar4 = fn_82CE5410();
  iStack_10c = 0;
  if ((uStack_108 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
              (*(int **)(iVar4 + 0xc),piStack_110,uStack_108 & 0x3fffffff,4);
  }
  piStack_110 = (int *)0x0;
  uStack_108 = 0x80000000;
  appuStack_c0[0] = &lbl_8214AF58;
  if (piStack_a8 != (int *)0x0) {
    fn_82CE4118();
  }
  fn_82D003F0(auStack_b8);
  return 0;
}

