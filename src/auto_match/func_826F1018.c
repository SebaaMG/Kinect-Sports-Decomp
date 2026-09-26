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
extern int fn_8268B050();
extern int fn_8268B1F0();
extern int fn_8268B738();
extern int fn_826F0840();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_826F1018(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 uStack_50;
  uint uStack_4c;
  
  uVar5 = param_1[9];
  puVar10 = (uint *)(param_1 + 9);
  param_1[3] = 0;
  uVar7 = 0;
  if (uVar5 != 0) {
    iVar9 = 0;
    do {
      if ((uVar7 & 0xffffffff) < 0x10) {
        iVar2 = (int)puVar10 + iVar9 + 0x10;
      }
      else {
        iVar2 = param_1[10] + iVar9 + -0xc0;
      }
      if ((uVar7 & 0xffffffff) < 0x10) {
        piVar6 = (int *)((int)puVar10 + iVar9 + 0x10);
      }
      else {
        piVar6 = (int *)(param_1[10] + iVar9 + -0xc0);
      }
      if (*piVar6 == 0) {
        iVar2 = (uint)*(byte *)(iVar2 + 8) + param_1[3];
LAB_826f10dc:
        param_1[3] = iVar2;
      }
      else if (*piVar6 == 2) {
        fn_826F0840(param_1,uVar7);
        if (*(int **)(iVar2 + 4) != (int *)0x0) {
          iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x14))();
          iVar2 = iVar2 + param_1[3];
          goto LAB_826f10dc;
        }
      }
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 0xc;
    } while ((uVar7 & 0xffffffff) < (ulonglong)uVar5);
  }
  uVar5 = param_1[6];
  if (uVar5 == 0) {
    fn_8268B738(param_1[7],param_1,param_1[3]);
  }
  else if (uVar5 == 1) {
    iVar9 = param_1[7];
    uVar5 = *puVar10;
    fn_8268B050(iVar9,(ulonglong)*(uint *)(iVar9 + 4) + (ulonglong)(uint)param_1[3]);
    uVar8 = 0;
    if (uVar5 != 0) {
      iVar2 = 0;
      do {
        if (uVar8 < 0x10) {
          iVar4 = (int)puVar10 + iVar2 + 0x10;
          piVar6 = (int *)((int)puVar10 + iVar2 + 0x10);
        }
        else {
          iVar4 = param_1[10] + iVar2 + -0xc0;
          piVar6 = (int *)(param_1[10] + iVar2 + -0xc0);
        }
        if (*piVar6 == 0) {
          uVar3 = (uint)*(byte *)(iVar4 + 8);
          uVar1 = *(undefined4 *)(iVar4 + 4);
LAB_826f1200:
          fn_8268B1F0(iVar9,uVar1,uVar3);
        }
        else if ((*piVar6 == 2) && (*(int **)(iVar4 + 4) != (int *)0x0)) {
          (**(code **)(**(int **)(iVar4 + 4) + 0x10))(&uStack_50);
          uVar1 = uStack_50;
          uVar3 = uStack_4c;
          goto LAB_826f1200;
        }
        uVar8 = uVar8 + 1;
        iVar2 = iVar2 + 0xc;
      } while (uVar8 < uVar5);
    }
  }
  else if (uVar5 < 3) {
    iVar9 = param_1[7];
    (**(code **)(*param_1 + 4))(param_1,iVar9,param_1[8]);
    uVar5 = param_1[3];
    if (param_1[8] - 1U < (uint)param_1[3]) {
      uVar5 = param_1[8] - 1;
    }
    *(undefined1 *)(uVar5 + iVar9) = 0;
  }
  return;
}

