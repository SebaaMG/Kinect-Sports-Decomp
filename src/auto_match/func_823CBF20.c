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


int fn_823CBF20(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar8 = 0;
  lVar4 = 2;
  uVar5 = (ulonglong)**(uint **)(*(int *)(param_1 + 0x240) + 8);
  do {
    uVar3 = 0;
    uVar1 = *(uint *)(((int *)*(int *)uVar5)[4] * 4 + *(int *)*(int *)uVar5);
    uVar7 = (ulonglong)uVar1;
    uVar6 = (ulonglong)*(uint *)(uVar1 + 8);
    if (uVar6 != 0) {
      do {
        iVar2 = fn_822ABA88(uVar7);
        if ((*(int *)(iVar2 + 0x120) != 0) || (*(int *)(iVar2 + 0x240) != 0)) {
          iVar8 = iVar2;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (uVar6 & 0xffffffff));
    }
    lVar4 = lVar4 + -1;
    uVar5 = uVar5 + 4;
  } while (lVar4 != 0);
  return iVar8;
}

