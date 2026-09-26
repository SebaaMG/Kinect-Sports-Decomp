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
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();


/* WARNING: Removing unreachable block (ram,0x82d2a91c) */

void fn_82D2A8A0(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  longlong lVar3;
  longlong lVar4;
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  lVar3 = ZEXT48(&stack0x00000000) - 0x30;
  lVar4 = 2;
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x10U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined4 *)(param_3 + 0xc) = 0x3f000000;
  uVar5 = storeVectorElementWordIndexed(in_vs43,0,lVar3);
  *(undefined4 *)lVar3 = uVar5;
  do {
    lVar3 = ZEXT48(&stack0x00000000) - 0x30;
    uVar5 = storeVectorElementWordIndexed(in_vs44,0,lVar3);
    *(undefined4 *)lVar3 = uVar5;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

