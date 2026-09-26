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
extern int fn_82250A18();
extern int fn_822922E8();
extern int fn_8229A000();
extern int fn_8229F5A8();
extern int fn_8229F758();
extern int fn_822ABA88();
extern int fn_82337B90();
extern int fn_82337BE0();
extern int fn_82450238();
extern int fn_824CD030();
extern int fn_82560708();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;


void fn_8244DF78(int param_1)

{
  undefined4 uVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  
  iVar4 = **(int **)(param_1 + 0x40);
  uVar7 = (*(int **)(param_1 + 0x40))[0x81];
  if ((int)uVar7 < *(int *)(*(int *)(iVar4 + 0x174) + 0xbc)) {
    iVar6 = uVar7 * 0x18;
    dVar9 = (double)lbl_821CC160;
    dVar10 = (double)lbl_82005748;
    iVar5 = uVar7 << 2;
    do {
      piVar8 = *(int **)(**(int **)(iVar4 + 8) + iVar5);
      iVar3 = fn_822ABA88(*(undefined4 *)(piVar8[4] * 4 + *piVar8),0);
      iVar4 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar4 = fn_82250A18();
      }
      if (((*(char *)(iVar4 + 4) == '\0') && (iVar4 = fn_82337B90(iVar3), iVar4 == 0)) &&
         (iVar4 = fn_82337BE0(iVar3), iVar4 == 0)) break;
      piVar8 = (int *)(*(int *)(*(int *)(param_1 + 0x44) + 0xb8) + iVar6);
      if ((*(int *)(iVar3 + 0x24) != 0) && (*piVar8 == 0)) {
        piVar8[5] = (int)((double)*(float *)(param_1 + 0x38) * dVar10);
        iVar4 = fn_824CD030(*(undefined4 *)(iVar3 + 0x24));
        if (iVar4 != 0) {
          iVar4 = lbl_832975B0;
          if (lbl_832975B0 == 0) {
            iVar4 = fn_82250A18();
          }
          if (*(char *)(iVar4 + 4) == '\0') {
            iVar4 = uVar7 + (((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0) &
                            0x7fffffff) * -2;
          }
          else {
            iVar4 = 0;
          }
          fn_8229F758(dVar9,(double)(longlong)(piVar8[5] / 100),
                            (double)(longlong)(piVar8[5] % 100),
                            *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc));
          uVar2 = fn_82450238(param_1,iVar3);
          fn_822922E8(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xd4),iVar4,uVar2);
        }
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x18;
      iVar4 = **(int **)(param_1 + 0x40);
    } while ((int)uVar7 < *(int *)(*(int *)(iVar4 + 0x174) + 0xbc));
  }
  iVar4 = *(int *)(param_1 + 0x44);
  if ((*(float *)(iVar4 + 0x28) < *(float *)(param_1 + 0x38)) && (*(char *)(iVar4 + 5) != '\0')) {
    *(undefined1 *)(iVar4 + 5) = 0;
    iVar4 = fn_82560708();
    if (iVar4 == 0) {
      uVar1 = *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x68);
    }
    else {
      iVar4 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_8229A000(*(undefined4 *)(iVar4 + 0x50));
      fn_8229A000(*(undefined4 *)(iVar4 + 0x5c));
      iVar4 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_8229A000(*(undefined4 *)(iVar4 + 0x54));
      uVar1 = *(undefined4 *)(iVar4 + 0x60);
    }
    fn_8229A000(uVar1);
    fn_8229A000(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
    iVar5 = fn_82560708();
    iVar4 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    if (iVar5 == 0) {
      uVar1 = *(undefined4 *)(iVar4 + 0x68);
    }
    else {
      fn_8229A000(*(undefined4 *)(iVar4 + 0x6c));
      uVar1 = *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x70);
    }
    fn_8229A000(uVar1);
    fn_8229F5A8(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc));
  }
  return;
}

