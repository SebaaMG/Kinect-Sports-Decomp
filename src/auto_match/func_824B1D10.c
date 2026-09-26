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
extern unsigned int *auStack_58;
extern unsigned int fStack_30;
extern int fn_824B2210();
extern int fn_82F4EBC0();
extern int fn_82F4ED08();
extern unsigned int iStack_2c;
extern unsigned int iStack_60;
extern unsigned int uStack_5c;


void fn_824B1D10(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  float fStack_30;
  int iStack_2c;
  
  (**(code **)*param_2)(param_2,auStack_58,&uStack_5c);
  (**(code **)(*param_2 + 4))(param_2,uStack_5c,&iStack_60);
  puVar2 = (undefined4 *)(*(int *)(iStack_60 + 0x40) + 0x150U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)(*(int *)(iStack_60 + 0x40) + 0x250U & 0xfffffff0);
  uVar9 = *puVar3;
  uVar10 = puVar3[1];
  uVar11 = puVar3[2];
  uVar12 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  fn_82F4EBC0(0);
  dVar5 = (double)fn_82F4ED08();
  iVar1 = *(int *)(param_1 + 0x3c);
  fStack_30 = (float)dVar5;
  iStack_2c = *(int *)(iStack_60 + 0x48);
  if (*(int *)(iVar1 + 0x14) != 0) {
    iVar4 = *(int *)(iVar1 + 0x14) + -1;
    if ((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc)) / 0x30 <= iVar4) {
      iVar4 = iVar4 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x30;
    }
    if (*(int *)(iVar4 * 0x30 + *(int *)(iVar1 + 0xc) + 0x24) == iStack_2c) {
      return;
    }
  }
  fn_824B2210(iVar1 + 4,auStack_50);
  return;
}

