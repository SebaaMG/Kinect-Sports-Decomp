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


void fn_82DB4D10(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar6;
  longlong lVar5;
  longlong lVar7;
  
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x34) - 1;
  if (lVar3 < 0) {
    return;
  }
  lVar4 = lVar3 * 0x70;
  do {
    if (*(int *)(*(int *)(param_1 + 0x30) + (int)lVar4 + 0x14) == *(int *)(param_2 + 8)) {
      iVar6 = *(int *)(param_1 + 0x34) + -1;
      *(int *)(param_1 + 0x34) = iVar6;
      if (iVar6 != (int)lVar3) {
        uVar1 = *(uint *)(param_1 + 0x30);
        lVar5 = lVar4 + (ulonglong)uVar1;
        iVar2 = (int)lVar5;
        lVar7 = 0xe;
        do {
          *(undefined8 *)lVar5 =
               *(undefined8 *)(((iVar6 * 0x70 + uVar1) - iVar2) + (int)(undefined8 *)lVar5);
          lVar5 = lVar5 + 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    lVar3 = lVar3 + -1;
    lVar4 = lVar4 + -0x70;
  } while (-1 < lVar3);
  return;
}

