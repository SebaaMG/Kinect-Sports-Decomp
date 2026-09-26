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
extern int fn_8236B080();
extern int fn_8255AE78();


void fn_8236B118(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_00010470;
  undefined4 in_register_00010474;
  undefined4 in_register_00010478;
  undefined4 in_vr71;
  
  iVar5 = fn_8236B080();
  *(undefined4 *)(iVar5 + 0xf00) = *param_2;
  puVar3 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  puVar4 = (undefined4 *)(iVar5 + 0xf10U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar3 = (undefined4 *)((uint)(param_2 + 0x10) & 0xfffffff0);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  puVar4 = (undefined4 *)(iVar5 + 0xf40U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  fn_8255AE78((double)(float)param_2[0xc]);
  iVar5 = *(int *)(param_1 + 0xf00);
  puVar3 = (undefined4 *)(param_1 + 0xf50U & 0xfffffff0);
  *puVar3 = in_register_00010470;
  puVar3[1] = in_register_00010474;
  puVar3[2] = in_register_00010478;
  puVar3[3] = in_vr71;
  *(uint *)(param_1 + 0xf60) = (uint)*(byte *)(param_2 + 8);
  puVar2 = *(ushort **)(((iVar5 == 0) + 0xa1) * 4 + param_1);
  uVar1 = *puVar2;
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
    puVar3 = (undefined4 *)((uint)(puVar2 + 0x10) & 0xfffffff0);
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    puVar4 = (undefined4 *)(in_r0 + param_1 + 0xf20 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
  }
  *(undefined4 *)(param_1 + 0xf24) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 4);
  return;
}

