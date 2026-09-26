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


void fn_82ED5FA8(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,short *param_6,ulonglong param_7,ulonglong param_8)

{
  undefined4 in_stack_00000054;
  
  if ((param_7 & 8) != 0) {
    fn_82F07E00(param_1,param_5,*param_6,param_4,*(undefined4 *)(param_1 + 0x203c),
                      in_stack_00000054);
    (**(code **)(param_1 + 0x1fa4))(param_3,8,param_4);
    (**(code **)(param_1 + 0x1fc0))(param_1,param_2,param_3,param_8,8);
    param_5 = ((longlong)*param_6 & 0x7fffffffU) * 2 + param_5;
  }
  if ((param_7 & 4) != 0) {
    fn_82F07E00(param_1,param_5,param_6[1],param_4,*(undefined4 *)(param_1 + 0x203c),
                      in_stack_00000054);
    (**(code **)(param_1 + 0x1fa4))(param_3,8,param_4);
    (**(code **)(param_1 + 0x1fc0))(param_1,param_2 + 4,param_3,param_8,8);
    param_5 = ((longlong)param_6[1] & 0x7fffffffU) * 2 + param_5;
  }
  if ((param_7 & 2) != 0) {
    fn_82F07E00(param_1,param_5,param_6[2],param_4,*(undefined4 *)(param_1 + 0x203c),
                      in_stack_00000054);
    (**(code **)(param_1 + 0x1fa4))(param_3,8,param_4);
    (**(code **)(param_1 + 0x1fc0))(param_1,(param_8 & 0x3fffffff) * 4 + param_2,param_3,param_8,8);
    param_5 = ((longlong)param_6[2] & 0x7fffffffU) * 2 + param_5;
  }
  if ((param_7 & 1) != 0) {
    fn_82F07E00(param_1,param_5,param_6[3],param_4,*(undefined4 *)(param_1 + 0x203c),
                      in_stack_00000054);
    (**(code **)(param_1 + 0x1fa4))(param_3,8,param_4);
    (**(code **)(param_1 + 0x1fc0))
              (param_1,(param_8 + 1 & 0x3fffffff) * 4 + param_2,param_3,param_8,8);
  }
  return;
}

