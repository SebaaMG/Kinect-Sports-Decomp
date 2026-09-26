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
extern unsigned int *auStack_51;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b4;
extern unsigned int *auStack_c0;
extern int fn_82230040();
extern int fn_82339098();
extern int fn_823390A0();
extern int fn_8242E688();
extern int fn_8243D5E8();
extern int fn_82510100();
extern int fn_825113E0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_82F68CC0();
extern unsigned int iStack_68;
extern unsigned int iStack_a4;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B0CCC;
extern unsigned int uStack_8c;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82336C10(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar5;
  uint uVar6;
  longlong lVar4;
  int *piVar7;
  undefined4 *puVar8;
  code **ppcVar9;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [4];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [4];
  int iStack_a4;
  code *apcStack_a0 [2];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  int aiStack_80 [4];
  code *apcStack_70 [2];
  int iStack_68;
  code *pcStack_64;
  undefined1 auStack_51 [17];
  int *piStack_40;
  
  apcStack_a0[0] = (code *)0x0;
  bVar2 = false;
  bVar3 = false;
  iVar5 = fn_8242E688(*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0xc),
                            (ulonglong)*(byte *)(*(int *)(param_1 + 0x1a0) + 0x44) - 1);
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x24) != 0)) {
    if (*(int *)(iVar5 + 0x168) == 0) {
      uVar6 = *(uint *)(iVar5 + 0x16c);
    }
    else {
      uVar6 = fn_8288B760();
      uVar6 = uVar6 & 0xff;
    }
    if (uVar6 != 0) {
      bVar3 = true;
    }
  }
  iVar5 = fn_8242E688(*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0xc),
                            (ulonglong)*(byte *)(*(int *)(param_1 + 0x1a0) + 0x44) + 1);
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x24) != 0)) {
    if (*(int *)(iVar5 + 0x168) == 0) {
      uVar6 = *(uint *)(iVar5 + 0x16c);
    }
    else {
      uVar6 = fn_8288B760();
      uVar6 = uVar6 & 0xff;
    }
    if (uVar6 != 0) {
      bVar3 = true;
    }
  }
  aiStack_80[0] = 0;
  aiStack_80[1] = 0;
  aiStack_80[2] = 0;
  if ((*(int *)(param_1 + 0x24) != 0) || (bVar3)) {
    lVar4 = (ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0xc) + 0x174) + 8;
    fn_8243D5E8(auStack_c0,lVar4,0xffffffff821b0b6c);
    fn_8243D5E8(&uStack_bc,lVar4,0xffffffff821b0b84);
    fn_8243D5E8(&uStack_b8,lVar4,0xffffffff821b0b98);
    fn_8243D5E8(auStack_a8,lVar4,0xffffffff821b0bac);
    fn_8243D5E8(&iStack_a4,lVar4,0xffffffff821b0bc4);
    fn_8243D5E8(apcStack_a0,lVar4,0xffffffff821b0bd8);
    fn_8243D5E8(auStack_b4,lVar4,0xffffffff821b0bec);
    fn_8243D5E8(&uStack_b0,lVar4,0xffffffff821b0c04);
    fn_8243D5E8(&uStack_ac,lVar4,0xffffffff821b0c18);
    iStack_68 = uStack_bc;
    pcStack_64 = (code *)uStack_b8;
    fn_823390A0(aiStack_80,apcStack_70);
    iStack_68 = uStack_b0;
    pcStack_64 = (code *)uStack_ac;
    fn_823390A0(aiStack_80,apcStack_70);
    ppcVar9 = apcStack_70;
    iStack_68 = iStack_a4;
    pcStack_64 = apcStack_a0[0];
  }
  else {
    apcStack_a0[0] = (code *)0x2;
    uStack_98 = 0;
    uStack_94 = 0;
    fn_823390A0(aiStack_80,apcStack_a0);
    apcStack_a0[0] = (code *)0x7;
    uStack_98 = 0;
    uStack_94 = 0;
    fn_823390A0(aiStack_80,apcStack_a0);
    apcStack_a0[0] = (code *)0x1;
    ppcVar9 = apcStack_a0;
    uStack_98 = 0;
    uStack_94 = 0;
  }
  fn_823390A0(aiStack_80,ppcVar9);
  lVar4 = fn_8265C9E0(0x30);
  if (lVar4 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    apcStack_a0[0] = fn_82339098;
    iStack_68 = param_1;
    piVar7 = (int *)fn_8265C9E0(0x20);
    if (piVar7 == (int *)0x0) {
      uStack_8c = 0;
      ppuStack_90 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_90);
    }
    *piVar7 = (int)&lbl_821B0CCC;
    fn_82F68CC0(piVar7 + 2,apcStack_70,0x18);
    bVar2 = true;
    piStack_40 = piVar7;
    puVar8 = (undefined4 *)
             fn_82510100(lVar4,*(undefined4 *)(param_1 + 0x14),auStack_51 + 1,aiStack_80);
  }
  iVar5 = *(int *)(param_1 + 0x1a0);
  puVar1 = *(undefined4 **)(iVar5 + 0x198);
  if (puVar8 != puVar1) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined4 **)(iVar5 + 0x198) = puVar8;
  }
  if (bVar2) {
    if (piStack_40 != (int *)0x0) {
      (**(code **)(*piStack_40 + 0xc))
                (piStack_40,
                 (int)(auStack_51 + -(int)piStack_40 + 1) -
                 (int)(auStack_51 +
                      (uint)(auStack_51 + -(int)piStack_40 + 1 == (undefined1 *)0x0) +
                      -(int)piStack_40));
      piStack_40 = (int *)0x0;
    }
  }
  fn_825113E0((ulonglong)*(uint *)(param_1 + 0x118) + 0x14,6,
                    *(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x198));
  if (aiStack_80[0] != 0) {
    fn_8265CA20();
  }
  return;
}

