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


undefined8 fn_82EE0458(undefined8 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  
  if ((param_2 == (undefined2 *)0x0) || (param_3 == (undefined2 *)0x0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar1 = 0;
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_2 + 2);
    if ((*(int *)(param_3 + 6) == 0) || (*(int *)(param_2 + 6) == 0)) {
      *(undefined4 *)(param_3 + 6) = 0;
    }
    else if ((ushort)param_3[4] < (ushort)param_2[4]) {
      uVar1 = 0xffffffffc00d36b1;
    }
    else {
      fn_82F68CC0();
    }
    param_3[4] = param_2[4];
    if ((*(int *)(param_3 + 10) == 0) || (*(int *)(param_2 + 10) == 0)) {
      *(undefined4 *)(param_3 + 10) = 0;
    }
    else if (*(uint *)(param_3 + 8) < *(uint *)(param_2 + 8)) {
      uVar1 = 0xffffffffc00d36b1;
    }
    else {
      fn_82F68CC0();
    }
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
  }
  return uVar1;
}

