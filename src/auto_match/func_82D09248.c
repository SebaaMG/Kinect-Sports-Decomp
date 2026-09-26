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
extern unsigned int fStack_30;
extern int fn_82D08DA0();
extern unsigned int lbl_820D2840;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_821CEA90;
extern unsigned int lbl_821CEAA0;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82D09248(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_r0;
  char *pcVar4;
  undefined1 in_vs35 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_30;
  
  pcVar4 = (char *)fn_82D08DA0(param_1,param_2,0x1e);
  if (*pcVar4 == '\0') {
    puVar1 = (undefined4 *)((uint)(&lbl_821CEAA0 + in_r0) & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(&lbl_820D2840 + in_r0) & 0xfffffff0);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    uVar11 = puVar2[2];
    uVar12 = puVar2[3];
    puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar8;
    puVar1 = (undefined4 *)((uint)(&lbl_821CEA90 + in_r0) & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar8 = puVar1[2];
    uVar7 = puVar1[3];
    puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
    puVar1 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar8;
    puVar1[3] = uVar7;
  }
  else {
    iVar3 = (int)param_2;
    puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar8;
    puVar1 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar8;
    puVar1 = (undefined4 *)(iVar3 + 0x20U & 0xfffffff0);
    uVar6 = *puVar1;
    uVar8 = puVar1[1];
    uVar7 = puVar1[2];
    uVar9 = puVar1[3];
    puVar1 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
    *puVar1 = uVar6;
    puVar1[1] = uVar8;
    puVar1[2] = uVar7;
    puVar1[3] = uVar9;
    vectorSubtractFloatingPoint(in_vs37,in_vs38);
    uVar5 = storeVectorElementWordIndexed(in_vs35,0,ZEXT48(&stack0x00000000) - 0x30);
    *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x30) = uVar5;
    if (fStack_30 < lbl_821AAD20) {
      puVar1 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
      *puVar1 = uVar6;
      puVar1[1] = uVar8;
      puVar1[2] = uVar7;
      puVar1[3] = uVar9;
    }
  }
  return;
}

