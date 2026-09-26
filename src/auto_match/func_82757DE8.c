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
extern int fn_8267C498();
extern int fn_8268B400();
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756E30();
extern int fn_82756F70();
extern unsigned int iStack_64;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int lbl_821AAD20;


void fn_82757DE8(longlong param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  int iStack_c0;
  int iStack_bc;
  longlong lStack_b8;
  ushort *puStack_b0;
  ushort *puStack_ac;
  int iStack_64;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  iVar7 = 0;
  bVar3 = true;
  iStack_bc = 0;
  uVar9 = 0;
  dVar10 = (double)lbl_821AAD20;
  iVar8 = 0;
  iStack_c0 = param_2;
  while( true ) {
    if ((((int *)(param_2 + 0x6c) == (int *)0x0) || (*(uint *)(param_2 + 0x70) <= uVar9)) ||
       (bVar2 = false, (int)uVar9 < 0)) {
      bVar2 = true;
    }
    if (bVar2) break;
    iVar6 = *(int *)(*(int *)(param_2 + 0x6c) + iVar8);
    lStack_b8 = (longlong)*(int *)(iVar6 + 0xc);
    if ((bVar3) || ((double)lStack_b8 != dVar10)) {
      if (bVar3) {
        dVar10 = (double)lStack_b8;
      }
    }
    else {
      fn_8268B400(param_1 + 0xc,10);
    }
    fn_82756F70(&puStack_b0,iVar6);
    if (iStack_64 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iStack_64 + 0x14);
    }
    piVar1 = *(int **)(iVar6 + 0xc);
    if (piVar1 != (int *)0x0) {
      while( true ) {
        if ((puStack_b0 == (ushort *)0x0) || (bVar3 = false, puStack_ac <= puStack_b0)) {
          bVar3 = true;
        }
        if (bVar3) break;
        uVar5 = (ulonglong)*puStack_b0;
        if (0xfffe < uVar5) {
          uVar5 = 0xffffffffffffffff;
        }
        uVar4 = (**(code **)(*piVar1 + 0x34))(piVar1,uVar5);
        if ((int)uVar4 != -1) {
          iVar7 = iVar7 + 1;
          fn_8268B400(param_1 + 0xc,uVar4);
        }
        fn_827555D8(&puStack_b0);
      }
      bVar3 = false;
    }
    fn_82756488(&puStack_b0);
    if (uVar9 < *(uint *)(param_2 + 0x70)) {
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
    }
  }
  iStack_bc = iVar7;
  fn_82756E30(param_1,&iStack_c0);
  if (param_2 != 0) {
    fn_8267C498(param_2);
  }
  return;
}

