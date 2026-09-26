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
extern int fn_82F68CC0();


void fn_82CA3F80(int param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
                  longlong param_6,longlong param_7,longlong param_8)

{
  longlong lVar1;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  int in_stack_00000074;
  
  lVar1 = (longlong)(in_stack_00000074 >> 1);
  if (*(int *)(param_1 + 0x98) == 0) {
    if (0 < in_stack_00000074 >> 1) {
      param_6 = param_6 - param_7;
      param_3 = param_3 - param_4;
      do {
        fn_82F68CC0(param_2,param_5,in_stack_0000006c & 0xfffffffe);
        param_2 = param_2 + (ulonglong)in_stack_0000005c;
        fn_82F68CC0(param_2,param_5 + param_8,in_stack_0000006c & 0xfffffffe);
        param_5 = param_5 + param_8 + param_8;
        param_2 = param_2 + (ulonglong)in_stack_0000005c;
        fn_82F68CC0(param_3 + param_4,param_6 + param_7,(int)in_stack_0000006c >> 1);
        fn_82F68CC0(param_4,param_7,(int)in_stack_0000006c >> 1);
        lVar1 = lVar1 + -1;
        param_7 = param_7 + (ulonglong)in_stack_00000054;
        param_4 = param_4 + (ulonglong)in_stack_00000064;
      } while (lVar1 != 0);
    }
  }
  else {
    (**(code **)(param_1 + 0x3e4c))();
  }
  return;
}

