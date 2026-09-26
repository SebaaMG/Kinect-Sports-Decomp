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
extern int fn_82AD12C8();
extern int fn_82AF59F0();


void fn_82AF6F10(int param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_r8;
  undefined4 in_r9;
  uint in_r10;
  uint uVar6;
  int in_stack_0000005c;
  
  *(undefined4 *)(*(int *)(in_stack_0000005c + 0x1c) * 4 + in_stack_0000005c + 0xc) = in_r9;
  *(int *)(in_stack_0000005c + 0x1c) = *(int *)(in_stack_0000005c + 0x1c) + 1;
  *(int *)(*(int *)(in_stack_0000005c + 0xc4) * 4 + in_stack_0000005c + 0xa4) = (int)param_2;
  *(int *)(in_stack_0000005c + 0xc4) = *(int *)(in_stack_0000005c + 0xc4) + 1;
  fn_82AF59F0(param_1,param_2);
  if (((*(uint *)(in_r8 + 8) & 0x3f80) != 0x100) || (in_r10 != 0 || (in_r10 & 0xfffffffb) != 0))
  goto LAB_82af7100;
  uVar2 = *(uint *)(in_stack_0000005c + 0x1c);
  bVar1 = 2 < uVar2;
  if (uVar2 == 2) {
    if (*(int *)(in_stack_0000005c + 0xa0) == 0) {
      bVar1 = false;
      goto LAB_82af6fb4;
    }
  }
  else {
LAB_82af6fb4:
    if (!bVar1) goto LAB_82af7100;
  }
  puVar3 = *(uint **)(in_r8 + 0x30);
  uVar6 = **(uint **)(in_r8 + 0x2c);
  if ((((uVar6 & 0x18) == 0) || ((in_r10 & 0x18) == 0)) &&
     (((uVar6 & 2) == 0 || ((in_r10 & 1) == 0)))) {
    if (((uVar6 & 4) == 0) || (bVar1 = false, (in_r10 & 1) == 0)) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    uVar4 = *puVar3;
    if ((((uVar4 & 0x18) == 0) || ((in_r10 & 0x18) == 0)) &&
       (((uVar4 & 2) == 0 || ((in_r10 & 1) == 0)))) {
      if (((uVar4 & 4) == 0) || (bVar1 = false, (in_r10 & 1) == 0)) {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_82af7100;
  }
  if (uVar2 < 3) {
    uVar2 = *(uint *)((*(uint **)(in_r8 + 0x2c))[3] + 8) >> 7 & 0x7f;
    if ((uVar2 == 0x7d) || (bVar1 = false, uVar2 == 0x7c)) {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = *(uint *)(puVar3[3] + 8) >> 7 & 0x7f;
      if ((uVar2 == 0x7d) || (bVar1 = false, uVar2 == 0x7c)) {
        bVar1 = true;
      }
      if ((bVar1) && ((*puVar3 & 0x18) != 0)) goto LAB_82af7100;
    }
  }
  if (((*puVar3 | uVar6) & 8) != 0) {
    uVar5 = fn_82AD12C8(in_r8);
    *(undefined4 *)(in_stack_0000005c + 8) = uVar5;
  }
  *(undefined1 *)(in_stack_0000005c + 0xcc) = 1;
  *(int *)(in_stack_0000005c + 200) =
       *(int *)(in_stack_0000005c + 0xc4) - *(int *)(in_stack_0000005c + 0xa0);
LAB_82af7100:
  if ((*(int *)(in_stack_0000005c + 200) < 1) && (2 < *(uint *)(in_stack_0000005c + 0x1c))) {
    *(int *)(in_stack_0000005c + 200) =
         (*(int *)(in_stack_0000005c + 0xc4) - *(int *)(in_stack_0000005c + 0xa0)) + -1;
  }
  if ((((*(int *)(in_stack_0000005c + 200) < 1) && (*(int *)(param_1 + 0x298) != 0)) &&
      (uVar2 = *(uint *)(in_stack_0000005c + 0xa0), 2 < uVar2)) && (uVar6 = 0, uVar2 != 0)) {
    do {
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return;
}

