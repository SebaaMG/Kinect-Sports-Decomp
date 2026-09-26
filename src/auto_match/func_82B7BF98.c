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
extern int fn_82AB15D0();
extern int fn_82AB8228();
extern int fn_82F68B7C();


void fn_82B7BF98(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 extraout_f1;
  undefined8 uVar2;
  
  iVar1 = fn_82F68B7C(*(undefined4 *)(param_1 + 4));
  uVar2 = extraout_f1;
  if (iVar1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d6be8,0x726);
  }
  fn_82AB8228(uVar2,*(undefined4 *)(iVar1 + 0x30),param_2,param_3);
  return;
}

