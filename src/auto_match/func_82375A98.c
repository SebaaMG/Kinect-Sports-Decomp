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
extern unsigned int lbl_821CC160;


void fn_82375A98(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  double dVar8;
  
  piVar7 = *(int **)(param_1 + 8);
  lVar3 = 0;
  if ((piVar7[1] - *piVar7 & 0xfffffffcU) != 0) {
    lVar4 = 0;
    dVar8 = (double)lbl_821CC160;
    do {
      uVar2 = 0;
      piVar7 = *(int **)(*piVar7 + (int)lVar4);
      uVar6 = ZEXT48(piVar7);
      uVar5 = (ulonglong)*(uint *)(*(int *)(piVar7[4] * 4 + *piVar7) + 8);
      if (uVar5 != 0) {
        do {
          iVar1 = fn_822ABA88(*(undefined4 *)(((int *)uVar6)[4] * 4 + *(int *)uVar6));
          uVar2 = uVar2 + 1;
          *(float *)(iVar1 + 0x25c) = (float)dVar8;
          *(undefined4 *)(iVar1 + 0x254) = 0x18;
          *(undefined4 *)(iVar1 + 0x250) = 0x18;
          *(undefined4 *)(iVar1 + 0x268) = 0;
        } while ((uVar2 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      piVar7 = *(int **)(param_1 + 8);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 4;
    } while ((int)lVar3 < piVar7[1] - *piVar7 >> 2);
  }
  return;
}

