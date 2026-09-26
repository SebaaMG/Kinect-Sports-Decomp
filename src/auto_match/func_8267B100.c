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
extern int fn_8267AE38();
extern int fn_8268E898();
extern unsigned int lbl_82005448;


undefined4 *
fn_8267B100(undefined4 *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5,ulonglong param_6,undefined8 param_7,ulonglong param_8)

{
  undefined4 uVar1;
  undefined4 in_stack_00000054;
  
  uVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &lbl_82005448;
  param_1[1] = 0x1000;
  param_1[0x2c] = 0;
  if (param_1 + 4 != (undefined4 *)0x0) {
    uVar1 = fn_8268E898(param_1 + 4,0x1000);
  }
  param_1[3] = uVar1;
  if ((param_2 & 0xffffffff) != 0) {
    fn_8267AE38(param_1,param_2,param_3);
  }
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267AE38(param_1,param_4,param_5);
  }
  if ((param_6 & 0xffffffff) != 0) {
    fn_8267AE38(param_1,param_6,param_7);
  }
  if ((param_8 & 0xffffffff) != 0) {
    fn_8267AE38(param_1,param_8,in_stack_00000054);
  }
  return param_1;
}

