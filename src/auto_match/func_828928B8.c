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
extern unsigned int *auStack_138;
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_a0;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223F5A0();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_82897BE8();
extern int fn_828B5A20();
extern int fn_82F622E0();
extern int fn_82F62528();
extern int fn_82F62578();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_8202115C;
extern unsigned int lbl_820211D4;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_100;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_fc;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_828928B8(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint auStack_180 [4];
  undefined4 uStack_170;
  uint uStack_16c;
  uint auStack_160 [4];
  undefined4 uStack_150;
  uint uStack_14c;
  undefined **appuStack_140 [2];
  undefined1 auStack_138 [12];
  undefined4 *puStack_12c;
  undefined4 *puStack_128;
  undefined4 *puStack_11c;
  undefined4 *puStack_118;
  undefined4 *puStack_10c;
  undefined4 *puStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined **appuStack_f0 [20];
  undefined1 auStack_a0 [160];
  
  appuStack_f0[0] = &lbl_82020F40;
  appuStack_140[0] = (undefined **)&lbl_821AA8E0;
  fn_8223CD08(appuStack_f0,appuStack_140 + 1,0);
  *(undefined ***)((int)appuStack_140 + (int)appuStack_140[0][1]) = &lbl_82021284;
  fn_8223CF38(appuStack_140 + 1,2);
  if (*(char *)(param_2 + 0x9d) == '\0') {
    uVar11 = 0xffffffff82023878;
  }
  else {
    uVar11 = 0xffffffff82023880;
  }
  uVar3 = fn_828B5A20(auStack_180,param_2 + 0x80,param_3,*(undefined4 *)(param_2 + 0x6c));
  uVar4 = fn_82240158(appuStack_140,0xffffffff8202385c);
  uVar11 = fn_82240158(uVar4,uVar11);
  uVar11 = fn_82240158(uVar11,0xffffffff82023848);
  uVar11 = fn_8223B728(uVar11,uVar3);
  fn_82240158(uVar11,0xffffffff82023800);
  if (0xf < uStack_16c) {
    fn_8265CA20(auStack_180[0]);
  }
  uStack_170 = 0;
  uStack_16c = 0xf;
  auStack_180[0] = auStack_180[0] & 0xffffff;
  if (*(char *)(param_2 + 0x9d) != '\0') {
    uVar1 = *(undefined1 *)(param_2 + 0x9e);
    uVar11 = fn_82240158(appuStack_140,0xffffffff8202383c);
    uVar11 = fn_8223FBB0(uVar11,uVar1);
    fn_82240158(uVar11,0xffffffff82196fb0);
    iVar8 = *(int *)(param_2 + 0x8c);
    uVar10 = 0;
    iVar7 = *(int *)(param_2 + 0x90) - iVar8 >> 2;
    if (iVar7 != 0) {
      iVar9 = 0;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      do {
        iVar8 = *(int *)(iVar8 + iVar9);
        if (iVar8 != 0) {
          piVar2 = *(int **)(iVar8 + 0x1c);
          puVar5 = (undefined4 *)fn_82F62578(auStack_a0,3);
          piVar6 = (int *)fn_82240158(appuStack_140,0xffffffff82023830);
          if (piVar6 == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*piVar6 + 4) + (int)piVar6;
          }
          (*(code *)*puVar5)(iVar7,*(undefined8 *)(puVar5 + 2));
          uVar11 = (**(code **)(*piVar2 + 0xc))(auStack_160,piVar2,param_3,iVar8 + 0xc);
          uVar3 = fn_82897BE8(piVar2);
          uVar4 = fn_82520AC8(piVar6,uVar10);
          uVar4 = fn_82240158(uVar4,0xffffffff82023828);
          uVar3 = fn_8223B728(uVar4,uVar3);
          uVar3 = fn_82240158(uVar3,0xffffffff82023824);
          fn_8223B728(uVar3,uVar11);
          if (0xf < uStack_14c) {
            fn_8265CA20(auStack_160[0]);
          }
          uStack_14c = 0xf;
          uStack_150 = 0;
          auStack_160[0] = auStack_160[0] & 0xffffff;
        }
        uVar10 = uVar10 + 1;
        iVar8 = *(int *)(param_2 + 0x8c);
        iVar9 = iVar9 + 4;
      } while ((uVar10 & 0xffffffff) < (ulonglong)(uint)(*(int *)(param_2 + 0x90) - iVar8 >> 2));
    }
  }
  fn_822403C8(param_1,appuStack_140 + 1);
  *(undefined ***)((int)appuStack_140 + (int)appuStack_140[0][1]) = &lbl_82021284;
  appuStack_140[1] = &lbl_820211D4;
  if ((uStack_fc & 1) != 0) {
    fn_8265CA20(*puStack_12c);
  }
  *puStack_12c = 0;
  *puStack_11c = 0;
  *puStack_10c = 0;
  *puStack_128 = 0;
  *puStack_118 = 0;
  *puStack_108 = 0;
  uStack_fc = uStack_fc & 0xfffffffe;
  uStack_100 = 0;
  appuStack_140[1] = &lbl_8202115C;
  if (piStack_104 != (int *)0x0) {
    if ((*piStack_104 != 0) &&
       (puVar5 = (undefined4 *)fn_8223F5A0(), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
    fn_8265CA20(piStack_104);
  }
  fn_82F62528(auStack_138);
  *(undefined ***)((int)appuStack_140 + (int)appuStack_140[0][1]) = &lbl_82020F40;
  appuStack_f0[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_f0);
  return param_1;
}

