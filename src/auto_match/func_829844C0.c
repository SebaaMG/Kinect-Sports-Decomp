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
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82980C18();
extern int fn_829836D0();


undefined8 fn_829844C0(int param_1,int param_2,int param_3)

{
  int iVar4;
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar5;
  byte bVar6;
  
  if ((*(uint *)(param_2 + 0x10) & *(uint *)(param_3 + 0x10)) != 0) {
    fn_82980C18(param_1,param_1 + 0x28,0xbe8,0xffffffff8204e318);
  }
  if ((*(int *)(param_2 + 0x14) != 0) && (iVar4 = *(int *)(param_3 + 0x14), iVar4 != 0)) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(iVar4 + 0x10);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(iVar4 + 0x18);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(iVar4 + 0x20);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(iVar4 + 0x28);
    fn_829836D0(param_1,0xffffffff82029464);
  }
  uVar5 = *(uint *)(param_2 + 0x10) | *(uint *)(param_3 + 0x10);
  *(uint *)(param_2 + 0x10) = uVar5;
  if (((uVar5 & 0x80000) != 0) && ((uVar5 & 0x160000) != 0)) {
    fn_82980C18(param_1,param_1 + 0x28,0xbe8,0xffffffff8204e2c8);
  }
  uVar5 = *(uint *)(param_2 + 0x10);
  bVar6 = (uVar5 & 0x1000) != 0;
  if ((uVar5 & 0x2000) != 0) {
    bVar6 = bVar6 + 1;
  }
  if ((uVar5 & 0x4000) != 0) {
    bVar6 = bVar6 + 1;
  }
  if ((uVar5 & 0x8000) != 0) {
    bVar6 = bVar6 + 1;
  }
  if ((uVar5 & 0x10000) != 0) {
    bVar6 = bVar6 + 1;
  }
  if (1 < bVar6) {
    fn_82980C18(param_1,param_1 + 0x28,0xc0b,0xffffffff8204e2ac);
  }
  if ((*(int *)(param_2 + 0x14) == 0) && (*(int *)(param_3 + 0x14) != 0)) {
    iVar4 = fn_82930458();
    *(int *)(param_2 + 0x14) = iVar4;
    if (iVar4 != 0) goto LAB_82984620;
LAB_82984614:
    uVar1 = 0xffffffff8007000e;
  }
  else {
LAB_82984620:
    if (*(int *)(param_2 + 0x1c) == 0) {
      iVar4 = fn_82930458(*(undefined4 *)(param_3 + 0x1c));
      *(int *)(param_2 + 0x1c) = iVar4;
joined_r0x829846a0:
      if (iVar4 == 0) goto LAB_82984614;
    }
    else if (*(int **)(param_3 + 0x1c) != (int *)0x0) {
      lVar2 = (**(code **)(**(int **)(param_3 + 0x1c) + 4))();
      if (lVar2 == 0) goto LAB_82984614;
      uVar3 = fn_82930318(0x14);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_829304E0(uVar3,*(undefined4 *)(param_2 + 0x1c),lVar2,0xffffffff8204de78);
      }
      *(int *)(param_2 + 0x1c) = iVar4;
      goto joined_r0x829846a0;
    }
    uVar1 = 0;
  }
  return uVar1;
}

