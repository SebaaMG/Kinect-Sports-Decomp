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
extern int fn_82BE54C0();
extern int fn_82BEAED8();
extern int fn_82BEB7A8();
extern unsigned int lbl_820EAB18;
extern unsigned int lbl_831751CC;


void fn_82BEB540(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &lbl_820EAB18;
  fn_82BEAED8();
  if (param_1[0xe] != 0) {
    (*(code *)lbl_831751CC)();
    param_1[0xe] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x13];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x13] = 0;
  }
  fn_82BE54C0(param_1 + 10);
  fn_82BEB7A8(param_1);
  return;
}

