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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_80;
extern int fn_82CEC350();
extern int fn_82D1F7E8();
extern unsigned int lbl_8201E104;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();


double fn_82D1FAE0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 in_r0;
  ulonglong uVar7;
  char cVar8;
  double dVar9;
  undefined1 in_vs43 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_80;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  uVar7 = ZEXT48(&stack0x00000000);
  dVar9 = (double)lbl_821AAD20;
  cVar8 = fn_82D1F7E8();
  if (cVar8 != '\0') {
    for (puVar1 = *(undefined4 **)(param_1 + 0x2c); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      iVar2 = puVar1[3];
      iVar3 = puVar1[4];
      puVar4 = (undefined4 *)(puVar1[2] + 0x10 & 0xfffffff0);
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      iVar6 = (int)in_r0;
      puVar5 = (undefined4 *)((uint)(auStack_60 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      puVar4 = (undefined4 *)(iVar2 + 0x10U & 0xfffffff0);
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      puVar5 = (undefined4 *)((uint)(auStack_50 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      puVar4 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      puVar5 = (undefined4 *)((uint)(auStack_40 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      fn_82CEC350(uVar7 - 0x70,uVar7 - 0x60);
      uVar10 = storeVectorElementWordIndexed(in_vs43,0,uVar7 - 0x80);
      *(undefined4 *)(uVar7 - 0x80) = uVar10;
      dVar9 = (double)(float)((double)fStack_80 + dVar9);
    }
    dVar9 = (double)(float)(dVar9 * (double)lbl_8201E104);
  }
  return dVar9;
}

