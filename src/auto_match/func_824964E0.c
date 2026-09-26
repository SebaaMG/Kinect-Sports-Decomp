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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_60;
extern unsigned int *auStack_d0;
extern int fn_82491E88();
extern int fn_824925D0();
extern int fn_82496A28();
extern int fn_824973B0();
extern unsigned int iStack_90;
extern unsigned int lbl_82196750;
extern unsigned int lbl_821BEBAC;
extern unsigned int stack0x00000000;
extern unsigned int uStack_3c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_ac;
extern unsigned int uStack_ae;
extern unsigned int uStack_af;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern U64 storeVectorElementWordIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_824964E0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  ulonglong uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined4 uStack_ac;
  int iStack_90;
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_60 [36];
  undefined4 uStack_3c;
  
  uVar5 = ZEXT48(&stack0x00000000);
  iVar6 = fn_824973B0();
  iVar1 = *(int *)(param_1 + 4);
  piVar9 = (int *)(iVar6 * 8 + *(int *)(param_1 + 0x10));
  iVar6 = *piVar9;
  piVar2 = (int *)iVar6;
  while( true ) {
    iVar8 = iVar1;
    if (iVar6 != iVar1) {
      iVar8 = *(int *)piVar9[1];
    }
    piVar7 = (int *)iVar1;
    if ((piVar2 == (int *)iVar8) || (piVar7 = piVar2, piVar2[4] == *param_2)) break;
    piVar2 = (int *)*piVar2;
  }
  if (piVar7 == (int *)iVar1) {
    puVar3 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    puVar4 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar10;
    puVar4[2] = uVar11;
    puVar4[3] = uVar12;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_af = 0;
    uStack_ae = 0;
    uStack_ac = 0;
    uVar10 = storeVectorElementWordIndexed(in_vs45,0,uVar5 - 0xe8);
    *(undefined4 *)(uVar5 - 0xe8) = uVar10;
    uStack_74 = storeVectorElementWordIndexed(in_vs44,uVar5 - 0xe8,4);
    uStack_70 = storeVectorElementWordIndexed(in_vs43,uVar5 - 0xe8,8);
    iStack_90 = *param_2;
    puVar3 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    ppuStack_80 = &lbl_821BEBAC;
    uStack_7c = 0;
    puVar4 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar10;
    puVar4[2] = uVar11;
    puVar4[3] = uVar12;
    fn_824925D0(uVar5 - 0x50,uVar5 - 0xc0);
    uStack_3c = uStack_ac;
    piVar7 = (int *)fn_82496A28(uVar5 - 0xa0,param_1,uVar5 - 0x90);
    ppuStack_80 = &lbl_821BEBAC;
    piVar7 = (int *)*piVar7;
    fn_82491E88(uVar5 - 0x50);
    fn_82491E88(uVar5 - 0xc0);
  }
  return (int)piVar7 + 0x20;
}

