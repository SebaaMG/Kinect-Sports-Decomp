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
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();


void fn_826311B8(int param_1,int param_2,longlong param_3,ulonglong param_4,ulonglong param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 in_r0;
  longlong lVar3;
  int iVar4;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  iVar4 = (param_2 + 0x178) * 0x10 + param_1;
  dataCacheBlockTouch(param_3);
  dataCacheBlockTouch(param_3 + 0x80);
  if (3 < (param_4 & 0xffffffff)) {
    lVar3 = ((param_4 - 4 & 0xffffffff) >> 2) + 1;
    do {
      dataCacheBlockTouch(param_3 + 0x100);
      loadVectorRightIndexed128(0x10,param_3);
      loadVectorLeftIndexed128(in_r0,param_3);
      param_4 = param_4 - 4;
      loadVectorLeftIndexed128(0x10,param_3);
      loadVectorRightIndexed128(0x20,param_3);
      loadVectorLeftIndexed128(0x20,param_3);
      loadVectorRightIndexed128(0x30,param_3);
      loadVectorLeftIndexed128(0x30,param_3);
      loadVectorRightIndexed128(0x40,param_3);
      param_3 = param_3 + 0x40;
      puVar1 = (undefined4 *)((int)in_r0 + iVar4 & 0xfffffff0);
      *puVar1 = in_register_00010000;
      puVar1[1] = in_ACC;
      puVar1[2] = in_register_00010008;
      puVar1[3] = in_vr0;
      puVar1 = (undefined4 *)(iVar4 + 0x10U & 0xfffffff0);
      *puVar1 = in_register_000100d0;
      puVar1[1] = in_register_000100d4;
      puVar1[2] = in_register_000100d8;
      puVar1[3] = in_vr13;
      puVar1 = (undefined4 *)(iVar4 + 0x20U & 0xfffffff0);
      *puVar1 = in_register_000100c0;
      puVar1[1] = in_register_000100c4;
      puVar1[2] = in_register_000100c8;
      puVar1[3] = in_vr12;
      puVar1 = (undefined4 *)(iVar4 + 0x30U & 0xfffffff0);
      *puVar1 = in_register_000100b0;
      puVar1[1] = in_register_000100b4;
      puVar1[2] = in_register_000100b8;
      puVar1[3] = in_vr11;
      iVar4 = iVar4 + 0x40;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  uVar2 = param_4 & 0xffffffff;
  while (uVar2 != 0) {
    loadVectorLeftIndexed128(in_r0,param_3);
    loadVectorRightIndexed128(0x10,param_3);
    param_3 = param_3 + 0x10;
    puVar1 = (undefined4 *)((int)in_r0 + iVar4 & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
    iVar4 = iVar4 + 0x10;
    param_4 = param_4 - 1;
    uVar2 = param_4;
  }
  *(ulonglong *)(param_1 + 8) = param_5 | *(ulonglong *)(param_1 + 8);
  return;
}

