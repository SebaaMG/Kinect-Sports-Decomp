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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_12c;
extern unsigned int *auStack_f0;
extern int fn_82CE5410();
extern int fn_82CE8AF0();
extern int fn_82CE9108();
extern int fn_82CFBAD8();
extern int fn_830838A8();
extern int fn_83083B48();
extern int fn_83083C28();
extern int fn_830853E8();
extern int fn_830855B0();
extern int fn_83085650();
extern int fn_83097440();
extern int fn_83097530();
extern unsigned int iStack_a4;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_11b;
extern unsigned int uStack_120;
extern unsigned int uStack_130;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_da;
extern unsigned int uStack_dc;
extern unsigned int uStack_de;
extern unsigned int uStack_df;
extern unsigned int uStack_e0;


void fn_82DB2098(int param_1,int *param_2,undefined4 *param_3,int param_4,ulonglong param_5,
                  int *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar7;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar8;
  uint uVar9;
  uint uStack_130;
  uint auStack_12c [3];
  undefined4 uStack_120;
  undefined1 uStack_11b;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_90;
  
  if (((param_6 == (int *)0x0) || ((param_5 & 0xffffffff) == 0)) || ((int)param_3[1] < 0x20)) {
    fn_83097440(auStack_f0,param_3,param_4);
    uVar5 = fn_83097530(auStack_f0);
    fn_830838A8(&uStack_120);
    uStack_120 = (undefined4)uVar5;
    uStack_11b = 0;
    (**(code **)(**(int **)(param_4 + 0x58) + 0x40))
              (*(int **)(param_4 + 0x58),auStack_110,auStack_100);
    if (*param_2 == 0) {
      iVar7 = fn_82CE5410();
      uVar4 = (**(code **)(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0x50);
      if ((uVar4 & 0xffffffff) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = fn_83083C28(uVar4,&uStack_120);
      }
      *param_2 = iVar7;
    }
    else {
      fn_83083B48(*param_2,&uStack_120);
    }
    fn_830855B0(auStack_f0,0,uVar5,*(undefined4 *)(param_1 + 0x30));
    fn_83085650(param_1 + 0x30,*param_2);
  }
  else {
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar7 + 4);
    if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar1 = "LtBuildKdTreeMt";
      puVar1[3] = "StPrepare";
      uVar5 = TBLr;
      puVar1[1] = (int)uVar5;
      *(undefined4 **)(iVar7 + 4) = puVar1 + 4;
    }
    uVar2 = param_3[1];
    fn_830838A8(&uStack_120);
    uStack_11b = 1;
    uStack_120 = uVar2;
    (**(code **)(**(int **)(param_4 + 0x58) + 0x40))
              (*(int **)(param_4 + 0x58),auStack_110,auStack_100);
    if (*param_2 == 0) {
      iVar7 = fn_82CE5410();
      uVar4 = (**(code **)(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0x50);
      if ((uVar4 & 0xffffffff) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = fn_83083C28(uVar4,&uStack_120);
      }
      *param_2 = iVar7;
    }
    else {
      fn_83083B48(*param_2,&uStack_120);
    }
    auStack_12c[0] = 4;
    **(undefined4 **)(param_1 + 0x3c) = 4;
    iVar7 = fn_82CE5410();
    uVar5 = (**(code **)(**(int **)(iVar7 + 0x10) + 0xc))(*(int **)(iVar7 + 0x10),auStack_12c,4);
    uVar8 = auStack_12c[0];
    if (auStack_12c[0] == 0) {
      uVar8 = 0x80000000;
    }
    uStack_130 = 4;
    iVar7 = fn_82CE5410();
    uVar6 = (**(code **)(**(int **)(iVar7 + 0x10) + 0xc))(*(int **)(iVar7 + 0x10),&uStack_130,4);
    uVar9 = uStack_130;
    if (uStack_130 == 0) {
      uVar9 = 0x80000000;
    }
    uStack_c4 = *(undefined4 *)(param_4 + 0x78);
    uStack_90 = *param_3;
    uStack_cc = *(undefined4 *)(param_1 + 0x3c);
    uStack_bc = *(undefined4 *)(param_1 + 0x34);
    uStack_c0 = *(undefined4 *)(param_1 + 0x30);
    uStack_d0 = *(undefined4 *)(param_1 + 0x6c);
    puVar1 = (undefined4 *)*param_2;
    uStack_df = 3;
    uStack_da = 0xffff;
    uStack_c8 = 0;
    uStack_de = 1;
    uStack_e0 = 6;
    uStack_dc = 0x60;
    uStack_b0 = (undefined4)uVar5;
    uStack_ac = (undefined4)uVar6;
    uStack_a8 = puVar1[4];
    uStack_b8 = *puVar1;
    iStack_a4 = puVar1[6] + puVar1[5];
    uStack_b4 = puVar1[7];
    uStack_a0 = puVar1[6];
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar7 + 4);
    if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar1 = "StBuild";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar7 + 4) = puVar1 + 3;
    }
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar7 + 4);
    if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar1 = "LtbuildTreeDistributed";
      puVar1[3] = "Stqueue";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar7 + 4) = puVar1 + 4;
    }
    fn_82CE8AF0(param_5,&uStack_e0,0);
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar7 + 4);
    if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar1 = "Ststart";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar7 + 4) = puVar1 + 3;
    }
    (**(code **)(*param_6 + 0xc))(param_6,param_5,3);
    fn_82CE9108(param_5);
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar7 + 4);
    if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar1 = "StwaitForCompletion";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar7 + 4) = puVar1 + 3;
    }
    (**(code **)(*param_6 + 0x10))(param_6);
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar7 + 4);
    if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar1 = "StwaitSemaphore";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar7 + 4) = puVar1 + 3;
    }
    fn_82CFBAD8(*(undefined4 *)(param_1 + 0x6c));
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar7 + 4);
    if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar1 = "StfinishPpu";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar7 + 4) = puVar1 + 3;
    }
    fn_830853E8(*param_2,uVar2,uStack_b0,uStack_ac);
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar7 + 4);
    if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar1 = &lbl_8202CF7C;
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar7 + 4) = puVar1 + 3;
    }
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar7 + 4);
    if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar1 = "StFinalize";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar7 + 4) = puVar1 + 3;
    }
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar7 + 4);
    if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar1 = &lbl_8202CF7C;
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar7 + 4) = puVar1 + 3;
    }
    iVar7 = fn_82CE5410();
    if ((uVar9 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                (*(int **)(iVar7 + 0x10),uVar6,uVar9 & 0x3fffffff,4);
    }
    iVar7 = fn_82CE5410();
    if ((uVar8 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                (*(int **)(iVar7 + 0x10),uVar5,uVar8 & 0x3fffffff,4);
    }
  }
  return;
}

