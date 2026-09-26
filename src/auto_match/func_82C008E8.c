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
extern U64 storeWordConditionalIndexed();


undefined8 fn_82C008E8(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  byte in_cr0;
  
  iVar1 = (int)param_1;
  lVar5 = param_1 + 0x280;
  if (*(uint *)(iVar1 + 0x280) < *(uint *)(iVar1 + 0x27c)) {
    do {
      puVar6 = (uint *)lVar5;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,lVar5);
        *puVar6 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar3 = (**(code **)(**(int **)(iVar1 + 0x2c) + 0x50))();
    *(undefined4 *)(*(int *)(iVar1 + 0x284) * 0x24 + iVar1 + 0x44) = uVar3;
    *(undefined4 *)(*(int *)(iVar1 + 0x284) * 0x24 + iVar1 + 0x40) = param_2;
    *(int *)(*(int *)(iVar1 + 0x284) * 0x24 + iVar1 + 0x5c) = iVar1;
    uVar2 = (**(code **)(**(int **)(iVar1 + 0x38) + 0x54))
                      (*(int **)(iVar1 + 0x38),
                       ((ulonglong)*(uint *)(iVar1 + 0x284) +
                        ((ulonglong)*(uint *)(iVar1 + 0x284) & 0x1fffffff) * 8 & 0x3fffffff) * 4 +
                       param_1 + 0x3c,0);
    if ((int)uVar2 < 0) {
      do {
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((ulonglong)*puVar6 - 1,0,lVar5);
          *puVar6 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    else {
      if (*(int *)(iVar1 + 0x288) == 0) {
        uVar2 = (**(code **)(**(int **)(iVar1 + 0x38) + 0x4c))(*(int **)(iVar1 + 0x38),0,0);
      }
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *(undefined4 *)(iVar1 + 0x288) = 1;
    }
    if (-1 < (int)uVar2) {
      uVar4 = *(int *)(iVar1 + 0x284) + 1;
      *(uint *)(iVar1 + 0x284) = uVar4;
      if (*(uint *)(iVar1 + 0x27c) <= uVar4) {
        *(undefined4 *)(iVar1 + 0x284) = 0;
      }
      uVar2 = (**(code **)(**(int **)(iVar1 + 0x2c) + 0x34))(*(int **)(iVar1 + 0x2c),param_2);
    }
  }
  else {
    if (*(int *)(iVar1 + 0x288) == 0) {
      (**(code **)(**(int **)(iVar1 + 0x38) + 0x4c))(*(int **)(iVar1 + 0x38),0,0);
      *(undefined4 *)(iVar1 + 0x288) = 1;
    }
    uVar2 = 0xffffffff8000000a;
  }
  return uVar2;
}

