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
extern unsigned int *auStack_110;
extern unsigned int *auStack_70;
extern unsigned int *auStack_e8;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_822AC4E8();
extern int fn_822BF930();
extern int fn_82321370();
extern int fn_82359C18();
extern int fn_823642A0();
extern int fn_82364418();
extern int fn_82364600();
extern int fn_82364760();
extern int fn_823647E0();
extern int fn_82364940();
extern int fn_82364988();
extern int fn_82365AA8();
extern int fn_823F2E20();
extern int fn_824551B0();
extern int fn_824580F0();
extern int fn_82459130();
extern int fn_824593C8();
extern int fn_82566018();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int iStack_108;
extern unsigned int iStack_128;
extern unsigned int iStack_13c;
extern unsigned int iStack_c8;
extern unsigned int iStack_e4;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B2CD4;
extern unsigned int lbl_821BA758;
extern unsigned int lbl_821BAAC8;
extern unsigned int lbl_821BAAE0;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_130;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_c4;
extern unsigned int uStack_dc;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;


void fn_82363BF0(int param_1,int param_2,undefined4 param_3,int *param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  code *pcStack_140;
  int iStack_13c;
  undefined8 uStack_130;
  int iStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined1 auStack_110 [8];
  int iStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_e8 [4];
  int iStack_e4;
  undefined **ppuStack_e0;
  undefined4 uStack_dc;
  undefined **ppuStack_d0;
  code *pcStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined ***pppuStack_c0;
  undefined **ppuStack_b0;
  code *pcStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined ***pppuStack_a0;
  undefined **ppuStack_90;
  code *pcStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined ***pppuStack_80;
  undefined1 auStack_70 [16];
  undefined4 *puStack_60;
  
  iStack_13c = 0;
  pcStack_140 = fn_823642A0;
  uStack_130 = 0x823642a000000000;
  piVar7 = param_4 + 0x142;
  iStack_128 = param_1;
  puVar6 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar6 == (undefined4 *)0x0) {
    uStack_f4 = 0;
    ppuStack_f8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_f8);
  }
  *puVar6 = &lbl_821B2CD4;
  fn_82F68CC0(puVar6 + 2,&uStack_130,0x18);
  puStack_60 = puVar6;
  fn_82321370(&pcStack_140,piVar7,auStack_70);
  iVar8 = param_2 * 0x44 + param_1;
  fn_823F2E20(iVar8 + 0x194,&pcStack_140);
  if (iStack_13c != 0) {
    fn_822315A0();
  }
  fn_82359C18(auStack_70);
  iStack_13c = 0;
  pcStack_140 = fn_82364418;
  iStack_128 = param_1;
  fn_82365AA8(&uStack_130,0x8236441800000000,CONCAT44(param_1,uStack_124),uStack_120);
  fn_82321370(&pcStack_140,param_4 + 0x146,&uStack_130);
  fn_823F2E20(iVar8 + 0x19c,&pcStack_140);
  if (iStack_13c != 0) {
    fn_822315A0();
  }
  fn_82359C18(&uStack_130);
  iStack_13c = 0;
  pcStack_140 = fn_82364600;
  iStack_128 = param_1;
  fn_82365AA8(auStack_110,0x8236460000000000,CONCAT44(param_1,uStack_124),uStack_120);
  fn_82321370(&pcStack_140,param_4 + 0x14e,auStack_110);
  fn_823F2E20(iVar8 + 0x1ac,&pcStack_140);
  if (iStack_13c != 0) {
    fn_822315A0();
  }
  fn_82359C18(auStack_110);
  iStack_13c = 0;
  pcStack_140 = fn_82364760;
  iStack_108 = param_1;
  fn_82365AA8(&uStack_130,0x8236476000000000,CONCAT44(param_1,uStack_104),uStack_100);
  fn_82321370(&pcStack_140,param_4 + 0x152,&uStack_130);
  fn_823F2E20(iVar8 + 0x1b4,&pcStack_140);
  if (iStack_13c != 0) {
    fn_822315A0();
  }
  fn_82359C18(&uStack_130);
  iStack_13c = 0;
  pcStack_140 = fn_823647E0;
  iStack_108 = param_1;
  fn_82365AA8(&uStack_130,0x823647e000000000,CONCAT44(param_1,uStack_104),uStack_100);
  fn_82321370(&pcStack_140,param_4 + 0x156,&uStack_130);
  fn_823F2E20(iVar8 + 0x1bc,&pcStack_140);
  if (iStack_13c != 0) {
    fn_822315A0();
  }
  fn_82359C18(&uStack_130);
  iStack_13c = 0;
  pcStack_140 = fn_82364940;
  iStack_108 = param_1;
  fn_82365AA8(&uStack_130,0x8236494000000000,CONCAT44(param_1,uStack_104),uStack_100);
  fn_82321370(&pcStack_140,param_4 + 0x15a,&uStack_130);
  fn_823F2E20(iVar8 + 0x1a4,&pcStack_140);
  if (iStack_13c != 0) {
    fn_822315A0();
  }
  fn_82359C18(&uStack_130);
  iStack_13c = 0;
  pcStack_140 = fn_82364988;
  iStack_108 = param_1;
  fn_82365AA8(&uStack_130,0x8236498800000000,CONCAT44(param_1,uStack_104),uStack_100);
  fn_82321370(&pcStack_140,param_4 + 0x15e,&uStack_130);
  fn_823F2E20(iVar8 + 0x1c4,&pcStack_140);
  if (iStack_13c != 0) {
    fn_822315A0();
  }
  fn_82359C18(&uStack_130);
  param_4[0x9c] = (int)param_5 + 0x274;
  fn_822BF930(param_4,param_5);
  piVar5 = *(int **)(param_4[0xb] * 4 + *(int *)(param_1 + 0x20));
  piVar1 = (int *)*piVar5;
  if (piVar5[1] - (int)piVar1 >> 2 != 0) {
    iVar2 = *piVar1;
    if ((iVar2 != 0) && (param_4[9] != iVar2)) {
      param_4[9] = iVar2;
      *(undefined4 *)(*(int *)(param_4[5] + 0x8c0) + 0x90) = 1;
      (**(code **)(*param_4 + 0x24))(param_4);
    }
  }
  *(int *)(iVar8 + 0x18c) = (int)param_5;
  *(int **)(iVar8 + 0x188) = param_4;
  puVar6 = (undefined4 *)fn_8265C9E0(0x18);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *(undefined4 *)(param_1 + 0x17c);
    puVar6[1] = *(undefined4 *)(param_1 + 0x17c);
    uVar3 = *(undefined4 *)(param_1 + 0x17c);
    *(undefined1 *)(puVar6 + 5) = 0;
    *(undefined1 *)((int)puVar6 + 0x15) = 0;
    puVar6[2] = uVar3;
    if (puVar6 + 3 != (undefined4 *)0x0) {
      puVar6[3] = param_4;
      puVar6[4] = param_2;
    }
    fn_822AC4E8(auStack_e8,param_1 + 0x178);
    *(undefined4 *)(iVar8 + 400) = param_3;
    uStack_c4 = uStack_f0;
    pppuStack_c0 = &ppuStack_d0;
    iStack_c8 = param_1 + 0x3f4;
    ppuStack_d0 = &lbl_821BA758;
    pcStack_cc = fn_824551B0;
    fn_82321370(&pcStack_140,piVar7,&ppuStack_d0);
    fn_82359C18(&ppuStack_d0);
    fn_82566018(param_1 + 0x3f8,&pcStack_140);
    if (iStack_13c != 0) {
      fn_822315A0();
    }
    for (puVar6 = (undefined4 *)(param_1 + 0x408); puVar6 != (undefined4 *)(param_1 + 0x418);
        puVar6 = puVar6 + 2) {
      fn_824580F0(*puVar6,piVar7);
    }
    uVar4 = *(uint *)(param_1 + 0x7e0);
    pppuStack_80 = &ppuStack_90;
    pcStack_8c = fn_82459130;
    ppuStack_90 = &lbl_821BAAC8;
    uStack_84 = uStack_f0;
    uStack_88 = uVar4;
    fn_82321370(auStack_e8,piVar7,&ppuStack_90);
    fn_82359C18(&ppuStack_90);
    fn_82566018((ulonglong)uVar4 + 4,auStack_e8);
    pppuStack_a0 = &ppuStack_b0;
    uStack_a4 = uStack_f0;
    ppuStack_b0 = &lbl_821BAAE0;
    pcStack_ac = fn_824593C8;
    uStack_a8 = uVar4;
    fn_82321370(&pcStack_140,param_4 + 0x152,&ppuStack_b0);
    fn_82359C18(&ppuStack_b0);
    fn_82566018((ulonglong)uVar4 + 0x14,&pcStack_140);
    if (iStack_13c != 0) {
      fn_822315A0();
    }
    if (iStack_e4 != 0) {
      fn_822315A0();
    }
    return;
  }
  uStack_dc = 0;
  ppuStack_e0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_e0);
}

