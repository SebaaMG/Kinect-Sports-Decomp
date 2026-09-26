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
extern unsigned int *auStack_88;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D5078();
extern int fn_827D9D98();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E5E00();
extern int fn_827E63B0();
extern unsigned int iStack_7c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


undefined8
fn_827DBA00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  fn_827DADC8(&uStack_80,param_1,in_stack_0000005c,in_stack_00000064,in_stack_0000006c);
  if ((param_6 & 0xffffffff) != 0) {
    fn_827D5078(uStack_80,param_6);
  }
  lVar1 = fn_827E5E00(100);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_78 = 0;
    uStack_74 = 0;
    fn_82517978(&uStack_78,uStack_80,iStack_7c,0);
    uVar2 = fn_827D9D98(param_2);
    uVar2 = fn_827E63B0(lVar1,param_2,param_4,param_5,param_7,param_8,param_3,uVar2);
  }
  fn_82517978(auStack_88,uStack_80,iStack_7c,0);
  uVar2 = fn_827DAB30(param_1,uVar2,in_stack_0000006c,auStack_88,0);
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  return uVar2;
}

