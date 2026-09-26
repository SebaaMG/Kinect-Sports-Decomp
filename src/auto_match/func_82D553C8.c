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
extern unsigned int *auStack_40;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e0;
extern int fn_82D6BFD8();
extern unsigned int iStack_a0;
extern unsigned int lbl_8209AB20;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82138A5C;
extern unsigned int uStack_98;
extern unsigned int uStack_bc;
extern unsigned int uStack_d0;
extern unsigned int uStack_ec;


void fn_82D553C8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_r0;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined **ppuStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined **ppuStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b0 [16];
  int iStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [80];
  undefined1 auStack_40 [40];
  
  puVar5 = &uStack_98;
  puVar4 = (undefined8 *)(param_4 + -8);
  lVar6 = 0xe;
  do {
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar4;
    uVar2 = lbl_82134508;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar1 = (undefined4 *)(param_4 + 0x50U & 0xfffffff0);
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(&lbl_8209AB20 + in_r0) & 0xfffffff0);
  uVar11 = *puVar1;
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  uStack_ec = lbl_82134508;
  ppuStack_f0 = &lbl_82138A5C;
  puVar1 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  if (param_6 == 0) {
    pppuVar3 = (undefined ***)0x0;
  }
  else {
    uStack_bc = uVar2;
    pppuVar3 = &ppuStack_c0;
    puVar1 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    ppuStack_c0 = &lbl_82138A5C;
    iStack_a0 = param_6;
  }
  uStack_d0 = param_5;
  fn_82D6BFD8(param_1,param_3,param_2,auStack_90,&ppuStack_f0,pppuVar3);
  return;
}

