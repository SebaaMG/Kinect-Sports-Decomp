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
extern int fn_822ABA88();


void fn_82373840(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  piVar1 = *(int **)((int)param_1 + 8);
  lVar6 = (longlong)(piVar1[1] - *piVar1 >> 2);
  if (0 < lVar6) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      piVar1 = *(int **)(**(int **)((int)param_1 + 8) + (int)lVar5);
      uVar4 = (ulonglong)*(uint *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
      if (uVar4 != 0) {
        do {
          piVar1 = *(int **)(**(int **)((int)param_1 + 8) + (int)lVar5);
          iVar2 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1));
          uVar3 = uVar3 + 1;
          *(undefined4 *)(iVar2 + 0x340) = 0;
        } while ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff));
      }
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + 4;
    } while (lVar6 != 0);
  }
  return;
}

