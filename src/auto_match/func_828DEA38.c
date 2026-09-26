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
extern int fn_82516F48();
extern int fn_828AC450();
extern int fn_828BDDA0();
extern int fn_82F68CC0();
extern unsigned int lbl_820270D4;
extern unsigned int lbl_820270D8;


undefined4 *
fn_828DEA38(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             int param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  
  fn_828BDDA0();
  *(undefined8 *)(param_1 + 0x20) = param_2;
  param_1[0x22] = param_3;
  param_1[0x23] = param_4;
  *param_1 = &lbl_820270D8;
  puVar1 = (undefined1 *)((int)param_1 + 0x8f);
  param_1[0x14] = &lbl_820270D4;
  puVar2 = (undefined1 *)(param_5 + -1);
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82F68CC0(param_1 + 0x26,param_6,0x10);
  fn_82F68CC0(param_1 + 0x2a,param_7,0x24);
  fn_82516F48(param_1 + 0x34,param_8);
  fn_82516F48(param_1 + 0x38,in_stack_00000054);
  fn_828AC450(param_1 + 0x3c,in_stack_0000005c);
  return param_1;
}

