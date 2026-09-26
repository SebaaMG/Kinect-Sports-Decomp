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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82CE5410();


void fn_82DC8A98(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int aiStack_40 [16];
  
  piVar11 = (int *)*param_1;
  piVar10 = piVar11 + param_1[1] * 4;
  if (piVar11 == piVar10) {
    return;
  }
  lVar8 = (ulonglong)(uint)param_1[1] + (ulonglong)(uint)param_2[1];
  aiStack_40[0] = (int)lVar8;
  if (lVar8 == 0) {
    piVar3 = (int *)0x0;
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82CE5410();
    piVar3 = (int *)(**(code **)(**(int **)(iVar2 + 0x10) + 0xc))
                              (*(int **)(iVar2 + 0x10),aiStack_40,0xc);
    iVar2 = aiStack_40[0];
    iVar5 = aiStack_40[0];
    if (aiStack_40[0] != 0) goto LAB_82dc8b08;
  }
  iVar5 = -0x80000000;
LAB_82dc8b08:
  piVar7 = (int *)*param_2;
  piVar6 = piVar7 + param_2[1] * 3;
  piVar9 = piVar3;
  do {
    if (piVar10 <= piVar11) {
LAB_82dc8c1c:
      if (piVar7 < piVar6) {
        lVar8 = (ulonglong)(uint)((int)piVar6 + (-1 - (int)piVar7)) / 0xc + 1;
        do {
          lVar8 = lVar8 + -1;
          *piVar9 = *piVar7;
          piVar9[1] = piVar7[1];
          piVar11 = piVar7 + 2;
          piVar7 = piVar7 + 3;
          piVar9[2] = *piVar11;
          piVar9 = piVar9 + 3;
        } while (lVar8 != 0);
      }
      iVar4 = *param_2;
      uVar1 = param_2[2];
      *param_2 = (int)piVar3;
      param_2[1] = iVar2;
      param_2[2] = iVar5;
      param_1[1] = 0;
      iVar2 = fn_82CE5410();
      if ((uVar1 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
                  (*(int **)(iVar2 + 0x10),iVar4,uVar1 & 0x3fffffff,0xc);
      }
      return;
    }
    if (piVar6 <= piVar7) {
      if (piVar11 < piVar10) {
        lVar8 = (ulonglong)((uint)((int)piVar10 + (-1 - (int)piVar11)) >> 4) + 1;
        do {
          lVar8 = lVar8 + -1;
          *piVar9 = *piVar11;
          piVar9[1] = piVar11[1];
          piVar10 = piVar11 + 2;
          piVar11 = piVar11 + 4;
          piVar9[2] = *piVar10;
          piVar9 = piVar9 + 3;
        } while (lVar8 != 0);
      }
      goto LAB_82dc8c1c;
    }
    if (CONCAT44(*(undefined4 *)(*(int *)(*piVar11 + 0x58) + 0xd4),
                 *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0xd4)) <
        CONCAT44(*(undefined4 *)(*(int *)(*piVar7 + 0x58) + 0xd4),
                 *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xd4))) {
      *piVar9 = *piVar11;
      piVar9[1] = piVar11[1];
      iVar4 = piVar11[2];
      piVar11 = piVar11 + 4;
    }
    else {
      *piVar9 = *piVar7;
      piVar9[1] = piVar7[1];
      iVar4 = piVar7[2];
      piVar7 = piVar7 + 3;
    }
    piVar9[2] = iVar4;
    piVar9 = piVar9 + 3;
  } while( true );
}

