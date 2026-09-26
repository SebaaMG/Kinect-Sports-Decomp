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
extern int fn_822B70F0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_823608F8(int param_1,int param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = 0;
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  uVar3 = ZEXT48(piVar1);
  iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(int *)(iVar2 + 8) != 0) {
    dVar7 = (double)lbl_821CC160;
    dVar6 = (double)lbl_821CA460;
    do {
      iVar2 = fn_822ABA88(iVar2,uVar4);
      *(uint *)(*(int *)(iVar2 + 0x14) + 0x1d0) = (uint)(param_3 != 0);
      dVar5 = dVar6;
      if ((int)param_3 != 0) {
        dVar5 = dVar7;
      }
      fn_822B70F0(dVar5);
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)(((int *)uVar3)[4] * 4 + *(int *)uVar3);
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 8));
  }
  return;
}

