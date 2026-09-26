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
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8253D7A8();
extern int fn_82CE5410();
extern int fn_82CEBD78();
extern int fn_82CED628();
extern int fn_82D3C628();
extern int fn_82D955B0();
extern unsigned int iStack_114;
extern unsigned int iStack_180;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82089F0C;
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82138A2C;
extern unsigned int lbl_82138FAC;
extern unsigned int lbl_821440C4;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_184;
extern unsigned int uStack_1ac;


undefined4 *
fn_82DF2A08(double param_1,double param_2,double param_3,undefined4 *param_4,int param_5,
             int param_6)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  int in_r9;
  int *in_r10;
  ulonglong uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int aiStack_1c0 [4];
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined1 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined **appuStack_120 [3];
  int iStack_114;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [192];
  
  fn_82D955B0(param_4,in_r9,0);
  *param_4 = &lbl_821440C4;
  puVar9 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
  uVar11 = puVar9[1];
  uVar12 = puVar9[2];
  uVar13 = puVar9[3];
  puVar4 = (undefined4 *)((uint)(param_4 + 8) & 0xfffffff0);
  *puVar4 = *puVar9;
  puVar4[1] = uVar11;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  puVar9 = (undefined4 *)(in_r0 + param_6 & 0xfffffff0);
  uVar11 = puVar9[1];
  uVar12 = puVar9[2];
  uVar13 = puVar9[3];
  piVar10 = param_4 + 0x15;
  puVar4 = (undefined4 *)((uint)(param_4 + 0xc) & 0xfffffff0);
  *puVar4 = *puVar9;
  puVar4[1] = uVar11;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  param_4[0x10] = (float)param_1;
  param_4[0x11] = (float)param_2;
  param_4[0x13] = (float)param_3;
  param_4[0x15] = 0;
  uVar11 = lbl_82089F0C;
  param_4[0x16] = 0;
  param_4[0x17] = 0x80000000;
  param_4[0x12] = uVar11;
  if (in_r10 != (int *)0x0) {
    iVar6 = fn_82CE5410();
    uVar2 = param_4[0x17] & 0x3fffffff;
    piVar1 = *(int **)(iVar6 + 0x10);
    if ((int)uVar2 < in_r10[1]) {
      if ((param_4[0x17] & 0x80000000) == 0) {
        (**(code **)(*piVar1 + 0x10))(piVar1,*piVar10,uVar2,4);
      }
      aiStack_1c0[0] = in_r10[1];
      iVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,aiStack_1c0,4);
      *piVar10 = iVar6;
      param_4[0x17] = aiStack_1c0[0];
    }
    uVar2 = in_r10[1];
    uVar8 = (ulonglong)uVar2;
    puVar9 = (undefined4 *)*piVar10;
    param_4[0x16] = uVar2;
    if (0 < (int)uVar2) {
      iVar6 = *in_r10 - (int)puVar9;
      do {
        *puVar9 = *(undefined4 *)(iVar6 + (int)puVar9);
        puVar9 = puVar9 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  iVar6 = *(int *)(in_r9 + 8);
  param_4[0x14] = 0xffffffff;
  if (iVar6 != 0) {
    fn_82D3C628((double)lbl_82002AE0,appuStack_120);
    iVar7 = fn_82CEBD78();
    puVar9 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
    uVar15 = puVar9[1];
    uVar16 = puVar9[2];
    uVar17 = puVar9[3];
    puVar4 = (undefined4 *)(in_r0 + param_6 & 0xfffffff0);
    uVar11 = *puVar4;
    uVar12 = puVar4[1];
    uVar13 = puVar4[2];
    uVar14 = puVar4[3];
    puVar4 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar9;
    puVar4[1] = uVar15;
    puVar4[2] = uVar16;
    puVar4[3] = uVar17;
    puVar9 = (undefined4 *)(iVar7 + 0x10U & 0xfffffff0);
    uVar15 = puVar9[1];
    uVar16 = puVar9[2];
    uVar17 = puVar9[3];
    puVar4 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar9;
    puVar4[1] = uVar15;
    puVar4[2] = uVar16;
    puVar4[3] = uVar17;
    puVar9 = (undefined4 *)(iVar7 + 0x20U & 0xfffffff0);
    uVar15 = puVar9[1];
    uVar16 = puVar9[2];
    uVar17 = puVar9[3];
    puVar4 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar9;
    puVar4[1] = uVar15;
    puVar4[2] = uVar16;
    puVar4[3] = uVar17;
    puVar9 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar9 = uVar11;
    puVar9[1] = uVar12;
    puVar9[2] = uVar13;
    puVar9[3] = uVar14;
    fn_8253D7A8(auStack_c0,appuStack_120,auStack_100,0);
    uStack_184 = lbl_82134508;
    puVar9 = *(undefined4 **)(iVar6 + 0x78);
    uStack_170 = *puVar9;
    pcVar3 = *(code **)((uint)*(byte *)((iStack_114 + 0xd) * 0x20 +
                                        *(int *)(*(int *)(in_r9 + 0x10) + 0xc) +
                                       *(int *)(iVar6 + 0x80)) * 0x14 + *(int *)(iVar6 + 0x80) +
                       0x9a8);
    uStack_16c = *(undefined1 *)(puVar9 + 1);
    uStack_168 = puVar9[2];
    uStack_164 = puVar9[3];
    uStack_160 = puVar9[4];
    uStack_15c = puVar9[5];
    puVar4 = (undefined4 *)((int)puVar9 + in_r0 + 0x20 & 0xfffffff0);
    uVar11 = puVar4[1];
    uVar12 = puVar4[2];
    uVar13 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_150 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar11;
    puVar5[2] = uVar12;
    puVar5[3] = uVar13;
    puVar4 = (undefined4 *)((uint)(puVar9 + 0xc) & 0xfffffff0);
    uVar11 = puVar4[1];
    uVar12 = puVar4[2];
    uVar13 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_140 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar11;
    puVar5[2] = uVar12;
    puVar5[3] = uVar13;
    puVar9 = (undefined4 *)((uint)(puVar9 + 0x10) & 0xfffffff0);
    uVar11 = puVar9[1];
    uVar12 = puVar9[2];
    uVar13 = puVar9[3];
    ppuStack_1b0 = &lbl_82138FAC;
    iStack_180 = 0;
    uStack_1ac = uStack_184;
    puVar4 = (undefined4 *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar9;
    puVar4[1] = uVar11;
    puVar4[2] = uVar12;
    puVar4[3] = uVar13;
    (*pcVar3)(auStack_c0,in_r9 + 0x10,&uStack_170,&ppuStack_1b0);
    if (iStack_180 != 0) {
      param_4[0x14] = uStack_174;
    }
    ppuStack_1b0 = &lbl_82138A2C;
    appuStack_120[0] = &lbl_8212FC60;
  }
  fn_82CED628(param_4 + 5,0xffffffff83185ac0);
  return param_4;
}

