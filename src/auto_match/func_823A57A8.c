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
extern int fn_82359698();
extern int fn_82508078();
extern unsigned int lbl_821CC160;


void fn_823A57A8(double param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  
  fVar7 = lbl_821CC160;
  iVar4 = *(int *)(param_2 + 8);
  fVar1 = (float)((double)*(float *)(iVar4 + 0x204) + param_1);
  *(float *)(iVar4 + 0x204) = fVar1;
  if (fVar1 <= fVar7) {
    return;
  }
  piVar5 = *(int **)**(int **)(iVar4 + 8);
  piVar6 = (int *)((int *)**(int **)(iVar4 + 8))[1];
  uVar2 = (uint)*(float *)(*(int *)(piVar6[4] * 4 + *piVar6) + 0x20);
  uVar3 = (uint)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
  uVar9 = uVar3;
  if (((int)uVar2 <= (int)uVar3) || (uVar9 = uVar2, uVar10 = uVar3, (int)uVar2 <= (int)uVar3)) {
    uVar10 = uVar2;
  }
  iVar4 = *(int *)(param_2 + 8);
  if (((uVar9 - uVar10 < *(uint *)(iVar4 + 0x284)) && (*(uint *)(iVar4 + 0x288) < uVar3)) &&
     (uVar3 < *(uint *)(iVar4 + 0x28c))) {
    if (*(int *)(iVar4 + 0x178) != 0) goto LAB_823a58c0;
    uVar8 = 0xffffffff821b4d34;
  }
  else {
    if ((uVar9 - uVar10 <= *(uint *)(iVar4 + 0x290)) || (*(int *)(iVar4 + 0x178) != 0))
    goto LAB_823a58c0;
    uVar8 = 0xffffffff821b4dc0;
  }
  fn_82508078(*(undefined4 *)(iVar4 + 0xa4),uVar8,0);
LAB_823a58c0:
  fn_82359698(*(undefined4 *)(param_2 + 8),5);
  return;
}

