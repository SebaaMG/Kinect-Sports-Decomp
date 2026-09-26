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
extern unsigned int *auStack_2c;
extern int fn_82A5B238();
extern int fn_82A76B88();
extern unsigned int uStack_30;


void fn_82A5B318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  uStack_30 = 0;
  auStack_2c[0] = 0;
  iVar1 = fn_82A76B88(param_2,param_5,param_6,param_7,param_8,in_stack_00000054,&uStack_30);
  if ((-1 < iVar1) &&
     (iVar1 = fn_82A5B238(param_1,in_stack_00000064,param_3,uStack_30,in_stack_0000005c,
                            in_stack_0000006c,auStack_2c), -1 < iVar1)) {
    *param_4 = auStack_2c[0];
  }
  return;
}

