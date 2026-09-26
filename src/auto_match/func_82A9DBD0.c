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
extern int fn_82A9D7B8();
extern int fn_82A9D888();


void fn_82A9DBD0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  fn_82A9D7B8();
  if (param_3 == (undefined4 *)0x0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar6 = *(undefined2 *)(param_3 + 0x10);
    uVar5 = *(undefined2 *)((int)param_3 + 0x3e);
    uVar4 = *(undefined2 *)(param_3 + 0xf);
    uVar3 = *(undefined2 *)((int)param_3 + 0x3a);
    uVar2 = *(undefined2 *)(param_3 + 0xe);
    uVar1 = *param_3;
  }
  fn_82A9D888(param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}

