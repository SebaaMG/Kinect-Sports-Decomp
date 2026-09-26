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
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();


/* WARNING: Removing unreachable block (ram,0x82d1e9e8) */

void fn_82D1E998(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_r0;
  longlong lVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_10 [16];
  
  puVar1 = *(undefined4 **)(param_2 + 0x14);
  lVar4 = ZEXT48(&stack0x00000000) - 0x20;
  puVar3 = (undefined4 *)((uint)(puVar1 + 4) & 0xfffffff0);
  uVar5 = *puVar3;
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  uVar2 = storeVectorElementWordIndexed(in_vs32,0,lVar4);
  *(undefined4 *)lVar4 = uVar2;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    lVar4 = ZEXT48(&stack0x00000000) - 0x20;
    uVar2 = storeVectorElementWordIndexed(in_vs43,0,lVar4);
    *(undefined4 *)lVar4 = uVar2;
  }
  puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  return;
}

