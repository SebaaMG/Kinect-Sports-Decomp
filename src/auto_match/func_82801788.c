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
extern int fn_82805520();
extern int fn_82A1EFC0();
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();


void fn_82801788(ushort *param_1,longlong param_2,int param_3,uint param_4,ulonglong param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 in_r0;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  lVar3 = ((longlong)*(int *)(param_3 + 4) * (longlong)(int)(uint)*param_1 & 0x3fffffffU) * 4;
  lVar6 = lVar3 + (ulonglong)*(uint *)(param_1 + 2);
  dataCacheBlockTouch(lVar3 + (ulonglong)*(uint *)(param_1 + 2));
  dataCacheBlockTouch(lVar6 + 0x80);
  param_4 = param_4 & 0xffff;
  uVar5 = 0x80;
  fn_82A1EFC0(param_2,0,param_4 * 0x30);
  uVar4 = 0;
  if (param_4 != 0) {
    lVar3 = (param_5 & 0xffff) * 4;
    param_2 = param_2 + 0x20;
    do {
      if (0x7f < (uVar5 & 0xffffffff)) {
        uVar5 = uVar5 - 0x80;
        dataCacheBlockTouch(lVar6 + 0x100);
      }
      loadVectorLeftIndexed128(in_r0,lVar6);
      loadVectorRightIndexed128(0x10,lVar6);
      loadVectorLeftIndexed128(0x10,lVar6);
      loadVectorRightIndexed128(0x20,lVar6);
      loadVectorRightIndexed128(0x2c,lVar6);
      loadVectorLeftIndexed128(0x1c,lVar6);
      iVar2 = (int)param_2;
      puVar1 = (undefined4 *)(iVar2 - 0x10U & 0xfffffff0);
      *puVar1 = in_register_00010000;
      puVar1[1] = in_ACC;
      puVar1[2] = in_register_00010008;
      puVar1[3] = in_vr0;
      puVar1 = (undefined4 *)((int)in_r0 + iVar2 & 0xfffffff0);
      *puVar1 = in_register_000100d0;
      puVar1[1] = in_register_000100d4;
      puVar1[2] = in_register_000100d8;
      puVar1[3] = in_vr13;
      fn_82805520();
      uVar4 = uVar4 + 1;
      uVar5 = lVar3 + uVar5;
      lVar6 = lVar3 + lVar6;
      puVar1 = (undefined4 *)(iVar2 - 0x20U & 0xfffffff0);
      *puVar1 = in_register_00010010;
      puVar1[1] = in_register_00010014;
      puVar1[2] = in_register_00010018;
      puVar1[3] = in_vr1;
      param_2 = param_2 + 0x30;
    } while (uVar4 < param_4);
  }
  return;
}

