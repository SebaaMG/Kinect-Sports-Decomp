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


void fn_827C9DE0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong in_r7;
  uint *in_r8;
  longlong in_r9;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x18c);
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x14),
                       *(undefined4 *)(iVar1 + 0x10),0);
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  uVar3 = in_r9 - (ulonglong)*in_r8;
  uVar5 = (ulonglong)*(uint *)(iVar1 + 0x10) - (ulonglong)*(uint *)(iVar1 + 0x18);
  if ((uVar3 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    uVar5 = uVar3;
  }
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x60) - (ulonglong)*(uint *)(iVar1 + 0x14);
  if ((uVar3 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    uVar5 = uVar3;
  }
  (**(code **)(*(int *)(param_1 + 0x1a8) + 4))
            (param_1,((ulonglong)*(uint *)(iVar1 + 0x18) & 0x3fffffff) * 4 +
                     (ulonglong)*(uint *)(iVar1 + 0xc),((ulonglong)*in_r8 & 0x3fffffff) * 4 + in_r7,
             uVar5);
  *in_r8 = *in_r8 + (int)uVar5;
  uVar4 = *(int *)(iVar1 + 0x18) + (int)uVar5;
  *(uint *)(iVar1 + 0x18) = uVar4;
  if (*(uint *)(iVar1 + 0x10) <= uVar4) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(uint *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + *(uint *)(iVar1 + 0x10);
  }
  return;
}

