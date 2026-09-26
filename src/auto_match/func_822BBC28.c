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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fStack_78;
extern int fn_8249ABC0();
extern int fn_824D03B8();
extern int fn_8255E0B0();
extern int fn_82F68CC0();
extern unsigned int lbl_82192734;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_822BBC28(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int in_r0;
  undefined8 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float afStack_80 [2];
  float fStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    uVar5 = fn_824D03B8((double)*(float *)(param_1 + 0x1ac),iVar1,0,
                         *(undefined4 *)(param_1 + 0x1a0));
    fn_824D03B8((double)*(float *)(param_1 + 0x1ec),uVar5,1,*(undefined4 *)(param_1 + 0x1e0));
    fVar4 = lbl_82192734;
    puVar2 = (undefined4 *)(param_1 + 0x250U & 0xfffffff0);
    uVar10 = puVar2[1];
    uVar11 = puVar2[2];
    uVar12 = puVar2[3];
    uVar9 = *(undefined4 *)(iVar1 + 0x30);
    puVar3 = (undefined4 *)((int)afStack_80 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar10;
    puVar3[2] = uVar11;
    puVar3[3] = uVar12;
    afStack_80[0] = afStack_80[0] * fVar4;
    fStack_78 = fStack_78 * fVar4;
    puVar2 = (undefined4 *)((int)afStack_80 + in_r0 & 0xfffffff0);
    uVar10 = puVar2[1];
    uVar11 = puVar2[2];
    uVar12 = puVar2[3];
    puVar3 = (undefined4 *)(iVar1 + 0x110U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar10;
    puVar3[2] = uVar11;
    puVar3[3] = uVar12;
    iVar6 = fn_8249ABC0();
    *(undefined4 *)(iVar6 + 0x20) = uVar9;
    uVar9 = *(undefined4 *)(param_1 + 0x14);
    fn_8255E0B0(uVar9,9,auStack_70);
    fn_8255E0B0(uVar9,0x20,auStack_60);
    fn_8255E0B0(uVar9,8,auStack_50);
    fn_8255E0B0(uVar9,0x21,auStack_40);
    bVar7 = -(*(int *)(**(int **)(param_1 + 0x238) + 0xc4c) != 0) & 3;
    uStack_30 = (uint)(2 < bVar7);
    uStack_2c = (uint)(3 < bVar7);
    fn_82F68CC0(iVar1 + 0x39b0,auStack_70,0x50);
    iVar6 = fn_8249ABC0();
    uVar8 = 0;
    do {
      if (*(int *)(uVar8 + *(int *)(iVar6 + 0x48) + 4) != 0) {
        uVar9 = 1;
        goto LAB_822bbd80;
      }
      uVar8 = uVar8 + 0x24;
    } while (uVar8 < 0x48);
    uVar9 = 0;
LAB_822bbd80:
    *(undefined4 *)(iVar1 + 0x16c) = uVar9;
  }
  return;
}

