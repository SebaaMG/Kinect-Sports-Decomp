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


int fn_82318710(int param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar3 = 0;
  uVar4 = (ulonglong)*(uint *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
  if (uVar4 != 0) {
    uVar5 = (ulonglong)*(uint *)(piVar1[4] * 4 + *piVar1);
    do {
      iVar2 = fn_822ABA88(uVar5);
      if (*(int *)(*(int *)(iVar2 + 0x110) + 0x1c) == 3) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff));
  }
  return 0;
}

