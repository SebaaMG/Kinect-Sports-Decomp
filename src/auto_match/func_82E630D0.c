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
extern int fn_82E50BE8();


undefined8 fn_82E630D0(int param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  if ((param_2 & 0xffffffff) != 0) {
    lVar1 = (param_2 & 0x3fffffff) << 2;
    if (0x3fffffff < (param_2 & 0xffffffff)) {
      lVar1 = -1;
    }
    uVar2 = fn_82E50BE8(lVar1,0,0,0,0);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    lVar1 = (param_2 & 0x3fffffff) << 2;
    if (0x3fffffff < (param_2 & 0xffffffff)) {
      lVar1 = -1;
    }
    iVar3 = fn_82E50BE8(lVar1,0,0,0,0);
    *(int *)(param_1 + 0x5c) = iVar3;
    if ((*(int *)(param_1 + 0x58) == 0) || (iVar3 == 0)) {
      return 0xffffffff8007000e;
    }
  }
  uVar4 = 0;
  if ((param_2 & 0xffffffff) != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + param_3) == 0) {
        return 0xffffffff80070057;
      }
      *(int *)(iVar3 + *(int *)(param_1 + 0x58)) = *(int *)(iVar3 + param_3);
      (**(code **)(**(int **)(iVar3 + *(int *)(param_1 + 0x58)) + 4))();
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar3) = 0;
      uVar4 = uVar4 + 1;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      iVar3 = iVar3 + 4;
    } while ((uVar4 & 0xffffffff) < (param_2 & 0xffffffff));
  }
  return 0;
}

