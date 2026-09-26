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


void fn_82E16378(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x5c) - 1;
  if ((longlong)uVar5 < 0) {
    return;
  }
  lVar4 = (uVar5 & 0x1fffffff) * 8 + (ulonglong)*(uint *)(param_1 + 0x58) + 4;
  do {
    if (*(int *)lVar4 == param_2) {
      iVar3 = *(int *)(param_1 + 0x5c) + -1;
      *(int *)(param_1 + 0x5c) = iVar3;
      if (iVar3 == (int)uVar5) {
        return;
      }
      uVar1 = *(uint *)(param_1 + 0x58);
      lVar4 = (uVar5 & 0x1fffffff) * 8 + (ulonglong)uVar1;
      iVar2 = (int)lVar4;
      lVar6 = 2;
      do {
        *(undefined4 *)lVar4 =
             *(undefined4 *)(((iVar3 * 8 + uVar1) - iVar2) + (int)(undefined4 *)lVar4);
        lVar4 = lVar4 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      return;
    }
    uVar5 = uVar5 - 1;
    lVar4 = lVar4 + -8;
  } while (-1 < (longlong)uVar5);
  return;
}

