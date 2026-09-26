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
extern int fn_82359698();
extern int fn_8236B080();
extern int fn_823D6088();
extern int fn_823DBA60();
extern int fn_823E4EF0();
extern int fn_8255AE78();


void fn_823CFA50(int *param_1,int *param_2)

{
  ushort uVar1;
  int *piVar2;
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
  *(int *)(iVar5 + 0xf00) = *param_2;
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
  iVar5 = param_1[0x3c0];
  puVar3 = (undefined4 *)((uint)(param_1 + 0x3d4) & 0xfffffff0);
  *puVar3 = in_register_00010470;
  puVar3[1] = in_register_00010474;
  puVar3[2] = in_register_00010478;
  puVar3[3] = in_vr71;
  param_1[0x3d8] = (uint)*(byte *)(param_2 + 8);
  uVar1 = *(ushort *)param_1[(iVar5 == 0) + 0xa1];
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
    puVar3 = (undefined4 *)((uint)((ushort *)param_1[(iVar5 == 0) + 0xa1] + 0x10) & 0xfffffff0);
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    puVar4 = (undefined4 *)((int)param_1 + in_r0 + 0xf20 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
  }
  param_1[0x3c9] = *(int *)(*(int *)(param_1[7] + 4) + 4);
  fn_823E4EF0(param_1,param_2);
  piVar2 = *(int **)(*param_2 * 4 + param_1[8]);
  if (piVar2[1] - *piVar2 >> 2 != 0) {
    param_1[0x38e] = 1;
  }
  fn_82359698(param_1,3);
  iVar5 = (**(code **)(*param_1 + 200))(param_1);
  if (iVar5 == 0) {
    fn_823DBA60(param_1[300],param_1[0x26b]);
  }
  fn_823D6088(param_1 + 0x27e);
  return;
}

