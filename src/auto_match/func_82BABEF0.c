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
extern int fn_82AB15D0();
extern int fn_82BA8BE0();
extern int fn_82BA8CB8();
extern int fn_82BA8E18();
extern int fn_82BA9118();
extern int fn_82BA98E0();
extern int fn_82BAA230();
extern int fn_82BAA2E0();
extern int fn_82BAB540();
extern int fn_82BABDA0();
extern unsigned int iStack0000001c;
extern unsigned int lbl_820E3014;
extern unsigned int lbl_8316FF50;


void fn_82BABEF0(int *param_1,int param_2,char param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  char cVar8;
  undefined8 uVar7;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int *piVar14;
  int iStack0000001c;
  char cStack00000027;
  int *piStack_b0;
  char *pcStack_ac;
  char *pcStack_a8;
  
  piStack_b0 = *(int **)(param_2 + 8);
  uVar12 = 0;
  uVar11 = 0;
  bVar6 = false;
  uVar13 = 0;
  bVar10 = false;
  bVar5 = false;
  iStack0000001c = param_2;
  cStack00000027 = param_3;
  if (piStack_b0[2] != 0) {
    pcStack_a8 = "scalar_in_use == false && vector_in_use == false";
    pcStack_ac = "!inst->GetFlag( IRInst::yield_is_needed )";
    do {
      piVar14 = piStack_b0;
      if ((piStack_b0[0x39] & 1U) != 0) {
        if (piStack_b0[6] == 0x32) {
          piStack_b0 = (int *)fn_82BAA2E0(param_1,piStack_b0);
        }
        piVar14 = piStack_b0;
        cVar8 = (**(code **)(*piStack_b0 + 0x34))(piStack_b0);
        if (cVar8 == '\0') {
          cVar8 = fn_82BABDA0(piVar14);
          if ((cVar8 != '\0') &&
             ((param_1[0x15] = param_1[0x15] + 1,
              (*(uint *)(&lbl_8316FF50 + piVar14[6] * 0x34) >> 2 & 1) == 0 || (!bVar10)))) {
            (**(code **)(*piVar14 + 0x60))(piVar14);
            goto LAB_82bac544;
          }
          cVar8 = fn_82BA9118(piVar14);
          if (cVar8 != '\0') {
            param_1[0x16] = param_1[0x16] + 1;
          }
          if ((param_1[0xf] == 0) &&
             (cVar8 = (**(code **)(*piVar14 + 0x18))(piVar14), cVar8 != '\0')) {
            *(undefined4 *)(param_1[0x23] + 0x82c) = 1;
          }
          if ((((uint)piVar14[0x39] >> 1 & 1) != 0) &&
             (cVar8 = fn_82BAA230(param_1,piVar14[0x14]), cVar8 != '\0')) {
            if (bVar6) {
              fn_82BA8BE0(param_1,uVar12,uVar11,
                                (longlong)((param_1[4] - param_1[1]) / 0xc) - uVar13,uVar13);
              uVar13 = 0;
              uVar12 = 0;
              uVar11 = 0;
            }
            uVar9 = fn_82BA8E18(piVar14);
            uVar7 = fn_82BAB540(piVar14,param_1[0x23]);
            fn_82BA8CB8(param_1,uVar7,uVar9);
          }
          bVar6 = true;
          if ((!bVar10) && (!bVar5)) {
            puVar2 = (uint *)param_1[4];
            uVar4 = *puVar2;
            uVar3 = puVar2[2];
            puVar2[2] = uVar3 | 0xe0000000;
            *puVar2 = uVar4 & 0x30fc07f | 0xc8000000;
            puVar2[2] = (lbl_820E3014 & 0x1f) << 0x18 | uVar3 & 0xe0ffffff | 0xe0000000;
            *puVar2 = uVar4 & 0x3004040 | 0xc8000000;
          }
          if (*(char *)param_1[0x23] == '\0') {
            fn_82BA98E0(param_1,param_2,&piStack_b0);
            piVar14 = piStack_b0;
          }
          (**(code **)(*piVar14 + 0xc))(piVar14,param_1,param_1[4],*param_1);
          cVar8 = (**(code **)(*piVar14 + 0x18))(piVar14);
          if (cVar8 == '\0') {
            if ((*(uint *)(&lbl_8316FF50 + piVar14[6] * 0x34) >> 2 & 1) == 0) {
              if (bVar10) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df6e8,0xffffffff820df268,0x619);
              }
              bVar10 = true;
            }
            else {
              if (bVar5) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df6d0,0xffffffff820df268,0x616);
              }
              bVar5 = true;
            }
            uVar3 = (uint)((uVar13 & 0xffffffff) << 1);
            uVar4 = 0 << (uVar3 & 0x3e);
          }
          else {
            uVar3 = (uint)((uVar13 & 0xffffffff) << 1);
            uVar4 = 1 << (uVar3 & 0x3e);
            cVar8 = (**(code **)(*piVar14 + 0x1c))(piVar14);
            if (cVar8 != '\0') {
              uVar11 = (uint)*(byte *)(piVar14 + 0x2c) << ((uint)uVar13 & 0x3f) | uVar11;
            }
            if ((bVar5) || (bVar10)) {
              fn_82AB15D0(0,0xffffffff820d2ea4,pcStack_a8,0xffffffff820df268,0x60f);
            }
            bVar10 = true;
            bVar5 = true;
            param_1[0x10] = param_1[0x10] + 1;
          }
          uVar12 = uVar4 | uVar12;
          param_2 = iStack0000001c;
          if ((((uint)piVar14[0x39] >> 0xc & 1) != 0) || (cStack00000027 != '\0')) {
            cStack00000027 = '\0';
            uVar12 = 1 << (uVar3 + 1 & 0x3f) | uVar12;
          }
        }
        else {
          cVar8 = (**(code **)(*piVar14 + 0x38))(piVar14);
          if (cVar8 != '\0') {
            cStack00000027 = '\0';
            if (bVar6) {
              fn_82BA8BE0(param_1,uVar12,uVar11,
                                (longlong)((param_1[4] - param_1[1]) / 0xc) - uVar13,uVar13);
              uVar13 = 0;
              uVar12 = 0;
              uVar11 = 0;
              bVar6 = false;
            }
            iVar1 = piVar14[6];
            if (iVar1 == 0x8e) {
              if ((*(int *)(*(int *)(*param_1 + 0xab0) + 0x824) == 0) &&
                 (*(char *)(param_1 + 0x1f) == '\0')) {
                fn_82BA8CB8(param_1,0,2);
                *(undefined1 *)(param_1 + 0x1f) = 1;
              }
              uVar9 = 1;
            }
            else {
              if (iVar1 != 0x8f) {
                if ((iVar1 == 0x90) || (iVar1 == 0x91)) {
                  fn_82BA8CB8(param_1,piVar14[0x2a],2);
                  *(undefined1 *)(param_1 + 0x1f) = 1;
                }
                goto LAB_82bac0fc;
              }
              if ((*(int *)(*(int *)(*param_1 + 0xab0) + 0x824) == 0) &&
                 (*(char *)(param_1 + 0x1f) == '\0')) {
                fn_82BA8CB8(param_1,0,2);
                *(undefined1 *)(param_1 + 0x1f) = 1;
              }
              uVar9 = 3;
            }
            fn_82BA8CB8(param_1,piVar14[0x2a],uVar9);
            *(undefined1 *)((int)param_1 + 0x7d) = 1;
          }
LAB_82bac0fc:
          if (((uint)piVar14[0x39] >> 0xc & 1) != 0) {
            fn_82AB15D0(0,0xffffffff820d2ea4,pcStack_ac,0xffffffff820df268,0x5ba);
          }
        }
        if ((((uint)piVar14[0x39] >> 2 & 1) == 0) && ((bVar10 || (bVar5)))) {
          iVar1 = param_1[0xf];
          uVar13 = uVar13 + 1;
          param_1[0xf] = iVar1 + 1;
          param_1[4] = param_1[4] + 0xc;
          uVar4 = *(uint *)(&lbl_8316FF50 + piVar14[6] * 0x34);
          if (((uVar4 >> 3 & 1) != 0) &&
             (((((uVar4 >> 1 & 1) != 0 || ((uVar4 >> 2 & 1) != 0)) &&
               (param_1[0x12] = param_1[0x12] + 1, bVar10)) && (bVar5)))) {
            param_1[0x11] = param_1[0x11] + 1;
          }
          if (*(int *)(*param_1 + 0x560) * 3 < iVar1 + 1) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df31c,0xffffffff820df268,0x632);
          }
          bVar10 = false;
          bVar5 = false;
        }
        if (((((uint)piVar14[0x39] >> 8 & 1) != 0) && (0 < (int)uVar13)) || ((int)uVar13 == 6)) {
          fn_82BA8BE0(param_1,uVar12,uVar11,
                            (longlong)((param_1[4] - param_1[1]) / 0xc) - uVar13,uVar13);
          uVar13 = 0;
          uVar12 = 0;
          uVar11 = 0;
          bVar6 = false;
        }
        (**(code **)(*piVar14 + 0x10))(piVar14,param_1,param_1[4],*param_1);
      }
LAB_82bac544:
      piStack_b0 = (int *)piVar14[2];
    } while (piStack_b0[2] != 0);
  }
  if ((bVar6) && (0 < (int)uVar13)) {
    fn_82BA8BE0(param_1,uVar12,uVar11,(longlong)((param_1[4] - param_1[1]) / 0xc) - uVar13,
                      uVar13);
  }
  return;
}

