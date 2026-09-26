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
extern int fn_8236A928();
extern int fn_8236BA88();


void fn_822B15C0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar9 = ZEXT48(piVar1);
  iVar10 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar6 = 0;
  uVar5 = 0;
  piVar1 = *(int **)(((uint)LZCOUNT(*(undefined4 *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x10)) >> 3
                     & 4) + **(int **)(iVar2 + 8));
  uVar3 = *(uint *)(piVar1[4] * 4 + *piVar1);
  uVar8 = (ulonglong)uVar3;
  uVar7 = (ulonglong)*(uint *)(uVar3 + 8);
  if (uVar7 != 0) {
    do {
      iVar4 = fn_822ABA88(uVar8);
      if (*(int *)(*(int *)(iVar4 + 0x110) + 0x1c) == 0x14) {
        uVar6 = 1;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  piVar1 = (int *)uVar9;
  uVar5 = 0;
  uVar7 = (ulonglong)*(uint *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
  if (uVar7 != 0) {
    uVar8 = (ulonglong)*(uint *)(piVar1[4] * 4 + *piVar1);
    do {
      iVar4 = fn_822ABA88(uVar8);
      if (((int)uVar6 != 0) && (*(int *)(*(int *)(iVar4 + 0x110) + 0x1c) == 8)) {
        iVar10 = iVar4;
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
    if (iVar10 != 0) {
      fn_8236A928(iVar2,iVar10,6);
      return;
    }
  }
  fn_8236BA88(uVar9);
  return;
}

