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
extern int fn_82BC0088();


void fn_82BD2050(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar1 = *(int *)(param_1 + 0x60);
  uVar2 = *(uint *)(iVar1 + 4);
  if (0 < (int)uVar2) {
    iVar12 = 0;
    uVar14 = 0;
    uVar10 = uVar2;
    do {
      uVar11 = uVar14 + 1;
      uVar15 = uVar11;
      iVar13 = iVar12;
      if ((uVar11 & 0xffffffff) < (ulonglong)uVar10) {
        do {
          iVar13 = iVar13 + 4;
          if ((uVar14 & 0xffffffff) < (ulonglong)uVar10) {
            piVar7 = (int *)(*(int *)(iVar1 + 8) + iVar12);
          }
          else {
            piVar7 = (int *)fn_82BC0088(iVar1,uVar14);
          }
          iVar3 = *(int *)(*(int *)(*piVar7 + 4) + 4);
          if ((uVar14 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
            puVar9 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar12);
          }
          else {
            puVar9 = (undefined4 *)fn_82BC0088(iVar1,uVar14);
          }
          iVar4 = *(int *)*puVar9;
          if ((uVar15 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
            piVar7 = (int *)(*(int *)(iVar1 + 8) + iVar13);
          }
          else {
            piVar7 = (int *)fn_82BC0088(iVar1,uVar15);
          }
          iVar5 = *(int *)(*(int *)(*piVar7 + 4) + 4);
          if ((uVar15 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
            puVar9 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar13);
          }
          else {
            puVar9 = (undefined4 *)fn_82BC0088(iVar1,uVar15);
          }
          if ((iVar4 + -1) * iVar3 < (*(int *)*puVar9 + -1) * iVar5) {
            if ((uVar14 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
              puVar9 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar12);
            }
            else {
              puVar9 = (undefined4 *)fn_82BC0088(iVar1,uVar14);
            }
            uVar6 = *puVar9;
            if ((uVar15 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
              puVar9 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar13);
            }
            else {
              puVar9 = (undefined4 *)fn_82BC0088(iVar1,uVar15);
            }
            if ((uVar14 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
              puVar8 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar12);
            }
            else {
              puVar8 = (undefined4 *)fn_82BC0088(iVar1,uVar14);
            }
            *puVar8 = *puVar9;
            if ((uVar15 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
              puVar9 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar13);
            }
            else {
              puVar9 = (undefined4 *)fn_82BC0088(iVar1,uVar15);
            }
            *puVar9 = uVar6;
          }
          uVar10 = *(uint *)(iVar1 + 4);
          uVar15 = uVar15 + 1;
        } while ((uVar15 & 0xffffffff) < (ulonglong)uVar10);
      }
      iVar12 = iVar12 + 4;
      uVar14 = uVar11;
    } while ((int)uVar11 < (int)uVar2);
  }
  return;
}

