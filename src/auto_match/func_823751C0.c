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
extern int fn_822315A0();
extern int fn_8236FB68();
extern int fn_8236FDE0();
extern int fn_823727D8();
extern int fn_823807F0();
extern int fn_82508078();
extern int fn_8288B760();
extern unsigned int lbl_8218E8E8;


void fn_823751C0(double param_1,int param_2,int *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  uint uVar4;
  int iVar5;
  longlong lVar3;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float afStack_50 [20];
  
  *(int *)(param_2 + 0xa10) = *(int *)(param_2 + 0xa10) + 1;
  if (*(int *)(param_4 + 0x24) != 0) {
    iVar5 = *(int *)(param_2 + 0x284);
    iVar6 = *(int *)(*param_3 + 0x20d0);
    puVar1 = (undefined4 *)(*param_3 + 400U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar1 = (undefined4 *)(iVar6 + 0x1f80U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    *(float *)((iVar5 + 0x9c) * 4 + param_2) = afStack_50[0] - afStack_50[0];
    iVar5 = *(int *)(param_2 + 0x284) + 1;
    *(int *)(param_2 + 0x284) = iVar5;
    if (4 < iVar5) {
      *(undefined4 *)(param_2 + 0x284) = 0;
    }
    if (*(int *)(param_4 + 0x168) == 0) {
      uVar4 = *(uint *)(param_4 + 0x16c);
    }
    else {
      uVar4 = fn_8288B760();
      uVar4 = uVar4 & 0xff;
    }
    if ((uVar4 != 0) && ((param_5 == 10 || (param_5 == 0xb)))) {
      fn_823727D8(param_2,*(undefined4 *)(param_4 + 0x2c));
    }
  }
  if ((double)lbl_8218E8E8 < param_1) {
    uVar7 = *(undefined4 *)(param_2 + 0x664);
    iVar5 = fn_8236FDE0(param_4);
    if ((byte)((iVar5 == 0) + 0x16U) < 0x1e) {
      fn_823807F0(uVar7);
    }
  }
  iVar5 = param_5 * 0x148 + *param_3;
  iVar6 = iVar5 + 0x1dc;
  if ((double)lbl_8218E8E8 <= param_1) {
    iVar6 = iVar5 + 0x280;
  }
  iVar5 = *(int *)(iVar6 + 0x24);
  if (((*(int *)(param_4 + 0x24) == 0) && (iVar5 != 0)) && (lVar3 = fn_8236FB68(0x24), lVar3 != 0))
  {
    fn_82508078(*(undefined4 *)(param_2 + 0xa4),lVar3,0);
  }
  if (*(int *)(param_4 + 0x24) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x7dc) + 0x20) = 1;
  }
  if (*(int *)(param_2 + 0x204) == 0) {
    if (iVar5 != 0) {
      iVar5 = (*(int *)(param_4 + 0x2c) * 2 + *(int *)(param_4 + 0x28)) * 0x88 + param_2 + 0xa14;
      *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    }
    iVar5 = (*(int *)(param_4 + 0x2c) * 2 + *(int *)(param_4 + 0x28)) * 0x88 + param_2 + 0xa14;
    if (*(int *)(param_2 + 0x220) == 0) {
      *(int *)(iVar5 + 0x5c) = *(int *)(iVar5 + 0x5c) + 1;
    }
    else {
      *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + 1;
    }
  }
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return;
}

