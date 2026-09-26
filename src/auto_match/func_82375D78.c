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


void fn_82375D78(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  
  piVar6 = *(int **)((int)param_1 + 8);
  lVar4 = 0;
  if ((piVar6[1] - *piVar6 & 0xfffffffcU) != 0) {
    lVar5 = 0;
    do {
      piVar1 = *(int **)((int)lVar5 + *piVar6);
      iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
      if (*(int *)(iVar2 + 8) == 2) {
        piVar6 = *(int **)(*(int *)(iVar2 + 0x10) * 4 + *piVar6);
        iVar2 = fn_822ABA88(*(undefined4 *)(piVar6[4] * 4 + *piVar6),0);
        iVar3 = fn_822ABA88(*(undefined4 *)(piVar6[4] * 4 + *piVar6),1);
        if (*(int *)(iVar2 + 0x2a4) == *(int *)(iVar3 + 0x2a4)) {
          *(uint *)(iVar3 + 0x2a4) = (uint)LZCOUNT(*(int *)(iVar2 + 0x2a4)) >> 5;
        }
      }
      piVar6 = *(int **)((int)param_1 + 8);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 4;
    } while ((int)lVar4 < piVar6[1] - *piVar6 >> 2);
  }
  return;
}

