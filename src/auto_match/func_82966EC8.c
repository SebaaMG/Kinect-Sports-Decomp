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


ulonglong fn_82966EC8(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 0x6c) & 8) == 0) {
      return uVar2;
    }
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar3 = 0;
    if (uVar1 == 0) {
      return uVar2;
    }
    iVar6 = 0;
    uVar5 = 1;
    do {
      if ((((*(uint *)(*(int *)(*(int *)(param_1 + 0x18) + iVar6) + 0x2c) & 1) != 0) &&
          (uVar2 = uVar2 + 1, uVar5 < uVar1)) &&
         (piVar4 = (int *)(*(int *)(param_1 + 0x18) + iVar6),
         *(int *)(*piVar4 + 0x2c) == *(int *)(piVar4[1] + 0x2c))) {
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 4;
      }
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar3 < uVar1);
    return uVar2;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 == 0) {
    return uVar2;
  }
  uVar2 = (ulonglong)((*(uint *)(**(int **)(param_1 + 0x18) + 0x2c) & 1) == 0);
  uVar3 = 1;
  if (uVar1 < 2) {
    return uVar2;
  }
  iVar6 = 4;
  do {
    if (((*(uint *)(*(int *)(iVar6 + (int)*(int **)(param_1 + 0x18)) + 0x2c) & 1) != 0) &&
       (piVar4 = (int *)(*(int *)(param_1 + 0x18) + iVar6),
       *(int *)(*piVar4 + 0x2c) != *(int *)(piVar4[-1] + 0x2c))) {
      uVar2 = uVar2 + 1;
    }
    uVar3 = uVar3 + 1;
    iVar6 = iVar6 + 4;
  } while (uVar3 < uVar1);
  return uVar2;
}

