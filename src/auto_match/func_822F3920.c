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
extern int fn_822AF138();
extern int fn_822F4758();
extern int fn_82397F30();
extern int fn_8288B760();


void fn_822F3920(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  
  iVar7 = *(int *)(param_1 + 0xc);
  iVar11 = *(int *)(iVar7 + 0x24);
  if (*(int *)(iVar7 + 0x168) == 0) {
    uVar6 = *(uint *)(iVar7 + 0x16c);
  }
  else {
    uVar6 = fn_8288B760();
    uVar6 = uVar6 & 0xff;
  }
  if (uVar6 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 0x30);
  if ((piVar1 != (int *)0x0) && ((*piVar1 != 0 || (piVar1[1] != 0)))) goto LAB_822f3b00;
  iVar7 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  if (iVar11 == 0) {
    iVar11 = *(int *)(iVar7 + 0x1e4);
    if (iVar11 == 0) {
      return;
    }
    iVar7 = (**(code **)(**(int **)(iVar7 + 0x2e0) + 0x84))(*(int **)(iVar7 + 0x2e0),iVar11);
    if (iVar7 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      return;
    }
    iVar7 = *(int *)(param_1 + 0xc);
LAB_822f3ad8:
    iVar8 = *(int *)(iVar7 + 0x210);
    if (iVar8 == 0) {
      iVar8 = *(int *)(iVar7 + 0x20c);
    }
    iVar8 = fn_822F4758(param_1,iVar11,iVar8);
  }
  else {
    if (*(int *)(iVar7 + 0x178) != 2) {
      iVar11 = *(int *)(iVar7 + 0x1e4);
      if (iVar11 == 0) {
        return;
      }
      iVar7 = (**(code **)(**(int **)(iVar7 + 0x2e0) + 0x84))(*(int **)(iVar7 + 0x2e0),iVar11);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = *(int *)(param_1 + 0xc);
      if ((*(int *)(iVar7 + 0x20c) == 0) && (*(int *)(iVar7 + 0x210) == 0)) {
        return;
      }
      goto LAB_822f3ad8;
    }
    uVar2 = *(undefined4 *)(iVar7 + 0x1e4);
    puVar3 = *(undefined4 **)(iVar7 + 0x1b8);
    for (puVar10 = *(undefined4 **)(iVar7 + 0x1b4); puVar10 != puVar3; puVar10 = puVar10 + 1) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x2e0);
      uVar4 = *puVar10;
      iVar7 = (**(code **)(*piVar1 + 0x84))(piVar1,uVar4);
      if (iVar7 != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1e4) = uVar4;
        iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0x210);
        if (iVar7 == 0) {
          iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0x20c);
        }
        iVar7 = fn_822F4758(param_1,uVar4,iVar7);
        if (iVar7 == 0) {
          iVar7 = *(int *)(param_1 + 0xc);
          if (*(int *)(iVar7 + 0x214) == 0) {
            uVar5 = *(undefined4 *)(iVar7 + 0x20c);
          }
          else {
            uVar5 = *(undefined4 *)(iVar7 + 0x210);
          }
          iVar7 = fn_822F4758(param_1,uVar4,uVar5);
          if (iVar7 == 0) goto LAB_822f3a40;
        }
        iVar8 = 1;
      }
LAB_822f3a40:;}
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1e4) = uVar2;
  }
  if (iVar8 == 0) {
    return;
  }
LAB_822f3b00:
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 2) {
    return;
  }
  iVar7 = fn_82397F30();
  if ((iVar7 == 0) || (iVar7 = *(int *)(param_1 + 0xc), *(int *)(iVar7 + 0x24) != 0)) {
    iVar7 = *(int *)(param_1 + 0xc);
    uVar9 = 7;
  }
  else {
    uVar9 = 6;
  }
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(undefined4 *)(iVar7 + 0x110),uVar9);
}

