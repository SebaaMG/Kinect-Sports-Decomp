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


int fn_82372C00(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar5 = 0;
  uVar1 = **(uint **)(param_1 + 8);
  iVar2 = (int)((*(uint **)(param_1 + 8))[1] - uVar1) >> 2;
  if (0 < iVar2) {
    uVar6 = (ulonglong)uVar1;
    do {
      uVar4 = 0;
      uVar1 = *(uint *)(((int *)*(int *)uVar6)[4] * 4 + *(int *)*(int *)uVar6);
      uVar8 = (ulonglong)uVar1;
      uVar7 = (ulonglong)*(uint *)(uVar1 + 8);
      if (uVar7 != 0) {
        do {
          iVar3 = fn_822ABA88(uVar8);
          if (*(int *)(iVar3 + 0x120) != 0) {
            return iVar3;
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      lVar5 = lVar5 + 1;
      uVar6 = uVar6 + 4;
    } while ((int)lVar5 < iVar2);
  }
  return 0;
}

