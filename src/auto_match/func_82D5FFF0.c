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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_150;
extern unsigned int *auStack_180;
extern unsigned int *auStack_40;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82D5D320();
extern int fn_82D6C100();
extern unsigned int iStack_110;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82138A5C;
extern unsigned int uStack_108;
extern unsigned int uStack_12c;
extern unsigned int uStack_15c;
extern unsigned int uStack_170;
extern unsigned int uStack_18c;
extern unsigned int uStack_98;


void fn_82D5FFF0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
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
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined **ppuStack_190;
  undefined4 uStack_18c;
  undefined1 auStack_180 [16];
  undefined4 uStack_170;
  undefined **ppuStack_160;
  undefined4 uStack_15c;
  undefined1 auStack_150 [16];
  undefined ***pppuStack_140;
  undefined **ppuStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_120 [16];
  int iStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined1 auStack_90 [80];
  undefined1 auStack_40 [40];
  
  puVar3 = &uStack_108;
  puVar2 = (undefined8 *)(param_4 + -8);
  lVar4 = 0xe;
  do {
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar2;
    uStack_15c = lbl_82134508;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar1 = (undefined4 *)(param_4 + 0x50U & 0xfffffff0);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  uStack_18c = lbl_82134508;
  ppuStack_190 = &lbl_82138A5C;
  puVar1 = (undefined4 *)((uint)(auStack_180 + in_r0) & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  uStack_170 = param_5;
  if (param_6 == 0) {
    puVar3 = &uStack_98;
    puVar2 = &uStack_108;
    lVar4 = 0xe;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    pppuStack_140 = &ppuStack_190;
    puVar1 = (undefined4 *)((uint)(auStack_150 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000100c0;
    puVar1[1] = in_register_000100c4;
    puVar1[2] = in_register_000100c8;
    puVar1[3] = in_vr12;
    ppuStack_160 = &lbl_82138A5C;
    puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    fn_82D6C100(param_2,param_3,auStack_90,&ppuStack_160,0);
  }
  else {
    uStack_12c = uStack_15c;
    puVar1 = (undefined4 *)((uint)(auStack_120 + in_r0) & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    ppuStack_130 = &lbl_82138A5C;
    iStack_110 = param_6;
    fn_82D5D320(param_3,param_2,auStack_100,&ppuStack_190,&ppuStack_130);
  }
  return;
}

