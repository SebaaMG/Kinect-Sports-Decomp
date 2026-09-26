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
extern unsigned int *auStack_10;
extern unsigned int *auStack_20;
extern unsigned int lbl_821920E0;
extern unsigned int lbl_82192100;
extern unsigned int lbl_82192120;
extern V16 vectorAddFloatingPoint();


void fn_82413808(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined *puVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar1 = *(uint *)(param_1 + 0x208);
  puVar2 = (undefined4 *)(param_2 + 0x1d0U & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar2 = (undefined4 *)(param_2 + 0x1f0U & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar4 = &lbl_821920E0;
  puVar3 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  if (uVar1 == 0) {
    puVar4 = &lbl_821920E0;
  }
  else if (uVar1 == 1) {
    puVar4 = &lbl_82192100;
  }
  else if (uVar1 < 3) {
    puVar4 = &lbl_82192120;
  }
  puVar2 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar2 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  vectorAddFloatingPoint(in_vs32,in_vs44);
  vectorAddFloatingPoint(in_vs32,in_vs45);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(puVar4 + 0x1c);
  puVar2 = (undefined4 *)(param_1 + 0x210U & 0xfffffff0);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  puVar2 = (undefined4 *)(param_1 + 0x220U & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  return;
}

