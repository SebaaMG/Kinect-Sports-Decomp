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
extern unsigned int *auStack_44;
extern unsigned int *auStack_78;
extern unsigned int *auStack_90;
extern int fn_824973B0();
extern int fn_824977B8();
extern unsigned int iStack00000024;
extern unsigned int iStack_50;
extern unsigned int lbl_821BEBB0;
extern unsigned int stack0x00000024;
extern unsigned int uStack_2c;
extern unsigned int uStack_48;
extern unsigned int uStack_60;


void fn_82496F60(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iStack00000024;
  undefined1 auStack_90 [24];
  undefined4 auStack_78 [6];
  undefined4 uStack_60;
  int iStack_50;
  undefined **ppuStack_4c;
  undefined4 uStack_48;
  undefined4 auStack_44 [6];
  undefined4 uStack_2c;
  
  iVar1 = *(int *)(param_1 + 0x54);
  auStack_78[0] = *(undefined4 *)(iVar1 + 0x100);
  if (*(int *)(iVar1 + 0x188) == 0) {
    uVar9 = 0;
  }
  else {
    puVar6 = auStack_78;
    puVar8 = (undefined4 *)(iVar1 + 0x188);
    lVar10 = 5;
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar9 = 1;
    *(undefined4 *)(iVar1 + 0x188) = 0;
  }
  iStack00000024 = param_3;
  uStack_60 = uVar9;
  iVar3 = fn_824973B0(param_1 + 0x28,&stack0x00000024);
  iVar1 = *(int *)(param_1 + 0x2c);
  piVar7 = (int *)(iVar3 * 8 + *(int *)(param_1 + 0x38));
  iVar3 = *piVar7;
  piVar2 = (int *)iVar3;
  while( true ) {
    iVar5 = iVar1;
    if (iVar3 != iVar1) {
      iVar5 = *(int *)piVar7[1];
    }
    piVar4 = (int *)iVar1;
    if ((piVar2 == (int *)iVar5) || (piVar4 = piVar2, piVar2[2] == param_3)) break;
    piVar2 = (int *)*piVar2;
  }
  if (piVar4 == (int *)iVar1) {
    uStack_48 = 0;
    puVar6 = auStack_44;
    puVar8 = auStack_78;
    ppuStack_4c = &lbl_821BEBB0;
    auStack_44[0] = auStack_78[0];
    lVar10 = 5;
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uStack_2c = 0;
    iStack_50 = param_3;
    piVar4 = (int *)fn_824977B8(auStack_90,param_1 + 0x28,&iStack_50);
    piVar4 = (int *)*piVar4;
  }
  *(int *)((int)piVar4 + 0x10) = param_3;
  puVar6 = (undefined4 *)((int)piVar4 + 0x14);
  *(undefined4 *)((int)piVar4 + 0x14) = auStack_78[0];
  puVar8 = auStack_78;
  lVar10 = 5;
  do {
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *(undefined4 *)((int)piVar4 + 0x2c) = uVar9;
  return;
}

