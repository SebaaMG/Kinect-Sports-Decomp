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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82681838();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B1F0();
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696330();
extern int fn_82696D38();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_82748900(int param_1)

{
  char cVar2;
  int iVar1;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 *puStack_d0;
  undefined4 *puStack_cc;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  int aiStack_b0 [4];
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [8];
  double dStack_38;
  undefined1 auStack_30 [8];
  double dStack_28;
  
  cVar2 = fn_82695468(param_1,0x12);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eee4,0,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 0;
    }
    dStack_38 = (double)*(float *)(iVar1 + 0x30);
    auStack_40[0] = 3;
    fn_82696D38(&puStack_d0,auStack_40,*(undefined4 *)(param_1 + 0x18),6,0);
    fn_82696330(auStack_40);
    dStack_48 = (double)*(float *)(iVar1 + 0x38);
    auStack_50[0] = 3;
    fn_82696D38(&puStack_cc,auStack_50,*(undefined4 *)(param_1 + 0x18),6,0);
    fn_82696330(auStack_50);
    dStack_28 = (double)*(float *)(iVar1 + 0x40);
    auStack_30[0] = 3;
    fn_82696D38(&puStack_c8,auStack_30,*(undefined4 *)(param_1 + 0x18),6,0);
    fn_82696330(auStack_30);
    dStack_78 = (double)*(float *)(iVar1 + 0x48);
    auStack_80[0] = 3;
    fn_82696D38(&puStack_c4,auStack_80,*(undefined4 *)(param_1 + 0x18),6,0);
    fn_82696330(auStack_80);
    dStack_98 = (double)*(float *)(iVar1 + 0x34);
    auStack_a0[0] = 3;
    fn_82696D38(&puStack_c0,auStack_a0,*(undefined4 *)(param_1 + 0x18),6,0);
    fn_82696330(auStack_a0);
    dStack_58 = (double)*(float *)(iVar1 + 0x3c);
    auStack_60[0] = 3;
    fn_82696D38(&puStack_bc,auStack_60,*(undefined4 *)(param_1 + 0x18),6,0);
    fn_82696330(auStack_60);
    dStack_88 = (double)*(float *)(iVar1 + 0x44);
    auStack_90[0] = 3;
    fn_82696D38(&puStack_b8,auStack_90,*(undefined4 *)(param_1 + 0x18),6,0);
    fn_82696330(auStack_90);
    dStack_68 = (double)*(float *)(iVar1 + 0x4c);
    auStack_70[0] = 3;
    fn_82696D38(&puStack_b4,auStack_70,*(undefined4 *)(param_1 + 0x18),6,0);
    fn_82696330(auStack_70);
    fn_8268AFB0(&uStack_f0,lbl_831E7E64);
    fn_8268B1F0(&uStack_f0,0xffffffff82012c50,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,*puStack_d0,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,0xffffffff82012c3c,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,*puStack_cc,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,0xffffffff82012c28,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,*puStack_c8,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,0xffffffff82012c14,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,*puStack_c4,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,0xffffffff82012c04,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,*puStack_c0,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,0xffffffff82012bf4,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,*puStack_bc,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,0xffffffff82012be4,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,*puStack_b8,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,0xffffffff82012bd4,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,*puStack_b4,0xffffffffffffffff);
    fn_8268B1F0(&uStack_f0,0xffffffff821c24f0,0xffffffffffffffff);
    uVar3 = (ulonglong)uStack_f0;
    if (uVar3 == 0) {
      uVar3 = 0xffffffff82196582;
    }
    iVar1 = fn_82694610((ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,uVar3,
                              uStack_ec);
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    aiStack_b0[0] = iVar1;
    fn_82681838(*(undefined4 *)(param_1 + 4),aiStack_b0);
    lVar4 = (ulonglong)*(uint *)(iVar1 + 8) - 1;
    *(int *)(iVar1 + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(iVar1);
    }
    fn_8268AFD8(&uStack_f0);
    piVar6 = aiStack_b0;
    lVar4 = 7;
    do {
      piVar6 = piVar6 + -1;
      lVar5 = (ulonglong)*(uint *)(*piVar6 + 8) - 1;
      *(int *)(*piVar6 + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}

