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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e0;
extern int fn_8253D7A8();
extern int fn_82D8D1D8();
extern unsigned int iStack_90;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82138FAC;
extern unsigned int uStack_64;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_94;
extern unsigned int uStack_bc;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


undefined1 *
fn_82E008F8(undefined1 *param_1,int param_2,undefined8 param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **ppuStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [28];
  undefined4 uStack_64;
  
  puVar3 = (undefined4 *)
           (((param_4 & 0xff) + (param_4 & 0xff) * 2) * 0x20 + *(int *)(param_2 + 0x10));
  fn_8253D7A8(auStack_80,puVar3[1],puVar3 + 4,0);
  uStack_94 = lbl_82134508;
  uStack_d0 = *(undefined4 *)(param_2 + 0x2c);
  uStack_cc = *(undefined4 *)(param_2 + 0x30);
  uStack_64 = *(undefined4 *)(param_2 + 0xc);
  puVar1 = (undefined4 *)((uint)(puVar3 + 0x14) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  ppuStack_c0 = &lbl_82138FAC;
  iStack_90 = 0;
  uStack_bc = uStack_94;
  fn_82D8D1D8(*puVar3,auStack_80,auStack_e0,&ppuStack_c0,0);
  if (iStack_90 == 0) {
    *param_1 = 0;
  }
  else {
    *(int *)(param_5 + 0x20) = iStack_90;
    puVar1 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    *(undefined4 *)(param_5 + 0x24) = uStack_8c;
    puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    *(undefined4 *)(param_5 + 0x28) = uStack_88;
    puVar1 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    *(undefined4 *)(param_5 + 0x2c) = uStack_84;
    puVar1 = (undefined4 *)(param_5 + 0x10U & 0xfffffff0);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
    *param_1 = 1;
  }
  return param_1;
}

