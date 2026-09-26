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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_82527EF0();
extern int fn_82528948();
extern int fn_8253C430();
extern int fn_8253EC80();
extern int fn_8253ED48();
extern int fn_8253EE18();
extern int fn_82563B08();
extern int fn_8257C8F0();
extern int fn_825A5D30();
extern int fn_82A1EFC0();
extern int fn_82CE5990();
extern int fn_82D80A40();
extern int fn_82D899A0();
extern int fn_82D8B6C8();
extern int fn_82D8BC30();
extern int fn_82D93168();
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;


void fn_8253E598(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  int in_r0;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int aiStack_c0 [4];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  piVar9 = (int *)(param_1 + 0x7c0);
  fn_8253EC80();
  fn_8253ED48(param_1);
  if (*(int *)(param_1 + 0x814) != 0) {
    *(undefined4 *)(param_1 + 0x814) = 0;
    fn_82D8B6C8(*piVar9,*(undefined4 *)(param_1 + 0x81c),1,0);
  }
  iVar1 = *piVar9;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0)) goto LAB_8253e7c8;
  iVar2 = *(int *)(param_1 + 0x1b4);
  iVar6 = fn_82527EF0(param_1);
  if (iVar6 != 0) {
    fn_82528948(param_1);
  }
  if (((*(uint *)(param_1 + 2000) & 4) == 0) && (iVar6 = fn_82527EF0(param_1), iVar6 == 0)) {
    if (iVar2 != 0) {
LAB_8253e6c0:
      iVar6 = 0x70;
      goto LAB_8253e6cc;
    }
    if ((*(char *)(iVar1 + 0xe8) != '\a') && (*(int *)(param_1 + 0x894) == 0)) {
      fn_82D80A40(*(undefined4 *)(iVar1 + 8));
      fn_82D93168(iVar1 + 0xe0);
      fn_82CE5990(auStack_b0,auStack_80);
      fn_8253C430(param_1);
      puVar3 = (undefined4 *)(iVar1 + 0x1b0U & 0xfffffff0);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar4 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      puVar3 = (undefined4 *)(iVar1 + 0x1c0U & 0xfffffff0);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar4 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
    }
  }
  else {
    if (iVar2 != 0) goto LAB_8253e6c0;
    iVar6 = 0x50;
LAB_8253e6cc:
    puVar3 = (undefined4 *)(param_1 + iVar6 & 0xfffffff0);
    uVar13 = *puVar3;
    uVar14 = puVar3[1];
    uVar15 = puVar3[2];
    uVar16 = puVar3[3];
    puVar3 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    puVar4 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar10;
    puVar4[2] = uVar11;
    puVar4[3] = uVar12;
    iVar6 = fn_82527EF0(param_1);
    if ((iVar6 == 0) && (iVar2 == 0)) {
      if (*(int *)(param_1 + 0x36c) != 0) {
        fn_825A5D30(param_1 + 0x310,param_1,*piVar9,*(undefined4 *)(param_1 + 0x4e0));
      }
      fn_82A1EFC0(aiStack_c0,0,4);
      uStack_c8 = 0x4c;
      uStack_c4 = 0xc;
      aiStack_c0[0] = param_1;
      fn_8257C8F0(param_2,&uStack_c8);
    }
    puVar3 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
    *puVar3 = uVar13;
    puVar3[1] = uVar14;
    puVar3[2] = uVar15;
    puVar3[3] = uVar16;
    fn_82D8BC30(iVar1,auStack_90,auStack_a0);
    if ((*(char *)(iVar1 + 0xe8) == '\x05') || (bVar5 = false, *(char *)(iVar1 + 0xe8) == '\x04')) {
      bVar5 = true;
    }
    if (!bVar5) {
      fn_82563B08(iVar1);
    }
  }
  pcVar7 = (char *)fn_82D899A0(auStack_d0,iVar1);
  if (*pcVar7 == '\0') {
    uVar8 = *(uint *)(param_1 + 2000) & 0xffffff7f;
  }
  else {
    uVar8 = *(uint *)(param_1 + 2000) | 0x80;
  }
  *(uint *)(param_1 + 2000) = uVar8;
LAB_8253e7c8:
  *(uint *)(param_1 + 2000) = *(uint *)(param_1 + 2000) & 0xfffffffb;
  fn_8253EE18(param_1);
  return;
}

