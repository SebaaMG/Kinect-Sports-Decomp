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
extern int fn_82698FC8();
extern int fn_8269A110();
extern int fn_826C6DA8();
extern int fn_826C6E68();
extern int fn_826C90C8();
extern int fn_826CD9A0();
extern int fn_826D0878();
extern int fn_826D46F0();
extern unsigned int iStack_44;
extern unsigned int iStack_84;
extern unsigned int uStack_40;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_826D5930(int param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 **ppuStack_8c;
  undefined4 **ppuStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 **ppuStack_4c;
  undefined4 **ppuStack_48;
  int iStack_44;
  undefined4 uStack_40;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x18) != '\0')) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x28))();
  }
  else {
    uVar3 = (ulonglong)*(uint *)(iVar1 + 0x10);
  }
  uVar5 = uVar3 - 1;
  if ((int)param_2 < (int)(uVar3 - 1)) {
    uVar5 = param_2;
  }
  uVar5 = ((uVar5 & 0xffffffff) >> 0x1f) - 1 & uVar5;
  fn_826D0878(param_1,0);
  uVar2 = *(uint *)(param_1 + 0xbc);
  uVar6 = (undefined4)uVar5;
  if ((uVar5 & 0xffffffff) < (ulonglong)uVar2) {
    lVar4 = uVar5 - 1;
    if ((uVar5 & 0xffffffff) == 0) {
      lVar4 = 0;
    }
    fn_82698FC8(param_1 + 0xa8,lVar4);
    if ((uVar5 & 0xffffffff) == 0) {
      *(undefined4 *)(param_1 + 0xbc) = uVar6;
    }
    else {
      uStack_a0 = (**(code **)(**(int **)(param_1 + 0xa0) + 0xd8))();
      ppuStack_8c = &ppuStack_8c;
      uStack_b0 = 0;
      ppuStack_88 = &ppuStack_8c;
      uStack_ac = 0;
      uStack_a8 = 0x32;
      uStack_a4 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_80 = 1;
      uStack_90 = uStack_a0;
      iStack_84 = param_1;
      fn_826C6DA8(param_1,&uStack_b0,0,uVar5 - 1);
      *(undefined4 *)(param_1 + 0xbc) = uVar6;
      fn_826D46F0(param_1,&uStack_b0,4);
      fn_826CD9A0(&uStack_b0);
    }
    fn_826C90C8(param_1,uVar5);
    fn_8269A110(param_1 + 0xa8);
  }
  else if ((ulonglong)uVar2 < (uVar5 & 0xffffffff)) {
    if (((uVar5 & 0xffffffff) < 2) || ((uVar5 & 0xffffffff) <= (ulonglong)(uVar2 + 1))) {
      *(undefined4 *)(param_1 + 0xbc) = uVar6;
    }
    else {
      uStack_60 = (**(code **)(**(int **)(param_1 + 0xa0) + 0xd8))();
      uStack_70 = 0;
      ppuStack_4c = &ppuStack_4c;
      uStack_6c = 0;
      ppuStack_48 = &ppuStack_4c;
      uStack_68 = 0x32;
      uStack_64 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_40 = 0;
      uStack_50 = uStack_60;
      iStack_44 = param_1;
      fn_826C6DA8(param_1,&uStack_70,(ulonglong)*(uint *)(param_1 + 0xbc) + 1,uVar5 - 1);
      uVar3 = (ulonglong)*(uint *)(param_1 + 0xbc);
      while (uVar3 = uVar3 + 1, (uVar3 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        fn_826C6E68(param_1,uVar3);
      }
      *(undefined4 *)(param_1 + 0xbc) = uVar6;
      fn_826D46F0(param_1,&uStack_70,4);
      fn_826CD9A0(&uStack_70);
    }
    fn_826C90C8(param_1,uVar5);
  }
  *(undefined4 *)(param_1 + 0xb8) = 1;
  return;
}

