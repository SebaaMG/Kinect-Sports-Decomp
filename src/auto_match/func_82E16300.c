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


void fn_82E16300(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar6;
  longlong lVar5;
  longlong lVar7;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x50) - 1;
  if ((longlong)uVar3 < 0) {
    return;
  }
  lVar4 = (uVar3 & 0x1fffffff) << 3;
  do {
    if (*(int *)(*(int *)(param_1 + 0x4c) + (int)lVar4 + 4) == param_2) {
      iVar6 = *(int *)(param_1 + 0x50) + -1;
      *(int *)(param_1 + 0x50) = iVar6;
      if (iVar6 != (int)uVar3) {
        uVar1 = *(uint *)(param_1 + 0x4c);
        lVar5 = lVar4 + (ulonglong)uVar1;
        iVar2 = (int)lVar5;
        lVar7 = 2;
        do {
          *(undefined4 *)lVar5 =
               *(undefined4 *)(((iVar6 * 8 + uVar1) - iVar2) + (int)(undefined4 *)lVar5);
          lVar5 = lVar5 + 4;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    uVar3 = uVar3 - 1;
    lVar4 = lVar4 + -8;
  } while (-1 < (longlong)uVar3);
  return;
}

