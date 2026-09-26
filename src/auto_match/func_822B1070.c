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
extern int fn_82368C30();
extern int fn_8236A928();
extern int fn_8236BA88();
extern unsigned int lbl_82193B00;


void fn_822B1070(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar8 = ZEXT48(piVar1);
  bVar4 = false;
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x10);
  iVar5 = *(int *)(*(uint *)(param_1 + 0x10) + 0x9a0);
  uVar2 = *(uint *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x10);
  uVar7 = (ulonglong)uVar2;
  if (iVar5 != 0) {
    bVar4 = uVar2 == *(uint *)(iVar5 + 0x2c);
  }
  if (bVar4) {
    uVar6 = 2;
LAB_822b1120:
    fn_8236A928(uVar9,iVar5,uVar6);
    return;
  }
  iVar5 = fn_82368C30(uVar9);
  if ((iVar5 != 0) && ((ulonglong)*(uint *)(iVar5 + 0x2c) == (uVar7 & 0xffffffff))) {
    iVar3 = *(int *)((int)uVar9 + 0x41c);
    if ((0 < iVar3) &&
       (((iVar3 < 3 || (iVar3 == 10)) && (*(float *)((int)uVar9 + 0x428) < lbl_82193B00)))) {
      uVar6 = 4;
      goto LAB_822b1120;
    }
  }
  fn_8236BA88(uVar8);
  return;
}

