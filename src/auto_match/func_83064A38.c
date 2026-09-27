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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d4;
extern int fn_8233EB88();
extern int fn_82360F68();
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_8305D7C0();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305F2E8();
extern int fn_830602B8();
extern int fn_830608C8();
extern int fn_83061508();
extern int fn_83061F30();
extern int fn_830639B0();
extern int fn_83065E50();
extern int fn_830670C8();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern int fn_83068960();
extern unsigned int iStack_f8;
extern unsigned int iStack_fc;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_820288B0;
extern unsigned int lbl_8217E6BC;
extern unsigned int lbl_8217E898;
extern unsigned int uStack_108;
extern unsigned int uStack_118;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_83064A38(int param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4,
                  ulonglong param_5)

{
  int iVar1;
  int iVar2;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar3;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 *apuStack_130 [4];
  int *piStack_120;
  int *piStack_11c;
  undefined4 uStack_118;
  int *piStack_110;
  int *piStack_10c;
  undefined4 uStack_108;
  undefined **ppuStack_100;
  int iStack_fc;
  int iStack_f8;
  struct { undefined4 first; undefined4 second; } stack_pair_f0;

  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [64];
  
  stack_pair_f0.first = *param_4;
  stack_pair_f0.second = param_4[1];
  uStack_e0 = *param_3;
  uStack_e8 = param_4[2];
  uStack_dc = param_3[1];
  uStack_d8 = param_3[2];
  fn_82810328(&stack_pair_f0.first,&uStack_e0,auStack_c8);
  fn_82810558((double)lbl_820288B0,auStack_c8,&uStack_e0);
  fn_82810558((double)lbl_82002C2C,auStack_c8,&stack_pair_f0.first);
  iStack_f8 = 0;
  ppuStack_100 = &lbl_8217E898;
  fn_83061508(auStack_b0);
  fn_830602B8(auStack_b0,10000);
  piStack_110 = (int *)0x0;
  piStack_10c = (int *)0x0;
  uStack_108 = 0;
  piStack_120 = (int *)0x0;
  piStack_11c = (int *)0x0;
  uStack_118 = 0;
  fn_82360F68(&piStack_110,10000);
  fn_82360F68(&piStack_120,10000);
  if ((param_5 & 0xffffffff) != 0) {
    fn_830677A0(param_5,(ulonglong)*(uint *)(param_1 + 0xd8) -
                              (ulonglong)*(uint *)(param_1 + 0xdc),0xffffffff8217e874);
  }
  iStack_fc = *(int *)(param_1 + 0x2c);
  iVar2 = iStack_fc;
  while (iStack_f8 = iVar2, iVar2 != 0) {
    iVar4 = fn_8265C9E0(0x58);
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)fn_830670C8();
    }
    puVar7 = puVar5 + 4;
    fn_8305E0F8(puVar7,auStack_b0);
    fn_830639B0(param_1,iVar2,puVar7,&uStack_e0,&stack_pair_f0.first);
    puVar6 = (undefined4 *)fn_8265C9E0(0x48);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      fn_8305F2E8(puVar6);
      *puVar6 = &lbl_8217E6BC;
    }
    apuStack_130[0] = puVar6;
    fn_8305E0F8(puVar6,auStack_b0);
    fn_8305EC98(puVar6,puVar7);
    puVar6[0x11] = 0;
    if (*(int *)(iVar2 + 0x34) == 0) {
      fn_8257A9F0(&piStack_110,apuStack_130);
    }
    else {
      fn_83068960((double)*(float *)(param_1 + 0x30),&piStack_110,1,0,iVar2,
                        *(int *)(iVar2 + 0x34),puVar6);
    }
    piVar9 = piStack_110;
    if (piStack_110 != piStack_10c) {
      do {
        puVar6 = (undefined4 *)*piVar9;
        iVar4 = puVar6[0x11];
        puVar7 = (undefined4 *)fn_8265C9E0(0x48);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          fn_8305F2E8(puVar7);
          *puVar7 = &lbl_8217E6BC;
        }
        apuStack_130[0] = puVar7;
        fn_8305E0F8(puVar7,auStack_b0);
        fn_8305EC98(puVar7,puVar6);
        puVar7[0x11] = 0;
        if (*(int *)(iVar2 + 0x30) == 0) {
          fn_8257A9F0(&piStack_120,apuStack_130);
        }
        else {
          fn_83068960((double)*(float *)(param_1 + 0x30),&piStack_120,1,0,iVar2,
                            *(int *)(iVar2 + 0x30),puVar7);
        }
        piVar10 = piStack_120;
        if (piStack_120 != piStack_11c) {
          do {
            puVar7 = (undefined4 *)*piVar10;
            iVar1 = puVar7[0x11];
            if ((((iVar1 != 0) || (iVar4 != 0)) && (iVar8 = fn_8305D7C0(puVar6), iVar8 == 0)) &&
               (iVar8 = fn_8305D7C0(puVar7), iVar8 == 0)) {
              if (iVar4 == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = (ulonglong)*(uint *)(iVar4 + 0x38);
              }
              if (iVar1 == 0) {
                uVar11 = 0;
              }
              else {
                uVar11 = (ulonglong)*(uint *)(iVar1 + 0x38);
              }
              if ((int)uVar12 != (int)uVar11) {
                if (0 < (int)uVar12) {
                  uVar3 = fn_83065E50();
                  fn_8305E0F8(uVar3,uVar12 * 0x30 + param_2 + -0x30);
                  fn_8305EC98(uVar3,puVar7);
                }
                if (0 < (int)uVar11) {
                  uVar3 = fn_83065E50();
                  fn_8305E0F8(uVar3,uVar11 * 0x30 + param_2 + -0x30);
                  fn_8305EC98(uVar3,puVar7);
                }
              }
            }
            (**(code **)*puVar7)(puVar7,1);
            piVar10 = piVar10 + 1;
          } while (piVar10 != piStack_11c);
        }
        (**(code **)*puVar6)(puVar6,1);
        fn_8233EB88(auStack_d4,&piStack_120,piStack_120,piStack_11c);
        piVar9 = piVar9 + 1;
      } while (piVar9 != piStack_10c);
    }
    fn_8233EB88(auStack_d0,&piStack_110,piStack_110);
    fn_830608C8(auStack_b0);
    if ((param_5 & 0xffffffff) != 0) {
      fn_830679A8(param_5);
    }
    iStack_f8 = (*(code *)ppuStack_100[1])(&ppuStack_100,iStack_f8);
    iVar2 = iStack_f8;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
      iVar2 = iStack_f8;
    }
  }
  if ((param_5 & 0xffffffff) != 0) {
    fn_830678C8(param_5);
  }
  if (piStack_120 != (int *)0x0) {
    fn_8265CA20();
  }
  piStack_120 = (int *)0x0;
  piStack_11c = (int *)0x0;
  uStack_118 = 0;
  if (piStack_110 != (int *)0x0) {
    fn_8265CA20();
  }
  piStack_110 = (int *)0x0;
  piStack_10c = (int *)0x0;
  uStack_108 = 0;
  fn_83061F30(auStack_b0);
  return;
}

