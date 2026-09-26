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
extern unsigned int *auStack_348;
extern unsigned int *auStack_d0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CE7E68();
extern int fn_82CE7EE0();
extern int fn_82CEA280();
extern int fn_82CEAC20();
extern int fn_82CEAC28();
extern int fn_82CEAD00();
extern int fn_82CEAE60();
extern int fn_82CEAE78();
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CEB070();
extern int fn_82CEB3C8();
extern int fn_82CEB498();
extern int fn_82CEB868();
extern int fn_82CFE818();
extern int fn_82D000A0();
extern int fn_82D001D8();
extern int fn_82D002F0();
extern int fn_82D04B90();
extern int fn_82D04C78();
extern int fn_82D05178();
extern int fn_82E0E7A8();
extern int fn_82E10D38();
extern unsigned int iStack_358;
extern unsigned int uStack_100;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1ec;
extern unsigned int uStack_1f0;
extern unsigned int uStack_218;
extern unsigned int uStack_21c;
extern unsigned int uStack_220;
extern unsigned int uStack_248;
extern unsigned int uStack_24c;
extern unsigned int uStack_250;
extern unsigned int uStack_278;
extern unsigned int uStack_27c;
extern unsigned int uStack_280;
extern unsigned int uStack_2a8;
extern unsigned int uStack_2ac;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2d8;
extern unsigned int uStack_2dc;
extern unsigned int uStack_2e0;
extern unsigned int uStack_308;
extern unsigned int uStack_30c;
extern unsigned int uStack_310;
extern unsigned int uStack_338;
extern unsigned int uStack_33c;
extern unsigned int uStack_340;
extern unsigned int uStack_34c;
extern unsigned int uStack_350;
extern unsigned int uStack_354;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_82E11120(undefined4 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint *puVar7;
  int iVar8;
  undefined8 uVar5;
  undefined4 *puVar9;
  undefined8 uVar6;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  char cStack_360;
  char acStack_35f [7];
  int iStack_358;
  uint uStack_354;
  uint uStack_350;
  undefined4 uStack_34c;
  undefined4 auStack_348 [2];
  undefined4 uStack_340;
  undefined4 uStack_33c;
  uint uStack_338;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  uint uStack_308;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  uint uStack_2d8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  uint uStack_2a8;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  uint uStack_278;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  uint uStack_248;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  uint uStack_218;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint uStack_188;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  uint uStack_158;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 auStack_d0 [52];
  
  uVar4 = fn_82CEAC20(param_2);
  puVar9 = param_1 + 0x1a;
  uVar4 = fn_82D001D8(puVar9,uVar4);
  fn_82D002F0(acStack_35f,puVar9,uVar4);
  if (acStack_35f[0] == '\0') {
    uVar4 = fn_82CEAC20(param_2);
    fn_82D000A0(puVar9,uVar4,1);
    puVar7 = (uint *)fn_82CEB3C8(param_2);
    if ((*puVar7 & 1) == 0) {
      fn_82CE7EE0(&uStack_340);
      uVar4 = fn_82CEB868(param_2,0);
      uVar5 = fn_82CEAC20(param_2);
      fn_82D04B90(&uStack_340,0xffffffff8214aa70,uVar5,uVar4);
      fn_82D04C78(param_1 + 2,uStack_340);
      bVar10 = false;
      iVar11 = 0;
      iVar8 = ((undefined4 *)param_1[1])[1];
      if (0 < iVar8) {
        puVar7 = *(uint **)param_1[1];
        do {
          if ((param_2 & 0xffffffff) == (ulonglong)*puVar7) {
            bVar10 = true;
            break;
          }
          iVar11 = iVar11 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar11 < iVar8);
      }
      if (bVar10) {
        iVar8 = fn_82CEAC28(param_2);
        if (iVar8 != 0) {
          uVar4 = fn_82CEAC28(param_2);
          fn_82E11120(param_1,uVar4);
        }
        fn_82D05178(&uStack_190,0xffffffff8214b114);
        fn_82D05178(&uStack_100,0xffffffff8214b114);
        fn_82D05178(&uStack_1f0,0xffffffff8214b114);
        fn_82D05178(&uStack_250,0xffffffff8214b114);
        fn_82D05178(&uStack_280,0xffffffff821b597c);
        fn_82D05178(&uStack_1c0,0xffffffff8214b114);
        fn_82CE7EE0(&uStack_160);
        fn_82CE7EE0(&uStack_2e0);
        fn_82CE7EE0(&uStack_220);
        fn_82CE7EE0(&uStack_310);
        iVar8 = fn_82CEAC28(param_2);
        if (iVar8 != 0) {
          fn_82CEAC28(param_2);
          uVar4 = fn_82CEAC20();
          fn_82D04B90(&uStack_190,0xffffffff8214b108,uVar4);
        }
        fn_82CEAD00(param_2);
        iVar8 = fn_82CEAE78(param_2);
        if (0 < iVar8) {
          uVar4 = fn_82CEAC20(param_2);
          fn_82D04B90(&uStack_1f0,0xffffffff8214b0d8,uVar4);
          uVar4 = fn_82CEAC20(param_2);
          fn_82D04B90(&uStack_340,0xffffffff8214ace4,uVar4);
          fn_82D04C78(&uStack_2e0,uStack_340);
          lVar12 = 0;
          iVar8 = fn_82CEAE78(param_2);
          if (0 < iVar8) {
            do {
              puVar9 = (undefined4 *)fn_82CEAE60(param_2,lVar12);
              uVar4 = fn_82CEA280(param_1[0x18],puVar9,0);
              uVar1 = param_1[0x19];
              uVar5 = fn_82D001D8(uVar1,uVar4);
              fn_82D002F0(&cStack_360,uVar1,uVar5);
              if (cStack_360 == '\0') {
                fn_82D000A0(param_1[0x19],uVar4,1);
                fn_82E0E7A8(uVar4,puVar9,&uStack_160);
                fn_82D04B90(&uStack_340,0xffffffff8214ad18,*puVar9,uVar4,puVar9[2],puVar9[4]);
                fn_82D04C78(&uStack_2e0,uStack_340);
                uVar5 = fn_82CEAC20(param_2);
                fn_82D04B90(&uStack_340,0xffffffff8214ad50,uVar4,uVar5,lVar12);
                fn_82D04C78(&uStack_220,uStack_340);
              }
              lVar12 = lVar12 + 1;
              iVar8 = fn_82CEAE78(param_2);
            } while ((int)lVar12 < iVar8);
          }
          fn_82D04C78(&uStack_2e0,0xffffffff8214ad44);
        }
        fn_82D04C78(&uStack_2e0,uStack_220);
        fn_82D04C78(&uStack_310,uStack_160);
        fn_82D04C78(&uStack_310,uStack_2e0);
        iVar8 = fn_82CEAF18(param_2);
        if (0 < iVar8) {
          iStack_358 = 0;
          uStack_354 = 0;
          uStack_350 = 0x80000000;
          auStack_d0[0] = 0;
          uVar4 = fn_82CEAC20(param_2);
          fn_82D04B90(&uStack_250,0xffffffff8214b0a0,uVar4);
          uVar4 = fn_82CEAC20(param_2);
          fn_82D04B90(&uStack_280,0xffffffff8214b064,uVar4);
          uVar4 = fn_82CEAC20(param_2);
          fn_82D04B90(&uStack_340,0xffffffff8214add4,uVar4);
          fn_82D04C78(&uStack_310,uStack_340);
          lVar12 = 0;
          iVar8 = fn_82CEAF18(param_2);
          if (0 < iVar8) {
            do {
              fn_82D05178(&uStack_2b0,0xffffffff8214b114);
              fn_82D05178(&uStack_130,0xffffffff8214b114);
              puVar9 = (undefined4 *)fn_82CEAF20(param_2,lVar12);
              uVar4 = fn_82CEB070(param_2,*puVar9);
              iVar8 = fn_82CEB498(param_2,uVar4,auStack_d0);
              if (iVar8 == 0) {
                iVar8 = fn_82CE5410();
                if (uStack_354 == (uStack_350 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),&iStack_358,4);
                }
                *(int *)(uStack_354 * 4 + iStack_358) = (int)lVar12;
                uStack_354 = uStack_354 + 1;
              }
              if (puVar9[1] != 0) {
                puVar7 = (uint *)fn_82CEB3C8();
                if ((*puVar7 & 1) == 0) {
                  uVar4 = fn_82CEAC20(puVar9[1]);
                  fn_82D04B90(&uStack_2b0,0xffffffff8214b108,uVar4);
                }
                fn_82E11120(param_1,puVar9[1]);
              }
              if (puVar9[2] != 0) {
                uVar4 = fn_82CEA280(param_1[0x18],puVar9[2],0);
                fn_82D04B90(&uStack_130,0xffffffff8214b05c,uVar4);
              }
              fn_82CFE818(*param_1,*(undefined1 *)(puVar9 + 3),&uStack_34c);
              fn_82CFE818(*param_1,*(undefined1 *)((int)puVar9 + 0xd),auStack_348);
              fn_82D04B90(&uStack_340,0xffffffff8214ae10,*puVar9,uStack_2b0,uStack_130,
                                uStack_34c,auStack_348[0],*(undefined2 *)((int)puVar9 + 0xe));
              fn_82D04C78(&uStack_310,uStack_340);
              iVar8 = fn_82CE5410();
              uStack_12c = 0;
              if ((uStack_128 & 0x80000000) == 0) {
                (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                          (*(int **)(iVar8 + 0xc),uStack_130,uStack_128 & 0x3fffffff,1);
              }
              uStack_130 = 0;
              uStack_128 = 0x80000000;
              iVar8 = fn_82CE5410();
              uStack_2ac = 0;
              if ((uStack_2a8 & 0x80000000) == 0) {
                (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                          (*(int **)(iVar8 + 0xc),uStack_2b0,uStack_2a8 & 0x3fffffff,1);
              }
              uStack_2b0 = 0;
              uStack_2a8 = 0x80000000;
              lVar12 = lVar12 + 1;
              iVar8 = fn_82CEAF18(param_2);
            } while ((int)lVar12 < iVar8);
          }
          fn_82D04C78(&uStack_310,0xffffffff8214ae60);
          if (0 < (int)uStack_354) {
            uVar4 = fn_82CEAC20(param_2);
            fn_82D04B90(&uStack_1c0,0xffffffff8214b050,uVar4);
            fn_82E10D38(param_2,&iStack_358,&uStack_340);
            fn_82D04C78(&uStack_310,uStack_340);
          }
          iVar8 = fn_82CE5410();
          uStack_354 = 0;
          if ((uStack_350 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
                      (*(int **)(iVar8 + 0x10),iStack_358,uStack_350 & 0x3fffffff,4);
          }
          iStack_358 = 0;
          uStack_350 = 0x80000000;
        }
        uVar3 = uStack_100;
        uVar2 = uStack_190;
        uVar1 = uStack_1f0;
        fn_82CEAE78(param_2);
        uVar4 = fn_82CEAD00(param_2);
        uVar5 = fn_82CEAC20(param_2);
        uVar6 = fn_82CEAC20(param_2);
        fn_82D04B90(&uStack_340,0xffffffff8214ae68,uVar6,uVar5,uVar2,uVar3,uVar4,uVar1);
        fn_82D04C78(&uStack_310,uStack_340);
        fn_82D04C78(param_1 + 0xd,uStack_310);
        iVar8 = fn_82CE5410();
        uStack_30c = 0;
        if ((uStack_308 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_310,uStack_308 & 0x3fffffff,1);
        }
        uStack_310 = 0;
        uStack_308 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_21c = 0;
        if ((uStack_218 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_220,uStack_218 & 0x3fffffff,1);
        }
        uStack_220 = 0;
        uStack_218 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_2dc = 0;
        if ((uStack_2d8 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_2e0,uStack_2d8 & 0x3fffffff,1);
        }
        uStack_2e0 = 0;
        uStack_2d8 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_15c = 0;
        if ((uStack_158 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_160,uStack_158 & 0x3fffffff,1);
        }
        uStack_160 = 0;
        uStack_158 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_1bc = 0;
        if ((uStack_1b8 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_1c0,uStack_1b8 & 0x3fffffff,1);
        }
        uStack_1c0 = 0;
        uStack_1b8 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_27c = 0;
        if ((uStack_278 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_280,uStack_278 & 0x3fffffff,1);
        }
        uStack_280 = 0;
        uStack_278 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_24c = 0;
        if ((uStack_248 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_250,uStack_248 & 0x3fffffff,1);
        }
        uStack_250 = 0;
        uStack_248 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_1ec = 0;
        if ((uStack_1e8 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_1f0,uStack_1e8 & 0x3fffffff,1);
        }
        uStack_1f0 = 0;
        uStack_1e8 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_fc = 0;
        if ((uStack_f8 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_100,uStack_f8 & 0x3fffffff,1);
        }
        uStack_100 = 0;
        uStack_f8 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_18c = 0;
        if ((uStack_188 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_190,uStack_188 & 0x3fffffff,1);
        }
        uStack_190 = 0;
        uStack_188 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_33c = 0;
        if ((uStack_338 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_340,uStack_338 & 0x3fffffff,1);
        }
      }
      else {
        fn_82CE7E68(&uStack_340);
      }
    }
    else {
      iVar8 = fn_82CEAC28(param_2);
      if (iVar8 != 0) {
        uVar4 = fn_82CEAC28(param_2);
        fn_82E11120(param_1,uVar4);
      }
    }
  }
  return;
}

