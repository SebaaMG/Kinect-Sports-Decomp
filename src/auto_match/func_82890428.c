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
extern int fn_82230218();
extern int fn_828CCCC0();
extern int fn_828EA268();


undefined1 *
fn_82890428(undefined1 *param_1,undefined8 param_2,undefined2 param_3,ushort param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined2 uVar1;
  ulonglong uVar2;
  undefined1 in_stack_00000057;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  fn_82230218(param_1,param_2,0,0xffffffffffffffff);
  uVar2 = (ulonglong)param_4;
  *(undefined2 *)(param_1 + 0x1c) = param_3;
  *(ushort *)(param_1 + 0x1e) = param_4;
  if (1 < uVar2) {
    uVar2 = uVar2 - 1;
  }
  uVar1 = fn_828EA268(uVar2);
  *(undefined4 *)(param_1 + 0x24) = param_5;
  *(undefined2 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = param_6;
  *(undefined4 *)(param_1 + 0x2c) = param_7;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  fn_828CCCC0(param_1 + 0x30,*param_8,param_8[1],0);
  param_1[0x38] = in_stack_00000057;
  return param_1;
}

