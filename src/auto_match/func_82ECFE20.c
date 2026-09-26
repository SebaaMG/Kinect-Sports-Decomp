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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_3bc;
extern unsigned int *auStack_3c0;
extern unsigned int *auStack_5c0;
extern unsigned int *auStack_620;
extern unsigned int *auStack_6a0;
extern unsigned int *auStack_720;
extern unsigned int *auStack_d70;
extern unsigned int *auStack_dc0;
extern unsigned int *auStack_eb0;
extern unsigned int *auStack_ed0;
extern int fn_82E9A9A8();
extern int fn_82E9AB68();
extern int fn_82EA8EA0();
extern int fn_82EA94D0();
extern int fn_82EA9D68();
extern int fn_82EC5360();
extern int fn_82EC5C60();
extern int fn_82EC6AE0();
extern int fn_82EC82F8();
extern int fn_82EC8B00();
extern int fn_82EC96A8();
extern int fn_82EC9BC0();
extern int fn_82ED9160();
extern int fn_82EF55A8();
extern int fn_82EF58B8();
extern int fn_82F06BE8();
extern int fn_82F07488();
extern int fn_82F076C8();
extern int fn_82F11938();
extern int fn_82F125F0();
extern int fn_82F28678();
extern int fn_83143EB0();
extern unsigned int *iStack0000001c;
extern unsigned int iStack_e38;
extern unsigned int iStack_e4c;
extern unsigned int iStack_e50;
extern unsigned int iStack_e54;
extern unsigned int iStack_e58;
extern unsigned int iStack_e5c;
extern unsigned int iStack_e60;
extern unsigned int iStack_e64;
extern unsigned int iStack_e68;
extern unsigned int iStack_e6c;
extern unsigned int iStack_e74;
extern unsigned int iStack_e78;
extern unsigned int iStack_e7c;
extern unsigned int iStack_e80;
extern unsigned int *iStack_e84;
extern unsigned int iStack_e88;
extern unsigned int iStack_e8c;
extern unsigned int iStack_e90;
extern unsigned int iStack_e94;
extern unsigned int iStack_e98;
extern unsigned int *iStack_ef4;
extern unsigned int *iStack_ef8;
extern unsigned int *iStack_efc;
extern unsigned int iStack_f18;
extern unsigned int iStack_f28;
extern unsigned int iStack_f30;
extern unsigned int iStack_f34;
extern unsigned int iStack_f38;
extern unsigned int iStack_f48;
extern unsigned int iStack_f4c;
extern unsigned int iStack_f58;
extern unsigned int iStack_f68;
extern unsigned int iStack_f70;
extern unsigned int iStack_f78;
extern unsigned int iStack_f80;
extern unsigned int iStack_f84;
extern unsigned int iStack_f90;
extern unsigned int iStack_f94;
extern unsigned int iStack_f98;
extern unsigned int iStack_fa8;
extern unsigned int iStack_fb4;
extern unsigned int iStack_fb8;
extern unsigned int iStack_fbc;
extern unsigned int iStack_fc0;
extern unsigned int iStack_fc8;
extern unsigned int iStack_fd8;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int stack0x00000000;
extern unsigned int uStack00000024;
extern unsigned int uStack_e34;
extern unsigned int uStack_ee0;
extern unsigned int uStack_ee4;
extern unsigned int uStack_ee8;
extern unsigned int uStack_ef0;
extern unsigned int uStack_f00;
extern unsigned int uStack_f04;
extern unsigned int uStack_f08;
extern unsigned int uStack_f20;
extern unsigned int uStack_f2c;
extern unsigned int uStack_f3c;
extern unsigned int uStack_f40;
extern unsigned int uStack_f44;
extern unsigned int uStack_f50;
extern unsigned int uStack_f54;
extern unsigned int uStack_f5c;
extern unsigned int uStack_f60;
extern unsigned int uStack_f64;
extern unsigned int uStack_f6c;
extern unsigned int uStack_f74;
extern unsigned int uStack_fa2;
extern unsigned int uStack_fac;


