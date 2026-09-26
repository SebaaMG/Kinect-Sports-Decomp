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
extern int fn_82F691F0();
extern unsigned int lbl_832625F0;


void fn_82F53830(int param_1)

{
  undefined4 *puVar1;
  int in_r0;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined1 *)(param_1 + 0x7e8) = 0;
  fn_82F691F0(param_1,0,2000);
  param_1 = param_1 + 0x20;
  lVar2 = 0x19;
  puVar1 = (undefined4 *)((uint)(&lbl_832625F0 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  do {
    puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    param_1 = param_1 + 0x50;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

