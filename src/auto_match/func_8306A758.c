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
extern unsigned int *auStack_100;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_fc;
extern int fn_8233EB88();
extern int fn_82360F68();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82810280();
extern int fn_8305D618();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305F2E8();
extern int fn_830602B8();
extern int fn_830608C8();
extern int fn_83061508();
extern int fn_83061F30();
extern int fn_83065E50();
extern int fn_83066770();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern int fn_83068960();
extern int fn_83069160();
extern int fn_8306AAF0();
extern unsigned int lbl_8217E6BC;
extern unsigned int lbl_8217EB34;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_d8;
extern unsigned int uStack_e8;


void fn_8306A758(undefined8 param_1,int *param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [12];
  int *piStack_f0;
  int *piStack_ec;
  undefined4 uStack_e8;
  int *piStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [208];
  
  fn_83061508(auStack_d0);
  fn_830602B8(auStack_d0,10000);
  piStack_e0 = (int *)0x0;
  piStack_dc = (int *)0x0;
  uStack_d8 = 0;
  piStack_f0 = (int *)0x0;
  piStack_ec = (int *)0x0;
  uStack_e8 = 0;
  fn_82360F68(&piStack_e0,10000);
  fn_82360F68(&piStack_f0,10000);
  if ((param_4 & 0xffffffff) != 0) {
    fn_830677A0(param_4,param_2[2],0xffffffff8217eac8);
  }
  iVar12 = *param_2;
  if (iVar12 != 0) {
    dVar18 = (double)lbl_821AAD20;
    do {
      for (piVar11 = *(int **)(iVar12 + 0x98); piVar11 != *(int **)(iVar12 + 0x9c);
          piVar11 = piVar11 + 1) {
        iVar1 = *piVar11;
        iVar2 = *(int *)(iVar1 + 0x44);
        puVar6 = (undefined4 *)fn_8265C9E0(0x48);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          fn_8305F2E8(puVar6);
          *puVar6 = &lbl_8217E6BC;
        }
        fn_8305E0F8(puVar6,auStack_d0);
        fn_8305EC98(puVar6,iVar1);
        puVar6[0x11] = 0;
        fn_83068960(param_1,&piStack_e0,0,0,iVar2,*(undefined4 *)(iVar2 + 0x34),puVar6);
        piVar13 = piStack_e0;
        if (piStack_e0 != piStack_dc) {
          do {
            puVar6 = (undefined4 *)*piVar13;
            iVar3 = puVar6[0x11];
            puVar7 = (undefined4 *)fn_8265C9E0(0x48);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              fn_8305F2E8(puVar7);
              *puVar7 = &lbl_8217E6BC;
            }
            fn_8305E0F8(puVar7,auStack_d0);
            fn_8305EC98(puVar7,puVar6);
            puVar7[0x11] = 0;
            fn_83068960(param_1,&piStack_f0,0,0,iVar2,*(undefined4 *)(iVar2 + 0x30),puVar7);
            piVar14 = piStack_f0;
            if (piStack_f0 != piStack_ec) {
              do {
                puVar7 = (undefined4 *)*piVar14;
                iVar16 = puVar7[0x11];
                if ((*(int *)(iVar16 + 0x3c) != 0) && (*(int *)(iVar3 + 0x3c) != 0)) {
                  uVar4 = fn_8305D618(iVar1);
                  uVar5 = fn_83066770(iVar2 + 0x10);
                  dVar17 = (double)fn_82810280(uVar5,uVar4);
                  iVar15 = iVar3;
                  if (dVar17 < dVar18) {
                    iVar15 = iVar16;
                    iVar16 = iVar3;
                  }
                  iVar8 = fn_83069160(*(undefined4 *)(iVar16 + 0x3c),iVar15);
                  iVar9 = fn_83069160(*(undefined4 *)(iVar15 + 0x3c),iVar16);
                  if ((iVar8 != 0) && (iVar9 != 0)) {
                    *(undefined1 *)(iVar8 + 0x14) = 1;
                    *(undefined1 *)(iVar9 + 0x14) = 1;
                    uVar4 = fn_83065E50();
                    fn_8305E0F8(uVar4,iVar12 + 0x38);
                    fn_8305EC98(uVar4,puVar7);
                    puVar10 = (undefined4 *)fn_8265C9E0(0x20);
                    if (puVar10 == (undefined4 *)0x0) {
                      puVar10 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar10 = &lbl_8217EB34;
                      puVar10[3] = 0;
                      puVar10[1] = 0;
                      puVar10[2] = 0;
                    }
                    puVar10[5] = (int)uVar4;
                    puVar10[7] = iVar15;
                    puVar10[6] = iVar16;
                    puVar10[4] = iVar12;
                    fn_8306AAF0(iVar12 + 0x1c);
                  }
                }
                (**(code **)*puVar7)(puVar7,1);
                piVar14 = piVar14 + 1;
              } while (piVar14 != piStack_ec);
            }
            (**(code **)*puVar6)(puVar6,1);
            fn_8233EB88(auStack_100,&piStack_f0,piStack_f0,piStack_ec);
            piVar13 = piVar13 + 1;
          } while (piVar13 != piStack_dc);
        }
        fn_8233EB88(auStack_fc,&piStack_e0,piStack_e0);
        fn_830608C8(auStack_d0);
      }
      if ((param_4 & 0xffffffff) != 0) {
        fn_830679A8(param_4);
      }
      iVar12 = *(int *)(iVar12 + 4);
    } while (iVar12 != 0);
  }
  if ((param_4 & 0xffffffff) != 0) {
    fn_830678C8(param_4);
  }
  if (piStack_f0 != (int *)0x0) {
    fn_8265CA20();
  }
  piStack_f0 = (int *)0x0;
  piStack_ec = (int *)0x0;
  uStack_e8 = 0;
  if (piStack_e0 != (int *)0x0) {
    fn_8265CA20();
  }
  piStack_e0 = (int *)0x0;
  piStack_dc = (int *)0x0;
  uStack_d8 = 0;
  fn_83061F30(auStack_d0);
  return;
}

