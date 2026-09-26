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
extern int fn_825CC628();
extern int fn_8262F8D8();
extern int fn_8262FBD8();
extern int fn_82630040();
extern int fn_8263C7F0();
extern int fn_8263C910();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8320A898;


int fn_825CB538(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int in_r0;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int aiStack_40 [16];
  
  *(int *)(param_1 + 0xc0) = (int)param_5;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  puVar5 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  uVar3 = puVar5[1];
  uVar6 = puVar5[2];
  uVar7 = puVar5[3];
  puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = *puVar5;
  puVar1[1] = uVar3;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar5 = (undefined4 *)(param_4 + 0x10U & 0xfffffff0);
  uVar3 = puVar5[1];
  uVar6 = puVar5[2];
  uVar7 = puVar5[3];
  puVar1 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
  *puVar1 = *puVar5;
  puVar1[1] = uVar3;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar5 = (undefined4 *)(param_4 + 0x20U & 0xfffffff0);
  uVar3 = puVar5[1];
  uVar6 = puVar5[2];
  uVar7 = puVar5[3];
  puVar1 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  *puVar1 = *puVar5;
  puVar1[1] = uVar3;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar5 = (undefined4 *)(param_4 + 0x30U & 0xfffffff0);
  uVar3 = puVar5[1];
  uVar6 = puVar5[2];
  uVar7 = puVar5[3];
  puVar1 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
  *puVar1 = *puVar5;
  puVar1[1] = uVar3;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  uVar3 = fn_8263C7F0(param_5,param_5,1,1,0,0x1a22ab60,0,3);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  uVar3 = fn_8263C7F0(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc0),1,1,0,
                            0x2d22ab9f,0,3);
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar3 = fn_8263C7F0(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc0),1,1,0,
                            0x2d20014a,0,3);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  iVar4 = *(int *)(param_1 + 0xc0) >> 1;
  uVar3 = fn_8263C7F0(iVar4,iVar4,1,1,0,0x2da2ab5e,0,3);
  *(undefined4 *)(param_1 + 100) = uVar3;
  iVar4 = *(int *)(param_1 + 0xc0);
  aiStack_40[2] = 0;
  aiStack_40[1] = 0;
  aiStack_40[3] = 0;
  aiStack_40[0] =
       0x800 - (int)((((longlong)(int)(iVar4 + 0xfU & 0xfffffff0) *
                       (longlong)(int)(((iVar4 + 0x4fU) / 0x50) * 0x50) & 0x1fffffffU) << 3) /
                    0x1400);
  uVar3 = fn_8263C910(iVar4,iVar4,0x1a22ab60,0,aiStack_40);
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  iVar4 = *(int *)(param_1 + 0xc0);
  aiStack_40[2] = 0;
  aiStack_40[1] = 0;
  aiStack_40[3] = 0;
  aiStack_40[0] =
       0x800 - (int)((((longlong)(int)(iVar4 + 0xfU & 0xfffffff0) *
                       (longlong)(int)(((iVar4 + 0x4fU) / 0x50) * 0x50) & 0x1fffffffU) << 3) /
                    0x1400);
  uVar3 = fn_8263C910(iVar4,iVar4,0x1a22ab60,0,aiStack_40);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  iVar4 = fn_82630040(0x10,0x200,0);
  *(int *)(param_1 + 0xa0) = iVar4;
  uVar2 = *(uint *)(iVar4 + 0x18) & 0xfffffffc;
  puVar5 = (undefined4 *)
           fn_8262F8D8(iVar4,10,0,uVar2,0,uVar2,*(uint *)(iVar4 + 0x1c) & 0x3fffffc,0);
  *(undefined4 **)(param_1 + 0xa4) = puVar5;
  *puVar5 = lbl_8218E8E8;
  fn_8262FBD8(*(int *)(param_1 + 0xa0),*(uint *)(*(int *)(param_1 + 0xa0) + 0x18) & 0xfffffffc
                    ,0);
  fn_825CC628(param_1,lbl_8320A898);
  return param_1;
}

