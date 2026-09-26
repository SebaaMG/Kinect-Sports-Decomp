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
extern unsigned int *auStack_90;
extern int fn_8226AE28();
extern int fn_8226B4D0();
extern int fn_8226C610();
extern int fn_822811F8();
extern int fn_8265C9E0();
extern int fn_827EFC90();


void fn_82280D20(int param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_90 [120];
  
  uVar1 = fn_8265C9E0(0x150);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8226B4D0(uVar1,*(undefined4 *)(param_1 + 0x14),param_2 + 0x20,param_2 + 0x28,
                              param_2 + 0x30,*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  uVar4 = 1;
  iVar3 = (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x14) + 0x1b4))();
  if (1 < iVar3) {
    do {
      fn_827EFC90(*(undefined4 *)(param_1 + 0x1c),uVar4 & 0xffff,
                        *(undefined4 *)(param_1 + 0x7c),0);
      uVar4 = uVar4 + 1;
      iVar3 = (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x14) + 0x1b4))();
    } while ((int)uVar4 < iVar3);
  }
  fn_822811F8(auStack_90);
  uVar1 = fn_8265C9E0(0xb4);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8226AE28(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x4c),
                              *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x48),auStack_90);
  }
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  fn_8226C610(*(undefined4 *)(param_1 + 0x7c));
  return;
}

