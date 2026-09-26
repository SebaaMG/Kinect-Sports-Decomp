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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_824060E8();
extern unsigned int lbl_821B7DB4;
extern unsigned int lbl_821B7DE8;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_82406510(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  char in_RESERVE;
  byte in_cr0;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined1 auStack_60 [96];
  
  if (param_3 == 0) {
    uVar8 = 0xffffffff821b7ddc;
  }
  else {
    uVar8 = 0xffffffff821b7dd0;
  }
  iVar4 = fn_824060E8(auStack_60,param_2);
  *param_1 = &lbl_821B7DB4;
  fn_824060E8(param_1 + 1,iVar4);
  param_1[3] = 2;
  fn_82230110(param_1 + 4,uVar8);
  piVar1 = *(int **)(iVar4 + 4);
  if (ZEXT48(piVar1) != 0) {
    lVar5 = ZEXT48(piVar1) + 8;
    do {
      puVar6 = (uint *)lVar5;
      lVar7 = (ulonglong)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar7,0,lVar5);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  param_1[0xb] = param_3;
  *param_1 = &lbl_821B7DE8;
  puVar3 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  puVar3 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar3 = in_register_00010020;
  puVar3[1] = in_register_00010024;
  puVar3[2] = in_register_00010028;
  puVar3[3] = in_vr2;
  piVar1 = *(int **)(param_2 + 4);
  if (ZEXT48(piVar1) != 0) {
    lVar5 = ZEXT48(piVar1) + 8;
    do {
      puVar6 = (uint *)lVar5;
      lVar7 = (ulonglong)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar7,0,lVar5);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return param_1;
}

