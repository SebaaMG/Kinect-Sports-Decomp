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
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_82CECE68();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DD74;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


undefined8 fn_830A0158(int param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  byte bVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  int in_r0;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 in_vs34 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs40 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fStack_20;
  float fStack_1c;
  
  if (*(char *)(param_1 + 2) == '\0') {
    uVar7 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 3);
    lVar8 = ZEXT48(&stack0x00000000) - 0x1c;
    lVar9 = ZEXT48(&stack0x00000000) - 0x20;
    *(float *)(param_5 + 0x1c) = *(float *)(param_2 + 0x40) * *(float *)(param_1 + 0xc);
    puVar3 = (undefined4 *)((uint)bVar1 * 0x10 + param_3 & 0xfffffff0);
    uVar12 = puVar3[1];
    uVar13 = puVar3[2];
    uVar14 = puVar3[3];
    puVar4 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar12;
    puVar4[2] = uVar13;
    puVar4[3] = uVar14;
    *(undefined4 *)(param_5 + 0x10) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_5 + 0x14) = *(undefined4 *)(param_1 + 8);
    vectorSubtractFloatingPoint(in_vs36,in_vs40);
    uVar12 = storeVectorElementWordIndexed(in_vs37,0,lVar8);
    *(undefined4 *)lVar8 = uVar12;
    uVar12 = storeVectorElementWordIndexed(in_vs34,0,lVar9);
    *(undefined4 *)lVar9 = uVar12;
    dVar11 = (double)fn_82CECE68((double)fStack_1c,(double)fStack_20);
    *(float *)(param_5 + 0x18) = (float)dVar11;
    fVar6 = lbl_8201DD74;
    fVar5 = lbl_82015468;
    dVar10 = (double)(*(float *)(*(int *)(param_2 + 0x4c) + 4) * lbl_8200133C);
    while (fVar6 < (float)(dVar10 - dVar11)) {
      fVar2 = *(float *)(param_5 + 0x18) + fVar5;
      *(float *)(param_5 + 0x18) = fVar2;
      dVar11 = (double)fVar2;
    }
    fVar2 = *(float *)(param_5 + 0x18);
    while (fVar6 < (float)((double)fVar2 - dVar10)) {
      fVar2 = *(float *)(param_5 + 0x18) - fVar5;
      *(float *)(param_5 + 0x18) = fVar2;
    }
    uVar7 = 0;
  }
  return uVar7;
}

