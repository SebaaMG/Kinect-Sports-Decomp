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
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82D1BD60(int *param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 in_vs37 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fStack_10;
  
  puVar2 = (undefined4 *)(in_r0 + param_3 * 0x10 + *param_1 & 0xfffffff0);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  vectorSubtractFloatingPoint(in_vs39,in_vs40);
  puVar2 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  uVar1 = storeVectorElementWordIndexed(in_vs37,0,ZEXT48(&stack0x00000000) - 0x10);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  if (fStack_10 <= lbl_821AAD20) {
    return;
  }
  puVar2 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return;
}

