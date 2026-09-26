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
extern int fn_82A9F198();
extern int fn_82AA66A8();
extern int fn_82AA6868();
extern int fn_82AA6A30();
extern int fn_82B43380();
extern int fn_82B44EB0();
extern int fn_82B5EA40();
extern int fn_82B61D78();


void fn_82AA7010(int param_1,ulonglong param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  uint uVar2;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  uint *in_stack_00000064;
  
  if (param_4 != 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x800;
  }
  *(int *)(param_1 + 0x34) = (int)param_3;
  *(int *)(param_1 + 0x30) = (int)param_2;
  *(uint **)(param_1 + 0x38) = in_stack_00000064;
  if (in_stack_00000064 != (uint *)0x0) {
    uVar2 = in_stack_00000064[4];
    *(uint *)(param_1 + 0x318) = uVar2;
    if (0x40 < uVar2) {
      fn_82AA66A8(param_1,0xe05,0x40);
    }
    if ((param_2 & 0xffff0000) == 0xffff0000) {
      *(uint *)(param_1 + 800) = in_stack_00000064[8];
      *(uint *)(param_1 + 0x324) = in_stack_00000064[9];
      uVar2 = in_stack_00000064[0xc];
    }
    else {
      *(uint *)(param_1 + 800) = in_stack_00000064[10];
      *(uint *)(param_1 + 0x324) = in_stack_00000064[0xb];
      uVar2 = in_stack_00000064[0xd];
    }
    *(uint *)(param_1 + 0x328) = uVar2;
    if ((*in_stack_00000064 & 0x80) != 0) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x1000;
    }
    if ((in_stack_00000064 != (uint *)0x0) && ((*in_stack_00000064 & 2) != 0)) {
      fn_82A9F198(in_stack_00000064[5],param_6,param_2);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x30) & 0xffff0000;
  if (uVar2 != 0xffff0000) {
    if ((*(uint **)(param_1 + 0x38) == (uint *)0x0) || ((**(uint **)(param_1 + 0x38) & 0x20) != 0))
    {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x10;
    }
    if (uVar2 != 0xffff0000) goto LAB_82aa7160;
  }
  if ((*(uint **)(param_1 + 0x38) != (uint *)0x0) && ((**(uint **)(param_1 + 0x38) & 0x40) != 0)) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x40;
  }
LAB_82aa7160:
  lVar1 = fn_82B61D78(param_1,param_5,param_7);
  if (lVar1 == 0) {
    fn_82AA66A8(param_1,0xdad,param_6);
  }
  fn_82B5EA40();
  fn_82B44EB0(param_1);
  uVar2 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4) &
                    0xfffffffe) + 4);
  if (((uVar2 & 1) == 0) && (uVar2 != 0)) {
    fn_82B43380(param_1);
  }
  fn_82AA6868(param_1 + 0x3cc);
  fn_82AA6A30(param_1,param_2,param_3,in_stack_00000054,in_stack_0000005c,in_stack_00000064);
  return;
}

