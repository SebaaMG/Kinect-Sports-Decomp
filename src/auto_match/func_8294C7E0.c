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


undefined8 fn_8294C7E0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar1 = **(uint **)(param_1 + 0x104);
  uVar5 = (ulonglong)uVar1 & 0xfffff;
  if ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(uint **)(param_1 + 0x104))
                                                                      [2] * 4 +
                                                             *(int *)(param_1 + 0x14)) + 0x30) * 4 +
                                           *(int *)(param_1 + 0x14)) + 4) * 4 +
                         *(int *)(param_1 + 0x10)) + 4) & 0x80) == 0) {
    return 1;
  }
  if ((uVar1 & 0xfffff) != 0) {
    iVar4 = 0;
    do {
      piVar2 = (int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar4);
      piVar3 = (int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar4);
      iVar4 = iVar4 + 4;
      *(undefined4 *)(*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x14)) + 0x30) =
           *(undefined4 *)(*(int *)(*piVar2 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  **(undefined4 **)(param_1 + 0x104) = 0;
  return 0;
}

