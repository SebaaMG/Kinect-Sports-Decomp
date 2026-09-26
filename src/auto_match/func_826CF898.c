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
extern unsigned int *auStack_110;
extern unsigned int *auStack_12d;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_8268CC00();
extern int fn_8268CD40();
extern int fn_8268CEC0();
extern int fn_8268D280();
extern int fn_82695370();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_8269A240();
extern int fn_826BD928();
extern int fn_826C0B08();
extern int fn_826C59F8();
extern unsigned int lbl_82005720;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_12e;
extern unsigned int uStack_12f;
extern unsigned int uStack_130;


void fn_826CF898(int param_1)

{
  undefined4 uVar1;
  int *piVar4;
  undefined8 uVar2;
  int *piVar5;
  ulonglong uVar3;
  int iVar6;
  int iVar7;
  uint *puVar8;
  double dVar9;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 auStack_12d [13];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined1 auStack_110 [8];
  double dStack_108;
  undefined1 auStack_100 [8];
  double dStack_f8;
  undefined1 auStack_f0 [8];
  double dStack_e8;
  undefined1 auStack_e0 [8];
  double dStack_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  piVar4 = (int *)fn_826C59F8();
  if (piVar4 != (int *)0x0) {
    piVar5 = piVar4;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      piVar5 = (int *)fn_82695370(uVar2,uVar1);
    }
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_826BD928(piVar5 + 0x1a);
    }
    fStack_120 = lbl_821AAD20;
    fStack_11c = lbl_821AAD20;
    fStack_118 = lbl_821AAD20;
    fStack_114 = lbl_821AAD20;
    fn_8268CC00(auStack_d0);
    if (piVar5 != (int *)0x0) {
      if (piVar5 != piVar4) {
        fn_8268CC00(auStack_90);
        fn_8269A240(piVar5,auStack_90);
        fn_8268CD40(auStack_d0,auStack_90);
        fn_8268CC00(auStack_b0);
        fn_8269A240(piVar4,auStack_b0);
        fn_8268CEC0(auStack_d0,auStack_b0);
      }
      fn_8268CC00(auStack_70);
      uVar2 = (**(code **)(*piVar4 + 0x28))(auStack_50,piVar4,auStack_70);
      fn_8268D280(auStack_d0,&fStack_120,uVar2);
    }
    uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x30,0);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_826C0B08(uVar3,*(undefined4 *)(param_1 + 0x18));
    }
    uStack_12f = 0;
    iVar7 = iVar6 + 0x10;
    auStack_100[0] = 3;
    puVar8 = (uint *)(*(int *)(param_1 + 0x18) + 0x78);
    dStack_f8 = (double)fStack_120 * lbl_82005720;
    dVar9 = lbl_82005720;
    (**(code **)(*(int *)(iVar6 + 0x10) + 0x28))
              (iVar7,puVar8,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 500,auStack_100,
               &uStack_12f);
    fn_82696330(auStack_100);
    dStack_108 = (double)fStack_118 * dVar9;
    auStack_110[0] = 3;
    auStack_12d[0] = 0;
    (**(code **)(*(int *)(iVar6 + 0x10) + 0x28))
              (iVar7,puVar8,(ulonglong)*puVar8 + 0x1f8,auStack_110,auStack_12d);
    fn_82696330(auStack_110);
    dStack_e8 = (double)fStack_11c * dVar9;
    auStack_f0[0] = 3;
    uStack_130 = 0;
    (**(code **)(*(int *)(iVar6 + 0x10) + 0x28))
              (iVar7,puVar8,(ulonglong)*puVar8 + 0x1fc,auStack_f0,&uStack_130);
    fn_82696330(auStack_f0);
    dStack_d8 = (double)fStack_114 * dVar9;
    auStack_e0[0] = 3;
    uStack_12e = 0;
    (**(code **)(*(int *)(iVar6 + 0x10) + 0x28))
              (iVar7,puVar8,(ulonglong)*puVar8 + 0x200,auStack_e0,&uStack_12e);
    fn_82696330(auStack_e0);
    fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar6);
    fn_826824B0(iVar6);
  }
  return;
}

