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
extern unsigned int *auStack_30;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern int fn_82D5A348();
extern unsigned int iStack_90;
extern unsigned int lbl_8209AB20;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82138A5C;
extern unsigned int uStack_88;
extern unsigned int uStack_ac;
extern unsigned int uStack_c0;
extern unsigned int uStack_dc;


void fn_82D5B050(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  int in_r0;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined **ppuStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined **ppuStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a0 [16];
  int iStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [80];
  undefined1 auStack_30 [48];
  
  puVar3 = &uStack_88;
  puVar2 = (undefined8 *)(param_4 + -8);
  lVar4 = 0xe;
  do {
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar2;
    uStack_ac = lbl_82134508;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar1 = (undefined4 *)(param_4 + 0x50U & 0xfffffff0);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(&lbl_8209AB20 + in_r0) & 0xfffffff0);
  uVar9 = *puVar1;
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  uStack_dc = lbl_82134508;
  ppuStack_e0 = &lbl_82138A5C;
  puVar1 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  uStack_c0 = param_5;
  if (param_6 != 0) {
    puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    ppuStack_b0 = &lbl_82138A5C;
    iStack_90 = param_6;
    fn_82D5A348(param_3,param_2,auStack_80,&ppuStack_e0,&ppuStack_b0);
    return;
  }
  fn_82D5A348(param_3,param_2,auStack_80,&ppuStack_e0,0);
  return;
}

