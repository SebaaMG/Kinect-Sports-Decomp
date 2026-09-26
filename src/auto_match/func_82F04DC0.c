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
extern int fn_82F00330();


void fn_82F04DC0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x5270);
  *(undefined4 *)(param_1 + 0x5270) = uVar1;
  fn_82F00330();
  iVar2 = *(int *)(param_1 + 0x5270);
  *(undefined4 *)(param_1 + 0x5278) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0x527c) = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x5280) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x8a0) = 0;
  return;
}

