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
extern unsigned int *auStack_10;
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int stack0x00000000;
extern unsigned int uStack_50;
extern U64 storeVectorElementWordIndexed();


void fn_82D06938(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  longlong lVar3;
  longlong lVar4;
  undefined1 in_vs44 [16];
  undefined4 uVar5;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar17 = puVar1[1];
  uVar18 = puVar1[2];
  uVar19 = puVar1[3];
  puVar2 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uVar13 = *puVar2;
  uVar14 = puVar2[1];
  uVar15 = puVar2[2];
  uVar16 = puVar2[3];
  puVar2 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar17;
  puVar2[2] = uVar18;
  puVar2[3] = uVar19;
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  lVar3 = 4;
  puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar1 = uVar13;
  puVar1[1] = uVar14;
  puVar1[2] = uVar15;
  puVar1[3] = uVar16;
  puVar1 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  do {
    lVar4 = 4;
    do {
      uVar5 = storeVectorElementWordIndexed(in_vs44,0,ZEXT48(&stack0x00000000) - 0x50);
      *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x50) = uVar5;
      *param_1 = uStack_50;
      param_1 = param_1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

