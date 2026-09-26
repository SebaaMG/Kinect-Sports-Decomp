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
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_824D2AE8();
extern int fn_82F51468();
extern int fn_82F53380();
extern int fn_82F53418();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


void fn_824D7968(int param_1,longlong param_2)

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
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [4];
  int *piStack_34;
  
  uVar2 = fn_82F51468(auStack_38,*(undefined4 *)(param_1 + 0x20));
  fn_824D2AE8(&uStack_40,uVar2);
  if (ZEXT48(piStack_34) != 0) {
    lVar5 = ZEXT48(piStack_34) + 8;
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
      (**(code **)(*piStack_34 + 4))();
    }
  }
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x34,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x100) = iVar7;
  iVar3 = fn_82F53380(uStack_40,param_2 + 0x34,0,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x104) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x30,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0xf8) = iVar7;
  iVar3 = fn_82F53380(uStack_40,param_2 + 0x30,0,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0xfc) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x38,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x108) = iVar7;
  iVar3 = fn_82F53380(uStack_40,param_2 + 0x38,0,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x10c) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x3c,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x110) = iVar7;
  iVar3 = fn_82F53380(uStack_40,param_2 + 0x3c,0,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x114) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x40,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x118) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x44,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x11c) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x48,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x120) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x4c,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x124) = iVar7;
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

