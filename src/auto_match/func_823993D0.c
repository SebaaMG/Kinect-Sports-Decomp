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
extern int fn_822606B0();
extern int fn_822ABA88();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C996C;


void fn_823993D0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar10;
  undefined8 uVar8;
  int iVar11;
  undefined8 uVar9;
  double dVar12;
  
  if (*(int *)(param_1 + 0x178) != 2) {
    iVar10 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x7c))();
    piVar6 = *(int **)(**(int **)(param_1 + 8) + iVar10 * 4);
    uVar8 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x80))(*(int **)(param_1 + 0x2e0));
    iVar10 = *(int *)(piVar6[4] * 4 + *piVar6);
    iVar11 = fn_822ABA88(iVar10,uVar8);
    uVar7 = lbl_831C996C;
    uVar8 = 0xffffffff8219622c;
    if (*(float *)(param_2 + 0x268) <= lbl_821CC160) {
      if (*(float *)(param_2 + 0x268) < lbl_821CC160) {
        uVar8 = 0xffffffff821b4ad0;
      }
    }
    else {
      uVar8 = 0xffffffff821a6998;
    }
    dVar12 = (double)*(float *)(param_2 + 0x26c);
    iVar1 = *(int *)(iVar11 + 0x24);
    uVar2 = *(undefined4 *)(iVar11 + 0x214);
    uVar3 = *(undefined4 *)(iVar11 + 0x28);
    uVar4 = *(undefined4 *)(iVar11 + 0x244);
    uVar5 = *(undefined4 *)(iVar10 + 0x10);
    uVar9 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
    fn_822606B0(ABS(dVar12),uVar7,uVar9,uVar5,uVar3,iVar1 != 0,uVar2,uVar4,uVar8);
  }
  return;
}

