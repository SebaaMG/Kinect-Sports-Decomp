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
extern unsigned int *auStack_100;
extern int fn_824D9220();
extern int fn_824D94E0();
extern int fn_824D9D48();
extern int fn_8255A070();
extern int fn_8255AE78();
extern int fn_82F6D9FC();
extern int fn_82F6DC94();
extern unsigned int lbl_821CA460;


void fn_824D9048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined4 *puVar1;
  int in_r0;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  uint in_stack_000000d4;
  int in_stack_000000dc;
  int in_stack_00000114;
  int in_stack_0000011c;
  int in_stack_00000124;
  int *in_stack_0000012c;
  int *in_stack_00000134;
  undefined4 *in_stack_0000013c;
  undefined1 auStack_100 [256];
  
  uVar3 = fn_82F6D9FC();
  fn_8255A070();
  uVar2 = fn_8255AE78();
  puVar1 = (undefined4 *)(in_r0 + in_stack_00000124 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *in_stack_00000134 = 0;
  *in_stack_0000013c = lbl_821CA460;
  if (in_stack_000000dc == 0) {
    uVar2 = fn_824D9D48(param_5,param_8,param_9,param_11,auStack_100);
    *in_stack_00000134 = (int)uVar2;
    *in_stack_0000012c = *(int *)((int)uVar2 * 0x30 + (int)param_9 + 0x24);
  }
  else {
    *in_stack_0000012c = in_stack_00000114;
  }
  if (*in_stack_0000012c == 1) {
    fn_824D9220(uVar3,uVar2,param_11,-(uint)(in_stack_0000011c == 0) & in_stack_000000d4,
                      in_stack_00000124,in_stack_0000013c);
  }
  else if (*in_stack_0000012c == 2) {
    fn_824D94E0(uVar3,param_2,param_3,param_5);
  }
  fn_82F6DC94();
  return;
}

