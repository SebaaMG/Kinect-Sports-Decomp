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
extern int fn_82F53418();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_824E1C78(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int *piStack_24;
  
  uVar2 = fn_82F51468(auStack_28,*(undefined4 *)(param_1 + 0x20));
  fn_824D2AE8(&uStack_30,uVar2);
  if (ZEXT48(piStack_24) != 0) {
    lVar5 = ZEXT48(piStack_24) + 8;
    do {
      puVar6 = (uint *)lVar5;
      lVar4 = (ulonglong)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar4,0,lVar5);
        *puVar6 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar4 == 0) {
      (**(code **)(*piStack_24 + 4))();
    }
  }
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x30,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  **(int **)(param_1 + 0xfc) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x3c,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0xc) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x40,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x10) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x44,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x14) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x48,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x18) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x4c,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x1c) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x34,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 4) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x38,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 8) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x50,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x20) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x54,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x24) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x58,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x28) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(ulonglong)*(uint *)(param_1 + 0xfc) + 0x5c,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x2c) = iVar7;
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

