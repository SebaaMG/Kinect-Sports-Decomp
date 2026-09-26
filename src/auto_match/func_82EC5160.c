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
extern int fn_82EC3ED8();


void fn_82EC5160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_000000ac;
  int *in_stack_000000ec;
  int *in_stack_000000f4;
  undefined4 *in_stack_000000fc;
  
  iVar3 = (param_8 + in_stack_0000005c) * 4;
  iVar4 = (in_stack_00000054 + in_stack_00000064) * 4;
  iVar2 = 0xffffff;
  iVar1 = 0xffffff;
  while( true ) {
    if ((iVar2 == iVar3) && (iVar1 == iVar4)) break;
    fn_82EC3ED8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,in_stack_0000006c);
    fn_82EC3ED8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,in_stack_0000006c);
    iVar2 = iVar3;
    iVar1 = iVar4;
  }
  *in_stack_000000ec = iVar3;
  *in_stack_000000f4 = iVar4;
  *in_stack_000000fc = in_stack_000000ac;
  return;
}

