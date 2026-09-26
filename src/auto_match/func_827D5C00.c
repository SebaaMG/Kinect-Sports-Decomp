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
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_827D5850();
extern int fn_827DFCE8();
extern int fn_827E1820();
extern int fn_827E22D0();
extern int fn_827E2790();
extern int fn_82811438();
extern unsigned int iStack_94;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


undefined8
fn_827D5C00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8)

{
  char cVar3;
  longlong lVar1;
  undefined8 uVar2;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  int in_stack_00000064;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_80 [128];
  
  if ((param_8 & 0xffffffff) != 0) {
    fn_827E1820(param_8);
  }
  cVar3 = fn_827DFCE8(param_1 + 0x110,param_2,param_3,param_5,param_6,in_stack_0000005c,param_7,
                          &uStack_ac);
  if (cVar3 == '\0') {
    uVar2 = 0xb7;
  }
  else {
    fn_827E2790(&uStack_98,uStack_ac);
    if (in_stack_00000064 != 0) {
      fn_82517A50(in_stack_00000064,&uStack_98);
    }
    uStack_a8 = 0;
    fn_82811438(auStack_80,&uStack_a8,0x10);
    lVar1 = (**(code **)(*(int *)lbl_83156AA0 + 4))
                      (lbl_83156AA0,0x4c,auStack_80,in_stack_0000005c);
    uStack_a4 = (undefined4)lVar1;
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_a0 = uStack_a4;
      fn_82517978(&uStack_90,uStack_98,iStack_94,0);
      uVar2 = fn_827E22D0(lVar1,uStack_ac,param_4,param_5,param_6,0,in_stack_00000054,
                              in_stack_0000005c);
    }
    uStack_a0 = 0;
    uStack_9c = 0;
    fn_82517978(&uStack_a0,uStack_98,iStack_94,0);
    uVar2 = fn_827D5850(param_1,uVar2,&uStack_a0,0);
    if (iStack_94 != 0) {
      fn_822315A0();
    }
  }
  return uVar2;
}

