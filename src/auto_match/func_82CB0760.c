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


undefined4
fn_82CB0760(int param_1,longlong param_2,int param_3,int param_4,int param_5,undefined8 param_6,
             int param_7,int param_8)

{
  undefined2 *puVar1;
  undefined2 uVar3;
  undefined4 uVar2;
  int *in_stack_0000005c;
  uint in_stack_00000064;
  undefined4 in_stack_0000006c;
  
  if (*in_stack_0000005c == 0) {
    if (param_7 == 0) {
      uVar2 = *(undefined4 *)(param_4 * 4 + param_3);
    }
    else {
      puVar1 = *(undefined2 **)(param_3 + 4);
      uVar3 = (**(code **)(param_1 + 0xbac))(param_2 + -8,in_stack_00000064,in_stack_0000006c);
      *puVar1 = uVar3;
      **(undefined2 **)(param_1 + 0x778) = uVar3;
      uVar2 = *(undefined4 *)(param_1 + 0x778);
    }
  }
  else if (param_8 == 0) {
    uVar2 = *(undefined4 *)((param_5 + 2) * 4 + param_3);
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + 0xc);
    uVar3 = (**(code **)(param_1 + 0xbac))
                      (param_2 + ((ulonglong)in_stack_00000064 & 0x1fffffff) * -8,in_stack_00000064,
                       in_stack_0000006c);
    *puVar1 = uVar3;
    **(undefined2 **)(param_1 + 0x77c) = uVar3;
    uVar2 = *(undefined4 *)(param_1 + 0x77c);
  }
  return uVar2;
}

