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
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82D41870();
extern unsigned int lbl_82134EF4;
extern unsigned int lbl_82134F00;
extern unsigned int lbl_82134F14;
extern unsigned int lbl_82134F20;
extern unsigned int lbl_82134F30;


undefined4 * fn_82D449E0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int aiStack_40 [16];
  
  fn_82D41870();
  *param_1 = &lbl_82134F20;
  param_1[2] = &lbl_82134F14;
  param_1[3] = &lbl_82134F00;
  iVar6 = 0;
  param_1[4] = &lbl_82134F30;
  param_1[5] = &lbl_82134EF4;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  piVar7 = param_1 + 0xc;
  param_1[0xe] = 0x80000000;
  param_1[8] = 3;
  iVar3 = fn_82CE5410();
  uVar2 = param_1[0xe] & 0x3fffffff;
  piVar1 = *(int **)(iVar3 + 0x10);
  if ((int)uVar2 < param_2[1]) {
    if ((param_1[0xe] & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*piVar7,uVar2,4);
    }
    aiStack_40[0] = param_2[1];
    iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,aiStack_40,4);
    *piVar7 = iVar3;
    param_1[0xe] = aiStack_40[0];
  }
  uVar2 = param_2[1];
  uVar4 = (ulonglong)uVar2;
  puVar5 = (undefined4 *)*piVar7;
  param_1[0xd] = uVar2;
  if (0 < (int)uVar2) {
    iVar3 = *param_2 - (int)puVar5;
    do {
      *puVar5 = *(undefined4 *)(iVar3 + (int)puVar5);
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar3 = 0;
  if (0 < (int)param_1[0xd]) {
    do {
      fn_82CE4040(*(undefined4 *)(iVar6 + *piVar7));
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar3 < (int)param_1[0xd]);
  }
  return param_1;
}

