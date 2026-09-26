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
extern unsigned int iStack00000020;


void fn_82E819E8(int *param_1,undefined8 param_2)

{
  int iStack00000020;
  int in_stack_00000064;
  uint in_stack_0000008c;
  
  param_1[0x213] = 0;
  param_1[0x7a8] = 0;
  if ((in_stack_0000008c != 0) && (*param_1 == 0)) {
    in_stack_0000008c =
         -(uint)((ulonglong)in_stack_0000008c != 0xffffffffffffffff) & in_stack_0000008c;
    param_1[0x213] = in_stack_0000008c;
    param_1[0x7a8] = in_stack_0000008c;
  }
  if ((param_1[0x705] == 0) || (param_1[0x76b] == 1)) {
    param_1[0x213] = 0;
    param_1[0x7a8] = 0;
  }
  iStack00000020 = (int)((ulonglong)param_2 >> 0x20);
  if ((iStack00000020 != 0) && (*param_1 == 0)) {
    param_1[0x213] = in_stack_00000064;
    param_1[0x7a8] = in_stack_00000064;
  }
  if (param_1[0x213] < 0) {
    param_1[0x213] = 0;
    param_1[0x7a8] = 0;
  }
  else if ((7 < param_1[0x213]) && (*param_1 == 0)) {
    param_1[0x213] = 7;
    param_1[0x7a8] = 7;
  }
  if (param_1[0x213] + 1 < param_1[0x792]) {
    return;
  }
  param_1[0x213] = 0;
  param_1[0x7a8] = 0;
  return;
}

