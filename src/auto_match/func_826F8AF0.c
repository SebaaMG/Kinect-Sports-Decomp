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
extern unsigned int *auStack_20;
extern unsigned int *auStack_24;
extern unsigned int *auStack_2c;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_8268C510();
extern int fn_8268C750();
extern int fn_826D7220();
extern int fn_826F35B0();
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


/* WARNING: Type propagation algorithm not settling */

void fn_826F8AF0(int param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  char in_RESERVE;
  byte in_cr0;
  byte bVar5;
  uint uStack_30;
  uint auStack_2c [2];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  auStack_2c[1] = 5;
  fn_8268C750(auStack_24,param_1 + 0x18);
  fn_8268C750(auStack_20,param_1 + 0x14);
  fn_8268B330(&uStack_30);
  fn_826F35B0(*(undefined4 *)(param_1 + 0x10),&uStack_30,auStack_2c + 1);
  fn_8268C510(auStack_2c,((ulonglong)uStack_30 & 0xfffffffc) + 8);
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))
            (*(int **)(param_1 + 0x1c),auStack_2c,
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 8) + 8));
  lVar2 = ((ulonglong)auStack_2c[0] & 0xfffffffc) + 4;
  do {
    puVar3 = (uint *)lVar2;
    uVar4 = (ulonglong)*puVar3;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar2);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar5 = (uVar4 == 1) << 1;
  if (uVar4 == 1) {
    fn_8267BE38();
  }
  sync(1);
  *(undefined4 *)(param_1 + 0x20) = 1;
  lVar2 = ((ulonglong)uStack_30 & 0xfffffffc) + 4;
  do {
    puVar3 = (uint *)lVar2;
    uVar4 = (ulonglong)*puVar3;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar2);
      *puVar3 = uVar1;
      bVar5 = 2;
    }
  } while (!(bool)(bVar5 >> 1 & 1));
  if (uVar4 == 1) {
    fn_8267BE38();
  }
  fn_826D7220(auStack_2c + 1);
  return;
}

