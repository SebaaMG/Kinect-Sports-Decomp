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
extern unsigned int fStack_10;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


undefined8 fn_82DD7830(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fStack_10;
  
  bVar1 = *(byte *)(param_2 + 4);
  puVar2 = (undefined4 *)((uint)*(byte *)(param_2 + 5) + param_1 & 0xfffffff0);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  uVar6 = storeVectorElementWordIndexed(in_vs44,0,ZEXT48(&stack0x00000000) - 0x10);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x10) = uVar6;
  if (*(float *)(param_1 + 0x11c) < fStack_10) {
    return 1;
  }
  puVar2 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar2 = (undefined4 *)(param_1 + 0x100U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  puVar3 = (undefined4 *)(param_3 + 0x20U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar4;
  puVar3[3] = uVar5;
  puVar2 = (undefined4 *)(in_r0 + (uint)bVar1 + param_1 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  puVar3 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar4;
  puVar3[3] = uVar5;
  return 0;
}

