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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT42(h,l) ((U64)((((U32)(h)) << 16) | ((U16)(l))))
#define CONCAT62(h,l) ((U64)((((U64)(h)) << 16) | ((U16)(l))))
extern int fn_827B7AE0();


int fn_827B7D10(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = param_2[7];
  iVar9 = param_2[4];
  bVar7 = true;
  if (iVar9 == iVar3 + 8) {
    iVar9 = param_2[3];
    bVar7 = false;
    if (iVar9 == iVar3 + 8) {
      return 0;
    }
  }
  puVar4 = (undefined4 *)param_2[2];
  piVar5 = *(int **)(iVar9 + 8);
  fn_827B7AE0(param_1,param_2);
  uVar1 = *(ushort *)((int)param_2 + 0x22);
  uVar2 = *(ushort *)(param_2 + 9);
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  if ((*(ushort *)(param_2 + 8) & 0x4000) == 0) {
    *(int *)(param_2[5] + 0x18) = param_2[6];
    *(int *)(param_2[6] + 0x14) = param_2[5];
  }
  bVar6 = false;
  *(int *)(param_2[3] + 0x10) = param_2[4];
  *(int *)(param_2[4] + 0xc) = param_2[3];
  *param_2 = *(int *)(param_1 + 0x28);
  *(int **)(param_1 + 0x28) = param_2;
  if (((*piVar5 == 0) && (piVar5[5] == 0)) &&
     (*(short *)((int)piVar5 + 0x1e) == *(short *)(iVar3 + 4))) {
    if (bVar7) {
      iVar8 = (uint)*(ushort *)(piVar5 + 6) - ((uint)uVar2 + (uint)uVar1);
    }
    else {
      iVar8 = (uint)uVar1 - ((uint)*(ushort *)(piVar5 + 7) + (uint)*(ushort *)(piVar5 + 6));
    }
    bVar6 = iVar8 == 0;
  }
  if (bVar6) {
    *puVar4 = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 **)(param_1 + 0x70) = puVar4;
    if (bVar7) {
      *(ushort *)(piVar5 + 6) = uVar1;
    }
    *(ushort *)(piVar5 + 7) = *(short *)(piVar5 + 7) + uVar2;
  }
  else {
    puVar4[3] = iVar9;
    puVar4[5] = 0;
    puVar4[4] = piVar5;
    *(ulonglong *)(puVar4 + 6) =
         CONCAT62(CONCAT42(CONCAT22(uVar1,*(undefined2 *)(iVar3 + 2)),uVar2),
                  *(undefined2 *)(iVar3 + 4));
    *(undefined4 **)(iVar9 + 8) = puVar4;
  }
  if (bVar7) {
    *(ushort *)(iVar9 + 0x22) = uVar1;
  }
  *(ushort *)(iVar9 + 0x24) = *(short *)(iVar9 + 0x24) + uVar2;
  if ((*(ushort *)(iVar9 + 0x20) & 0x4000) != 0) {
    *(undefined2 *)(iVar9 + 0x26) = 0;
    *(ushort *)(iVar9 + 0x20) = *(ushort *)(iVar9 + 0x20) & 0xbfff;
    *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(iVar9 + 0x14) = param_1 + 0x3c;
    *(int *)(*(int *)(param_1 + 0x54) + 0x14) = iVar9;
    *(int *)(param_1 + 0x54) = iVar9;
  }
  return iVar9;
}

