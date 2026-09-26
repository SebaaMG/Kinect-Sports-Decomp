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
#define TBLr 0
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82CE5410();
extern int fn_82CE8AF0();
extern int fn_82CE9108();
extern int fn_82CFBA90();
extern int fn_82CFBAD0();
extern int fn_82CFBAD8();
extern int fn_830838A8();
extern int fn_83083AA0();
extern int fn_83083C28();
extern int fn_83085238();
extern int fn_830852B0();
extern int fn_830853E8();
extern int fn_830855B0();
extern int fn_83085650();
extern int fn_83097440();
extern int fn_83097530();
extern unsigned int iStack_d4;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int register0x0000000c;
extern unsigned int uStack_100;
extern unsigned int uStack_10a;
extern unsigned int uStack_10c;
extern unsigned int uStack_10e;
extern unsigned int uStack_10f;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_4b;
extern unsigned int uStack_50;
extern unsigned int uStack_ab;
extern unsigned int uStack_b0;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;


void fn_82DB3D70(int param_1,int *param_2,undefined4 *param_3,ulonglong param_4,int *param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar8;
  int iVar9;
  ulonglong uVar5;
  undefined4 *puVar10;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar11;
  uint uVar12;
  uint uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined4 uStack_100;
  undefined4 *puStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined1 *puStack_c0;
  undefined4 uStack_b0;
  undefined1 uStack_ab;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [32];
  undefined4 auStack_70 [2];
  undefined1 auStack_68 [24];
  undefined4 uStack_50;
  undefined1 uStack_4b;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  if (((param_4 & 0xffffffff) == 0) || (param_5 == (int *)0x0)) {
    puStack_c0 = (undefined1 *)register0x0000000c;
    fn_83097440(auStack_68,param_3,*(undefined4 *)(param_1 + 0x1c));
    iVar9 = *param_2;
    if (iVar9 != 0) {
      fn_83083AA0(iVar9);
      iVar8 = fn_82CE5410();
      (**(code **)(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),iVar9,0x50);
    }
    uVar6 = fn_83097530(auStack_68);
    fn_830838A8(&uStack_50);
    piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 0x58);
    (**(code **)(*piVar2 + 0x40))(piVar2,auStack_40,auStack_30);
    uStack_50 = (undefined4)uVar6;
    uStack_4b = 0;
    iVar9 = fn_82CE5410();
    uVar5 = (**(code **)(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),0x50);
    if ((uVar5 & 0xffffffff) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = fn_83083C28(uVar5,&uStack_50);
    }
    *param_2 = iVar9;
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar10 = *(undefined4 **)(iVar9 + 4);
    if (puVar10 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar10 = "TtbuildTreeSingleThreaded";
      uVar7 = TBLr;
      puVar10[1] = (int)uVar7;
      *(undefined4 **)(iVar9 + 4) = puVar10 + 3;
    }
    fn_83085238(auStack_70,uVar6);
    fn_830855B0(auStack_68,0,uVar6,auStack_70[0]);
    fn_83085650(auStack_70,*param_2);
    fn_830852B0(auStack_70,uVar6);
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar10 = *(undefined4 **)(iVar9 + 4);
    if (puVar10 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar10 = &lbl_82132BC4;
      uVar6 = TBLr;
      puVar10[1] = (int)uVar6;
      *(undefined4 **)(iVar9 + 4) = puVar10 + 3;
    }
  }
  else {
    iVar9 = *param_2;
    if (iVar9 != 0) {
      fn_83083AA0(iVar9);
      iVar8 = fn_82CE5410();
      (**(code **)(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),iVar9,0x50);
    }
    uVar1 = param_3[1];
    fn_830838A8(&uStack_b0);
    uStack_ab = 1;
    piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 0x58);
    uStack_b0 = uVar1;
    (**(code **)(*piVar2 + 0x40))(piVar2,auStack_a0,auStack_90);
    iVar9 = fn_82CE5410();
    uVar5 = (**(code **)(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),0x50);
    if ((uVar5 & 0xffffffff) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = fn_83083C28(uVar5,&uStack_b0);
    }
    *param_2 = iVar9;
    fn_83085238(&uStack_118,uVar1);
    iVar9 = fn_82CE5410();
    puVar10 = (undefined4 *)
              (**(code **)(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),0x10);
    uStack_120 = 4;
    *puVar10 = 4;
    iVar9 = fn_82CE5410();
    uVar6 = (**(code **)(**(int **)(iVar9 + 0xc) + 0xc))(*(int **)(iVar9 + 0xc),&uStack_120,4);
    uVar11 = uStack_120;
    if (uStack_120 == 0) {
      uVar11 = 0x80000000;
    }
    uStack_11c = 4;
    iVar9 = fn_82CE5410();
    uVar7 = (**(code **)(**(int **)(iVar9 + 0xc) + 0xc))(*(int **)(iVar9 + 0xc),&uStack_11c,4);
    uVar12 = uStack_11c;
    if (uStack_11c == 0) {
      uVar12 = 0x80000000;
    }
    iVar9 = fn_82CE5410();
    uVar5 = (**(code **)(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),4);
    if ((uVar5 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82CFBA90(uVar5,0,1000);
    }
    uStack_10e = 1;
    uStack_f8 = 0;
    uStack_10f = 3;
    uStack_10c = 0x60;
    uStack_10a = 0xffff;
    uStack_110 = 6;
    puStack_c0 = (undefined1 *)*param_3;
    puVar3 = (undefined4 *)*param_2;
    uStack_f4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x78);
    uStack_ec = uStack_114;
    uStack_100 = (undefined4)uVar5;
    uStack_f0 = uStack_118;
    uStack_e0 = (undefined4)uVar6;
    uStack_dc = (undefined4)uVar7;
    uStack_d8 = puVar3[4];
    uStack_e8 = *puVar3;
    iStack_d4 = puVar3[6] + puVar3[5];
    uStack_e4 = puVar3[7];
    uStack_d0 = puVar3[6];
    puStack_fc = puVar10;
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar3 = *(undefined4 **)(iVar9 + 4);
    if (puVar3 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar3 = "LtbuildTreeDistributed";
      puVar3[3] = "Stqueue";
      uVar4 = TBLr;
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(iVar9 + 4) = puVar3 + 4;
    }
    fn_82CE8AF0(param_4,&uStack_110,0);
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar3 = *(undefined4 **)(iVar9 + 4);
    if (puVar3 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar3 = "Ststart";
      uVar4 = TBLr;
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(iVar9 + 4) = puVar3 + 3;
    }
    (**(code **)(*param_5 + 0xc))(param_5,param_4,3);
    fn_82CE9108(param_4);
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar3 = *(undefined4 **)(iVar9 + 4);
    if (puVar3 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar3 = "StwaitForCompletion";
      uVar4 = TBLr;
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(iVar9 + 4) = puVar3 + 3;
    }
    (**(code **)(*param_5 + 0x10))(param_5);
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar3 = *(undefined4 **)(iVar9 + 4);
    if (puVar3 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar3 = "StwaitSemaphore";
      uVar4 = TBLr;
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(iVar9 + 4) = puVar3 + 3;
    }
    fn_82CFBAD8(uVar5);
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar3 = *(undefined4 **)(iVar9 + 4);
    if (puVar3 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar3 = "StfinishPpu";
      uVar4 = TBLr;
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(iVar9 + 4) = puVar3 + 3;
    }
    fn_830853E8(*param_2,uVar1,uStack_e0,uStack_dc);
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar3 = *(undefined4 **)(iVar9 + 4);
    if (puVar3 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar3 = &lbl_8202CF7C;
      uVar4 = TBLr;
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(iVar9 + 4) = puVar3 + 3;
    }
    fn_830852B0(&uStack_118,uVar1);
    iVar9 = fn_82CE5410();
    (**(code **)(**(int **)(iVar9 + 0x10) + 8))(*(int **)(iVar9 + 0x10),puVar10,0x10);
    if ((uVar5 & 0xffffffff) != 0) {
      fn_82CFBAD0(uVar5);
      iVar9 = fn_82CE5410();
      (**(code **)(**(int **)(iVar9 + 0x10) + 8))(*(int **)(iVar9 + 0x10),uVar5,4);
    }
    iVar9 = fn_82CE5410();
    if ((uVar12 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uVar7,uVar12 & 0x3fffffff,4);
    }
    iVar9 = fn_82CE5410();
    if ((uVar11 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
                (*(int **)(iVar9 + 0xc),uVar6,uVar11 & 0x3fffffff,4);
    }
  }
  return;
}

