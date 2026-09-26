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
extern int fn_82230110();
extern int fn_822B80E8();
extern int fn_8234AE20();
extern int fn_8234B5A8();
extern int fn_8234D618();
extern int fn_8234D730();
extern int fn_8234DBC0();
extern int fn_8234EED8();
extern int fn_82511350();
extern int fn_82511558();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825330A8();
extern int fn_8255F0B8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821CC160;


int * fn_822B7C30(int *param_1,int param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar1;
  int *piVar4;
  int *piVar6;
  ulonglong uVar5;
  longlong lVar7;
  
  *param_1 = param_2;
  iVar2 = (**(code **)(**(int **)(param_2 + 0x8c0) + 0x4c))();
  param_1[1] = iVar2;
  param_1[2] = 0;
  piVar4 = param_1 + 5;
  param_1[3] = 0;
  param_1[4] = 0;
  fn_82511350(piVar4);
  piVar6 = param_1 + 9;
  iVar2 = fn_8251F720(param_3,0);
  param_1[9] = iVar2;
  iVar2 = *(int *)(param_2 + 0x8c0);
  param_1[10] = (int)piVar6;
  fn_8234D618(param_1 + 0xb,param_1[1]);
  fn_82230110(param_1 + 0xd,0xffffffff821b1d30);
  param_1[0x14] = iVar2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 1;
  fn_8234EED8(param_1 + 10);
  fn_8234D730(param_1 + 0x1c,param_2,param_1[1],piVar4,param_4);
  fn_8234B5A8(param_1 + 0x54,param_2,param_1[1],piVar6);
  fn_8234AE20(param_1 + 0xb0,param_1[1],piVar4,piVar6);
  iVar2 = param_1[1];
  param_1[0xca] = (int)piVar6;
  puVar3 = (undefined4 *)fn_8265C9E0(0x1c0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 1;
    puVar3[2] = 1;
    *puVar3 = &lbl_821A8D8C;
    if (puVar3 + 4 != (undefined4 *)0x0) {
      fn_8255F0B8(puVar3 + 4,iVar2,0);
    }
  }
  param_1[0xcc] = (int)puVar3;
  param_1[0xcb] = (int)(puVar3 + 4);
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  iVar2 = param_1[0xcb];
  param_1[0xcf] = lbl_821CC160;
  *(code **)(iVar2 + 0x170) = fn_82511558;
  *(int **)(iVar2 + 0x178) = piVar4;
  *(undefined4 *)(iVar2 + 0x174) = 0;
  *(undefined4 *)(param_1[0xcb] + 0x1a8) = 1;
  iVar2 = *param_5;
  if (iVar2 == 0) {
    uVar5 = 0;
    uVar1 = 0xffffffff821936a4;
  }
  else {
    uVar1 = fn_8251F720(param_5,0);
    uVar5 = uVar1;
  }
  fn_8234DBC0(param_1 + 0xd0,uVar1,param_1[1],*(undefined4 *)(param_2 + 0x8c0));
  if ((iVar2 != 0) && ((uVar5 & 0xffffffff) != 0)) {
    fn_8251FA58(uVar5);
  }
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(undefined1 *)((int)param_1 + 0x37d) = 0;
  *(undefined1 *)((int)param_1 + 0x37e) = 0;
  fn_822B80E8(param_1);
  iVar2 = *(int *)(*param_1 + 0x8c0);
  *(undefined4 *)(iVar2 + 0x94) = 1;
  if (*(int *)(iVar2 + 0x80) != 0) {
    puVar3 = (undefined4 *)(iVar2 + 0x7c);
    lVar7 = 4;
    do {
      puVar3 = puVar3 + 1;
      fn_825330A8(*puVar3);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return param_1;
}

