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
extern int fn_82E4FE40();
extern int fn_82E50330();


undefined8 fn_82E7E7E0(short *param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  sVar1 = *param_1;
  if (sVar1 == 0) {
    return 0;
  }
  if (sVar1 == 0x100d) {
    if (*(int *)(param_1 + 6) != 0) {
      uVar4 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar5 = 0;
        do {
          if (*(int **)(*(int *)(param_1 + 6) + iVar5) != (int *)0x0) {
            (**(code **)(**(int **)(*(int *)(param_1 + 6) + iVar5) + 8))();
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 4;
        } while (uVar4 < *(uint *)(param_1 + 4));
      }
      fn_82E4FE40(*(undefined4 *)(param_1 + 6));
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      return 0;
    }
  }
  else {
    if (sVar1 != 0x1041) {
      uVar3 = fn_82E50330();
      return uVar3;
    }
    if (*(int *)(param_1 + 6) != 0) {
      uVar4 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(param_1 + 6);
          fn_82E4FE40(*(undefined4 *)(iVar2 + iVar5 + 4));
          uVar4 = uVar4 + 1;
          *(undefined4 *)(iVar2 + iVar5 + 4) = 0;
          iVar5 = iVar5 + 8;
        } while (uVar4 < *(uint *)(param_1 + 4));
      }
      fn_82E4FE40(*(undefined4 *)(param_1 + 6));
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      return 0;
    }
  }
  return 0xffffffff80004003;
}

