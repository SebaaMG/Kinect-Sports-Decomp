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
extern int fn_82EA37F0();


void fn_82EC4F40(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                  uint param_6,uint param_7,longlong param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  int in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  uint in_stack_0000008c;
  undefined4 in_stack_000000ac;
  int *in_stack_000000ec;
  int *in_stack_000000f4;
  undefined4 *in_stack_000000fc;
  
  in_stack_00000054 = in_stack_00000054 + in_stack_00000064;
  uVar1 = (ulonglong)in_stack_0000005c;
  lVar2 = (longlong)(in_stack_00000054 >> 1) * (longlong)*(int *)(param_1 + 0x568) +
          (ulonglong)(uint)((int)(param_8 + uVar1) >> 1);
  fn_82EA37F0(param_1,param_2,param_3,param_4,
                (ulonglong)(uint)(*(int *)(param_1 + 0x564) * in_stack_00000054) +
                (ulonglong)param_5 + param_8 + uVar1,lVar2 + (ulonglong)param_6,
                lVar2 + (ulonglong)param_7,uVar1 - in_stack_0000008c);
  *in_stack_000000ec = (int)((param_8 + uVar1 & 0xffffffff) << 2) + param_1;
  *in_stack_000000f4 = in_stack_00000054 * 4 + param_2;
  *in_stack_000000fc = in_stack_000000ac;
  return;
}

