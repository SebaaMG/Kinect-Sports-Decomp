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
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_824D2AE8();
extern int fn_82F51468();
extern int fn_82F52C20();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_824E1F30(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int *piStack_24;
  
  uVar3 = fn_82F51468(auStack_28,*(undefined4 *)(param_1 + 0x20));
  fn_824D2AE8(&uStack_30,uVar3);
  if (ZEXT48(piStack_24) != 0) {
    lVar5 = ZEXT48(piStack_24) + 8;
    do {
      puVar6 = (uint *)lVar5;
      lVar4 = (ulonglong)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar4,0,lVar5);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar4 == 0) {
      (**(code **)(*piStack_24 + 4))();
    }
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 4);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 4) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 8);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 8) = 0;
  }
  if (**(int **)(param_1 + 0xfc) != 0) {
    fn_82F52C20(uStack_30,**(int **)(param_1 + 0xfc),1);
    **(undefined4 **)(param_1 + 0xfc) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0xc);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x10);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x10) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x14);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x14) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x18);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x18) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x1c);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x1c) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x20);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x20) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x24);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x24) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x28);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x28) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x2c);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x2c) = 0;
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

