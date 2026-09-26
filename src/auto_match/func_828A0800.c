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
extern unsigned int *auStack_30;
extern int fn_828995F0();
extern int fn_8289F9C8();
extern int fn_828A0638();
extern int fn_828A8160();
extern int fn_828C3958();
extern int fn_828CF0F0();


void fn_828A0800(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar5;
  longlong lVar4;
  undefined4 auStack_30 [12];
  
  iVar5 = fn_828A0638();
  fn_828A8160(*(undefined4 *)(iVar5 + 8),param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x50);
  lVar4 = (ulonglong)uVar2 + 0x1fc;
  auStack_30[0] = uVar1;
  if (*(char *)(param_1 + 0x26) == '\0') {
    fn_8289F9C8(lVar4,auStack_30);
    auStack_30[0] = uVar1;
    fn_8289F9C8((ulonglong)uVar2 + 0x20c,auStack_30);
  }
  else {
    fn_8289F9C8(lVar4,auStack_30);
  }
  fn_828995F0(*(undefined4 *)(param_1 + 0x50),param_1);
  fn_828C3958(*(undefined4 *)(param_1 + 0x50),param_1);
  fn_828CF0F0((ulonglong)*(uint *)(param_1 + 0x50) + 0xc,param_1);
  puVar3 = *(undefined4 **)(param_1 + 0x4c);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = *(undefined4 **)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 4) = 2;
  return;
}

