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
extern int fn_82F07E00();


void fn_82ED5EB0(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte in_stack_00000057;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  
  if ((in_stack_00000057 & 2) != 0) {
    fn_82F07E00(param_1,param_5,param_6,param_4,*(undefined4 *)(param_1 + 0x2038),
                      in_stack_00000064);
    (**(code **)(param_1 + 0x1fa0))(param_3,8,param_4);
    (**(code **)(param_1 + 0x1fbc))(param_1,param_2,param_3,in_stack_0000005c,8);
  }
  if ((in_stack_00000057 & 1) != 0) {
    fn_82F07E00(param_1,param_7,param_8,param_4,*(undefined4 *)(param_1 + 0x2038),
                      in_stack_00000064);
    (**(code **)(param_1 + 0x1fa0))(param_3,8,param_4);
    (**(code **)(param_1 + 0x1fbc))(param_1,param_2 + 4,param_3,in_stack_0000005c,8);
  }
  return;
}

