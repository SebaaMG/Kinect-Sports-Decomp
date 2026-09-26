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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822ABA88();


void fn_82351510(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar2 = (int)param_1;
  if ((int)param_2 != *(int *)(iVar2 + 0x324)) {
    lVar7 = (longlong)((*(int **)(iVar2 + 0x1c))[1] - **(int **)(iVar2 + 0x1c) >> 2);
    if (0 < lVar7) {
      lVar5 = 0;
      do {
        uVar3 = 0;
        piVar1 = *(int **)(**(int **)((int)param_1 + 0x1c) + (int)lVar5);
        uVar6 = ZEXT48(piVar1);
        if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8) != 0) {
          uVar4 = (ulonglong)(param_2 != 0);
          do {
            iVar2 = fn_822ABA88();
            uVar3 = uVar3 + 1;
            *(int *)(*(int *)(iVar2 + 0x14) + 0x1d0) = (int)uVar4;
          } while ((uVar3 & 0xffffffff) <
                   (ulonglong)*(uint *)(*(int *)(((int *)uVar6)[4] * 4 + *(int *)uVar6) + 8));
        }
        iVar2 = (int)param_1;
        lVar7 = lVar7 + -1;
        lVar5 = lVar5 + 4;
      } while (lVar7 != 0);
    }
    *(int *)(iVar2 + 0x324) = (int)param_2;
  }
  return;
}

