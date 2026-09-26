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
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_8228E658();
extern int fn_822B9390();
extern int fn_82374268();
extern int fn_824D2AE8();
extern int iRam83276558;
extern unsigned int iStack_44;
extern U64 storeWordConditionalIndexed();


void fn_822E23F0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  char in_RESERVE;
  byte in_cr0;
  undefined4 *puStack_50;
  int *piStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  iVar9 = iRam83276558;
  iVar1 = *(int *)(param_1 + 0x14);
  iRam83276558 = iRam83276558 + 1;
  if (*(int *)(iVar1 + 0x2e0) < 0x18) {
    uVar5 = *(undefined4 *)(iVar1 + 0x2e8);
  }
  else {
    uVar5 = 0;
  }
  if (*(int *)(iVar1 + 0x2e0) < 0x18) {
    uVar4 = *(undefined4 *)(iVar1 + 0x2e4);
  }
  else {
    uVar4 = 0;
  }
  uVar3 = fn_82374268(auStack_48,*(undefined4 *)(param_1 + 0x10),uVar4,uVar5,iVar9);
  puStack_50 = (undefined4 *)0x0;
  piStack_4c = (int *)0x0;
  fn_8228E658(&puStack_50,uVar3);
  fn_8228E658(param_1 + 0x58,&puStack_50);
  if (ZEXT48(piStack_4c) != 0) {
    lVar7 = ZEXT48(piStack_4c) + 8;
    do {
      puVar8 = (uint *)lVar7;
      lVar6 = (ulonglong)*puVar8 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar6,0,lVar7);
        *puVar8 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar6 == 0) {
      (**(code **)(*piStack_4c + 4))();
    }
  }
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  iVar1 = *(int *)(param_1 + 0x14);
  fn_824D2AE8(&puStack_50,param_1 + 0x58);
  iVar9 = *(int *)(iVar1 + 0x24);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar9 + 0xf0);
    if (iVar9 == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)(iVar9 + 0x3c);
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_822B9390(*(undefined4 *)(iVar1 + 0x11c),*puStack_50,(iVar9 == 0) + ' ');
}

