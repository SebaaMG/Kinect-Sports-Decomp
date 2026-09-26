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
extern unsigned int lbl_82167FA0;


void fn_82294EB0(longlong *param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  ulonglong param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  param_3 = param_4 + param_3;
  uVar1 = **(uint **)(param_2 + 0x24);
  if ((uVar1 != 0) && (*(uint *)(param_2 + 0x3c) < uVar1)) {
    *(uint *)(param_2 + 0x3c) = uVar1;
  }
  lVar4 = param_3;
  if (param_3 != lbl_82167FA0) {
    lVar4 = lbl_82167FA0;
    if (((param_6 & 1) == 0) || (**(int **)(param_2 + 0x20) == 0)) {
      if (((param_6 & 2) != 0) &&
         (((uVar1 = **(uint **)(param_2 + 0x24), uVar1 != 0 && (-1 < param_3)) &&
          (param_3 <= (longlong)(*(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10)) >> 1)))) {
        iVar5 = ((int)(**(int **)(param_2 + 0x10) - uVar1) >> 1) + (int)param_3;
        **(int **)(param_2 + 0x34) = **(int **)(param_2 + 0x34) - iVar5;
        **(int **)(param_2 + 0x24) = iVar5 * 2 + **(int **)(param_2 + 0x24);
        lVar4 = param_3;
      }
    }
    else if ((-1 < param_3) &&
            (param_3 <= (longlong)(*(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10)) >> 1)) {
      iVar5 = (**(int **)(param_2 + 0x10) - **(int **)(param_2 + 0x20) >> 1) + (int)param_3;
      **(int **)(param_2 + 0x30) = **(int **)(param_2 + 0x30) - iVar5;
      **(int **)(param_2 + 0x20) = iVar5 * 2 + **(int **)(param_2 + 0x20);
      lVar4 = param_3;
      if ((param_6 & 2) != 0) {
        iVar5 = **(int **)(param_2 + 0x24);
        if (iVar5 != 0) {
          iVar2 = **(int **)(param_2 + 0x34);
          iVar3 = **(int **)(param_2 + 0x20);
          **(int **)(param_2 + 0x24) = iVar3;
          **(int **)(param_2 + 0x34) = (iVar2 * 2 + iVar5) - iVar3 >> 1;
        }
      }
    }
  }
  *param_1 = lVar4;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

