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
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_82F64988();
extern unsigned int lbl_821CC160;


void fn_8241C900(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  double dVar12;
  
  iVar2 = param_1[2];
  uVar10 = 0;
  uVar7 = 0;
  if ((param_1[3] - iVar2) / 0x1ac != 0) {
    iVar11 = 0;
    iVar9 = 0;
    dVar12 = (double)lbl_821CC160;
    do {
      piVar4 = (int *)param_1[1];
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x38))(piVar4,iVar9 + iVar2,uVar10,param_2);
      }
      piVar4 = (int *)(iVar9 + param_1[2]);
      iVar2 = **(int **)(*param_1 + 8);
      if (*piVar4 < (*(int **)(*param_1 + 8))[1] - iVar2 >> 2) {
        piVar1 = *(int **)(*piVar4 * 4 + iVar2);
        iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
        if (*(int *)(iVar2 + 8) == 0) goto LAB_8241c9e4;
        iVar2 = fn_822ABA88(iVar2,0);
      }
      else {
LAB_8241c9e4:
        iVar2 = 0;
      }
      iVar8 = 0;
      if (*(int *)(iVar2 + 0x74) != 0) {
        iVar8 = ((uint)LZCOUNT((uint)*(byte *)(*(int *)(iVar2 + 0x74) + 0xd8)) >> 5) + 1;
      }
      uVar7 = piVar4[0xc];
      iVar6 = iVar11 + *param_2;
      *(undefined4 *)(*param_2 + 0xa78) = 1;
      *(float *)(iVar6 + 0xa94) = (float)uVar7;
      *(float *)(iVar6 + 0xa90) = (float)dVar12;
      *(undefined4 *)(iVar6 + 0xa88) = 1;
      *(undefined4 *)(iVar6 + 0xa8c) = 0;
      *(undefined4 *)(iVar6 + 0xa98) = 0;
      iVar6 = *param_2;
      fn_822B67F8(iVar2);
      uVar3 = fn_822B98A8();
      *(undefined4 *)(iVar6 + 0xa78) = 1;
      iVar6 = iVar11 + iVar6;
      fn_82F64988(iVar6 + 0xaa8,0x20,iVar2 + 0x30);
      *(float *)(iVar6 + 0xae8) = (float)dVar12;
      *(float *)(iVar6 + 0xaf4) = (float)dVar12;
      *(undefined4 *)(iVar6 + 0xaa0) = uVar3;
      *(int *)(iVar6 + 0xaa4) = iVar8;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(iVar6 + 0xaec) = 0;
      iVar9 = iVar9 + 0x1ac;
      *(undefined4 *)(iVar6 + 0xaf0) = 0;
      iVar11 = iVar11 + 0xdc;
      *(undefined4 *)(iVar6 + 0xaf8) = 0;
      *(undefined4 *)(iVar6 + 0xafc) = 0;
      *(undefined4 *)(iVar6 + 0xa9c) = 1;
      iVar2 = param_1[2];
      uVar7 = (param_1[3] - iVar2) / 0x1ac;
    } while ((uVar10 & 0xffffffff) < (ulonglong)uVar7);
  }
  if (param_3 != 0) {
    iVar2 = *param_2;
    uVar5 = param_1[6] + 1;
    *(int *)(iVar2 + 0xa7c) = param_1[6];
    *(uint *)(iVar2 + 0xa80) = uVar5 - (uVar5 / uVar7) * uVar7;
  }
  return;
}

