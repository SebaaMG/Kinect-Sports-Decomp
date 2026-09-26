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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_88;
extern unsigned int fStack_3c;
extern unsigned int fStack_4c;
extern unsigned int fStack_5c;
extern unsigned int fStack_6c;
extern unsigned int fStack_80;
extern int fn_824A62D0();
extern int fn_82F4EBC0();
extern int fn_82F4ED08();
extern unsigned int iStack_7c;
extern unsigned int iStack_90;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_8c;
extern V16 vectorCompareEqualToFloatingPoint();


void fn_824A5F78(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  ulonglong uVar4;
  int iVar5;
  byte in_cr6;
  double dVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
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
  undefined4 uVar20;
  undefined4 uVar21;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  float fStack_80;
  int iStack_7c;
  undefined1 auStack_70 [4];
  float fStack_6c;
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_50 [4];
  float fStack_4c;
  undefined1 auStack_40 [4];
  float fStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  (**(code **)*param_2)(param_2,auStack_88,&uStack_8c);
  (**(code **)(*param_2 + 4))(param_2,uStack_8c,&iStack_90);
  iVar1 = *(int *)(iStack_90 + 0x40);
  puVar2 = (undefined4 *)(iVar1 + 0x100U & 0xfffffff0);
  uVar19 = puVar2[1];
  uVar20 = puVar2[2];
  uVar21 = puVar2[3];
  puVar3 = (undefined4 *)(iVar1 + 0x200U & 0xfffffff0);
  uVar15 = *puVar3;
  uVar16 = puVar3[1];
  uVar17 = puVar3[2];
  uVar18 = puVar3[3];
  puVar3 = (undefined4 *)(iVar1 + 0x1c0U & 0xfffffff0);
  uVar11 = *puVar3;
  uVar12 = puVar3[1];
  uVar13 = puVar3[2];
  uVar14 = puVar3[3];
  puVar3 = (undefined4 *)(iVar1 + 0x2c0U & 0xfffffff0);
  uVar7 = *puVar3;
  uVar8 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar19;
  puVar3[2] = uVar20;
  puVar3[3] = uVar21;
  vectorCompareEqualToFloatingPoint(in_vs45,in_vs32);
  puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar2 = uVar11;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  uVar4 = (~((ulonglong)in_cr6 << 4) & 0xffffffff) >> 7 & 1;
  uStack_30 = (undefined4)uVar4;
  if (((uVar4 == 0) || (fStack_4c <= fStack_6c)) || (fStack_3c <= fStack_5c)) {
    uStack_2c = 0;
  }
  else {
    uStack_2c = 1;
  }
  fn_82F4EBC0(0);
  dVar6 = (double)fn_82F4ED08();
  iVar1 = *(int *)(param_1 + 0x3c);
  fStack_80 = (float)dVar6;
  iStack_7c = *(int *)(iStack_90 + 0x48);
  if (*(int *)(iVar1 + 0x14) != 0) {
    iVar5 = *(int *)(iVar1 + 0x14) + -1;
    if ((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc)) / 0x60 <= iVar5) {
      iVar5 = iVar5 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x60;
    }
    if (*(int *)(iVar5 * 0x60 + *(int *)(iVar1 + 0xc) + 4) == iStack_7c) {
      return;
    }
  }
  fn_824A62D0(iVar1 + 4,&fStack_80);
  return;
}

