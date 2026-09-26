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


void fn_82E80A68(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 4);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    do {
      uVar3 = *piVar1 + uVar2;
      if (*(uint *)(param_1 + 8) < uVar3) break;
      uVar2 = 0x10000;
      if (uVar3 < 0x10001) {
        uVar2 = uVar3;
      }
      piVar1 = (int *)piVar1[3];
    } while (piVar1 != (int *)0x0);
    if (piVar1 != (int *)0x0) goto LAB_82e80ae4;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(uint *)(param_1 + 4) = uVar2;
    *(uint *)(param_1 + 8) = uVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10);
    return;
  }
LAB_82e80ae4:
  *(int **)(param_1 + 0x14) = piVar1;
  return;
}

