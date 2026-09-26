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
extern int fn_8223B688();


int fn_82517C10(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000054;
  
  fn_8223B688();
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  iVar2 = param_1 + 0x38;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  *(undefined4 *)(param_1 + 0x2c) = param_6;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  *(undefined4 *)(param_1 + 0x34) = param_8;
  if (*(int *)(in_stack_00000054 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    if (*(int *)(in_stack_00000054 + 0x10) != in_stack_00000054) {
      iVar2 = 0;
    }
    uVar1 = (**(code **)**(undefined4 **)(in_stack_00000054 + 0x10))
                      (*(undefined4 **)(in_stack_00000054 + 0x10),iVar2);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
  }
  return param_1;
}

