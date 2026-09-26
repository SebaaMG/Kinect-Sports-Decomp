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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a4;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b4;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_8233EB88();
extern int fn_82360F68();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_8305D7C0();
extern int fn_8305DB40();
extern int fn_8305E0F8();
extern int fn_8305E4E8();
extern int fn_8305EC98();
extern int fn_8305F2E8();
extern int fn_830602B8();
extern int fn_830608C8();
extern int fn_83060EC8();
extern int fn_83061508();
extern int fn_83061548();
extern int fn_83061F30();
extern int fn_83063190();
extern int fn_83063408();
extern int fn_83063800();
extern int fn_830639B0();
extern int fn_83063B50();
extern int fn_83065298();
extern int fn_830670C8();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern int fn_83068960();
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_820288B0;
extern unsigned int lbl_8217E6BC;
extern unsigned int lbl_8217E898;
extern unsigned int uStack_e8;
extern unsigned int uStack_f8;


void fn_83065418(int param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  int *piStack_100;
  int *piStack_fc;
  undefined4 uStack_f8;
  int *piStack_f0;
  int *piStack_ec;
  undefined4 uStack_e8;
  undefined **ppuStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [160];
  
  if ((*(char *)(param_1 + 0x24) != '\0') && (*(int *)(param_1 + 0x2c) != 0)) {
    fn_83063800(param_1,param_1 + 0xc4);
    fn_83060EC8(param_1 + 0x34,auStack_d0,auStack_c0);
    fn_82810328(auStack_c0,auStack_d0,auStack_b0);
    fn_82810558((double)lbl_820288B0,auStack_b0,auStack_d0);
    fn_82810558((double)lbl_82002C2C,auStack_b0,auStack_c0);
    fn_83061548(param_1 + 0x94,0);
    fn_83063B50(param_1,auStack_d0,auStack_c0,param_2);
    fn_83063408(param_1,param_2);
    fn_83063190(param_1);
    iStack_d8 = 0;
    ppuStack_e0 = &lbl_8217E898;
    fn_83061508(auStack_a0);
    fn_830602B8(auStack_a0,10000);
    piStack_f0 = (int *)0x0;
    piStack_ec = (int *)0x0;
    uStack_e8 = 0;
    piStack_100 = (int *)0x0;
    piStack_fc = (int *)0x0;
    uStack_f8 = 0;
    fn_82360F68(&piStack_f0,10000);
    fn_82360F68(&piStack_100,10000);
    if ((param_2 & 0xffffffff) != 0) {
      fn_830677A0(param_2,(ulonglong)*(uint *)(param_1 + 0xd8) -
                                (ulonglong)*(uint *)(param_1 + 0xdc),0xffffffff8217e728);
    }
    iStack_dc = *(int *)(param_1 + 0x2c);
    iStack_d8 = iStack_dc;
    if (iStack_dc != 0) {
      dVar11 = (double)lbl_8200D898;
      do {
        iVar2 = iStack_d8;
        iVar3 = fn_8265C9E0(0x58);
        if (iVar3 == 0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = (undefined4 *)fn_830670C8();
        }
        puVar6 = puVar4 + 4;
        fn_8305E0F8(puVar6,auStack_a0);
        fn_830639B0(param_1,iVar2,puVar6,auStack_d0,auStack_c0);
        puVar5 = (undefined4 *)fn_8265C9E0(0x48);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          fn_8305F2E8(puVar5);
          *puVar5 = &lbl_8217E6BC;
        }
        fn_8305E0F8(puVar5,auStack_a0);
        fn_8305EC98(puVar5,puVar6);
        puVar5[0x11] = 0;
        fn_83068960((double)*(float *)(param_1 + 0x30),&piStack_f0,1,0,iVar2,
                          *(undefined4 *)(iVar2 + 0x34),puVar5);
        for (piVar8 = piStack_f0; piVar8 != piStack_ec; piVar8 = piVar8 + 1) {
          puVar5 = (undefined4 *)*piVar8;
          iVar3 = puVar5[0x11];
          puVar6 = (undefined4 *)fn_8265C9E0(0x48);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            fn_8305F2E8(puVar6);
            *puVar6 = &lbl_8217E6BC;
          }
          fn_8305E0F8(puVar6,auStack_a0);
          fn_8305EC98(puVar6,puVar5);
          puVar6[0x11] = 0;
          fn_83068960((double)*(float *)(param_1 + 0x30),&piStack_100,1,0,iVar2,
                            *(undefined4 *)(iVar2 + 0x30),puVar6);
          piVar9 = piStack_100;
          if (piStack_100 != piStack_fc) {
            do {
              puVar6 = (undefined4 *)*piVar9;
              iVar1 = puVar6[0x11];
              if ((iVar3 != 0) && (iVar1 != 0)) {
                if ((**(char **)(iVar3 + 0x70) == '\0') && (**(char **)(iVar1 + 0x70) == '\0')) {
                  iVar7 = fn_8305D7C0(puVar5);
                  if (iVar7 == 0) {
                    iVar7 = fn_8305D7C0(puVar6);
                    if (((iVar7 == 0) &&
                        (dVar10 = (double)fn_8305E4E8(puVar6),
                        (double)(float)((double)*(float *)(param_1 + 0x30) * dVar11) < dVar10)) &&
                       (dVar10 = (double)fn_8305DB40(puVar6),
                       (double)(float)((double)*(float *)(param_1 + 0x30) * dVar11) < dVar10)) {
                      fn_83065298(param_1,iVar3,iVar1,puVar6,1);
                    }
                  }
                }
                fn_83065298(param_1,iVar3,iVar1,puVar6,0);
              }
              (**(code **)*puVar6)(puVar6,1);
              piVar9 = piVar9 + 1;
            } while (piVar9 != piStack_fc);
          }
          (**(code **)*puVar5)(puVar5,1);
          fn_8233EB88(auStack_a4,&piStack_100,piStack_100,piStack_fc);
        }
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        fn_8233EB88(auStack_b4,&piStack_f0,piStack_f0,piStack_ec);
        fn_830608C8(auStack_a0);
        if ((param_2 & 0xffffffff) != 0) {
          fn_830679A8(param_2);
        }
        iStack_d8 = (*(code *)ppuStack_e0[1])(&ppuStack_e0,iStack_d8);
      } while (iStack_d8 != 0);
    }
    if ((param_2 & 0xffffffff) != 0) {
      fn_830678C8(param_2);
    }
    if (piStack_100 != (int *)0x0) {
      fn_8265CA20();
    }
    piStack_100 = (int *)0x0;
    piStack_fc = (int *)0x0;
    uStack_f8 = 0;
    if (piStack_f0 != (int *)0x0) {
      fn_8265CA20();
    }
    piStack_f0 = (int *)0x0;
    piStack_ec = (int *)0x0;
    uStack_e8 = 0;
    fn_83061F30(auStack_a0);
  }
  return;
}

