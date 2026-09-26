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
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern int fn_8265C9E0();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_8305D500();
extern int fn_8305D680();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305ED48();
extern int fn_8305F320();
extern int fn_83061508();
extern int fn_83061F30();
extern int fn_83065E50();
extern int fn_830670C8();
extern int fn_8306AB38();
extern int fn_8306AB80();
extern unsigned int iStack_d8;
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_820288B0;
extern unsigned int lbl_8217E6A0;
extern unsigned int lbl_8217E6A8;
extern unsigned int lbl_8217E6AC;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_8305D120(int param_1,int param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar5;
  longlong lVar3;
  undefined8 uVar4;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined **ppuStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined **appuStack_e0 [2];
  int iStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined4 *puStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 *puStack_90;
  undefined1 auStack_80 [128];
  
  uStack_c0 = *(undefined4 *)(param_1 + 0x34);
  uStack_bc = *(undefined4 *)(param_1 + 0x38);
  uStack_b8 = *(undefined4 *)(param_1 + 0x3c);
  uStack_d0 = *(undefined4 *)(param_1 + 0x40);
  uStack_cc = *(undefined4 *)(param_1 + 0x44);
  uStack_c8 = *(undefined4 *)(param_1 + 0x48);
  fn_82810328(&uStack_d0,&uStack_c0,auStack_b0);
  fn_82810558((double)lbl_820288B0,auStack_b0,&uStack_c0);
  fn_82810558((double)lbl_82002C2C,auStack_b0,&uStack_d0);
  iStack_d8 = 0;
  appuStack_e0[0] = &lbl_8217E6A0;
  fn_8305D500(appuStack_e0,*(undefined4 *)(param_1 + 4));
  iVar6 = iStack_d8;
  do {
    if (iVar6 == 0) {
      return;
    }
    iStack_d8 = iVar6;
    if (*(int *)(iVar6 + 0x28) == param_2) {
      fn_83061508(auStack_80);
      puStack_a0 = (undefined4 *)0x0;
      uStack_9c = 0;
      uStack_98 = 0;
      puStack_90 = (undefined4 *)0x0;
      ppuStack_f0 = &lbl_8217E6A8;
      pcVar1 = (code *)lbl_8217E6AC;
      iStack_ec = iVar6;
      iStack_e8 = iVar6;
      while (iStack_e8 = (*pcVar1)(&ppuStack_f0,iStack_e8), iStack_e8 != 0) {
        iVar5 = fn_8265C9E0(0x58);
        if (iVar5 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = fn_830670C8();
        }
        fn_8305E0F8(lVar3 + 0x10,auStack_80);
        fn_8305ED48(lVar3 + 0x10,iStack_e8,&uStack_c0,&uStack_d0);
        fn_8306AB38(&puStack_a0,lVar3);
        pcVar1 = (code *)ppuStack_f0[1];
      }
      iStack_e8 = 0;
      puVar9 = puStack_90;
      puVar2 = puStack_a0;
      if (puStack_a0 != (undefined4 *)0x0) {
        do {
          puVar9 = puVar2 + 4;
          iStack_ec = iVar6;
          iStack_e8 = iVar6;
LAB_8305d2f8:
          iVar5 = iStack_e8;
          iStack_e8 = (*(code *)ppuStack_f0[1])(&ppuStack_f0,iStack_e8);
          if (iStack_e8 != 0) {
            if (*(int *)(iStack_e8 + 0x20) != iVar5) goto LAB_8305d2d0;
            puVar7 = (undefined4 *)0x0;
            puVar8 = puVar9;
            goto LAB_8305d2e4;
          }
          puVar2 = (undefined4 *)puVar2[1];
        } while (puVar2 != (undefined4 *)0x0);
        iStack_e8 = 0;
        while (puVar2 = puStack_a0, puVar9 = puStack_90, puStack_a0 != (undefined4 *)0x0) {
          puVar9 = puStack_a0 + 4;
          iVar6 = fn_8305D680(puVar9);
          if (2 < iVar6) {
            uVar4 = fn_83065E50();
            fn_8305E0F8(uVar4,param_3);
            fn_8305EC98(uVar4,puVar9);
          }
          fn_8306AB80(&puStack_a0,puVar2);
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      for (; puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)puVar9[2]) {
        puVar9[3] = 0;
        *puVar9 = 0;
      }
      fn_83061F30(auStack_80);
    }
    iVar6 = (*(code *)appuStack_e0[0][1])(appuStack_e0,iStack_d8);
  } while( true );
LAB_8305d2d0:
  if (*(int *)(iStack_e8 + 0x24) == iVar5) {
    puVar8 = (undefined4 *)0x0;
    puVar7 = puVar9;
LAB_8305d2e4:
    fn_8305F320((double)*(float *)(param_1 + 8),puVar9,iStack_e8,puVar7,puVar8);
  }
  goto LAB_8305d2f8;
}

