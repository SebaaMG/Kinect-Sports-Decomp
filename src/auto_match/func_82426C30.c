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


undefined8 fn_82426C30(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = 1;
  if (1 < *(uint *)(param_1 + 0x40)) {
    iVar5 = 4;
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + iVar5 + -4);
      if ((*(int **)(iVar1 + 4) == (int *)0x0) || (bVar3 = true, **(int **)(iVar1 + 4) != 10)) {
        bVar3 = false;
      }
      if (!bVar3) {
        if (((*(int **)(iVar1 + 4) == (int *)0x0) || (*(int **)(iVar1 + 8) == (int *)0x0)) ||
           (bVar3 = true, **(int **)(iVar1 + 8) + **(int **)(iVar1 + 4) != 10)) {
          bVar3 = false;
        }
        if (!bVar3) {
          uVar6 = 0;
          if ((*(int *)(iVar1 + 4) != 0) &&
             (iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + iVar5 + -4),
             uVar6 = **(uint **)(iVar2 + 4), *(int *)(iVar2 + 8) != 0)) {
            uVar6 = **(int **)(iVar1 + 8) + uVar6;
          }
          if (uVar6 < param_2) {
            return 0;
          }
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0x40));
  }
  return 1;
}

