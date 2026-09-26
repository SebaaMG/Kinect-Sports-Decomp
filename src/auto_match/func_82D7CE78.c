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
extern unsigned int *auStack_a0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CE6820();
extern int fn_82D7CDB8();
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int lbl_8200133C;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;


byte * fn_82D7CE78(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,byte param_6
                    ,int param_7,int *param_8)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int in_r0;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  undefined4 in_stack_00000054;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_a0 [160];
  
  iVar2 = *param_8;
  pbVar6 = (byte *)fn_82D7CDB8();
  *(int *)(pbVar6 + 0x10) = param_2;
  *(int *)(pbVar6 + 0x14) = param_4;
  *(undefined4 *)(pbVar6 + 8) = in_stack_00000054;
  *(short *)(pbVar6 + 4) = (short)*(undefined4 *)(param_2 + 0x54);
  *(short *)(pbVar6 + 6) = (short)*(undefined4 *)(param_4 + 0x54);
  iVar7 = fn_82CE5410();
  if (*(uint *)(param_2 + 0x54) == (*(uint *)(param_2 + 0x58) & 0x3fffffff)) {
    fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),(int *)(param_2 + 0x50),8);
  }
  iVar7 = *(int *)(param_2 + 0x54);
  *(int *)(param_2 + 0x54) = iVar7 + 1;
  piVar9 = (int *)(iVar7 * 8 + *(int *)(param_2 + 0x50));
  iVar7 = fn_82CE5410();
  if (*(uint *)(param_4 + 0x54) == (*(uint *)(param_4 + 0x58) & 0x3fffffff)) {
    fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),(int *)(param_4 + 0x50),8);
  }
  iVar7 = *(int *)(param_4 + 0x50);
  iVar4 = *(int *)(param_4 + 0x54) * 8;
  *(int *)(param_4 + 0x54) = *(int *)(param_4 + 0x54) + 1;
  *piVar9 = (int)pbVar6;
  *(byte **)(iVar4 + iVar7) = pbVar6;
  piVar9[1] = param_4;
  *(int *)(iVar4 + iVar7 + 4) = param_2;
  uStack_b8 = 0;
  uStack_b0 = *(undefined4 *)(pbVar6 + 8);
  iStack_c0 = param_3;
  iStack_bc = param_5;
  piStack_b4 = param_8;
  fn_82CE6820(auStack_a0,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_5 + 8));
  bVar1 = *(byte *)(*(char *)(param_2 + 0x1a) * 10 + (int)*(char *)(param_4 + 0x1a) + *param_8 +
                   0x1bb0);
  pbVar6[0xc] = bVar1;
  param_8[0x18] = (char)bVar1 * 0x40 + *param_8 + 0x1c20;
  pbVar6[1] = (byte)param_7;
  uVar5 = lbl_8200133C;
  if (*(int *)(param_7 * 0x50 + iVar2 + 0x16d8) == 0) {
    pbVar8 = pbVar6 + 0x20;
    *pbVar6 = param_6 | 2;
  }
  else {
    pbVar8 = pbVar6 + 0x30;
    *pbVar6 = param_6 | 4;
    *(undefined4 *)(pbVar6 + 0x18) = uVar5;
    puVar3 = (undefined4 *)((uint)(pbVar6 + 0x20 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_000100d0;
    puVar3[1] = in_register_000100d4;
    puVar3[2] = in_register_000100d8;
    puVar3[3] = in_vr13;
  }
  (**(code **)((uint)pbVar6[1] * 0x50 + iVar2 + 0x16b0))(&iStack_c0,pbVar6,pbVar8);
  pbVar6[3] = 0x80;
  return pbVar6;
}

