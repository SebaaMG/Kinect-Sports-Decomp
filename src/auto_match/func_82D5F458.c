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
extern unsigned int *auStack_100;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_d0;
extern int fn_8253D7A8();
extern int fn_82CE5410();
extern int fn_82D3E3F0();
extern int fn_82D5E360();
extern int fn_82F68CC0();
extern unsigned int iStack_140;
extern unsigned int iStack_190;
extern unsigned int iStack_194;
extern unsigned int iStack_198;
extern unsigned int iStack_19c;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;


/* WARNING: Removing unreachable block (ram,0x82d5f5e4) */

undefined8
fn_82D5F458(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar3;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *apuStack_1b0 [4];
  undefined4 **ppuStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  int iStack_140;
  undefined1 auStack_130 [16];
  undefined4 *puStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [208];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(undefined4 **)(iVar4 + 4);
  if (puVar5 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar5 = "TtColl3";
    uVar3 = TBLr;
    puVar5[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar5 + 3;
  }
  iStack_19c = param_1[1];
  iStack_198 = param_1[2];
  iStack_194 = param_1[3];
  iStack_190 = param_1[4];
  iStack_140 = param_1[0x18];
  ppuStack_1a0 = (undefined4 **)*param_1;
  puVar5 = (undefined4 *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  uVar8 = puVar5[3];
  puVar2 = (undefined4 *)((uint)(auStack_180 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar5 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  uVar8 = puVar5[3];
  puVar2 = (undefined4 *)((uint)(auStack_170 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar5 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  uVar14 = puVar5[1];
  uVar15 = puVar5[2];
  uVar16 = puVar5[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
  uVar10 = *puVar2;
  uVar11 = puVar2[1];
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x1c) & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar2 = (undefined4 *)((uint)(auStack_160 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar5;
  puVar2[1] = uVar14;
  puVar2[2] = uVar15;
  puVar2[3] = uVar16;
  puVar5 = (undefined4 *)((uint)(auStack_150 + in_r0) & 0xfffffff0);
  *puVar5 = uVar10;
  puVar5[1] = uVar11;
  puVar5[2] = uVar12;
  puVar5[3] = uVar13;
  puVar5 = (undefined4 *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
  *puVar5 = uVar6;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  apuStack_1b0[0] = *ppuStack_1a0;
  puVar5 = (undefined4 *)fn_82D3E3F0(auStack_d0,apuStack_1b0,1,0);
  fn_8253D7A8(&puStack_120,0,0,0);
  iVar4 = *param_1;
  if (*(int *)(iVar4 + 0xc) == 0) {
    fn_82F68CC0(auStack_100,iVar4 + 0x20,0x2c);
  }
  uStack_118 = *(undefined4 *)(iVar4 + 8);
  uStack_114 = *(undefined4 *)(iVar4 + 0xc);
  ppuStack_1a0 = &puStack_120;
  uStack_11c = 0xffffffff;
  iStack_198 = iVar4;
  puStack_120 = puVar5;
  uVar3 = fn_82D5E360(&ppuStack_1a0,param_2,param_3,param_4,param_5);
  fn_82CE5410();
  puVar5[7] = 0;
  (**(code **)*puVar5)(puVar5,0);
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(undefined4 **)(iVar4 + 4);
  if (puVar5 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar5 = &lbl_82132BC4;
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(undefined4 **)(iVar4 + 4) = puVar5 + 3;
  }
  return uVar3;
}

