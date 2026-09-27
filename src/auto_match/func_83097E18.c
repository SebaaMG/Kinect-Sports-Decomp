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
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_1b8;
extern int fn_82CE8E78();
extern int fn_83085A80();
extern int fn_83085AB0();
extern int fn_83086A30();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B310;
extern unsigned int lbl_8323B4A0;
extern unsigned int uRam8323b314;
extern unsigned int uRam8323b318;
extern unsigned int uRam8323b31c;
extern unsigned int uStack_190;
extern unsigned int uStack_194;
extern unsigned int uStack_198;
extern unsigned int uStack_19c;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_83097E18(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar5;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 auStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 *puStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_180 [16];
  undefined1 *puStack_170;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [336];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtCpuKdTreeBuildFastDistributedSub";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  uVar8 = uRam8323b31c;
  uVar7 = uRam8323b318;
  uVar6 = uRam8323b314;
  uStack_19c = *(undefined4 *)(param_2 + 0x28);
  uStack_194 = *(undefined4 *)(param_2 + 0x34);
  uStack_190 = *(undefined4 *)(param_2 + 0x38);
  uStack_1b0 = *(undefined4 *)(param_2 + 0x2c);
  uStack_1ac = *(undefined4 *)(param_2 + 0x30);
  uStack_198 = *(undefined4 *)(param_2 + 0x54);
  puStack_1a0 = &uStack_1b0;
  puVar1 = (undefined4 *)((uint)(auStack_160 + in_r0) & 0xfffffff0);
  *puVar1 = lbl_8323B310;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1 = (undefined4 *)(param_2 + 0x40U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar3 = (undefined4 *)((uint)(auStack_180 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  fn_83085A80(auStack_150);
  uStack_1bc = *(undefined4 *)(param_2 + 0x58);
  uStack_1c0 = *(undefined4 *)(param_2 + 0x20);
  puStack_170 = auStack_150;
  auStack_1b8 = 1;
  iVar5 = fn_83086A30(&puStack_1a0,&uStack_1c0,*(undefined4 *)(param_2 + 0x24),&auStack_1b8,
                            &uStack_1bc);
  **(int **)(param_2 + 0x50) = iVar5 + 2;
  uVar4 = fn_82CE8E78(param_1,param_2,param_2,0);
  fn_83085AB0(auStack_150);
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  return uVar4;
}

