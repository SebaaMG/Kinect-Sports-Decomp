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
extern unsigned int *auStack_7c;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_822EFBF0();
extern int fn_82365BD8();
extern int fn_823A7198();
extern int fn_823B0CE8();
extern int fn_8288B760();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int iStack_78;
extern unsigned int iStack_dc;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_a0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_822F09C0(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 in_r8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_e0 [4];
  int iStack_dc;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [4];
  int iStack_78;
  
  iVar4 = fn_82F6A544();
  if (*(int *)(iVar4 + 0x24) == 0) {
    uVar3 = 0;
  }
  else {
    iVar6 = *(int *)(iVar4 + 0xc);
    dVar11 = (double)lbl_821CC160;
    dVar10 = (double)lbl_821CA460;
    dVar9 = extraout_f1;
    iVar5 = fn_823B0CE8(extraout_f1,param_2,param_3,dVar11,dVar11,dVar10,auStack_d0,
                              *(int *)(iVar4 + 0x24),param_5);
    puVar8 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
    uVar12 = puVar8[1];
    uVar13 = puVar8[2];
    uVar14 = puVar8[3];
    puVar2 = (undefined4 *)(iVar6 + 0x230U & 0xfffffff0);
    *puVar2 = *puVar8;
    puVar2[1] = uVar12;
    puVar2[2] = uVar13;
    puVar2[3] = uVar14;
    *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x150) = 1;
    iVar6 = *(int *)(*(int *)(iVar4 + 0x24) + 0xa8);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1d0) != 0)) {
      *(int *)(iVar6 + 0x1d0) = *(int *)(iVar6 + 0x1d0) + -1;
    }
    if (*(int *)(*(int *)(iVar4 + 0xc) + 0x2c) != 0) {
      piVar1 = *(int **)**(undefined4 **)(*(int *)(iVar4 + 0x10) + 8);
      iVar6 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
      puVar8 = (undefined4 *)(iVar6 + 0x80U & 0xfffffff0);
      uVar12 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      puVar2 = (undefined4 *)(iVar6 + 0x250U & 0xfffffff0);
      *puVar2 = *puVar8;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
    }
    iVar6 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar6 = fn_82250A18();
    }
    if ((*(char *)(iVar6 + 4) != '\0') &&
       (iVar6 = *(int *)(*(int *)(iVar4 + 0x10) + 0x84), iVar6 != 0)) {
      if (*(int *)(*(int *)(iVar4 + 0xc) + 0x168) == 0) {
        uVar7 = *(uint *)(*(int *)(iVar4 + 0xc) + 0x16c);
      }
      else {
        uVar7 = fn_8288B760();
        uVar7 = uVar7 & 0xff;
      }
      if (uVar7 != 0) {
        uVar7 = *(uint *)(iVar4 + 0x24);
        uStack_bc = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x2c);
        uStack_c0 = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x28);
        puVar8 = (undefined4 *)(uVar7 + 0x10 & 0xfffffff0);
        uVar12 = puVar8[1];
        uVar13 = puVar8[2];
        uVar14 = puVar8[3];
        puVar2 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
        *puVar2 = *puVar8;
        puVar2[1] = uVar12;
        puVar2[2] = uVar13;
        puVar2[3] = uVar14;
        fStack_9c = (float)dVar9;
        uStack_b8 = 1;
        fStack_98 = (float)param_2;
        uStack_a0 = (undefined4)param_5;
        fStack_94 = (float)param_3;
        uStack_84 = 0;
        fStack_90 = (float)dVar11;
        fStack_8c = (float)dVar11;
        fStack_88 = (float)dVar10;
        uStack_80 = in_r8;
        fn_82365BD8(auStack_7c,(ulonglong)uVar7 + 0x2b4);
        puVar8 = (undefined4 *)fn_822EFBF0(auStack_e0,iVar6);
        fn_823A7198(*puVar8,&uStack_c0);
        if (iStack_dc != 0) {
          fn_822315A0();
        }
        if (iStack_78 != 0) {
          fn_822315A0();
        }
      }
    }
    uVar3 = 1;
  }
  fn_82F6A590(uVar3);
  return;
}

