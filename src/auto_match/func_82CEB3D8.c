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


void fn_82CEB3D8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  
  param_1[3] = param_6;
  param_1[4] = param_7;
  param_1[5] = param_8;
  param_1[2] = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[6] = in_stack_00000054;
  param_1[7] = in_stack_0000005c;
  param_1[8] = in_stack_00000064;
  param_1[9] = in_stack_0000006c;
  param_1[10] = in_stack_00000074;
  param_1[0xb] = in_stack_0000007c;
  return;
}

