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
extern unsigned int *auStack_50;
extern unsigned int iStack_54;


void fn_82CF7020(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar4;
  longlong lVar3;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  int iStack_54;
  undefined1 auStack_50 [80];
  
  uVar8 = *(uint *)(param_1 + 8);
  uVar1 = *(undefined4 *)((param_2 + 0x25) * 4 + param_1);
  if (uVar8 == 0) {
    (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_3,uVar1);
  }
  else {
    iVar4 = param_2 * 8 + param_1;
    lVar6 = (longlong)((int)uVar8 >> 1) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 1) != 0);
    piVar9 = (int *)(iVar4 + 0xc);
    uVar8 = *(uint *)(iVar4 + 0x10);
    uVar7 = (ulonglong)uVar8;
    while ((int)lVar6 < (int)uVar8) {
      lVar3 = uVar7 - lVar6;
      if ((int)lVar3 < 5) {
        if (0 < (int)lVar3) goto LAB_82cf70b0;
      }
      else {
        lVar3 = 4;
LAB_82cf70b0:
        piVar2 = &iStack_54;
        lVar10 = lVar3;
        do {
          piVar5 = (int *)*piVar9;
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -1;
            *piVar9 = *piVar5;
          }
          piVar2 = piVar2 + 1;
          *piVar2 = (int)piVar5;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      uVar7 = uVar7 - lVar3;
      (**(code **)(**(int **)(param_1 + 4) + 0x1c))(*(int **)(param_1 + 4),auStack_50,lVar3,uVar1);
      uVar8 = (uint)uVar7;
    }
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    *param_3 = *piVar9;
    *piVar9 = (int)param_3;
  }
  return;
}

