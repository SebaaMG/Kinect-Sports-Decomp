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


void fn_82A3BE88(int param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = param_2 - 1;
  bVar4 = 0;
  if (-1 < (longlong)uVar5) {
    lVar6 = (uVar5 & 0x3fffffff) << 2;
    do {
      if (*(uint *)((int)lVar6 + *(int *)(param_1 + 0x24)) < 3) {
        bVar4 = 0;
      }
      else {
        bVar4 = bVar4 + 1;
        if (2 < bVar4) break;
      }
      uVar5 = uVar5 - 1;
      lVar6 = lVar6 + -4;
    } while (-1 < (longlong)uVar5);
  }
  uVar5 = 3 - ((ulonglong)(2 < bVar4) + 3) & uVar5;
  if ((int)uVar5 < (int)param_2) {
    param_2 = param_2 - uVar5;
    lVar6 = (uVar5 & 0x3fffffff) << 2;
    do {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x24) + (int)lVar6);
      if (uVar1 != 0) {
        if (uVar1 < 3) {
          iVar3 = (uVar1 + 0xc) * 4;
          uVar2 = *(undefined4 *)(iVar3 + param_1);
          *(undefined4 *)(iVar3 + param_1) = *(undefined4 *)(param_1 + 0x30);
          *(undefined4 *)(param_1 + 0x30) = uVar2;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x30);
          *(uint *)(param_1 + 0x30) = uVar1 - 2;
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
      }
      lVar6 = lVar6 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return;
  }
  return;
}

