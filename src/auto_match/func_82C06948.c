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
extern int fn_82C106C8();
extern int fn_82C10B28();
extern int fn_82C11050();
extern unsigned int stack0x00000014;


undefined8 fn_82C06948(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  int *piStack00000014;
  int aiStack_20 [4];
  
  aiStack_20[0] = 0;
  piStack00000014 = param_1;
  if (*param_1 != 0) {
    pcVar1 = *(code **)(*param_1 + 4);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    fn_82C10B28(piStack00000014[0x98],8);
  }
  fn_82C11050(piStack00000014[0x8f]);
  uVar3 = fn_82C11050(piStack00000014[0x8e]);
  if (piStack00000014[1] != 0) {
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 1);
  }
  if (piStack00000014[2] != 0) {
    if (*(int *)(piStack00000014[2] + 4) != 0) {
      (**(code **)(piStack00000014[2] + 4))(piStack00000014[2]);
    }
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 2);
  }
  if (piStack00000014[0x90] != 0) {
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 0x90);
  }
  iVar2 = piStack00000014[0x91];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 0) {
      fn_82C10B28(piStack00000014[0x98],8,iVar2 + 4);
    }
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 0x91);
  }
  iVar2 = piStack00000014[0x92];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x10) != 0) {
      fn_82C10B28(piStack00000014[0x98],8,iVar2 + 0x10);
    }
    if (*(int *)(piStack00000014[0x92] + 0xc) != 0) {
      fn_82C10B28(piStack00000014[0x98],8,piStack00000014[0x92] + 0xc);
    }
    if (*(int *)(piStack00000014[0x92] + 8) != 0) {
      fn_82C10B28(piStack00000014[0x98],8,piStack00000014[0x92] + 8);
    }
    aiStack_20[0] = *(int *)(piStack00000014[0x92] + 4);
    if (aiStack_20[0] != 0) {
      fn_82C10B28(piStack00000014[0x98],8,aiStack_20);
    }
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 0x92);
  }
  if (piStack00000014[0x99] != 0) {
    uVar3 = fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 0x99);
  }
  if (piStack00000014[0x9a] != 0) {
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 0x9a);
  }
  if (piStack00000014[0x9f] != 0) {
    uVar3 = fn_82C106C8(piStack00000014[0x98]);
  }
  if (piStack00000014[0xa0] != 0) {
    uVar3 = fn_82C106C8(piStack00000014[0x98]);
  }
  if (piStack00000014[0xa1] != 0) {
    uVar3 = fn_82C106C8(piStack00000014[0x98]);
  }
  if (piStack00000014[0xa2] != 0) {
    uVar3 = fn_82C106C8(piStack00000014[0x98]);
  }
  fn_82C10B28(piStack00000014[0x98],8,&stack0x00000014);
  return uVar3;
}

