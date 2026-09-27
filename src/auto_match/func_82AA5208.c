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
extern int fn_82AA1C90();
extern int fn_82AA2668();
extern int fn_82AA2720();
extern int fn_82AA3310();
extern int fn_82AA3AA8();
extern int fn_82AA3E10();
extern int fn_82AA4498();
extern int fn_82AA4860();
extern int fn_82AA4948();
extern int fn_82AA5158();
extern unsigned int iStack_50;
extern unsigned int lbl_8315FF98;
extern unsigned int lbl_8315FF9C;
extern unsigned int lbl_8315FFA0;
extern unsigned int lbl_8315FFA8;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


ulonglong fn_82AA5208(uint *param_1,uint param_2,ulonglong param_3,int param_4,undefined4 param_5,
                       undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong lVar7;
  struct { int first; undefined4 second; } stack_pair_50;

  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  
  if (((param_1 != (uint *)0x0) && (3 < param_2)) && (param_4 != 0)) {
    uStack_48 = 0;
    uStack_40 = 0;
    if ((param_3 & 3) == 0) {
      uStack_44 = (uint)param_3 >> 4 & 1;
      stack_pair_50.first = param_4;
      stack_pair_50.second = param_5;
      fn_82AA2720(&stack_pair_50.first,0xffffffff820d3d28);
      fn_82AA2720(&stack_pair_50.first,0xffffffff820d3ca8);
      fn_82AA2720(&stack_pair_50.first,0xffffffff820d3c70);
      lVar7 = (ulonglong)param_1[1] + (ulonglong)param_1[2];
      puVar2 = (undefined *)(*param_1 & 1);
      fn_82AA2720(&stack_pair_50.first,lbl_8315FFA8);
      fn_82AA1C90(&stack_pair_50.first,0xffffffff820d3c5c);
      if (puVar2 < (undefined *)0x2) {
        uVar5 = 0xffffffff820d3c58;
        puVar6 = (&lbl_8315FFA0)[(int)puVar2];
      }
      else {
        uVar5 = 0xffffffff820d3c48;
        puVar6 = puVar2;
      }
      fn_82AA1C90(&stack_pair_50.first,uVar5,puVar6);
      fn_82AA1C90(&stack_pair_50.first,0xffffffff8202e4d0);
      fn_82AA2720(&stack_pair_50.first,lbl_8315FF9C);
      fn_82AA2720(&stack_pair_50.first,lbl_8315FF98);
      fn_82AA4860(param_3,puVar2,param_1,lVar7,&stack_pair_50.first);
      uVar3 = fn_82AA2668(&stack_pair_50.first,puVar2,param_1,lVar7);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar3 = fn_82AA4948(param_3,puVar2,param_1,lVar7,&stack_pair_50.first,0);
      if ((-1 < (int)uVar3) &&
         (uVar3 = fn_82AA5158(&stack_pair_50.first,puVar2,param_1,lVar7,param_6,0), -1 < (int)uVar3)) {
        uVar3 = fn_82AA3AA8(param_3,puVar2,param_1,lVar7,param_1[1] + (int)param_1,param_1[2],
                                  &stack_pair_50.first,0);
      }
      if ((param_3 & 0x800) == 0) {
        iVar4 = (int)uVar3;
      }
      else {
        uVar3 = fn_82AA3E10(param_6,puVar2,0,&stack_pair_50.first);
        iVar4 = (int)uVar3;
      }
      if (iVar4 < 0) {
        return uVar3;
      }
      if ((*param_1 & 0x20) != 0) {
        fn_82AA4498(&stack_pair_50.first,0xffffffff8202f62c);
        fn_82AA2720(&stack_pair_50.first,0xffffffff821ce7a4);
        fn_82AA1C90(&stack_pair_50.first,0xffffffff821cc86c);
        uVar3 = fn_82AA4948(param_3,puVar2,param_1,lVar7,&stack_pair_50.first,1);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = fn_82AA5158(&stack_pair_50.first,puVar2,param_1,lVar7,param_6,1);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = fn_82AA3AA8(param_3,puVar2,param_1,lVar7,param_1[1] + (int)param_1,param_1[2],
                                  &stack_pair_50.first,1);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        if (((param_3 & 0x800) != 0) &&
           (uVar3 = fn_82AA3E10(param_6,puVar2,1,&stack_pair_50.first), (int)uVar3 < 0)) {
          return uVar3;
        }
      }
      uVar1 = param_1[3];
      if (uVar1 != 0) {
        fn_82AA2720(&stack_pair_50.first,0xffffffff821ce838);
        uVar3 = fn_82AA3310(uVar1 + (int)param_1,&stack_pair_50.first);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        fn_82AA2720(&stack_pair_50.first,0xffffffff821ce828);
      }
      fn_82AA2720(&stack_pair_50.first,0xffffffff820d3c44);
      return (ulonglong)uStack_48;
    }
  }
  return 0xffffffff80070057;
}

