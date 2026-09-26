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
#define _iStack00000010 ((*(U64*)&iStack00000010))
#define _iStack00000018 ((*(U64*)&iStack00000018))
extern unsigned int *auStack_1c;
extern int fn_822AF200();
extern int fn_8235A028();
extern unsigned int iStack00000010;
extern unsigned int iStack00000018;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;


void fn_823BADB0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iStack00000010;
  uint uStack00000014;
  int iStack00000018;
  uint uStack0000001c;
  undefined4 *puStack_20;
  undefined1 auStack_1c [4];
  
  iStack00000018 = (int)((ulonglong)param_2 >> 0x20);
  uStack0000001c = (uint)param_2;
  if (*(uint *)(iStack00000018 + 8) <= uStack0000001c) {
    uStack0000001c = uStack0000001c - *(uint *)(iStack00000018 + 8);
  }
  iStack00000010 = (int)((ulonglong)param_1 >> 0x20);
  uStack00000014 = (uint)param_1;
  if (*(uint *)(iStack00000010 + 8) <= uStack00000014) {
    uStack00000014 = uStack00000014 - *(uint *)(iStack00000010 + 8);
  }
  puVar2 = *(undefined8 **)(*(int *)(iStack00000018 + 4) + uStack0000001c * 4);
  puVar3 = *(undefined8 **)(*(int *)(iStack00000010 + 4) + uStack00000014 * 4);
  uVar4 = *puVar3;
  *puVar3 = *puVar2;
  *puVar2 = uVar4;
  uVar1 = *(undefined4 *)((int)puVar3 + 0xc);
  *(undefined4 *)((int)puVar3 + 0xc) = *(undefined4 *)((int)puVar2 + 0xc);
  *(undefined4 *)((int)puVar2 + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)(puVar2 + 1) = uVar1;
  _iStack00000010 = param_1;
  _iStack00000018 = param_2;
  fn_8235A028(&puStack_20,puVar3 + 2);
  uVar4 = fn_8235A028(auStack_1c,puVar2 + 2);
  fn_822AF200(puVar3 + 2,uVar4);
  uVar4 = fn_8235A028(auStack_1c,&puStack_20);
  fn_822AF200(puVar2 + 2,uVar4);
  if (puStack_20 != (undefined4 *)0x0) {
    (**(code **)*puStack_20)(puStack_20,1);
  }
  return;
}

