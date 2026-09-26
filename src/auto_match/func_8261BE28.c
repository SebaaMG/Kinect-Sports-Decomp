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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8261BE28(ushort *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  int iVar10;
  float fVar11;
  int *piVar12;
  int iVar13;
  
  fVar11 = lbl_821CA460;
  iVar13 = 0;
  iVar1 = (*(int *)(param_1 + 4) - *(int *)(param_1 + 2)) / (int)(uint)*param_1;
  if (0 < iVar1) {
    piVar12 = (int *)(*(int *)(param_1 + 2) + -4);
    do {
      do {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        iVar2 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar11) *
                     (float)(longlong)iVar1);
      } while (iVar2 == iVar13);
      iVar13 = iVar13 + 1;
      piVar12 = piVar12 + 1;
      iVar10 = *piVar12;
      iVar2 = *(int *)((uint)*param_1 * iVar2 + *(int *)(param_1 + 2));
      uVar3 = *(undefined4 *)(iVar10 + 0x14);
      uVar4 = *(undefined4 *)(iVar10 + 0x18);
      uVar9 = *(undefined2 *)(iVar10 + 8);
      uVar5 = *(undefined4 *)(iVar10 + 0x1c);
      uVar6 = *(undefined4 *)(iVar10 + 0x20);
      uVar7 = *(undefined4 *)(iVar10 + 0x24);
      uVar8 = *(undefined4 *)(iVar10 + 0x28);
      *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
      *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)(iVar2 + 0x24);
      *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
      *(undefined2 *)(iVar10 + 8) = *(undefined2 *)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
      *(undefined4 *)(iVar2 + 0x18) = uVar4;
      *(undefined4 *)(iVar2 + 0x1c) = uVar5;
      *(undefined4 *)(iVar2 + 0x20) = uVar6;
      *(undefined4 *)(iVar2 + 0x24) = uVar7;
      *(undefined4 *)(iVar2 + 0x28) = uVar8;
      *(undefined2 *)(iVar2 + 8) = uVar9;
    } while (iVar13 < iVar1);
    return;
  }
  return;
}

