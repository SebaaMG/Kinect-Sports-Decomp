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
extern unsigned int *auStack_60;
extern int fn_82810328();
extern int fn_82810558();
extern int fn_8305D5F0();
extern int fn_8305D7C8();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_83061548();
extern int fn_83063228();
extern int fn_830639B0();
extern int fn_83065E60();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_820288B0;
extern unsigned int lbl_8217E898;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_83063B50(int param_1,undefined4 *param_2,undefined4 *param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined **ppuStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  struct { undefined4 first; undefined4 second; } stack_pair_70;

  undefined4 uStack_68;
  undefined1 auStack_60 [32];
  
  stack_pair_70.first = *param_2;
  stack_pair_70.second = param_2[1];
  uStack_80 = *param_3;
  uStack_7c = param_3[1];
  uStack_68 = param_2[2];
  uStack_78 = param_3[2];
  fn_82810328(&uStack_80,&stack_pair_70.first,auStack_60);
  fn_82810558((double)lbl_820288B0,auStack_60,&stack_pair_70.first);
  fn_82810558((double)lbl_82002C2C,auStack_60,&uStack_80);
  fn_83061548(param_1 + 100,0);
  if ((param_4 & 0xffffffff) != 0) {
    fn_830677A0(param_4,(ulonglong)*(uint *)(param_1 + 0xd8) -
                              (ulonglong)*(uint *)(param_1 + 0xdc),0xffffffff8217e840);
  }
  iStack_8c = *(int *)(param_1 + 0x2c);
  ppuStack_90 = &lbl_8217E898;
  iStack_88 = iStack_8c;
  while (iVar1 = iStack_88, iStack_88 != 0) {
    lVar2 = fn_83065E60();
    lVar7 = lVar2 + 0x10;
    fn_8305E0F8(lVar7,param_1 + 100);
    fn_830639B0(param_1,iVar1,lVar7,&stack_pair_70.first,&uStack_80);
    iVar5 = *(int *)(iVar1 + 0x34);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar1 + 0x30);
    }
    else if (*(int *)(iVar1 + 0x30) != 0) {
      lVar3 = fn_83065E60();
      lVar6 = lVar3 + 0x10;
      fn_8305D5F0(lVar6);
      uVar4 = fn_8305D7C8(lVar7);
      fn_8305E0F8(lVar6,uVar4);
      fn_8305EC98(lVar6,lVar7);
      fn_83063228(param_1,*(undefined4 *)(iVar1 + 0x30),lVar2);
      iVar5 = *(int *)(iVar1 + 0x34);
      lVar2 = lVar3;
    }
    fn_83063228(param_1,iVar5,lVar2);
    iStack_88 = (*(code *)ppuStack_90[1])(&ppuStack_90,iStack_88);
    if ((param_4 & 0xffffffff) != 0) {
      fn_830679A8(param_4);
    }
  }
  if ((param_4 & 0xffffffff) != 0) {
    fn_830678C8(param_4);
  }
  return;
}

