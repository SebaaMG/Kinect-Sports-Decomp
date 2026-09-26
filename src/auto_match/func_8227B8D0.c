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
extern int fn_82F64988();


void fn_8227B8D0(double param_1,double param_2,int param_3,int param_4,int param_5,
                  undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9,
                  undefined4 param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  
  iVar1 = param_4 * 0xdc + param_3;
  puVar2 = (undefined4 *)(iVar1 + 0xa9c);
  if (param_5 != 0) {
    puVar2 = (undefined4 *)(iVar1 + 0xb00);
  }
  *(undefined4 *)(param_3 + 0xa78) = 1;
  fn_82F64988(puVar2 + 3,0x20,param_6);
  puVar2[0x13] = (float)param_1;
  puVar2[0x16] = (float)param_2;
  puVar2[1] = param_7;
  puVar2[2] = param_8;
  puVar2[0x14] = param_10;
  puVar2[0x15] = in_stack_00000054;
  puVar2[0x17] = in_stack_00000064;
  puVar2[0x18] = in_stack_0000006c;
  *puVar2 = 1;
  return;
}

