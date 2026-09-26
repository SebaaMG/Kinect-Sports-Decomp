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
extern int fn_822C3FA8();
extern unsigned int lbl_831D1ACC;


undefined8
fn_8236AF28(int param_1,undefined8 param_2,int param_3,undefined8 param_4,ulonglong param_5)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = ZEXT48(*(uint **)(param_1 + 8));
  uVar1 = **(uint **)(param_1 + 8);
  uVar5 = (ulonglong)uVar1;
  piVar2 = *(int **)(param_3 * 4 + uVar1);
  uVar3 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2));
  piVar2 = *(int **)((int)((param_5 & 0xffffffff) << 2) + (int)uVar5);
  fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),param_4);
  iVar7 = 0;
  if (((ulonglong)*(uint *)((int)uVar6 + 4) - (uVar5 & 0xffffffff) & 0xfffffffc) != 0) {
    iVar8 = 0;
    do {
      iVar4 = fn_822C3FA8((double)lbl_831D1ACC,uVar3,*(undefined4 *)(*(int *)uVar6 + iVar8));
      if (iVar4 != 0) {
        return 0;
      }
      piVar2 = *(int **)(param_1 + 8);
      uVar6 = ZEXT48(piVar2);
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar7 < piVar2[1] - *piVar2 >> 2);
  }
  return 1;
}

