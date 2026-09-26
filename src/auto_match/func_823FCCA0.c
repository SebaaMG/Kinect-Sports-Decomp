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
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern int fn_82365BD8();
extern int fn_823FDF10();
extern unsigned int lbl_821AD588;


undefined4 *
fn_823FCCA0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [120];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    fn_82365BD8(auStack_c0,in_stack_00000064);
    fn_82365BD8(auStack_b8,in_stack_0000005c);
    fn_82365BD8(auStack_b0,in_stack_00000054);
    uVar1 = fn_82365BD8(auStack_a8,param_8);
    uVar2 = fn_82365BD8(auStack_a0,param_7);
    uVar3 = fn_82365BD8(auStack_98,param_6);
    uVar4 = fn_82365BD8(auStack_90,param_5);
    uVar5 = fn_82365BD8(auStack_88,param_4);
    uVar6 = fn_82365BD8(auStack_80,param_3);
    uVar7 = fn_82365BD8(auStack_78,param_2);
    fn_823FDF10(param_1 + 3,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
  }
  return param_1;
}

