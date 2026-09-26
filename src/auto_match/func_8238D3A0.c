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
extern int fn_822ABA88();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CC160;


void fn_8238D3A0(int *param_1,ulonglong param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  
  iVar1 = param_1[2];
  uVar6 = 0;
  param_1[9] = (int)param_2;
  param_1[10] = 0;
  piVar2 = *(int **)(**(int **)(iVar1 + 8) + 4);
  uVar3 = *(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  if (uVar3 != 0) {
    dVar7 = (double)lbl_82192734;
    do {
      piVar2 = *(int **)(**(int **)(iVar1 + 8) + 4);
      iVar4 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),uVar6);
      iVar5 = (**(code **)(*param_1 + 0x98))(param_1);
      if (iVar5 == 0) {
        *(uint *)(iVar4 + 0x2b0) = -((uVar6 < param_2) - 1);
      }
      uVar6 = uVar6 + 1;
      *(float *)(iVar4 + 0x2fc) = (float)dVar7;
    } while ((uVar6 & 0xffffffff) < (ulonglong)uVar3);
  }
  param_1[8] = lbl_821CC160;
  return;
}

