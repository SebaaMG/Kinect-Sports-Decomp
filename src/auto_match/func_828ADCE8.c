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
extern int fn_823AA2A8();
extern int fn_82610EF0();
extern int fn_828ACDB8();
extern int fn_828ADBE0();
extern int fn_828ECFB8();


undefined8
fn_828ADCE8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  undefined1 in_stack_00000057;
  undefined1 in_stack_0000005f;
  char in_stack_00000067;
  undefined1 in_stack_0000006f;
  undefined1 in_stack_00000077;
  undefined1 in_stack_0000007f;
  undefined4 in_stack_000000a4;
  undefined1 in_stack_000000af;
  undefined1 in_stack_000000b7;
  undefined1 in_stack_000000bf;
  
  fn_828ADBE0(param_1,in_stack_00000057,in_stack_0000005f,0,param_3,param_4,in_stack_000000a4,
                in_stack_000000bf);
  *(undefined1 *)(param_1 + 0x9c) = 1;
  if (in_stack_00000067 == '\0') {
    fn_828ECFB8(*(undefined4 *)(param_1 + 0x8c),param_2,param_6,param_7,param_8,
                    in_stack_000000af,in_stack_000000b7);
  }
  else {
    piVar1 = *(int **)(param_1 + 0x8c);
    iVar2 = *piVar1;
    fn_82610EF0(param_1 + 0x60);
    fn_823AA2A8(param_1 + 0x60);
    (**(code **)(iVar2 + 0xc))
              (piVar1,param_2,param_6,param_7,param_8,in_stack_0000006f,in_stack_00000077,
               in_stack_0000007f);
  }
  fn_828ACDB8(param_1,1);
  *(undefined4 *)(param_1 + 0x84) = param_5;
  return 1;
}

