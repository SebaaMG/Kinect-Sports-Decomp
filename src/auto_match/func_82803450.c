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


void fn_82803450(int param_1,int *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
                  int *param_7,int *param_8)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int in_r0;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  uVar2 = *(ushort *)(param_1 + 0x18);
  iVar6 = param_2[3];
  uVar3 = *(ushort *)(param_1 + 0x1a);
  iVar7 = *(int *)(param_1 + 0x10);
  *param_3 = *param_2 * (uint)uVar1 + (uint)uVar2 + (uint)uVar3 + iVar7;
  *param_4 = iVar4 * (uint)uVar1 + (uint)uVar2 + (uint)uVar3 + iVar7;
  *param_5 = iVar5 * (uint)uVar1 + (uint)uVar2 + (uint)uVar3 + iVar7;
  *param_6 = iVar6 * (uint)uVar1 + (uint)uVar2 + (uint)uVar3 + iVar7;
  *param_7 = (*param_3 & 3) << 3;
  *param_8 = (*param_4 & 3) << 3;
  *in_stack_00000054 = (*param_5 & 3) << 3;
  *in_stack_0000005c = (*param_6 & 3) << 3;
  *param_3 = *param_3 & 0xfffffffc;
  *param_4 = *param_4 & 0xfffffffc;
  *param_5 = *param_5 & 0xfffffffc;
  *param_6 = *param_6 & 0xfffffffc;
  *(int *)(in_stack_00000064 + 0xc) = *param_7;
  *(int *)(in_stack_0000006c + 0xc) = *param_8;
  *(int *)(in_stack_00000074 + 0xc) = *in_stack_00000054;
  *(int *)(in_stack_0000007c + 0xc) = *in_stack_0000005c;
  puVar8 = (undefined4 *)(in_r0 + in_stack_00000064 & 0xfffffff0);
  uVar10 = puVar8[1];
  uVar11 = puVar8[2];
  uVar12 = puVar8[3];
  puVar9 = (undefined4 *)(in_r0 + in_stack_00000064 & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar10;
  puVar9[2] = uVar11;
  puVar9[3] = uVar12;
  puVar8 = (undefined4 *)(in_r0 + in_stack_0000006c & 0xfffffff0);
  uVar10 = puVar8[1];
  uVar11 = puVar8[2];
  uVar12 = puVar8[3];
  puVar9 = (undefined4 *)(in_r0 + in_stack_0000006c & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar10;
  puVar9[2] = uVar11;
  puVar9[3] = uVar12;
  puVar8 = (undefined4 *)(in_r0 + in_stack_00000074 & 0xfffffff0);
  uVar10 = puVar8[1];
  uVar11 = puVar8[2];
  uVar12 = puVar8[3];
  puVar9 = (undefined4 *)(in_r0 + in_stack_00000074 & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar10;
  puVar9[2] = uVar11;
  puVar9[3] = uVar12;
  puVar8 = (undefined4 *)(in_r0 + in_stack_0000007c & 0xfffffff0);
  uVar10 = puVar8[1];
  uVar11 = puVar8[2];
  uVar12 = puVar8[3];
  puVar9 = (undefined4 *)(in_r0 + in_stack_0000007c & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar10;
  puVar9[2] = uVar11;
  puVar9[3] = uVar12;
  return;
}

