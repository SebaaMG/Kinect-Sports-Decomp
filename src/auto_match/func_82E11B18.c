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
extern unsigned int *auStack_260;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f8;
extern int fn_82BA02A8();
extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CE7E68();
extern int fn_82CE7EE0();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA4B8();
extern int fn_82CEAC20();
extern int fn_82CEAD98();
extern int fn_82CEAE60();
extern int fn_82CEAE78();
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CEB3C8();
extern int fn_82CEDB38();
extern int fn_82CEDE90();
extern int fn_82CFC288();
extern int fn_82D000A0();
extern int fn_82D00388();
extern int fn_82D003F0();
extern int fn_82D04AB8();
extern int fn_82D04B90();
extern int fn_82D04C78();
extern int fn_82D05178();
extern int fn_82D054C0();
extern int fn_82E0E7A8();
extern int fn_82E11120();
extern int fn_82E127F8();
extern unsigned int iStack_2d0;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
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
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_290;
extern unsigned int uStack_2b8;
extern unsigned int uStack_2bc;
extern unsigned int uStack_2c0;
extern unsigned int uStack_2e0;
extern unsigned int uStack_2e4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


undefined8 fn_82E11B18(undefined8 param_1,int *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar4;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int *piStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  int *apiStack_2d8 [2];
  int iStack_2d0;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  uint uStack_2b8;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  uint uStack_288;
  undefined1 auStack_260 [16];
  undefined4 uStack_250;
  undefined4 uStack_24c;
  uint uStack_248;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  uint uStack_218;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint uStack_188;
  undefined4 uStack_160;
  int **ppiStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  int **ppiStack_100;
  undefined1 *puStack_fc;
  undefined1 auStack_f8 [24];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 auStack_b0 [44];
  
  if ((param_2 == (int *)0x0) || ((param_4 & 0xffffffff) == 0)) {
    uVar4 = 1;
  }
  else {
    if ((param_3 & 0xffffffff) != 0) {
      fn_82CEDB38(param_1,0xffffffff8214b130);
      fn_82CEDB38(param_1,param_3);
      fn_82CEDB38(param_1,0xffffffff8214b12c);
    }
    fn_82CEDB38(param_1,0xffffffff8214a918);
    fn_82CE7EE0(&uStack_2c0);
    fn_82D05178(&uStack_250,0xffffffff82133624);
    fn_82D054C0(&uStack_250,0xffffffff8214b044,0xffffffff82196582,1);
    fn_82D054C0(&uStack_250,0xffffffff821aa634,0xffffffff82196582,1);
    fn_82D054C0(&uStack_250,0xffffffff821c7f2c,0xffffffff82196582,1);
    fn_82CEDE90(param_1,0xffffffff8214a9b4,uStack_250);
    fn_82CEDE90(param_1,0xffffffff8214a9d8,param_4);
    fn_82CEDB38(param_1,0xffffffff821bab90);
    uStack_2e4 = 0;
    iVar9 = *param_2;
    piVar10 = param_2;
    while (iVar9 != 0) {
      piVar10 = piVar10 + 1;
      uStack_2e4 = uStack_2e4 + 1;
      iVar9 = *piVar10;
    }
    uStack_2e0 = uStack_2e4 | 0x80000000;
    piStack_2e8 = param_2;
    fn_82E127F8(apiStack_2d8);
    fn_82D00388(auStack_260,0);
    fn_82CE7EE0(&uStack_1f0);
    fn_82CE7EE0(auStack_b0);
    iVar9 = 0;
    if (0 < (int)uStack_2e4) {
      iVar11 = 0;
      do {
        lVar12 = 0;
        uVar2 = *(undefined4 *)(iVar11 + (int)piStack_2e8);
        iVar5 = fn_82CEAE78(uVar2);
        if (0 < iVar5) {
          do {
            puVar6 = (undefined4 *)fn_82CEAE60(uVar2,lVar12);
            iVar5 = fn_82CEA220(apiStack_2d8,puVar6);
            if (iStack_2d0 < iVar5) {
              uVar1 = *puVar6;
              uVar4 = fn_82CEAC20(uVar2);
              fn_82D04B90(auStack_b0,0xffffffff821b0c70,uVar4,uVar1);
              uVar4 = fn_82CFC288(auStack_b0[0]);
              iVar5 = fn_82CE5410();
              fn_82CEA160(apiStack_2d8,*(undefined4 *)(iVar5 + 0x10),puVar6,uVar4);
              fn_82D04B90(&uStack_2c0,0xffffffff8214adac,auStack_b0[0]);
              fn_82D04C78(&uStack_1f0,uStack_2c0);
            }
            lVar12 = lVar12 + 1;
            iVar5 = fn_82CEAE78(uVar2);
          } while ((int)lVar12 < iVar5);
        }
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar9 < (int)uStack_2e4);
    }
    fn_82CE7E68(auStack_b0);
    bVar3 = false;
    fn_82CE7EE0(&uStack_190);
    fn_82CE7EE0(&uStack_290);
    fn_82CE7EE0(&uStack_1c0);
    fn_82CE7EE0(&uStack_e0);
    fn_82CE7EE0(&uStack_220);
    lVar12 = 0;
    iVar9 = 0;
    if (0 < (int)uStack_2e4) {
      iVar11 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar11 + (int)piStack_2e8);
        puVar7 = (uint *)fn_82CEB3C8(uVar2);
        if ((*puVar7 & 1) == 0) {
          lVar13 = 0;
          iVar5 = fn_82CEAF18(uVar2);
          if (0 < iVar5) {
            do {
              iVar5 = fn_82CEAF20(uVar2,lVar13);
              if ((*(int *)(iVar5 + 8) != 0) &&
                 (iVar8 = fn_82CEA220(apiStack_2d8), iStack_2d0 < iVar8)) {
                puVar6 = *(undefined4 **)(iVar5 + 8);
                uVar4 = fn_82CFC288(*puVar6);
                iVar5 = fn_82CE5410();
                fn_82CEA160(apiStack_2d8,*(undefined4 *)(iVar5 + 0x10),puVar6,uVar4);
                fn_82D000A0(auStack_260,uVar4,1);
                if (!bVar3) {
                  bVar3 = true;
                  fn_82D04B90(&uStack_2c0,0xffffffff8214ace4,0xffffffff82196582);
                  fn_82D04C78(&uStack_290,uStack_2c0);
                }
                fn_82E0E7A8(uVar4,puVar6,&uStack_190);
                fn_82D04B90(&uStack_2c0,0xffffffff8214ad18,*puVar6,uVar4,puVar6[2],puVar6[4]);
                fn_82D04C78(&uStack_290,uStack_2c0);
                fn_82D04B90(&uStack_2c0,0xffffffff8214ad50,uVar4,0xffffffff82196582,lVar12);
                lVar12 = lVar12 + 1;
                fn_82D04C78(&uStack_1c0,uStack_2c0);
              }
              lVar13 = lVar13 + 1;
              iVar5 = fn_82CEAF18(uVar2);
            } while ((int)lVar13 < iVar5);
          }
        }
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar9 < (int)uStack_2e4);
      if (bVar3) {
        fn_82D04C78(&uStack_290,0xffffffff8214ad44);
        fn_82D04C78(&uStack_290,uStack_1c0);
        fn_82D04C78(&uStack_220,uStack_190);
        fn_82D04C78(&uStack_220,uStack_290);
      }
    }
    ppiStack_15c = &piStack_2e8;
    fn_82CE7EE0(&uStack_158);
    fn_82CE7EE0(&uStack_12c);
    ppiStack_100 = apiStack_2d8;
    puStack_fc = auStack_260;
    fn_82D00388(auStack_f8,0);
    uStack_160 = fn_82CEAD98(0xffffffff8323aef8,0xffffffff82130900);
    iVar9 = 0;
    if (0 < (int)uStack_2e4) {
      iVar11 = 0;
      do {
        fn_82E11120(&uStack_160,*(undefined4 *)(iVar11 + (int)piStack_2e8));
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar9 < (int)uStack_2e4);
    }
    fn_82CEDB38(param_1,uStack_158);
    fn_82CEDB38(param_1,0xffffffff821bab90);
    if (0 < (longlong)((ulonglong)uStack_1ec - 1)) {
      fn_82CEDB38(param_1,uStack_1f0);
      fn_82CEDB38(param_1,0xffffffff821bab90);
    }
    fn_82CEDB38(param_1,uStack_12c);
    fn_82D04AB8(&uStack_220,0xffffffff82196582);
    iVar9 = 0;
    if (0 < (int)uStack_2e4) {
      iVar11 = 0;
      do {
        puVar7 = (uint *)fn_82CEB3C8(*(undefined4 *)(iVar11 + (int)piStack_2e8));
        if ((*puVar7 & 1) == 0) {
          uVar4 = fn_82CEAC20(*(undefined4 *)(iVar11 + (int)piStack_2e8));
          fn_82D04B90(&uStack_2c0,0xffffffff8214b11c,uVar4);
          fn_82D04C78(&uStack_220,uStack_2c0);
        }
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar9 < (int)uStack_2e4);
    }
    fn_82CEDE90(param_1,0xffffffff8214aec8,uStack_220,param_4);
    fn_82CEDE90(param_1,0xffffffff8214aa4c,uStack_250);
    iVar9 = 0;
    piVar10 = apiStack_2d8[0];
    if (-1 < iStack_2d0) {
      do {
        if (*piVar10 != -1) break;
        iVar9 = iVar9 + 1;
        piVar10 = piVar10 + 2;
      } while (iVar9 <= iStack_2d0);
    }
    if (iVar9 <= iStack_2d0) {
      do {
        iVar11 = apiStack_2d8[0][iVar9 * 2 + 1];
        iVar5 = fn_82CE5410();
        fn_82CE5338(*(undefined4 *)(iVar5 + 0x10),iVar11);
        iVar9 = iVar9 + 1;
        if (iVar9 <= iStack_2d0) {
          piVar10 = apiStack_2d8[0] + iVar9 * 2;
          do {
            if (*piVar10 != -1) break;
            iVar9 = iVar9 + 1;
            piVar10 = piVar10 + 2;
          } while (iVar9 <= iStack_2d0);
        }
      } while (iVar9 <= iStack_2d0);
    }
    fn_82D003F0(auStack_f8);
    iVar9 = fn_82CE5410();
    uStack_128 = 0;
    if ((uStack_124 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uStack_12c,uStack_124 & 0x3fffffff,1);
    }
    uStack_12c = 0;
    uStack_124 = 0x80000000;
    iVar9 = fn_82CE5410();
    uStack_154 = 0;
    if ((uStack_150 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uStack_158,uStack_150 & 0x3fffffff,1);
    }
    uStack_158 = 0;
    uStack_150 = 0x80000000;
    iVar9 = fn_82CE5410();
    uStack_21c = 0;
    if ((uStack_218 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uStack_220,uStack_218 & 0x3fffffff,1);
    }
    uStack_220 = 0;
    uStack_218 = 0x80000000;
    iVar9 = fn_82CE5410();
    uStack_dc = 0;
    if ((uStack_d8 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uStack_e0,uStack_d8 & 0x3fffffff,1);
    }
    uStack_e0 = 0;
    uStack_d8 = 0x80000000;
    iVar9 = fn_82CE5410();
    uStack_1bc = 0;
    if ((uStack_1b8 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uStack_1c0,uStack_1b8 & 0x3fffffff,1);
    }
    uStack_1c0 = 0;
    uStack_1b8 = 0x80000000;
    iVar9 = fn_82CE5410();
    uStack_28c = 0;
    if ((uStack_288 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uStack_290,uStack_288 & 0x3fffffff,1);
    }
    uStack_290 = 0;
    uStack_288 = 0x80000000;
    iVar9 = fn_82CE5410();
    uStack_18c = 0;
    if ((uStack_188 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uStack_190,uStack_188 & 0x3fffffff,1);
    }
    uStack_190 = 0;
    uStack_188 = 0x80000000;
    iVar9 = fn_82CE5410();
    uStack_1ec = 0;
    if ((uStack_1e8 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uStack_1f0,uStack_1e8 & 0x3fffffff,1);
    }
    uStack_1f0 = 0;
    uStack_1e8 = 0x80000000;
    fn_82D003F0(auStack_260);
    iVar9 = fn_82CE5410();
    fn_82CEA4B8(apiStack_2d8,*(undefined4 *)(iVar9 + 0x10));
    fn_82BA02A8(apiStack_2d8);
    iVar9 = fn_82CE5410();
    uStack_2e4 = 0;
    if ((uStack_2e0 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0x10) + 0x10))
                (*(int **)(iVar9 + 0x10),piStack_2e8,uStack_2e0 & 0x3fffffff,4);
    }
    piStack_2e8 = (int *)0x0;
    uStack_2e0 = 0x80000000;
    iVar9 = fn_82CE5410();
    uStack_24c = 0;
    if ((uStack_248 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uStack_250,uStack_248 & 0x3fffffff,1);
    }
    uStack_250 = 0;
    uStack_248 = 0x80000000;
    iVar9 = fn_82CE5410();
    uStack_2bc = 0;
    if ((uStack_2b8 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uStack_2c0,uStack_2b8 & 0x3fffffff,1);
    }
    uVar4 = 0;
  }
  return uVar4;
}

