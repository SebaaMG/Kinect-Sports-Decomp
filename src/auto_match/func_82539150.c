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
extern int fn_82268638();
extern int fn_825388F0();
extern int fn_82538DC0();
extern int fn_82538E40();
extern int fn_82539468();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


ulonglong fn_82539150(ulonglong param_1,ulonglong param_2,ulonglong param_3,int param_4,
                       longlong param_5,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  if (((int)param_5 < param_4) || (iVar3 = fn_82538E40(param_6), iVar3 < param_4)) {
    iVar3 = fn_82538E40(param_6);
    if (iVar3 < (int)param_5) {
      if (((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) &&
         ((param_2 & 0xffffffff) != (param_3 & 0xffffffff))) {
        fn_82539468(param_1,param_2,param_3);
      }
      param_3 = param_5 * 0x38 + param_1;
    }
    else {
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
      uVar1 = *(undefined4 *)(param_6 + 0x10);
      uStack_94 = 0;
      uVar4 = param_2;
      uStack_90 = uVar1;
      uStack_50 = uVar1;
      if ((param_2 & 0xffffffff) != (param_3 & 0xffffffff)) {
        do {
          fn_82538DC0(&uStack_a0,uVar4);
          uVar4 = uVar4 + 0x38;
        } while ((uVar4 & 0xffffffff) != (param_3 & 0xffffffff));
      }
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = uVar1;
      fn_825388F0(&uStack_a0);
      fn_825388F0(&uStack_60);
      fn_825388F0(&uStack_80);
      if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
        lVar5 = param_3 - param_2;
        do {
          param_2 = param_2 - 0x38;
          fn_82268638(lVar5 + param_2,param_2);
        } while ((param_2 & 0xffffffff) != (param_1 & 0xffffffff));
      }
      uVar2 = (*(uint **)(param_6 + 0x10))[1];
      param_3 = param_1;
      for (uVar4 = (ulonglong)**(uint **)(param_6 + 0x10); (uVar4 & 0xffffffff) != (ulonglong)uVar2;
          uVar4 = uVar4 + 0x38) {
        fn_82268638(param_3,uVar4);
        param_3 = param_3 + 0x38;
      }
    }
  }
  else {
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
    uVar1 = *(undefined4 *)(param_6 + 0x10);
    uStack_94 = 0;
    uVar4 = param_1;
    uStack_90 = uVar1;
    uStack_70 = uVar1;
    if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
      do {
        fn_82538DC0(&uStack_a0,uVar4);
        uVar4 = uVar4 + 0x38;
      } while ((uVar4 & 0xffffffff) != (param_2 & 0xffffffff));
    }
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = uVar1;
    fn_825388F0(&uStack_a0);
    fn_825388F0(&uStack_80);
    fn_825388F0(&uStack_60);
    if ((param_2 & 0xffffffff) != (param_3 & 0xffffffff)) {
      lVar5 = param_1 - param_2;
      do {
        fn_82268638(lVar5 + param_2,param_2);
        param_2 = param_2 + 0x38;
      } while ((param_2 & 0xffffffff) != (param_3 & 0xffffffff));
    }
    uVar2 = **(uint **)(param_6 + 0x10);
    uVar4 = (ulonglong)(*(uint **)(param_6 + 0x10))[1];
    if (uVar2 != uVar4) {
      do {
        uVar4 = uVar4 - 0x38;
        param_3 = param_3 - 0x38;
        fn_82268638(param_3,uVar4);
      } while ((uVar4 & 0xffffffff) != (ulonglong)uVar2);
    }
  }
  return param_3;
}

