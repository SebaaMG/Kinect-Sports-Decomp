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
extern int fn_822AA770();
extern int fn_8236FB68();
extern int fn_82508078();
extern int fn_8288B760();
extern unsigned int uRam831d1ba4;


void fn_8236F648(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar10;
  uint uVar11;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar12;
  int iVar13;
  
  iVar13 = param_2 * 4;
  iVar10 = fn_822AA770(*(undefined4 *)(**(int **)(param_1 + 8) + iVar13));
  if (iVar10 != 0) {
    if (*(int *)(iVar10 + 0x168) == 0) {
      uVar11 = *(uint *)(iVar10 + 0x16c);
    }
    else {
      uVar11 = fn_8288B760();
      uVar11 = uVar11 & 0xff;
    }
    bVar12 = true;
    if (uVar11 != 0) goto LAB_8236f6a4;
  }
  bVar12 = false;
LAB_8236f6a4:
  uVar7 = (uint)((ulonglong)LZCOUNT(param_2) >> 3) & 4;
  iVar10 = **(int **)(param_1 + 8);
  iVar2 = **(int **)(param_1 + 8);
  piVar3 = *(int **)(iVar10 + uVar7);
  piVar4 = *(int **)(iVar10 + iVar13);
  piVar5 = *(int **)(iVar2 + iVar13);
  piVar6 = *(int **)(uVar7 + iVar2);
  iVar10 = (int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  iVar2 = (int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
  uVar11 = (uint)*(float *)(*(int *)(piVar6[4] * 4 + *piVar6) + 0x20);
  uVar1 = (uint)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
  uVar11 = (int)((~(ulonglong)(uVar1 ^ uVar11) & 0xffffffff) >> 0x1f) + (uint)(uVar1 <= uVar11) & 1;
  if (iVar10 <= iVar2) {
    iVar10 = iVar2;
  }
  piVar3 = *(int **)(**(int **)(param_1 + 8) + uVar7);
  piVar4 = *(int **)(**(int **)(param_1 + 8) + iVar13);
  iVar13 = (int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  iVar2 = (int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
  if (iVar2 < iVar13) {
    iVar13 = iVar2;
  }
  if (((bVar12) && (uVar11 != 0)) && (*(int *)(param_1 + 0x1c8) < iVar10 - iVar13)) {
    uVar8 = 7;
  }
  else if (*(int *)(param_1 + 0x200) == 1) {
    uVar8 = 0x11;
  }
  else if (*(int *)(param_1 + 0x200) < *(int *)(param_1 + 0x1c0)) {
    if (!bVar12) {
      return;
    }
    if (uVar11 == 0) {
      return;
    }
    if ((uint)(iVar10 - iVar13) <= uRam831d1ba4) {
      return;
    }
    uVar8 = 0x1b;
  }
  else {
    if (!bVar12) {
      return;
    }
    uVar8 = 0x12;
  }
  lVar9 = fn_8236FB68(uVar8);
  if (lVar9 != 0) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),lVar9,0);
  }
  return;
}

