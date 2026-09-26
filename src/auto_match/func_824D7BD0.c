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


void fn_824D7BD0(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int *piStack_24;
  
  uVar2 = fn_82F51468(auStack_28,*(undefined4 *)(param_1 + 0x20));
  fn_824D2AE8(&uStack_30,uVar2);
  if (ZEXT48(piStack_24) != 0) {
    lVar4 = ZEXT48(piStack_24) + 8;
    do {
      puVar5 = (uint *)lVar4;
      lVar3 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar3,0,lVar4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar3 == 0) {
      (**(code **)(*piStack_24 + 4))();
    }
  }
  if (*(int *)(param_1 + 0xf8) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0xf8),1);
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0xfc),1);
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0x100),1);
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0x104),1);
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0x108),1);
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0x10c),1);
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0x110),1);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0x114),1);
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0x118),1);
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0x11c),1);
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0x120),1);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    fn_82F52C20(uStack_30,*(int *)(param_1 + 0x124),1);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

