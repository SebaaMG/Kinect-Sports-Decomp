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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int fStack_84;
extern unsigned int fStack_ac;
extern unsigned int fStack_c4;
extern unsigned int fStack_d4;
extern int fn_82D6BE30();
extern int fn_82D74E60();
extern int fn_82D75010();
extern unsigned int iStack_80;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82138A2C;
extern unsigned int lbl_82138A3C;
extern unsigned int lbl_82138A4C;
extern unsigned int lbl_82138FAC;
extern unsigned int lbl_82138FF8;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_50;


void fn_82D5C0E0(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined **ppuStack_e0;
  char cStack_dc;
  undefined **ppuStack_d8;
  float fStack_d4;
  int *piStack_d0;
  undefined **ppuStack_c8;
  float fStack_c4;
  int *piStack_c0;
  undefined **ppuStack_b0;
  float fStack_ac;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [12];
  float fStack_84;
  int iStack_80;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  int *piStack_4c;
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "LtCvxList";
    puVar1[3] = "StcheckHull";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 4;
  }
  cStack_dc = '\0';
  ppuStack_e0 = &lbl_82138FF8;
  fn_82D74E60(param_1,param_2,param_3,&ppuStack_e0);
  if (cStack_dc == '\0') {
    iStack_80 = 0;
    dVar6 = (double)lbl_82134508;
    ppuStack_b0 = &lbl_82138FAC;
    fStack_84 = lbl_82134508;
    fStack_ac = lbl_82134508;
    fn_82D75010(param_1,param_2,param_3,&ppuStack_b0);
    if (iStack_80 != 0) {
      if (fStack_84 <= *(float *)(*param_2 + 0x18)) {
        iVar5 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar5 + 4);
        if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
          *puVar1 = "Stchildren";
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
        }
        fStack_d4 = (float)dVar6;
        ppuStack_d8 = &lbl_82138A4C;
        piStack_d0 = param_4;
        fn_82D6BE30(param_2,param_1,param_3,&ppuStack_d8);
        ppuStack_d8 = &lbl_82138A2C;
      }
      else {
        uStack_50 = (undefined4)param_1;
        iVar5 = *param_4;
        puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        puVar4 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
        uVar10 = *puVar4;
        uVar11 = puVar4[1];
        uVar12 = puVar4[2];
        uVar13 = puVar4[3];
        puVar4 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
        *puVar4 = *puVar1;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        pcVar2 = *(code **)(iVar5 + 4);
        puVar1 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        puVar1[2] = uVar12;
        puVar1[3] = uVar13;
        piStack_4c = param_2;
        (*pcVar2)(param_4,auStack_70);
      }
    }
    ppuStack_b0 = &lbl_82138A2C;
  }
  else {
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar5 + 4);
    if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
      *puVar1 = "Stchildren";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
    }
    ppuStack_c8 = &lbl_82138A4C;
    fStack_c4 = lbl_82134508;
    piStack_c0 = param_4;
    fn_82D6BE30(param_2,param_1,param_3,&ppuStack_c8);
    ppuStack_c8 = &lbl_82138A2C;
  }
  ppuStack_e0 = &lbl_82138A3C;
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  return;
}

