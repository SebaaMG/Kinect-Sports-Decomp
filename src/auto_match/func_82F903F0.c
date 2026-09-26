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
extern int fn_8265D598();
extern int fn_82F90110();
extern int fn_82F904C8();
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_38;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;


void fn_82F903F0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar5;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 *puStack_3c;
  undefined1 uStack_38;
  
  puStack_3c = &uStack_40;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uVar5 = fn_8265D598(&stack0x00000014,&stack0x00000024);
  uVar2 = uStack0000002c;
  uVar1 = uStack00000024;
  uStack_38 = uStack_40;
  uStack_3f = uVar5;
  uVar3 = fn_82F90110(&stack0x0000001c);
  uVar4 = fn_82F90110(&stack0x00000014);
  fn_82F904C8(uVar4,uVar3,uVar1,uVar2,uVar5,uStack_38);
  return;
}

