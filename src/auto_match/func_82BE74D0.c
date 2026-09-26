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
extern int fn_82BE5240();
extern int fn_82BE56B0();
extern int fn_82BEB750();
extern int fn_82BF1E60();
extern int fn_82BF29A0();
extern unsigned int lbl_820E9974;
extern unsigned int lbl_831751D0;


undefined4 * fn_82BE74D0(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  
  fn_82BEB750(param_1,0xffffffff820e9980);
  *(undefined2 *)(param_1 + 10) = 0;
  *param_1 = &lbl_820E9974;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 60000;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  fn_82BF29A0(param_1 + 0x28);
  iVar1 = fn_82BE56B0(0x44);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_82BF1E60();
  }
  param_1[0x23] = iVar1;
  if (iVar1 == 0) {
    fn_82BE5240(param_1,0x65,0xffffffff820e9950);
  }
  iVar1 = (*(code *)lbl_831751D0)(param_2);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    fn_82BE5240(param_1,0x65,0xffffffff820e992c);
  }
  return param_1;
}

