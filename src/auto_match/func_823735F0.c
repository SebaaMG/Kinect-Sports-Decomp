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
extern int fn_822AA7E0();
extern int fn_822ABA88();
extern int fn_82520780();
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_83265A28;


void fn_823735F0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = *(int *)(param_1 + 0x1e0);
  iVar1 = *(int *)(param_1 + 0x1f0);
  uVar5 = (uint)((ulonglong)LZCOUNT(iVar9) >> 3) & 4;
  piVar2 = *(int **)(uVar5 + **(int **)(param_1 + 8));
  piVar3 = *(int **)(iVar9 * 4 + **(int **)(param_1 + 8));
  uVar10 = *(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  uVar7 = fn_822AA7E0(piVar2);
  if (((*(int *)(param_1 + 0x21c) != 0) || (*(int *)(param_1 + 0x220) != 0)) ||
     (bVar6 = false, *(int *)(param_1 + 0x200) == 1)) {
    bVar6 = true;
  }
  iVar8 = fn_82520780((double)lbl_82191FC8,0xffffffff83265a28);
  if (((iVar8 == 0) || (bVar6)) || (uVar10 <= uVar7)) {
    if (((uint)LZCOUNT(iVar9 - iVar1) >> 5 == 0) ||
       (uVar10 = *(uint *)(param_1 + 500), uVar10 == 0xffffffff)) {
      piVar2 = *(int **)(*(int *)(param_1 + 0x20) + iVar9 * 4);
      if ((piVar2[1] - *piVar2 & 0xfffffffcU) == 4) {
        fn_822AA770(piVar3);
        return;
      }
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      uVar4 = *(undefined4 *)(piVar3[4] * 4 + *piVar3);
      uVar10 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
      goto LAB_823737a8;
    }
    piVar2 = *(int **)(*(int *)(param_1 + 0x1f0) * 4 + **(int **)(param_1 + 8));
  }
  else {
    if (uVar7 == 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      uVar10 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
    }
    else {
      iVar9 = fn_822AA770(piVar2);
      uVar10 = (uint)(*(int *)(iVar9 + 0x28) == 0);
    }
    piVar2 = *(int **)(**(int **)(param_1 + 8) + uVar5);
  }
  uVar4 = *(undefined4 *)(piVar2[4] * 4 + *piVar2);
LAB_823737a8:
  fn_822ABA88(uVar4,uVar10);
  return;
}

