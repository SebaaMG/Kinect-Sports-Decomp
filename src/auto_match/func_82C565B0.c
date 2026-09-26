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


void fn_82C565B0(int param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x3cb0);
  *(uint *)(param_1 + 0xf8) = param_2;
  if (5 < iVar4) {
    *(undefined4 *)(param_1 + 0x144) = 0;
    iVar4 = (*(int *)(param_1 + 0xfc) + param_2 * 2) * 0x14 + *(int *)(param_1 + 0x19d0);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(iVar4 + -0x10);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(iVar4 + -0x14);
    uVar1 = *(uint *)(iVar4 + -4);
    if (uVar1 == 0) {
      return;
    }
    *(uint *)(param_1 + 300) = uVar1;
    *(uint *)(param_1 + 0x130) = uVar1;
    if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x770) + 0x10) = 0;
      **(undefined2 **)(param_1 + 0x770) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0x774) + 0x10) = 0;
      **(undefined2 **)(param_1 + 0x774) = 0;
      return;
    }
    trapWord(6,(ulonglong)uVar1,0);
    uVar3 = ((int)uVar1 >> 1) + 0x400;
    uVar2 = (undefined2)((int)uVar3 / (int)uVar1);
    *(undefined2 *)(*(int *)(param_1 + 0x770) + 0x10) = uVar2;
    trapWord(5,(ulonglong)uVar1 &
               ~((((ulonglong)uVar3 & 0x7fffffff) << 1 | (ulonglong)(uVar3 >> 0x1f)) - 1),0xffff);
    **(undefined2 **)(param_1 + 0x770) = uVar2;
    goto code_r0x82c56790;
  }
  iVar5 = param_2 << 1;
  *(undefined4 *)(param_1 + 0x130) = 8;
  *(uint *)(param_1 + 0x144) = ~param_2 & 1;
  *(int *)(param_1 + 0x13c) = iVar5;
  *(uint *)(param_1 + 0x140) = param_2 - (~param_2 & 1);
  *(undefined4 *)(param_1 + 300) = 8;
  if ((iVar4 < 3) && (iVar4 != 0)) {
    return;
  }
  if ((int)param_2 < 5) {
    *(undefined4 *)(param_1 + 300) = 8;
    *(undefined4 *)(param_1 + 0x130) = 8;
    if ((*(int *)(param_1 + 0x39e4) != 0) && ((int)param_2 < 3)) {
      *(int *)(param_1 + 300) = iVar5;
code_r0x82c5674c:
      *(int *)(param_1 + 0x130) = iVar5;
    }
  }
  else if (iVar4 < 4) {
    if ((int)param_2 < 9) {
      *(uint *)(param_1 + 300) = param_2 << 1;
      *(int *)(param_1 + 0x130) = (int)(param_2 + 0xd) >> 1;
    }
    else {
      if (0x18 < (int)param_2) {
        iVar5 = param_2 - 6;
        *(uint *)(param_1 + 300) = (param_2 - 8) * 2;
        goto code_r0x82c5674c;
      }
      *(uint *)(param_1 + 300) = param_2 + 8;
      *(int *)(param_1 + 0x130) = (int)(param_2 + 0xd) >> 1;
    }
  }
  else {
    iVar5 = ((int)param_2 >> 1) + 6;
    *(int *)(param_1 + 0x130) = iVar5;
    *(int *)(param_1 + 300) = iVar5;
  }
  if (iVar4 < 3) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 300);
  trapWord(6,(ulonglong)uVar1,0);
  uVar3 = ((int)uVar1 >> 1) + 0x400;
  uVar2 = (undefined2)((int)uVar3 / (int)uVar1);
  *(undefined2 *)(*(int *)(param_1 + 0x770) + 0x10) = uVar2;
  trapWord(5,(ulonglong)uVar1 &
             ~((((ulonglong)uVar3 & 0x7fffffff) << 1 | (ulonglong)(uVar3 >> 0x1f)) - 1),0xffff);
  **(undefined2 **)(param_1 + 0x770) = uVar2;
code_r0x82c56790:
  uVar1 = *(uint *)(param_1 + 0x130);
  trapWord(6,(ulonglong)uVar1,0);
  uVar3 = ((int)uVar1 >> 1) + 0x400;
  uVar2 = (undefined2)((int)uVar3 / (int)uVar1);
  *(undefined2 *)(*(int *)(param_1 + 0x774) + 0x10) = uVar2;
  trapWord(5,(ulonglong)uVar1 &
             ~((((ulonglong)uVar3 & 0x7fffffff) << 1 | (ulonglong)(uVar3 >> 0x1f)) - 1),0xffff);
  **(undefined2 **)(param_1 + 0x774) = uVar2;
  return;
}

