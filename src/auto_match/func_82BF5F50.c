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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE5998();
extern unsigned int lbl_820EBAA4;
extern U64 storeWordConditionalIndexed();


void fn_82BF5F50(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  
  puVar3 = (undefined4 *)param_1;
  *puVar3 = &lbl_820EBAA4;
  lVar6 = param_1 + 0x50;
  do {
    puVar7 = (uint *)lVar6;
    uVar1 = *puVar7;
    if (uVar1 != 1) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar6);
        *puVar7 = uVar2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(0,0,lVar6);
      *puVar7 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar1 != 0) {
    if (puVar3[0x15] != 0) {
      iVar4 = fn_82BE5340();
      while (iVar4 != 0) {
        puVar5 = *(undefined4 **)(iVar4 + 8);
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        iVar4 = fn_82BE5350(puVar3[0x15]);
      }
      fn_82BE5478(puVar3[0x15]);
      iVar4 = puVar3[0x15];
      if (iVar4 != 0) {
        fn_82BE5478(iVar4);
        thunk_FUN_82be5558(iVar4);
      }
      puVar3[0x15] = 0;
    }
    if (puVar3[0x16] != 0) {
      fn_82BE5340();
      while (*(int *)(puVar3[0x16] + 8) != 0) {
        puVar5 = (undefined4 *)fn_82BE5378(puVar3[0x16]);
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        fn_82BE5350(puVar3[0x16]);
      }
      fn_82BE5478();
      iVar4 = puVar3[0x16];
      if (iVar4 != 0) {
        fn_82BE5478(iVar4);
        thunk_FUN_82be5558(iVar4);
      }
      puVar3[0x16] = 0;
    }
    if (puVar3[0x18] != 0) {
      fn_82BE5340();
      while (*(int *)(puVar3[0x18] + 8) != 0) {
        puVar5 = (undefined4 *)fn_82BE5378(puVar3[0x18]);
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        fn_82BE5350(puVar3[0x18]);
      }
      fn_82BE5478();
      iVar4 = puVar3[0x18];
      if (iVar4 != 0) {
        fn_82BE5478(iVar4);
        thunk_FUN_82be5558(iVar4);
      }
      puVar3[0x18] = 0;
    }
    if (puVar3[0x1a] != 0) {
      fn_82BE5340();
      while (*(int *)(puVar3[0x1a] + 8) != 0) {
        puVar5 = (undefined4 *)fn_82BE5378(puVar3[0x1a]);
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        fn_82BE5350(puVar3[0x1a]);
      }
      fn_82BE5478();
      iVar4 = puVar3[0x1a];
      if (iVar4 != 0) {
        fn_82BE5478(iVar4);
        thunk_FUN_82be5558(iVar4);
      }
      puVar3[0x1a] = 0;
    }
  }
  fn_82BE5998(param_1);
  return;
}

