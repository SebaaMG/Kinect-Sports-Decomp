extern unsigned int *puRam832187e0;
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
extern unsigned int *auStack_c4;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_cc;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_dc;
extern float fRam832187c0;
extern float fRam832187c4;
extern float fRam832187cc;
extern float fRam832187d0;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern int fn_829E37D0();
extern int fn_829E37E0();
extern int fn_829E3800();
extern int fn_829E3A90();
extern int fn_829E4450();
extern int fn_829E44C8();
extern int fn_829E4700();
extern int fn_829E55F8();
extern int fn_829E59C8();
extern int memcpy();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int iStack_e8;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005748;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8201EBA4;
extern unsigned int lbl_8201FBB0;
extern unsigned int lbl_82057B24;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83217B28;
extern unsigned int lbl_83217B60;
extern unsigned int lbl_832187B4;
extern unsigned int uRam832187b8;
extern unsigned int uRam832187bc;
extern unsigned int uRam832187c8;
extern unsigned int uRam832187d4;
extern unsigned int uRam832187d8;
extern unsigned int uRam832187dc;
extern unsigned int uRam832187e8;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_829E47A8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7,ulonglong param_8)

{
  float fVar1;
  float fVar2;
  int iVar4;
  undefined8 uVar3;
  double extraout_f1;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 in_stack_00000050;
  int in_stack_0000005c;
  float *in_stack_00000064;
  float fStack_f0;
  float fStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [12];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [4];
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  float fStack_9c;
  float fStack_98;

  iVar4 = fn_82F6A540();
  if (((param_6 & 0xffffffff) == 0) || ((param_8 & 0xffffffff) == 0)) {
    uVar3 = 0xffffffff80070057;
    goto LAB_829e4af4;
  }
  if (*(int *)(iVar4 + 0xac) != 0) {
    dVar5 = extraout_f1;
    uVar3 = fn_829E3A90(*(undefined4 *)(iVar4 + 4),iVar4);
    if ((int)uVar3 < 0) goto LAB_829e4af4;
    *(int *)(iVar4 + 0x78) = (int)param_4;
    *(int *)(iVar4 + 0x7c) = (int)param_5;
    (**(code **)(*(int *)param_6 + 4))(param_6,auStack_d0,auStack_cc,auStack_c8,auStack_c4);
    fn_829E55F8(iVar4 + 8,param_4,param_5);
    fn_829E59C8(iVar4 + 0x24,param_4,param_5);
    uVar3 = fn_829E37D0(param_8,&fStack_f0);
    if ((int)uVar3 < 0) goto LAB_829e4af4;
    if (lbl_821AAD20 < fStack_f0) {
      uVar3 = fn_829E4450(iVar4,in_stack_0000005c,&fStack_ec);
      if (-1 < (int)uVar3) {
        dVar6 = (double)fStack_ec;
        fVar1 = (float)(dVar6 * dVar5);
        dVar5 = (double)fStack_f0;
        if (((lbl_82005CCC < fVar1) || (fVar2 = lbl_82057B24, lbl_82057B24 <= fVar1)) &&
           (fVar2 = fVar1, lbl_82005CCC < fVar1)) {
          fVar2 = lbl_82005CCC;
        }
        *(float *)(iVar4 + 0x88) = fVar2;
        dVar9 = (double)lbl_82002AE0;
        fStack_c0 = lbl_82005748;
        fStack_bc = lbl_82005748;
        fStack_9c = lbl_8201EBA4;
        fStack_98 = lbl_8201FBB0;
        uStack_b8 = 1;
        uStack_b4 = 1;
        uStack_b0 = 4;
        uStack_a8 = 1;
        uStack_a0 = 0;
        uVar3 = fn_829E44C8(dVar5,dVar6,dVar9,iVar4,param_2,param_3,param_6,&uStack_b8,
                              in_stack_0000005c);
        if (-1 < (int)uVar3) {
          dVar8 = (double)fStack_ec;
          dVar10 = (double)fStack_f0;
          uVar3 = fn_829E4700(dVar8,dVar10,iVar4);
          if (-1 < (int)uVar3) {
            dVar7 = (double)fStack_ec;
            fStack_bc = (float)dVar10;
            fStack_9c = (float)dVar8;
            fStack_98 = fStack_ec;
            uStack_a8 = in_stack_00000050;
            if (in_stack_0000005c == *(int *)(iVar4 + 0xfc)) {
              uStack_a0 = (uint)(iStack_e8 != 0);
            }
            else {
              uStack_a0 = 2;
            }
            memcpy(iVar4 + 0xb0,&fStack_c0,0x30);
            uVar3 = fn_829E37E0(param_8,auStack_dc);
            if (-1 < (int)uVar3) {
              uStack_e4 = lbl_8200133C;
              uVar3 = fn_829E3800(param_8,&uStack_e4);
              if (-1 < (int)uVar3) {
                *(int *)(iVar4 + 0xfc) = in_stack_0000005c;
                *(float *)(iVar4 + 0x6c) = fStack_c0;
                *(undefined4 *)(iVar4 + 0xa8) = 1;
                *(float *)(iVar4 + 0x70) = (float)dVar10;
                *(undefined4 *)(iVar4 + 0x74) = uStack_e0;
                *(float *)(iVar4 + 0x100) = (float)dVar6;
                *(float *)(iVar4 + 0xa0) = (float)dVar9;
                *(float *)(iVar4 + 0xa4) = (float)dVar5;
                *in_stack_00000064 = fStack_c0;
                if (lbl_83217B28 != 0) {
                  lbl_832187B4 = uStack_b0;
                  puRam832187e0 = auStack_d0;
                  uRam832187b8 = uStack_b8;
                  uRam832187bc = uStack_b4;
                  fRam832187c4 = (float)dVar10;
                  uRam832187dc = (undefined4)param_2;
                  fRam832187cc = (float)dVar8;
                  fRam832187d0 = (float)dVar7;
                  uRam832187e8 = lbl_83217B60;
                  fRam832187c0 = fStack_c0;
                  uRam832187c8 = uStack_e0;
                  uRam832187d4 = (int)param_4;
                  uRam832187d8 = (int)param_5;
                }
                uVar3 = 0;
              }
            }
          }
        }
      }
      goto LAB_829e4af4;
    }
  }
  uVar3 = 0xffffffff8000ffff;
LAB_829e4af4:
  fn_82F6A58C(uVar3);
  return;
}
