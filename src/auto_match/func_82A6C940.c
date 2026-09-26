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


void fn_82A6C940(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x30) == 0) && ((*(int *)(param_1 + 0x28) - param_2) + 8 < 0x21)) {
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        if (0x20 < (*(int *)(param_1 + 0x28) - param_2) + 8) {
          return;
        }
        uVar1 = **(undefined1 **)(param_1 + 0x1c);
        *(undefined1 **)(param_1 + 0x1c) = *(undefined1 **)(param_1 + 0x1c) + 1;
        uVar3 = (**(code **)(param_1 + 0x54))(uVar1);
        iVar2 = *(int *)(param_1 + 0x20);
        iVar4 = *(int *)(param_1 + 0x28) - param_2;
        *(int *)(param_1 + 0x20) = iVar2 + -1;
        *(uint *)(param_1 + 0x24) =
             *(int *)(param_1 + 0x24) << (8 - param_2 & 0x3f) |
             ((uVar3 & 0xff) << (param_2 & 0x3f) & 0xff) >> (param_2 & 0x3f);
        param_2 = 0;
        *(int *)(param_1 + 0x28) = iVar4 + 8;
      } while (iVar2 != 1);
    }
  }
  else {
    uVar1 = **(undefined1 **)(param_1 + 0x1c);
    *(undefined1 **)(param_1 + 0x1c) = *(undefined1 **)(param_1 + 0x1c) + 1;
    uVar3 = (**(code **)(param_1 + 0x54))(uVar1);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    *(uint *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) << (8 - param_2 & 0x3f) |
         ((uVar3 & 0xff) << (param_2 & 0x3f) & 0xff) >> (param_2 & 0x3f);
    *(uint *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) - param_2) + 8;
  }
  return;
}

