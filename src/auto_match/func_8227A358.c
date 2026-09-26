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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_60;
extern unsigned int fStack_100;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern unsigned int fStack_f4;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_82230040();
extern int fn_82278BA0();
extern int fn_8227A7B8();
extern int fn_8227A990();
extern int fn_8227AC58();
extern int fn_8227E330();
extern int fn_822C5B18();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int iStack_bc;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_c0;
extern unsigned int uStack_d4;


int * fn_8227A358(int *param_1,byte *param_2,int param_3,ulonglong param_4,int *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined **ppuStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_60 [96];
  
  piVar9 = (int *)(uint)*param_2;
  piVar11 = (int *)0x52;
  piVar12 = piVar9;
  piVar8 = param_1;
  if (piVar9 == (int *)0x52) {
    param_5 = (int *)("RegisterButton" + -(int)param_2);
    piVar12 = (int *)0x52;
    pbVar10 = param_2;
    do {
      pbVar10 = pbVar10 + 1;
      if (piVar12 == (int *)0x0) goto LAB_8227a3b8;
      piVar11 = (int *)(uint)*(byte *)((int)param_5 + (int)pbVar10);
      piVar12 = (int *)(uint)*pbVar10;
      piVar8 = piVar11;
    } while (piVar12 == piVar11);
  }
  if (piVar12 == piVar11) {
LAB_8227a3b8:
    if ((*(uint *)(param_3 + 4) >> 6 & 1) == 0) {
      uVar2 = *(undefined4 *)(param_3 + 8);
    }
    else {
      uVar2 = **(undefined4 **)(param_3 + 8);
    }
    fStack_100 = (float)*(double *)(param_3 + 0x18);
    fStack_e0 = (float)*(double *)(param_3 + 0x38);
    fStack_fc = (float)*(double *)(param_3 + 0x28);
    fStack_dc = (float)*(double *)(param_3 + 0x48);
    bVar1 = (param_4 & 0xffffffff) == 0xd;
    fStack_f8 = fStack_e0 + fStack_100;
    fStack_f4 = fStack_dc + fStack_fc;
    if (bVar1) {
      fStack_d0 = (float)*(double *)(param_3 + 0x58);
      fStack_cc = (float)*(double *)(param_3 + 0x68);
      fStack_f0 = (float)*(double *)(param_3 + 0x98);
      fStack_ec = (float)*(double *)(param_3 + 0xa8);
      fStack_e8 = (float)*(double *)(param_3 + 0x78) + fStack_d0;
      fStack_e4 = (float)*(double *)(param_3 + 0x88) + fStack_cc;
      fStack_c8 = (float)*(double *)(param_3 + 0xb8) + fStack_f0;
      fStack_c4 = (float)*(double *)(param_3 + 200) + fStack_ec;
    }
    if (param_1[0x3c] == 0) {
      uStack_108 = CONCAT44(fStack_100,fStack_fc);
      uStack_110 = CONCAT44(fStack_f8,fStack_f4);
    }
    else {
      fn_8227A7B8(param_1,&fStack_100,&fStack_f8,&uStack_108,&uStack_110,auStack_60);
    }
    fStack_b0 = (((U64)(uStack_110) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_108) >> 0) & 0xFFFFFFFF);
    fStack_ac = (((U64)(uStack_110) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_108) >> 32) & 0xFFFFFFFF);
    fStack_b8 = (((U64)(uStack_108) >> 0) & 0xFFFFFFFF);
    fStack_b4 = (((U64)(uStack_108) >> 32) & 0xFFFFFFFF);
    lVar5 = fn_8265C9E0(0x280);
    if (lVar5 == 0) {
      iVar7 = 0;
    }
    else {
      uStack_110 = 0;
      fn_82517978(&uStack_110,param_1[2],param_1[3],0);
      uVar6 = fn_822C5B18(auStack_60,param_1 + 0x44);
      iVar7 = fn_82278BA0(lVar5,&uStack_110,param_1[9],uVar2,&fStack_100,&fStack_e0,uVar6);
    }
    if (bVar1) {
      *(undefined1 *)(iVar7 + 600) = 1;
      *(ulonglong *)(iVar7 + 0x238) = CONCAT44(fStack_f0,fStack_ec);
      *(ulonglong *)(iVar7 + 0x240) = CONCAT44(fStack_c8,fStack_c4);
      *(ulonglong *)(iVar7 + 0x248) = CONCAT44(fStack_d0,fStack_cc);
      *(ulonglong *)(iVar7 + 0x250) = CONCAT44(fStack_e8,fStack_e4);
    }
    iVar3 = param_1[4];
    iVar4 = *(int *)(iVar3 + 4);
    piVar8 = (int *)fn_8265C9E0(0xc);
    if (piVar8 == (int *)0x0) {
      uStack_d4 = 0;
      ppuStack_d8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_d8);
    }
    *piVar8 = iVar3;
    piVar8[1] = iVar4;
    if (piVar8 + 2 != (int *)0x0) {
      piVar8[2] = iVar7;
    }
    if (param_1[5] == 0x3ffffffe) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff8219852c);
    }
    param_1[5] = param_1[5] + 1;
    *(int **)(iVar3 + 4) = piVar8;
    *(int **)piVar8[1] = piVar8;
    if (*(int *)(iVar7 + 0x224) != 0) {
      iStack_bc = param_1[0x35];
      uStack_c0 = *(undefined4 *)(iVar7 + 0x10);
      param_1[0x35] = iStack_bc + 1;
      piVar8 = (int *)0x0;
      if (param_1[0x27] != 0) {
        piVar8 = (int *)fn_8227E330(param_1[0x27],&uStack_c0,param_1 + 0x2a);
      }
      if (param_1[0x3c] != 0) {
        piVar8 = (int *)fn_8227A990(param_1,iVar7);
      }
    }
  }
  else {
    piVar12 = (int *)0x52;
    if (piVar9 == (int *)0x52) {
      piVar9 = (int *)0x52;
      pbVar10 = param_2;
      do {
        pbVar10 = pbVar10 + 1;
        if (piVar9 == (int *)0x0) goto LAB_8227a6bc;
        param_5 = (int *)(uint)(byte)"RegisterJiggle"[(int)pbVar10 - (int)param_2];
        piVar9 = (int *)(uint)*pbVar10;
        piVar12 = param_5;
      } while (piVar9 == param_5);
    }
    if (piVar9 == piVar12) {
LAB_8227a6bc:
      iVar7 = param_1[0x26];
      uStack_108 = CONCAT44((float)*(double *)(param_3 + 8),(float)*(double *)(param_3 + 0x18));
      uStack_110 = CONCAT44((float)*(double *)(param_3 + 0x28) + (float)*(double *)(param_3 + 8),
                            (float)*(double *)(param_3 + 0x38) + (float)*(double *)(param_3 + 0x18))
      ;
      *(undefined8 *)(param_1 + iVar7 * 4 + 0xc) = uStack_110;
      *(undefined8 *)(param_1 + iVar7 * 4 + 10) = uStack_108;
      param_1[0x26] = param_1[0x26] + 1;
      if (param_1[0x3c] != 0) {
        piVar8 = (int *)fn_8227AC58(param_1,&uStack_108,&uStack_110,param_4,param_5);
      }
    }
  }
  return piVar8;
}

