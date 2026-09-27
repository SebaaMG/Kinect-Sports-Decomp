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
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f4;
extern unsigned int fStack_f8;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_8268CCB0();
extern int fn_8275D280();
extern int fn_8275F338();
extern int fn_8275FA28();
extern int fn_82761DE8();
extern int fn_82762930();
extern int fn_82762AE0();
extern int fn_82763FD0();
extern int fn_82763FE8();
extern int fn_827748E0();
extern int fn_8277AFA8();
extern int fn_82784098();
extern int fn_827842B8();
extern unsigned int iStack_88;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_8200DFF4;
extern float lbl_82014C4C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_94;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_f0;


void fn_82776370(int param_1,int *param_2,int *param_3,undefined8 param_4,char param_5,
                  char param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  int *piVar5;
  char cVar6;
  int *piVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  struct { float first; float second; } stack_pair_110;

  longlong lStack_108;
  longlong lStack_100;
  float fStack_f8;
  float fStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  char cStack_dc;
  struct { float first; float second; } stack_pair_d8;

  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_94;
  int iStack_88;

  if (param_3 != (int *)0x0) {
    fn_82762930(&uStack_b0);
    dVar14 = (double)(*(float *)(param_1 + 0x9c8) * lbl_82014C4C);
    piVar5 = param_3;
    piVar7 = (int *)0x0;
    if (param_5 != '\0') {
      uVar4 = fn_8267B890(lbl_831E7E64,0x44,0);
      if ((uVar4 & 0xffffffff) == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)fn_82762AE0(uVar4,0x3c8);
      }
      iVar11 = param_1 + 0x930;
      (**(code **)(*param_3 + 0x18))((double)lbl_8200D898,param_3,iVar11);
      dVar15 = (double)lbl_821AAD20;
      fn_82784098((double)lbl_82002AE0,(double)lbl_8200DFF4,dVar15,dVar15,iVar11);
      cVar6 = fn_827748E0(param_1,iVar11);
      if (cVar6 == '\0') {
        dVar14 = -dVar14;
      }
      dVar13 = (double)(float)(dVar14 * (double)lbl_82002C5C);
      *(float *)(param_1 + 0x904) = (float)(dVar14 * (double)lbl_82002C5C);
      if (dVar13 < dVar15) {
        dVar13 = -dVar13;
      }
      *(float *)(param_1 + 0x908) = (float)dVar13;
      *(undefined4 *)(param_1 + 0x90c) = 0;
      fn_827842B8(param_1 + 0x978);
      fn_8277AFA8(param_1 + 0x904,iVar11,0xffffffffffffffff,param_1 + 0x978,0);
      uVar8 = 0;
      piVar7 = piVar5;
      if (*(int *)(param_1 + 0x990) != 0) {
        dVar14 = (double)lbl_82006848;
        do {
          piVar12 = (int *)(*(int *)((uVar8 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x99c)) +
                           (uVar8 & 0x3f) * 0x18);
          if (2 < (uint)piVar12[1]) {
            pfVar9 = (float *)(*(int *)(((uint)piVar12[2] >> 6 & 0x3fffffc) +
                                       *(int *)(*piVar12 + 0x14)) + (piVar12[2] & 0xffU) * 8);
            fn_8275D280(&uStack_b0);
            uStack_b0 = 1;
            uStack_ac = 0;
            iVar11 = (int)*pfVar9;
            lStack_100 = (longlong)iVar11;
            iVar1 = (int)((double)pfVar9[1] * dVar14);
            lStack_108 = (longlong)iVar1;
            fn_8275FA28(&uStack_b0,iVar11,iVar1,0);
            uVar10 = 1;
            if (1 < (uint)piVar12[1]) {
              do {
                pfVar9 = (float *)(*(int *)((uVar10 + piVar12[2] >> 6 & 0x3fffffc) +
                                           *(int *)(*piVar12 + 0x14)) +
                                  ((uVar10 + piVar12[2]) * 8 & 0x7f8));
                iVar11 = (int)((double)pfVar9[1] * dVar14);
                lStack_108 = (longlong)iVar11;
                fn_82763FD0(&uStack_b0,(int)*pfVar9,iVar11);
                uVar10 = uVar10 + 1;
              } while (uVar10 < (uint)piVar12[1]);
            }
            if (iStack_88 != 0) {
              fn_8275F338(&uStack_b0,piVar5 + 10,piVar5 + 0xd);
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 0x990));
      }
    }
    piVar5 = (int *)(**(code **)(*piVar5 + 0x48))(piVar5);
    while (cVar6 = (**(code **)(*piVar5 + 4))(piVar5,&uStack_f0), cVar6 != '\0') {
      if (uStack_f0 == 0) {
        dVar14 = (double)fStack_ec;
        dVar15 = (double)fStack_e8;
        fn_8275D280(&uStack_b0);
        stack_pair_110.first = (float)dVar14;
        stack_pair_110.second = (float)dVar15;
        uStack_b0 = 1;
        uStack_ac = 0;
        if (param_6 != '\0') {
          fn_8268CCB0(param_1 + 0x9cc,&fStack_c8,&stack_pair_110.first);
          dVar14 = (double)fStack_c8;
          dVar15 = (double)fStack_c4;
          stack_pair_110.first = fStack_c8;
          stack_pair_110.second = fStack_c4;
        }
        lStack_108 = (longlong)(int)dVar15;
        lStack_100 = (longlong)(int)dVar14;
        fn_8275FA28(&uStack_b0,(int)dVar14,(int)dVar15,0);
      }
      else if (uStack_f0 < 3) {
        if (iStack_88 != 0) {
          fn_8275F338(&uStack_b0,param_2 + 10,param_2 + 0xd);
        }
      }
      else if (uStack_f0 == 3) {
        if (cStack_dc == '\0') {
          stack_pair_110.first = fStack_e4;
          stack_pair_110.second = fStack_e0;
          if (param_6 != '\0') {
            fn_8268CCB0(param_1 + 0x9cc,&stack_pair_d8.first,&stack_pair_110.first);
            stack_pair_110.first = stack_pair_d8.first;
            stack_pair_110.second = stack_pair_d8.second;
          }
          lStack_108 = (longlong)(int)stack_pair_110.second;
          lStack_100 = (longlong)(int)stack_pair_110.first;
          fn_82763FD0(&uStack_b0,(int)stack_pair_110.first,(int)stack_pair_110.second);
        }
        else {
          stack_pair_110.first = fStack_ec;
          stack_pair_110.second = fStack_e8;
          fStack_f8 = fStack_e4;
          fStack_f4 = fStack_e0;
          fVar2 = fStack_e4;
          fVar3 = fStack_e0;
          if (param_6 != '\0') {
            fn_8268CCB0(param_1 + 0x9cc,&fStack_d0,&stack_pair_110.first);
            stack_pair_110.first = fStack_d0;
            stack_pair_110.second = fStack_cc;
            fn_8268CCB0(param_1 + 0x9cc,&fStack_c0,&fStack_f8);
            fVar2 = fStack_c0;
            fVar3 = fStack_bc;
          }
          lStack_108 = (longlong)(int)stack_pair_110.second;
          lStack_100 = (longlong)(int)stack_pair_110.first;
          fn_82763FE8(&uStack_b0,(int)stack_pair_110.first,(int)stack_pair_110.second,(int)fVar2,(int)fVar3);
        }
      }
    }
    if ((param_5 != '\0') || (param_6 != '\0')) {
      (**(code **)(*param_2 + 0x14))(param_2,param_4);
    }
    fn_8267C498(piVar5);
    if (piVar7 != (int *)0x0) {
      fn_82761DE8(piVar7);
    }
    fn_8267BE38(uStack_94);
  }
  return;
}
