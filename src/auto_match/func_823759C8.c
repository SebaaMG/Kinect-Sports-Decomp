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


undefined8 fn_823759C8(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  
  iVar2 = (int)param_1;
  iVar3 = *(int *)(iVar2 + 0x1f8);
  if (iVar3 == param_2) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    if (iVar3 < 8) {
      uVar4 = 0;
      piVar1 = *(int **)(**(int **)(iVar2 + 8) + iVar3 * 4);
      uVar8 = ZEXT48(piVar1);
      uVar7 = (ulonglong)*(uint *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
      if (uVar7 != 0) {
        dVar9 = (double)lbl_821CC160;
        do {
          iVar3 = fn_822ABA88(*(undefined4 *)(((int *)uVar8)[4] * 4 + *(int *)uVar8));
          iVar2 = (int)param_1;
          uVar4 = uVar4 + 1;
          *(float *)(iVar3 + 0x25c) = (float)dVar9;
          *(undefined4 *)(iVar3 + 0x254) = 0x18;
          uVar6 = (undefined4)uVar5;
          *(undefined4 *)(iVar3 + 0x268) = uVar6;
          *(undefined4 *)(iVar3 + 0x250) = 0x18;
          *(undefined4 *)(iVar3 + 0x2ac) = uVar6;
        } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
    }
    *(int *)(iVar2 + 0x1f8) = param_2;
    uVar5 = 1;
    *(undefined4 *)(iVar2 + 0x1fc) = uVar6;
  }
  return uVar5;
}

