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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_827D5158();
extern int fn_827D5850();
extern int fn_827D98C0();
extern int fn_827E13A0();
extern int fn_82811438();
extern unsigned int iStack_74;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;


undefined8
fn_827D59F0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puStack0000001c;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  struct { undefined4 first; int second; } stack_pair_78;

  struct { undefined4 first; undefined4 second; } stack_pair_70;

  struct { undefined4 first; undefined4 second; } stack_pair_68;

  undefined1 auStack_60 [32];

  puStack0000001c = param_2;
  fn_827D5158(&stack_pair_78.first);
  if ((param_6 & 0xffffffff) != 0) {
    fn_82517A50(param_6,&stack_pair_78.first);
  }
  fn_82811438(auStack_60,auStack_90,0x10);
  lVar1 = (**(code **)(*(int *)lbl_83156AA0 + 4))(lbl_83156AA0,0x24,auStack_60,param_5);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    fn_82517978(&stack_pair_70.first,stack_pair_78.first,stack_pair_78.second,0);
    stack_pair_68.first = 0;
    stack_pair_68.second = 0;
    fn_82517978(&stack_pair_68.first,*param_2,param_2[1],0);
    uVar2 = fn_827E13A0(lVar1,&stack_pair_68.first,param_3,param_4,param_5,&stack_pair_70.first);
  }
  fn_82517978(auStack_80,stack_pair_78.first,stack_pair_78.second,0);
  fn_827D5850(param_1,uVar2,auStack_80,0);
  uVar2 = fn_827D98C0(*param_2);
  if (stack_pair_78.second != 0) {
    fn_822315A0();
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return uVar2;
}
