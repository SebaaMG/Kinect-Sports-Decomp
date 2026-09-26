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


void fn_82A6CA88(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar5 = **(int **)(param_1 + 8);
  if (*(int *)(iVar5 + 0x3c) < 3) {
    if (*(int *)(iVar5 + 0xd4) != 0) {
      uVar3 = *(int *)(iVar5 + 8) + 0xb;
      goto code_r0x82a6cad8;
    }
    uVar3 = 0;
  }
  else {
    if (*(int *)(iVar5 + 0x25c) == 0) {
      uVar3 = *(int *)(iVar5 + 8) + 6;
    }
    else {
      uVar3 = *(int *)(iVar5 + 8) + 0x11;
    }
code_r0x82a6cad8:
    uVar3 = uVar3 & 0xff;
  }
  uVar3 = uVar3 + ((int)uVar3 >> 3) * -8;
  if (*(int *)(iVar5 + 0x3c) < 3) {
    if (*(int *)(iVar5 + 0xd4) == 0) {
      uVar4 = 0;
      goto code_r0x82a6cb3c;
    }
    uVar4 = (ulonglong)*(uint *)(iVar5 + 8) + 0xb;
  }
  else if (*(int *)(iVar5 + 0x25c) == 0) {
    uVar4 = (ulonglong)*(uint *)(iVar5 + 8) + 6;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(iVar5 + 8) + 0x11;
  }
  uVar4 = uVar4 & 0xff;
code_r0x82a6cb3c:
  uVar4 = (ulonglong)*(uint *)(iVar5 + 0x26c) - (uVar4 >> 3);
  uVar6 = ((ulonglong)*(uint *)(param_1 + 0x18) - (ulonglong)*(uint *)(param_1 + 0x1c)) +
          (ulonglong)*(uint *)(param_1 + 0x14);
  iVar7 = (int)uVar6;
  *(int *)(param_1 + 0x20) = iVar7;
  *(int *)(param_1 + 0x50) = iVar7;
  iVar5 = (int)uVar4;
  if ((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff)) {
    *(int *)(param_1 + 0x20) = iVar5;
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 1;
    *(int *)(param_1 + 0x48) = iVar5 - iVar7;
  }
  if ((*(int *)(param_1 + 0x30) == 0) && ((*(int *)(param_1 + 0x28) - uVar3) + 8 < 0x21)) {
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        if (0x20 < (*(int *)(param_1 + 0x28) - uVar3) + 8) {
          return;
        }
        uVar1 = **(undefined1 **)(param_1 + 0x1c);
        *(undefined1 **)(param_1 + 0x1c) = *(undefined1 **)(param_1 + 0x1c) + 1;
        uVar2 = (**(code **)(param_1 + 0x54))(uVar1);
        iVar5 = *(int *)(param_1 + 0x20);
        iVar7 = *(int *)(param_1 + 0x28) - uVar3;
        *(int *)(param_1 + 0x20) = iVar5 + -1;
        *(uint *)(param_1 + 0x24) =
             *(int *)(param_1 + 0x24) << (8 - uVar3 & 0x3f) |
             ((uVar2 & 0xff) << (uVar3 & 0x3f) & 0xff) >> (uVar3 & 0x3f);
        uVar3 = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 8;
      } while (iVar5 != 1);
    }
  }
  else {
    uVar1 = **(undefined1 **)(param_1 + 0x1c);
    *(undefined1 **)(param_1 + 0x1c) = *(undefined1 **)(param_1 + 0x1c) + 1;
    uVar2 = (**(code **)(param_1 + 0x54))(uVar1);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    *(uint *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) << (8 - uVar3 & 0x3f) |
         ((uVar2 & 0xff) << (uVar3 & 0x3f) & 0xff) >> (uVar3 & 0x3f);
    *(uint *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) - uVar3) + 8;
  }
  return;
}

