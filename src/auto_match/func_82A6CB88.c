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


void fn_82A6CB88(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  iVar2 = **(int **)(param_1 + 8);
  if (*(int *)(iVar2 + 0x3c) < 3) {
    if (*(int *)(iVar2 + 0xd4) == 0) {
      uVar5 = 0;
      goto LAB_82a6cbf8;
    }
    uVar5 = (ulonglong)*(uint *)(iVar2 + 8) + 0xb;
  }
  else if (*(int *)(iVar2 + 0x25c) == 0) {
    uVar5 = (ulonglong)*(uint *)(iVar2 + 8) + 6;
  }
  else {
    uVar5 = (ulonglong)*(uint *)(iVar2 + 8) + 0x11;
  }
  uVar5 = uVar5 & 0xff;
LAB_82a6cbf8:
  iVar2 = (int)(uVar5 >> 3);
  puVar3 = (undefined1 *)(*(int *)(param_1 + 0x14) + iVar2);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 **)(param_1 + 0x1c) = puVar3;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x18) - iVar2;
  uVar1 = *puVar3;
  *(undefined1 **)(param_1 + 0x1c) = puVar3 + 1;
  uVar6 = (int)uVar5 + ((int)uVar5 >> 3) * -8;
  uVar4 = (**(code **)(param_1 + 0x54))(uVar1);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  *(uint *)(param_1 + 0x24) = ((uVar4 & 0xff) << (uVar6 & 0x3f) & 0xff) >> (uVar6 & 0x3f);
  *(uint *)(param_1 + 0x28) = 8 - uVar6;
  return;
}

