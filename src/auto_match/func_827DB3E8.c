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
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E51E8();
extern int fn_827E5360();
extern unsigned int iStack_84;
extern unsigned int uStack_88;


undefined8
fn_827DB3E8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  int iStack_84;
  undefined1 auStack_80 [128];
  
  fn_827DADC8(&uStack_88,param_4,in_stack_0000005c,in_stack_00000064,in_stack_0000006c,0);
  lVar1 = fn_827E51E8(0x4c);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82517978(auStack_80,uStack_88,iStack_84,0);
    uVar2 = fn_827E5360(param_1,param_2,param_3,lVar1,param_5,param_6,param_7,param_8);
  }
  fn_82517978(auStack_90,uStack_88,iStack_84,0);
  uVar2 = fn_827DAB30(param_4,uVar2,in_stack_0000006c,auStack_90,0);
  if (iStack_84 != 0) {
    fn_822315A0();
  }
  return uVar2;
}

