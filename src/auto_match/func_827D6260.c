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
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D5158();
extern int fn_827D5850();
extern int fn_827E2C60();
extern int fn_82811438();
extern unsigned int iStack_8c;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


undefined8
fn_827D6260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 in_stack_00000054;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [128];
  
  fn_827D5158(&uStack_90);
  fn_82811438(auStack_80,auStack_a0,0x10);
  lVar1 = (**(code **)(*(int *)lbl_83156AA0 + 4))
                    (lbl_83156AA0,0x50,auStack_80,in_stack_00000054);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_88 = 0;
    uStack_84 = 0;
    fn_82517978(&uStack_88,uStack_90,iStack_8c,0);
    uVar2 = fn_827E2C60(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  fn_82517978(auStack_98,uStack_90,iStack_8c,0);
  uVar2 = fn_827D5850(param_1,uVar2,auStack_98,0);
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  return uVar2;
}

