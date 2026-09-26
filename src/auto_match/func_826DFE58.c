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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_40;
extern int fn_8267C498();
extern int fn_82684A58();
extern int fn_826DF848();
extern int fn_826E7800();
extern int fn_826E7998();
extern int fn_826F4A18();


void fn_826DFE58(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  int *piVar9;
  int iVar10;
  uint auStack_40 [16];
  
  iVar10 = *(int *)(param_1 + 0x314);
  if (iVar10 == 0) {
    iVar10 = param_1 + 0x28;
  }
  uVar8 = 0;
  *(undefined1 *)(iVar10 + 0x15) = 0;
  if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 2) {
    fn_826E7800(iVar10,2);
  }
  puVar7 = (undefined1 *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
  uVar1 = puVar7[1];
  uVar2 = *puVar7;
  *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 2;
  piVar3 = *(int **)(*(int *)(param_1 + 0x10) + 0x24);
  if (piVar3 == (int *)0x0) {
    iVar10 = *(int *)(param_1 + 0x314);
    if (iVar10 == 0) {
      iVar10 = param_1 + 0x28;
    }
    fn_82684A58(iVar10,0xffffffff8200c940);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x314);
    if (iVar10 == 0) {
      iVar10 = param_1 + 0x28;
    }
    fn_826E7998(iVar10);
    piVar9 = *(int **)(param_1 + 0x2b4);
    if (piVar9 == (int *)0x0) {
      iVar10 = *(int *)(param_1 + 0x314);
      if (iVar10 == 0) {
        iVar10 = param_1 + 0x28;
      }
      fn_826E7998(iVar10);
      *(undefined1 *)(iVar10 + 0x38) = 1;
      iVar4 = *piVar3;
      piVar9 = *(int **)(iVar10 + 0x10);
      uVar6 = fn_826DF848(param_1);
      pcVar5 = *(code **)(iVar4 + 8);
    }
    else {
      (**(code **)(*piVar9 + 4))(piVar9);
      iVar10 = *piVar3;
      uVar6 = fn_826DF848(param_1);
      pcVar5 = *(code **)(iVar10 + 0x10);
    }
    uVar8 = (*pcVar5)(piVar3,piVar9,uVar6);
  }
  auStack_40[0] = (uint)CONCAT11(uVar1,uVar2);
  fn_826F4A18(param_1,auStack_40,uVar8);
  if ((uVar8 & 0xffffffff) != 0) {
    fn_8267C498(uVar8);
  }
  return;
}

