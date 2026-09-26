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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_40;
extern int fn_82230040();
extern int fn_823B7080();
extern int fn_823B93C0();
extern int fn_823BB160();
extern int fn_82517D50();
extern int fn_82518120();
extern int fn_8265C9E0();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828904D8();
extern int fn_828A12E8();
extern int fn_828AAF70();
extern int fn_828AD740();
extern int fn_82BA02A8();
extern int fn_82F56D40();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B5C70;
extern unsigned int lbl_821B5C88;
extern unsigned int lbl_821B5CA0;
extern unsigned int lbl_821B5DA0;
extern unsigned int lbl_821B5DE8;
extern unsigned int uStack_5c;
extern unsigned int uStack_74;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


void fn_823B53B0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar6;
  char cVar8;
  undefined4 *puVar7;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar9;
  code **ppcVar10;
  code *pcVar11;
  code *apcStack_b0 [2];
  code *pcStack_a8;
  int *piStack_a4;
  undefined **ppuStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined **ppuStack_80;
  code *pcStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined ***pppuStack_70;
  undefined **ppuStack_60;
  undefined8 uStack_5c;
  undefined ***pppuStack_50;
  undefined1 auStack_40 [16];
  undefined4 *puStack_30;
  
  iVar6 = param_1[3];
  if (iVar6 == 0) {
    bVar3 = false;
    apcStack_b0[0] = *(code **)(*param_1 + 0x28);
    iVar6 = fn_82518120();
    fn_82F56D40(&pcStack_a8,iVar6,apcStack_b0);
    if ((ZEXT48(pcStack_a8) != (ulonglong)*(uint *)(iVar6 + 4)) &&
       (ZEXT48(pcStack_a8) != 0xfffffffffffffff0)) {
      pcVar1 = *(code **)(*(code **)(pcStack_a8 + 0x14) + 4);
      pcVar9 = *(code **)(pcStack_a8 + 0x14);
      while (pcVar11 = pcVar1, pcVar11[0x69] == (code)0x0) {
        if (*(uint *)(pcVar11 + 0x10) < 4) {
          pcVar1 = *(code **)(pcVar11 + 8);
        }
        else {
          pcVar1 = *(code **)pcVar11;
          pcVar9 = pcVar11;
        }
      }
      pcVar1 = *(code **)(pcStack_a8 + 0x14);
      if ((pcVar9 == pcVar1) || (4 < *(uint *)(pcVar9 + 0x10))) {
        ppcVar10 = apcStack_b0;
        apcStack_b0[0] = pcVar1;
      }
      else {
        ppcVar10 = &pcStack_a8;
      }
      pcStack_a8 = pcVar9;
      if (*ppcVar10 != pcVar1) {
        bVar3 = true;
      }
    }
    cVar8 = fn_828AD740(*param_1);
    if (bVar3) {
      if (cVar8 == '\0') {
        uVar5 = fn_828A12E8(*param_1);
        iVar6 = fn_8288F948(uVar5,4);
        if (*(int *)(iVar6 + 8) != 0) {
          fn_823B93C0(param_1 + 1,*(undefined4 *)(**(int **)(iVar6 + 4) + 0x14));
        }
      }
      else {
        puVar7 = (undefined4 *)fn_8265C9E0(0xa0);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          fn_82517D50(puVar7,*param_1,4);
          *puVar7 = &lbl_821B5DA0;
          puVar7[0x1a] = &lbl_821B5DE8;
          puVar7[0x20] = 1;
          puVar7[0x26] = 0;
        }
        fn_823B93C0(param_1 + 1,puVar7);
        lVar4 = (ulonglong)(uint)param_1[3] - 0x68;
        if ((ulonglong)(uint)param_1[3] == 0) {
          lVar4 = 0;
        }
        fn_828904D8(lVar4);
      }
    }
    if (param_1[3] != 0) {
      pcStack_a8 = fn_823B7080;
      uStack_74 = uStack_98;
      uStack_5c = CONCAT44(fn_823B7080,param_1);
      ppuStack_80 = &lbl_821B5CA0;
      pppuStack_70 = &ppuStack_80;
      ppuStack_60 = &lbl_821B5C88;
      pppuStack_50 = &ppuStack_60;
      pcStack_7c = fn_82BA02A8;
      piStack_a4 = param_1;
      piStack_8c = param_1;
      piStack_78 = param_1;
      puStack_30 = (undefined4 *)fn_8265C9E0(0x14);
      if (puStack_30 == (undefined4 *)0x0) {
        uStack_9c = 0;
        ppuStack_a0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_a0);
      }
      *puStack_30 = &lbl_821B5C70;
      puStack_30[1] = uStack_90;
      puStack_30[2] = piStack_8c;
      puStack_30[3] = uStack_88;
      puStack_30[4] = uStack_84;
      lVar4 = (ulonglong)(uint)param_1[3] - 0x68;
      if ((ulonglong)(uint)param_1[3] == 0) {
        lVar4 = 0;
      }
      fn_823BB160(lVar4,auStack_40,&ppuStack_60,&ppuStack_80);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x308) + 0x1c);
    lVar4 = (**(code **)(*(int *)(iVar6 + -0x68) + 8))(iVar6 + -0x68);
    fn_828AAF70(lVar4 + 0x48,iVar2 != 0);
    lVar4 = (ulonglong)(uint)param_1[3] - 0x68;
    if ((ulonglong)(uint)param_1[3] == 0) {
      lVar4 = 0;
    }
    fn_8288B760(lVar4);
  }
  return;
}

