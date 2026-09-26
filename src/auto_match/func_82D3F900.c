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
extern int fn_82CE5410();
extern int fn_82D3F450();
extern unsigned int lbl_82138514;


undefined4 * fn_82D3F900(double param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int aiStack_40 [16];
  
  param_2[4] = (float)param_1;
  param_2[2] = 0;
  *param_2 = &lbl_82138514;
  *(undefined2 *)((int)param_2 + 6) = 1;
  param_2[3] = 6;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0x80000000;
  piVar8 = param_2 + 0x15;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0x80000000;
  param_2[0x18] = 0;
  iVar5 = fn_82CE5410();
  uVar2 = param_2[0x17] & 0x3fffffff;
  piVar1 = *(int **)(iVar5 + 0x10);
  if ((int)uVar2 < param_4[1]) {
    if ((param_2[0x17] & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*piVar8,uVar2,0x10);
    }
    aiStack_40[0] = param_4[1];
    iVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,aiStack_40,0x10);
    *piVar8 = iVar5;
    param_2[0x17] = aiStack_40[0];
  }
  uVar2 = param_4[1];
  uVar6 = (ulonglong)uVar2;
  iVar5 = *piVar8;
  param_2[0x16] = uVar2;
  if (0 < (int)uVar2) {
    iVar7 = *param_4 - iVar5;
    do {
      puVar3 = (undefined4 *)(iVar7 + iVar5 & 0xfffffff0);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      iVar5 = iVar5 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  fn_82D3F450(param_2,*param_3,param_3[2],param_3[1]);
  return param_2;
}

