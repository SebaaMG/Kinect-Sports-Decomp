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
extern unsigned int lbl_831A9CD0;


void fn_82F0E010(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar2 = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x658) != 0) {
    piVar4 = (int *)(param_1 + 0xa24);
    do {
      piVar1 = piVar4 + 0xf3;
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 0xf2;
      uVar3 = *piVar1 + uVar3;
      uVar2 = *piVar4 + uVar2;
    } while (uVar5 < *(uint *)(param_1 + 0x658));
    if (uVar2 < uVar3) {
      *(undefined4 *)(param_1 + 0x4e4c) = 1;
      *(undefined4 *)(param_1 + 0x4e50) = 0x831aa450;
      *(undefined4 *)(param_1 + 0x4e54) = 0x831aa810;
      goto LAB_82f0e0a0;
    }
  }
  *(undefined4 *)(param_1 + 0x4e4c) = 0;
  *(undefined **)(param_1 + 0x4e50) = &lbl_831A9CD0;
  *(undefined4 *)(param_1 + 0x4e54) = 0x831aa090;
LAB_82f0e0a0:
  if (*(int *)(param_1 + 0x7944) != 2) {
    if (*(int *)(param_1 + 0x7944) == 0) {
      *(undefined **)(param_1 + 0x4e50) = &lbl_831A9CD0;
      *(undefined4 *)(param_1 + 0x4e54) = 0x831aa090;
      *(undefined4 *)(param_1 + 0x4e4c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x4e50) = 0x831aa450;
      *(undefined4 *)(param_1 + 0x4e54) = 0x831aa810;
      *(undefined4 *)(param_1 + 0x4e4c) = 1;
    }
  }
  return;
}

