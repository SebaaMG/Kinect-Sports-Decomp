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
extern int fn_82BD51F0();
extern int fn_82BD6260();
extern int fn_82BDC130();
extern unsigned int lbl_821AAD20;
extern U64 storeWordConditionalIndexed();


void fn_82BD6990(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  lVar4 = param_1 + 0x54;
  XMsgCancelIORequest(param_1 + 0xa0,1);
  iVar2 = (int)param_1;
  uVar3 = *(uint *)(iVar2 + 0x54);
  while (uVar3 != 0) {
    do {
      puVar5 = (uint *)lVar4;
      uVar3 = *puVar5;
      if (uVar3 != 2) {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)uVar3,0,lVar4);
          *puVar5 = uVar1;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(3,0,lVar4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar3 == 2) goto LAB_82bd6a3c;
    do {
      if (*puVar5 != 1) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)*puVar5,0,lVar4);
          *puVar5 = uVar3;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(0,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar3 = *puVar5;
  }
LAB_82bd6a48:
  if (*(int *)(iVar2 + 0xc) != 0) {
    XamVoiceClose();
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  fn_82BDC130(*(undefined4 *)(iVar2 + 8));
  *(undefined4 *)(iVar2 + 0xc4) = lbl_821AAD20;
  fn_82BD51F0(*(undefined4 *)(iVar2 + 0x9c),param_1);
  *(undefined4 *)(iVar2 + 4) = 1;
  fn_82BD6260(*(undefined4 *)(iVar2 + 0x9c));
  uVar3 = 0;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    param_1 = param_1 + 0x20;
    do {
      (**(code **)(**(int **)((int)param_1 + -0x10) + 0xc))();
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 4;
      *(undefined4 *)param_1 = 0;
    } while (uVar3 < *(uint *)(iVar2 + 0x2c));
  }
  return;
LAB_82bd6a3c:
  do {
  } while (*puVar5 != 0);
  goto LAB_82bd6a48;
}

