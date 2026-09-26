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
extern int fn_82AA6868();
extern int fn_82AD84B0();
extern int fn_82AD8EB8();
extern int fn_82AD8FB8();
extern int fn_82B1F4A8();
extern int fn_82B23228();
extern int fn_82B23720();
extern int fn_82B23950();
extern int fn_82B29610();
extern int fn_82B330F8();
extern int fn_82B34480();
extern int fn_82B35218();
extern int fn_82B356B8();
extern int fn_82B37600();
extern int fn_82B37E70();
extern int fn_82B380B0();
extern int fn_82B38378();
extern int fn_82B38918();
extern int fn_82B397C0();


void fn_82B404A0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 0x28) & 0x2000) != 0) {
    fn_82B1F4A8(param_1,0);
  }
  fn_82AD84B0(param_1);
  fn_82B23720(param_1);
  if ((*(uint *)(param_1 + 0x28) & 0x8000) != 0) {
    fn_82B38918(param_1);
    fn_82AA6868(param_1 + 0x3cc);
  }
  if ((*(uint *)(param_1 + 0x28) & 0x400) != 0) {
    fn_82B29610(param_1);
    fn_82B23950(param_1);
    fn_82B330F8(param_1,1);
    fn_82B35218(param_1);
    fn_82AA6868(param_1 + 0x3cc);
  }
  if ((*(uint *)(param_1 + 0x28) & 0x2000) != 0) {
    fn_82B1F4A8(param_1,1);
  }
  fn_82B23950(param_1);
  iVar3 = param_1 + 0x3cc;
  fn_82AA6868(iVar3);
  fn_82B330F8(param_1,1);
  fn_82AA6868(iVar3);
  fn_82B356B8(param_1);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x20000;
  fn_82B356B8(param_1);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -0x20000;
  fn_82AA6868(iVar3);
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = *(uint *)((-(uint)((uVar1 & 1) == 0) & uVar1 & 0xfffffffe) + 4);
  if (((uVar2 & 1) == 0) && (uVar2 != 0)) {
    for (; ((uVar1 & 1) == 0 && (uVar1 != 0)); uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
      if ((((*(uint *)(uVar1 + 0x24) & 1) == 0) &&
          (uVar2 = *(uint *)(uVar1 + 0x20) & 0xfffffffe, uVar2 != 0x28)) &&
         ((*(uint *)(uVar2 - 0x20) & 0x3f80) == 0x2d00)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x400000;
      }
    }
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffdff;
  fn_82B397C0(param_1);
  if ((*(uint *)(param_1 + 0x28) & 0x2000) != 0) {
    fn_82B1F4A8(param_1,2);
  }
  if ((*(uint *)(param_1 + 0x2c) & 0x800000) != 0) {
    fn_82B37E70(param_1);
    fn_82B380B0(param_1,1);
  }
  fn_82B34480(param_1);
  fn_82AD8EB8(param_1);
  fn_82B37600(param_1);
  fn_82AD8FB8(param_1);
  fn_82AA6868(iVar3);
  if ((*(uint *)(param_1 + 0x2c) & 0x800000) != 0) {
    fn_82B380B0(param_1,0);
    fn_82AA6868(iVar3);
    if ((*(uint **)(param_1 + 0x38) != (uint *)0x0) && ((**(uint **)(param_1 + 0x38) & 0x500) != 0))
    {
      fn_82B38378(param_1);
      fn_82AA6868(iVar3);
    }
  }
  fn_82B23228(param_1);
  fn_82AA6868(iVar3);
  return;
}