void fn_82ECFE20(int param_1,ulonglong param_2,uint param_3,int *param_4,double *param_5,
                  double *param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  short sVar11;
  undefined2 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  int iStack0000001c;
  uint uStack00000024;
  int *piStack0000002c;
  double *pdStack00000034;
  double *pdStack0000003c;
  int iStack_fd8;
  undefined1 *puStack_fd4;
  undefined1 *puStack_fd0;
  undefined1 *puStack_fcc;
  int iStack_fc8;
  undefined1 *puStack_fc4;
  int iStack_fc0;
  int iStack_fbc;
  int iStack_fb8;
  int iStack_fb4;
  uint uStack_fac;
  int iStack_fa8;
  undefined2 uStack_fa2;
  int iStack_f98;
  int iStack_f94;
  int iStack_f90;
  undefined1 *puStack_f8c;
  undefined1 *puStack_f88;
  int iStack_f84;
  int iStack_f80;
  undefined1 *puStack_f7c;
  int iStack_f78;
  uint uStack_f74;
  int iStack_f70;
  undefined4 uStack_f6c;
  int iStack_f68;
  uint uStack_f64;
  undefined4 uStack_f60;
  undefined4 uStack_f5c;
  int iStack_f58;
  undefined4 uStack_f54;
  undefined4 uStack_f50;
  int iStack_f4c;
  int iStack_f48;
  undefined4 uStack_f44;
  undefined4 uStack_f40;
  undefined4 uStack_f3c;
  int iStack_f38;
  int iStack_f34;
  int iStack_f30;
  undefined4 uStack_f2c;
  int iStack_f28;
  undefined4 *puStack_f24;
  undefined4 uStack_f20;
  undefined1 *puStack_f1c;
  int iStack_f18;
  longlong lStack_f10;
  undefined4 uStack_f08;
  undefined4 uStack_f04;
  uint uStack_f00;
  int iStack_efc;
  int iStack_ef8;
  int iStack_ef4;
  undefined4 uStack_ef0;
  undefined1 *puStack_eec;
  undefined4 uStack_ee8;
  undefined4 uStack_ee4;
  undefined4 uStack_ee0;
  undefined1 *puStack_edc;
  undefined1 auStack_ed0 [32];
  undefined4 auStack_eb0 [6];
  int iStack_e98;
  int iStack_e94;
  int iStack_e90;
  int iStack_e8c;
  int iStack_e88;
  int iStack_e84;
  int iStack_e80;
  int iStack_e7c;
  int iStack_e78;
  int iStack_e74;
  undefined4 *puStack_e70;
  int iStack_e6c;
  int iStack_e68;
  int iStack_e64;
  int iStack_e60;
  int iStack_e5c;
  int iStack_e58;
  int iStack_e54;
  int iStack_e50;
  int iStack_e4c;
  int aiStack_e40 [2];
  int iStack_e38;
  undefined4 uStack_e34;
  longlong lStack_e28;
  longlong lStack_e20;
  longlong lStack_e18;
  undefined1 auStack_dc0 [80];
  undefined1 auStack_d70 [1616];
  undefined1 auStack_720 [128];
  undefined1 auStack_6a0 [128];
  undefined1 auStack_620 [96];
  undefined1 auStack_5c0 [512];
  undefined1 auStack_3c0 [4];
  undefined1 auStack_3bc [252];
  undefined1 auStack_2c0 [704];
  
  uVar5 = ZEXT48(&stack0x00000000);
  puStack_edc = auStack_720;
  puVar13 = auStack_5c0;
  puStack_eec = auStack_6a0;
  iStack0000001c = (int)param_2;
  iStack_f84 = *(int *)(param_1 + 0x564) >> 2;
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x2d0);
  iVar1 = iStack_f84 * 8;
  iStack_e80 = *(int *)(param_1 + 0x1abc);
  iStack_f30 = *(uint *)(param_1 + 0x2d0) * iStack0000001c;
  iStack_e94 = *(int *)(param_1 + 0x310);
  iStack_e8c = *(int *)(param_1 + 0x1e88);
  iStack_e50 = *(int *)(param_1 + 0x1a94) + iVar1 + 8;
  iVar6 = *(int *)(param_1 + 0x6d8c);
  puStack_f88 = auStack_620;
  iStack_f48 = 0;
  uStack_f3c = 0;
  iStack_e78 = *(int *)(param_1 + 0x1a98) + iVar1 + 8;
  iVar21 = *(int *)(param_1 + 0x1e54) + iStack_f30 * 0x114;
  if (iVar6 != 0) {
    iVar17 = *(int *)(param_1 + 0x578);
    iStack_e4c = *(int *)(param_1 + 0x1aa4) + iVar1 + 8;
    iStack_e60 = *(int *)(param_1 + 0x18) + iVar17;
    iStack_e88 = *(int *)(param_1 + 0x1c) + iVar17;
    iStack_e90 = *(int *)(param_1 + 0x1ac0);
    iStack_e5c = *(int *)(param_1 + 0x1e80) + iVar17;
    iStack_e68 = *(int *)(param_1 + 0x1ac4);
    iStack_e54 = *(int *)(param_1 + 0x1e84) + iVar17;
    iStack_e7c = *(int *)(param_1 + 0x1aa8) + iVar1 + 8;
    iStack_e64 = *(int *)(param_1 + 0x1ab4) + iVar1 + 8;
    iStack_e74 = *(int *)(param_1 + 0x1ab8) + iVar1 + 8;
  }
  iVar1 = *(int *)(param_1 + 0x89c);
  iStack_ef8 = *(int *)(*(int *)(param_1 + 0x5154) + 0x244);
  if (*(int *)(param_1 + 0x860) == 4) {
    iStack_efc = 1;
    iStack_ef4 = 2;
  }
  else {
    iStack_ef4 = 1;
    iStack_efc = 2;
  }
  dVar22 = lbl_82005730;
  dVar23 = lbl_82005710;
  dVar24 = lbl_82005710;
  uStack00000024 = param_3;
  piStack0000002c = param_4;
  pdStack00000034 = param_5;
  pdStack0000003c = param_6;
  if ((param_2 & 0xffffffff) < (ulonglong)param_3) {
    do {
      iVar19 = (int)param_2;
      uStack_ee4 = 0;
      uStack_f08 = 0;
      puStack_f7c = (undefined1 *)0x0;
      puStack_fd0 = (undefined1 *)0x0;
      iVar17 = iVar19 * iStack_f84 * 4;
      iStack_fd8 = *(int *)(param_1 + 0x564) * iVar19 * 0x10;
      iStack_f70 = iVar17 + iStack_e50;
      uStack_fac = *(int *)(param_1 + 0x31c) * iVar19 * 0x10 + iStack_e80;
      iStack_f68 = iVar17 + iStack_e78;
      iStack_fc8 = iStack_fd8 + iStack_e94;
      iStack_fd8 = iStack_fd8 + iStack_e8c;
      if (iVar6 != 0) {
        uStack_f44 = 0;
        uStack_f40 = 0;
        uStack_f2c = 0;
        uStack_f20 = 0;
        iVar8 = *(int *)(param_1 + 0x568) * iVar19 * 8;
        iVar7 = (*(int *)(param_1 + 0x31c) >> 1) * iVar19 * 8;
        iStack_f4c = iVar17 + iStack_e4c;
        iStack_fb8 = iVar8 + iStack_e60;
        uStack_f64 = iVar7 + iStack_e90;
        uStack_f74 = iVar7 + iStack_e68;
        iStack_f28 = iVar17 + iStack_e7c;
        iStack_f38 = iVar17 + iStack_e64;
        iStack_fc0 = iVar8 + iStack_e88;
        iStack_fbc = iVar8 + iStack_e5c;
        iStack_fb4 = iVar8 + iStack_e54;
        iStack_f18 = iVar17 + iStack_e74;
      }
      uVar18 = 0;
      if (uVar10 != 0) {
        iStack_e98 = -0x10 - (int)((param_2 & 0xffffffff) << 4);
        uStack_f00 = (uint)LZCOUNT(iStack0000001c - iVar19) >> 5;
        do {
          uVar2 = uVar18 & 1;
          iStack_f34 = (int)((((longlong)*(int *)(param_1 + 0x2d0) * (longlong)iVar19 & 0x7fffffffU)
                              * 2 + uVar18 & 0xffffffff) << 1);
          iVar17 = (int)uVar2;
          if (iVar17 == 0) {
            iVar6 = (int)uVar10 + -1;
            if (*(int *)(iVar21 + 0x94) == 0) {
              fn_82ED9160(param_1,puVar13,0,0,uStack_fac,0,0,iVar6 == (int)uVar18);
              if ((*(int *)(param_1 + 0x1c20) != 0) && ((param_2 & 0xffffffff) == 0)) {
                fn_82F06BE8(param_1,puVar13,0,0);
              }
            }
            else {
              uVar10 = ZEXT48(puStack_edc);
              lVar20 = uVar10 + 0x40;
              fn_82ED9160(param_1,puVar13,uVar10,lVar20,uStack_fac,uStack_f64,uStack_f74,
                            iVar6 == (int)uVar18);
              if ((*(int *)(param_1 + 0x1c20) != 0) && ((param_2 & 0xffffffff) == 0)) {
                fn_82F06BE8(param_1,puVar13,uVar10,lVar20);
              }
              uVar15 = ZEXT48(puStack_f88);
              (**(code **)(param_1 + 0x1bb0))(uVar10,8,8,uVar15,8,8);
              (**(code **)(param_1 + 0x1bb0))(lVar20,8,8,uVar15 + 0x20,8,8);
            }
            (**(code **)(param_1 + 0x1bac))(ZEXT48(puVar13),0x10,0x10,auStack_3c0,8,0x10);
            uVar14 = *(uint *)(param_1 + 0x2d0);
            if ((uVar18 + 1 & 0xffffffff) < (ulonglong)uVar14) {
              iVar6 = (int)(uVar18 + 1);
              if (*(int *)(iVar21 + 0x94) == 0) {
                lVar20 = ZEXT48(puVar13) + 0x100;
                fn_82ED9160(param_1,lVar20,0,0,(ulonglong)uStack_fac + 0x10,0,0,
                              uVar14 - 1 == iVar6);
                if ((*(int *)(param_1 + 0x1c20) != 0) && ((param_2 & 0xffffffff) == 0)) {
                  fn_82F06BE8(param_1,lVar20,0,0);
                }
              }
              else {
                uVar10 = ZEXT48(puStack_eec);
                lVar20 = ZEXT48(puVar13) + 0x100;
                lVar16 = uVar10 + 0x40;
                fn_82ED9160(param_1,lVar20,uVar10,lVar16,(ulonglong)uStack_fac + 0x10,
                              (ulonglong)uStack_f64 + 8,(ulonglong)uStack_f74 + 8,
                              uVar14 - 1 == iVar6);
                if ((*(int *)(param_1 + 0x1c20) != 0) && ((param_2 & 0xffffffff) == 0)) {
                  fn_82F06BE8(param_1,lVar20,uVar10,lVar16);
                }
                (**(code **)(param_1 + 0x1bb0))(uVar10,8,8,ZEXT48(puStack_f88) + 4,8,8);
                (**(code **)(param_1 + 0x1bb0))(lVar16,8,8,ZEXT48(puStack_f88) + 0x24,8,8);
              }
              (**(code **)(param_1 + 0x1bac))(lVar20,0x10,0x10,auStack_3bc,8,0x10);
            }
            uVar10 = ZEXT48(puVar13);
            iVar6 = *(int *)(param_1 + 0x6d8c);
            puVar3 = puStack_edc;
          }
          else {
            uVar10 = ZEXT48(puVar13) + 0x100;
            puVar3 = puStack_eec;
          }
          if (iVar6 != 0) {
            puStack_fcc = puVar3 + 0x40;
            puStack_fd4 = puVar3;
          }
          fn_82F07488(param_1,iVar21,uVar18,param_2);
          if (*(int *)(param_1 + 0x6d74) == 0) {
            if (*(int *)(param_1 + 0x6d78) == 0) {
              iVar7 = (**(code **)(param_1 + 0x1be0))(uVar10,0x10);
              iVar8 = (**(code **)(param_1 + 0x1be0))(uVar10 + 8,0x10);
              iVar9 = (**(code **)(param_1 + 0x1be0))(uVar10 + 0x80,0x10);
              iVar6 = (**(code **)(param_1 + 0x1be0))(uVar10 + 0x88,0x10);
              iVar6 = iVar6 + iVar9 + iVar8 + iVar7;
              puStack_fc4 = (undefined1 *)(*(int *)(param_1 + 0x4b1c) * 4 + iVar6);
              iStack_f80 = iVar6;
              if (*(int *)(iVar21 + 0x94) != 0) {
                if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
                  iVar7 = (**(code **)(param_1 + 0x1be0))(puStack_fd4,8);
                  puStack_fc4 = puStack_fc4 + iVar7;
                }
                if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
                  iVar7 = (**(code **)(param_1 + 0x1be0))(puStack_fcc,8);
                  puStack_fc4 = puStack_fc4 + iVar7;
                }
              }
              puStack_fd0 = puStack_fc4 + (int)puStack_fd0;
            }
            else {
              iVar6 = fn_82E9A9A8();
              lStack_e28 = (longlong)iVar6;
              lStack_f10 = (longlong)(int)((double)SQRT((float)lStack_e28) + dVar22);
              puStack_fc4 = (undefined1 *)
                            ((int)((double)SQRT((float)lStack_e28) + dVar22) +
                            *(int *)(param_1 + 0x588) * iStack_ef8 * 3);
              puStack_fd0 = puStack_fc4 + (int)puStack_fd0;
              iVar6 = iStack_f80;
            }
          }
          else {
            fn_82F076C8(param_1,iVar21);
            fn_82F11938(param_1,uVar10,0,*(undefined4 *)(iVar21 + 0x60),iVar21,uStack_f08,
                          uStack_ee4,0);
            puStack_fc4 = (undefined1 *)
                          ((iStack_e6c + iStack_ef8) * *(int *)(iVar21 + 0x70) + iStack_e58);
            puStack_fd0 = puStack_fd0 + *(int *)(iVar21 + 0x70) * iStack_e84 + iStack_e58;
            if (*(int *)(iVar21 + 0x94) != 0) {
              iStack_f80 = 0;
              puStack_f8c = (undefined1 *)0x0;
              if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
                (**(code **)(param_1 + 0x9d8))(puStack_fd4,auStack_2c0,0x40);
                fn_82F125F0(param_1,puStack_fd4,auStack_2c0,8,*(undefined4 *)(iVar21 + 0x60),
                                  iVar21,uStack_f40,uStack_f20);
              }
              if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
                (**(code **)(param_1 + 0x9d8))(puStack_fcc,auStack_2c0,0x40);
                fn_82F125F0(param_1,puStack_fcc,auStack_2c0,8,*(undefined4 *)(iVar21 + 0x60),
                                  iVar21,uStack_f44,uStack_f2c);
              }
              puStack_fc4 = puStack_f8c + (int)puStack_fc4;
              puStack_fd0 = puStack_fd0 + iStack_f80;
              uStack_f20 = uStack_f40;
              uStack_f2c = uStack_f44;
            }
            iVar6 = (**(code **)(param_1 + 0x1be0))(uVar10,0x10);
            iVar7 = (**(code **)(param_1 + 0x1be0))(uVar10 + 8,0x10);
            iVar8 = (**(code **)(param_1 + 0x1be0))(uVar10 + 0x80,0x10);
            iStack_f80 = (**(code **)(param_1 + 0x1be0))(uVar10 + 0x88,0x10);
            iStack_f80 = iStack_f80 + iVar8 + iVar7 + iVar6;
            iVar6 = iStack_f80;
          }
          *(int *)(iVar21 + 0x98) = iVar6;
          fn_82E9AB68(param_1,*(undefined4 *)(iVar21 + 100),iVar6,uVar5 - 0xeb0);
          if (iVar17 == 0) {
            if (*(int *)(iVar21 + 0x94) == 0) {
              uStack_f3c = fn_82EF55A8(param_1,auStack_3c0,8,iStack_f70,iStack_f84,uVar18,
                                             param_2,0);
            }
            else {
              uStack_f3c = fn_82EF58B8();
            }
          }
          fn_83143EB0(param_1,uVar5 - 0xdc0,uVar18,param_2,*(undefined4 *)(param_1 + 0x998),
                            *(undefined4 *)(param_1 + 0x99c),1,0);
          if (*(int *)(param_1 + 0x6d80) == 0) {
            if (*(int *)(iVar21 + 0x94) == 0) {
              lVar20 = (uVar2 + (uVar18 & 1) * 2) * 0x80;
              fn_82EC82F8(param_1,uVar10,iStack_fc8,lVar20 + (uVar5 - 0xa30),uVar5 - 0xdc0,
                                iVar21,uVar18,param_2);
            }
            else {
              lVar20 = (uVar2 + (uVar18 & 1) * 2) * 0x80;
              fn_82EC96A8(param_1,uVar10,puStack_fd4,puStack_fcc,iStack_fc8,iStack_fb8,
                                iStack_fc0,lVar20 + (uVar5 - 0xa30));
            }
          }
          else if (*(int *)(iVar21 + 0x94) == 0) {
            lVar20 = (uVar2 + (uVar18 & 1) * 2) * 0x80;
            fn_82EC8B00(param_1,uVar10,iStack_fc8,lVar20 + (uVar5 - 0xa30),uVar5 - 0xdc0,iVar21,
                            uVar18,param_2);
          }
          else {
            puStack_f8c = auStack_ed0;
            puStack_f24 = auStack_eb0;
            puStack_f1c = auStack_dc0;
            lVar20 = (uVar2 + (uVar18 & 1) * 2) * 0x80;
            fn_82EC9BC0(param_1,uVar10,puStack_fd4,puStack_fcc,iStack_fc8,iStack_fb8,
                              iStack_fc0,lVar20 + (uVar5 - 0xa30));
          }
          if (*(int *)(param_1 + 0x6d74) != 0) {
            iStack_fa8 = *(int *)(iVar21 + 0x6c) * iStack_ef4 + iStack_fa8;
          }
          aiStack_e40[0] = iStack_f90;
          if (iVar17 == 0) {
            if (*(int *)(iVar21 + 0x94) == 0) {
              fn_82EF55A8(param_1,auStack_3c0,8,iStack_f68,iStack_f84,uVar18,param_2,0);
            }
            else {
              fn_82EF58B8();
            }
          }
          fn_83143EB0(param_1,uVar5 - 0xe10,uVar18,param_2,*(undefined4 *)(param_1 + 0x9a0),
                            *(undefined4 *)(param_1 + 0x9a4),1,0);
          if (*(int *)(param_1 + 0x6d80) == 0) {
            if (*(int *)(iVar21 + 0x94) == 0) {
              fn_82EC82F8(param_1,uVar10,iStack_fd8,lVar20 + (uVar5 - 0xd30),uVar5 - 0xe10,
                                iVar21,uVar18,param_2);
            }
            else {
              fn_82EC96A8(param_1,uVar10,puStack_fd4,puStack_fcc,iStack_fd8,iStack_fbc,
                                iStack_fb4,lVar20 + (uVar5 - 0xd30));
            }
          }
          else if (*(int *)(iVar21 + 0x94) == 0) {
            fn_82EC8B00(param_1,uVar10,iStack_fd8,lVar20 + (uVar5 - 0xd30),uVar5 - 0xe10,iVar21,
                            uVar18,param_2);
          }
          else {
            fn_82EC9BC0(param_1,uVar10,puStack_fd4,puStack_fcc,iStack_fd8,iStack_fbc,
                              iStack_fb4,lVar20 + (uVar5 - 0xd30));
          }
          uVar4 = uStack_f50;
          iVar17 = iStack_f58;
          iVar6 = iStack_f90;
          if (*(int *)(param_1 + 0x6d74) != 0) {
            iStack_f94 = *(int *)(iVar21 + 0x6c) * iStack_efc + iStack_f94;
          }
          iVar7 = iStack_f94;
          iStack_e38 = iStack_f58;
          uStack_e34 = uStack_f50;
          if (iStack_fa8 < iStack_f94) {
            uVar14 = *(uint *)(iVar21 + 0x5c) & 0xfffffff | 0x40000000;
            iVar8 = iStack_fa8;
          }
          else {
            uVar14 = *(uint *)(iVar21 + 0x5c) & 0xfffffff | 0x30000000;
            iVar8 = iStack_f94;
          }
          *(uint *)(iVar21 + 0x5c) = uVar14;
          if ((iStack_f90 != 0x4000) && (iStack_f58 != 0x4000)) {
            if (*(int *)(param_1 + 0x6d80) == 0) {
              if (*(int *)(iVar21 + 0x94) == 0) {
                fn_82EA8EA0(param_1,uVar10,iStack_fc8,iStack_fd8,auStack_3c0,iVar21,uVar18,
                                  param_2);
              }
              else {
                lStack_f10 = CONCAT44(&iStack_f98,(((U64)(lStack_f10) >> 32) & 0xFFFFFFFF));
                fn_82EC5360(param_1,uVar10,puStack_fd4,puStack_fcc,iStack_fc8,iStack_fb8,
                                  iStack_fc0,iStack_fd8);
              }
            }
            else if (*(int *)(iVar21 + 0x94) == 0) {
              fn_82EA94D0(param_1,uVar10,iStack_fc8,iStack_fd8,auStack_3c0,iVar21,uVar18,param_2
                             );
            }
            else {
              puStack_f1c = auStack_d70;
              puStack_f24 = &uStack_ef0;
              puStack_f8c = auStack_ed0;
              puStack_e70 = auStack_eb0;
              lStack_f10 = CONCAT44(aiStack_e40,(((U64)(lStack_f10) >> 32) & 0xFFFFFFFF));
              fn_82EC5C60(param_1,uVar10,puStack_fd4,puStack_fcc,iStack_fc8,iStack_fb8,
                                iStack_fc0,iStack_fd8);
              iVar6 = iStack_f90;
            }
            if (*(int *)(param_1 + 0x6d74) != 0) {
              iStack_f98 = *(int *)(iVar21 + 0x6c) * 2 + iStack_f98;
            }
            if (iStack_f98 < iVar8) {
              *(uint *)(iVar21 + 0x5c) = *(uint *)(iVar21 + 0x5c) & 0xfffffff | 0x20000000;
              iVar8 = iStack_f98;
            }
          }
          iVar9 = iStack_f34 * 2;
          sVar11 = *(short *)(iVar9 + *(int *)(param_1 + 0x990));
          if (sVar11 == 0x4000) {
            *(undefined2 *)(iVar9 + *(int *)(param_1 + 0x994)) = 0;
            uVar12 = 0;
            sVar11 = 0;
            *(undefined2 *)(iVar9 + *(int *)(param_1 + 0x990)) = 0;
          }
          else {
            uVar12 = *(undefined2 *)(iVar9 + *(int *)(param_1 + 0x994));
          }
          fn_82F28678(param_1,sVar11,uVar12,iVar1 == 3,uVar18,param_2,uVar5 - 0xf54,
                          uVar5 - 0xf60);
          if (*(int *)(iVar21 + 0x94) == 0) {
            fn_82EA9D68(param_1,uVar10,iStack_fc8,iStack_fd8,auStack_3c0,iVar21,uVar18,param_2
                             );
          }
          else {
            iStack_f34 = uStack_f54;
            lStack_f10 = CONCAT44(iStack_fb4,(((U64)(lStack_f10) >> 32) & 0xFFFFFFFF));
            fn_82EC6AE0(param_1,uVar10,puStack_fd4,puStack_fcc,iStack_fc8,iStack_fb8,
                              iStack_fc0,iStack_fd8);
          }
          if (*(int *)(param_1 + 0x6d74) != 0) {
            iStack_f78 = *(int *)(iVar21 + 0x6c) + iStack_f78;
          }
          if (iStack_f78 < iVar8) {
            *(uint *)(iVar21 + 0x5c) = *(uint *)(iVar21 + 0x5c) & 0xfffffff | 0x10000000;
            iVar8 = iStack_f78;
          }
          if (*(int *)(param_1 + 0x1ac8) == 4) {
            uVar14 = *(uint *)(iVar21 + 0x5c) & 0xfffffff | 0x40000000;
            iVar8 = iStack_fa8;
LAB_82ed1510:
            *(uint *)(iVar21 + 0x5c) = uVar14;
          }
          else if (*(int *)(param_1 + 0x1ac8) == 3) {
            uVar14 = *(uint *)(iVar21 + 0x5c) & 0xfffffff | 0x30000000;
            iVar8 = iVar7;
            goto LAB_82ed1510;
          }
          if ((int)puStack_fc4 < iVar8) {
            puStack_f7c = puStack_fc4 + (int)puStack_f7c;
            iStack_f48 = iStack_f48 + 4;
            *(undefined1 *)(iStack_f30 + *(int *)(param_1 + 0x1a88)) = 4;
            *(undefined4 *)(iVar21 + 0x54) = 3;
            *(uint *)(iVar21 + 0x5c) = *(uint *)(iVar21 + 0x5c) & 0xfffffff | 0x50000000;
          }
          else {
            puStack_f7c = puStack_f7c + iVar8;
            *(undefined1 *)(iStack_f30 + *(int *)(param_1 + 0x1a88)) = 0;
            *(undefined4 *)(iVar21 + 0x54) = 0;
            if (*(int *)(param_1 + 0x6d8c) != 0) {
              uStack_f2c = 0;
              uStack_f20 = 0;
            }
          }
          if (((*(uint *)(iVar21 + 0x5c) & 0xf0000000) != 0x50000000) &&
             ((iVar7 = *(int *)(param_1 + 0x1ac8), iVar7 == 4 || (iVar7 == 3)))) {
            *(uint *)(iVar21 + 0x5c) = iVar7 << 0x1c | *(uint *)(iVar21 + 0x5c) & 0xfffffff;
          }
          iVar7 = *(int *)(iVar21 + 0x5c) >> 0x1c;
          if (iVar7 == 4) {
            iVar17 = iStack_f30 * 2;
            *(short *)(*(int *)(param_1 + 0x998) + iVar17) = (short)iVar6;
            *(undefined2 *)(iVar17 + *(int *)(param_1 + 0x99c)) = uStack_fa2;
            *(short *)(iVar17 + *(int *)(param_1 + 0x9a0)) = (short)uStack_f6c;
            *(short *)(*(int *)(param_1 + 0x9a4) + iVar17) = (short)uStack_f5c;
          }
          else if (iVar7 == 3) {
            iVar6 = iStack_f30 * 2;
            *(short *)(iVar6 + *(int *)(param_1 + 0x9a0)) = (short)iVar17;
            *(short *)(*(int *)(param_1 + 0x9a4) + iVar6) = (short)uVar4;
            *(short *)(*(int *)(param_1 + 0x998) + iVar6) = (short)uStack_f54;
            *(short *)(iVar6 + *(int *)(param_1 + 0x99c)) = (short)uStack_f60;
          }
          else if (iVar7 == 2) {
            iVar7 = iStack_f30 * 2;
            if (*(int *)(param_1 + 0x6d80) == 0) {
              *(short *)(*(int *)(param_1 + 0x998) + iVar7) = (short)iVar6;
              *(undefined2 *)(iVar7 + *(int *)(param_1 + 0x99c)) = uStack_fa2;
              *(short *)(iVar7 + *(int *)(param_1 + 0x9a0)) = (short)iVar17;
              *(short *)(*(int *)(param_1 + 0x9a4) + iVar7) = (short)uVar4;
            }
            else {
              *(short *)(*(int *)(param_1 + 0x998) + iVar7) = (short)uStack_ee8;
              *(short *)(iVar7 + *(int *)(param_1 + 0x99c)) = (short)uStack_ef0;
              *(short *)(iVar7 + *(int *)(param_1 + 0x9a0)) = (short)uStack_ee0;
              *(short *)(*(int *)(param_1 + 0x9a4) + iVar7) = (short)uStack_f04;
            }
          }
          else if (iVar7 == 1) {
            iVar6 = iStack_f30 * 2;
            *(short *)(*(int *)(param_1 + 0x998) + iVar6) = (short)uStack_f54;
            *(short *)(iVar6 + *(int *)(param_1 + 0x99c)) = (short)uStack_f60;
            *(short *)(iVar6 + *(int *)(param_1 + 0x9a0)) = (short)uStack_f6c;
            *(short *)(*(int *)(param_1 + 0x9a4) + iVar6) = (short)uStack_f5c;
          }
          else if (iVar7 == 5) {
            iVar6 = iStack_f30 * 2;
            *(undefined2 *)(iVar6 + *(int *)(param_1 + 0x9a0)) = 0x4000;
            *(undefined2 *)(*(int *)(param_1 + 0x998) + iVar6) = 0x4000;
            *(undefined2 *)(*(int *)(param_1 + 0x9a4) + iVar6) = 0x4000;
            *(undefined2 *)(iVar6 + *(int *)(param_1 + 0x99c)) = 0x4000;
          }
          iStack_fc8 = iStack_fc8 + 0x10;
          iVar6 = *(int *)(param_1 + 0x6d8c);
          iStack_fd8 = iStack_fd8 + 0x10;
          uStack_fac = uStack_fac + 0x10;
          if (iVar6 != 0) {
            uStack_f64 = uStack_f64 + 8;
            iStack_fb8 = iStack_fb8 + 8;
            uStack_f74 = uStack_f74 + 8;
            iStack_fc0 = iStack_fc0 + 8;
            iStack_fbc = iStack_fbc + 8;
            iStack_fb4 = iStack_fb4 + 8;
            iStack_f4c = iStack_f4c + 4;
            iStack_f28 = iStack_f28 + 4;
            iStack_f38 = iStack_f38 + 4;
            iStack_f18 = iStack_f18 + 4;
          }
          uVar18 = uVar18 + 1;
          iStack_f30 = iStack_f30 + 1;
          uVar10 = (ulonglong)*(uint *)(param_1 + 0x2d0);
          iStack_f70 = iStack_f70 + 4;
          iStack_f68 = iStack_f68 + 4;
          iVar21 = iVar21 + 0x114;
        } while ((uVar18 & 0xffffffff) < uVar10);
      }
      param_2 = param_2 + 1;
      lStack_e18 = (longlong)(int)puStack_f7c;
      lStack_e20 = (longlong)(int)puStack_fd0;
      dVar23 = (double)lStack_e18 + dVar23;
      dVar24 = (double)lStack_e20 + dVar24;
    } while ((param_2 & 0xffffffff) < (ulonglong)uStack00000024);
  }
  *piStack0000002c = iStack_f48;
  *pdStack0000003c = dVar24;
  *pdStack00000034 = dVar23;
  return;
}

