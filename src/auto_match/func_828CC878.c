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
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_ec;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_82897B18();
extern int fn_82897BE8();
extern int fn_828A12F0();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_100;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_fc;


undefined8 fn_828CC878(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint auStack_130 [4];
  undefined4 uStack_120;
  uint uStack_11c;
  uint auStack_110 [4];
  undefined4 uStack_100;
  uint uStack_fc;
  undefined *puStack_f0;
  undefined1 auStack_ec [76];
  undefined **appuStack_a0 [40];
  
  puStack_f0 = &lbl_821AA8E0;
  appuStack_a0[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_a0,auStack_ec,0);
  *(undefined ***)(auStack_ec + *(int *)(puStack_f0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_ec,2);
  piVar8 = (int *)fn_828A12F0(*(undefined4 *)(param_2 + 0x6c),*(undefined4 *)(param_2 + 0xa8));
  uVar2 = *(undefined4 *)(param_2 + 0x6c);
  uVar3 = (**(code **)(**(int **)(param_2 + 0x80) + 0xc))
                    (auStack_130,*(int **)(param_2 + 0x80),param_3,param_2 + 0x88);
  uVar1 = *(undefined1 *)(param_2 + 0xac);
  uVar4 = fn_82897B18(*(undefined4 *)(param_2 + 0x80));
  uVar5 = fn_82897BE8(*(undefined4 *)(param_2 + 0x80));
  uVar6 = (**(code **)(*piVar8 + 0x28))(auStack_110,piVar8,param_3,param_2 + 0x98,uVar2);
  uVar7 = fn_82240158(&puStack_f0,0xffffffff82026564);
  uVar6 = fn_8223B728(uVar7,uVar6);
  uVar6 = fn_82240158(uVar6,0xffffffff82023910);
  uVar5 = fn_8223B728(uVar6,uVar5);
  uVar5 = fn_82240158(uVar5,0xffffffff82023824);
  uVar4 = fn_82520AC8(uVar5,uVar4);
  uVar4 = fn_82240158(uVar4,0xffffffff82026554);
  uVar4 = fn_8223FBB0(uVar4,uVar1);
  uVar4 = fn_82240158(uVar4,0xffffffff82026548);
  uVar3 = fn_8223B728(uVar4,uVar3);
  fn_82240158(uVar3,0xffffffff82196fb0);
  if (0xf < uStack_fc) {
    fn_8265CA20(auStack_110[0]);
  }
  uStack_100 = 0;
  uStack_fc = 0xf;
  auStack_110[0] = auStack_110[0] & 0xffffff;
  if (0xf < uStack_11c) {
    fn_8265CA20(auStack_130[0]);
  }
  uStack_11c = 0xf;
  uStack_120 = 0;
  auStack_130[0] = auStack_130[0] & 0xffffff;
  fn_822403C8(param_1,auStack_ec);
  fn_8223DBE8(appuStack_a0);
  appuStack_a0[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_a0);
  return param_1;
}

