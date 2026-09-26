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
extern int fn_827D6C00();
extern int fn_827DFCE8();
extern int fn_827E1820();
extern int fn_827E22D0();
extern int fn_827E2790();
extern int fn_82811438();
extern unsigned int iStack_8c;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


undefined8
fn_827D7098(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8)

{
  char cVar4;
  longlong lVar1;
  int *piVar3;
  undefined8 uVar2;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined1 auStack_80 [128];
  
  if ((param_8 & 0xffffffff) != 0) {
    fn_827E1820(param_8);
  }
  piVar3 = (int *)0x0;
  cVar4 = fn_827DFCE8(param_1 + 0x110,param_2,param_3,param_5,param_6,in_stack_0000005c,param_7,
                          &uStack_ac);
  if (cVar4 == '\0') {
    uVar2 = 0xb7;
  }
  else {
    fn_827E2790(&uStack_90,uStack_ac);
    uStack_a8 = 0;
    fn_82811438(auStack_80,&uStack_a8,0x10);
    lVar1 = (**(code **)(*(int *)lbl_83156AA0 + 4))
                      (lbl_83156AA0,0x4c,auStack_80,in_stack_0000005c);
    uStack_a4 = (undefined4)lVar1;
    uStack_a0 = uStack_a4;
    if (lVar1 != 0) {
      uStack_98 = 0;
      uStack_94 = 0;
      fn_82517978(&uStack_98,uStack_90,iStack_8c,0);
      piVar3 = (int *)fn_827E22D0(lVar1,uStack_ac,param_4,param_5,param_6,0,in_stack_00000054,
                                      in_stack_0000005c);
    }
    (**(code **)(*piVar3 + 4))(piVar3,param_1);
    fn_827D6C00(param_1,piVar3);
    if (iStack_8c != 0) {
      fn_822315A0();
    }
    uVar2 = 0;
  }
  return uVar2;
}

