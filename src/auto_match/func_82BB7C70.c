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
extern int fn_82BD3128();
extern int fn_82BD3260();
extern unsigned int lbl_82005758;


void fn_82BB7C70(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  double dVar14;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + 4);
  uVar11 = (ulonglong)uVar1 - 1;
  if (-1 < (longlong)uVar11) {
    lVar10 = (uVar11 & 0x3fffffff) << 2;
    do {
      iVar12 = *(int *)(param_1 + 0x18);
      if ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(iVar12 + 4)) {
        piVar2 = (int *)(*(int *)(iVar12 + 8) + (int)lVar10);
      }
      else {
        piVar2 = (int *)fn_82BC0088(iVar12,uVar11);
      }
      iVar12 = *piVar2;
      uVar13 = 0;
      iVar9 = *(int *)(*(int *)(iVar12 + 0x30) + 4);
      if (0 < iVar9) {
        iVar7 = 0;
        do {
          iVar6 = *(int *)(iVar12 + 0x30);
          if ((uVar13 & 0xffffffff) < (ulonglong)*(uint *)(iVar6 + 4)) {
            piVar2 = (int *)(*(int *)(iVar6 + 8) + iVar7);
          }
          else {
            piVar2 = (int *)fn_82BC0088(iVar6,uVar13);
          }
          iVar6 = *(int *)(*piVar2 + 4);
          *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 1;
          iVar8 = *(int *)(iVar12 + 0x30);
          if ((uVar13 & 0xffffffff) < (ulonglong)*(uint *)(iVar8 + 4)) {
            piVar2 = (int *)(*(int *)(iVar8 + 8) + iVar7);
          }
          else {
            piVar2 = (int *)fn_82BC0088(iVar8,uVar13);
          }
          iVar5 = *(int *)(iVar6 + 0x14) + *(int *)(*piVar2 + 0xc);
          iVar8 = *(int *)(iVar12 + 0x14);
          if (*(int *)(iVar12 + 0x14) < iVar5) {
            iVar8 = iVar5;
          }
          *(int *)(iVar12 + 0x14) = iVar8;
          cVar3 = fn_82BD3260(*(undefined4 *)(iVar6 + 0x28));
          iVar6 = *(int *)(iVar6 + 0xc);
          if (cVar3 != '\0') {
            iVar6 = iVar6 + 1;
          }
          iVar8 = *(int *)(iVar12 + 0xc);
          if (*(int *)(iVar12 + 0xc) < iVar6) {
            iVar8 = iVar6;
          }
          uVar13 = uVar13 + 1;
          *(int *)(iVar12 + 0xc) = iVar8;
          iVar7 = iVar7 + 4;
        } while ((int)uVar13 < iVar9);
      }
      fn_82BD3128(*(undefined4 *)(param_1 + 8),*(undefined4 *)(iVar12 + 0x28));
      iVar9 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(iVar9 + 0x10);
      if (*(int *)(iVar9 + 0x14) < iVar7) {
        iVar9 = *(int *)(iVar9 + 0x18);
      }
      else {
        uVar4 = *(int *)(iVar9 + 0x14) + iVar7;
        iVar7 = *(int *)(iVar9 + 0x18);
        iVar9 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      }
      uVar13 = 0;
      *(int *)(iVar12 + 0x18) = iVar9 + iVar7;
      iVar9 = *(int *)(*(int *)(iVar12 + 0x34) + 4);
      if (0 < iVar9) {
        iVar7 = 0;
        do {
          iVar6 = *(int *)(iVar12 + 0x34);
          if ((uVar13 & 0xffffffff) < (ulonglong)*(uint *)(iVar6 + 4)) {
            piVar2 = (int *)(*(int *)(iVar6 + 8) + iVar7);
          }
          else {
            piVar2 = (int *)fn_82BC0088(iVar6,uVar13);
          }
          if (((int *)*piVar2)[2] == 0) {
            iVar6 = *(int *)*piVar2;
            *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + 1;
          }
          uVar13 = uVar13 + 1;
          iVar7 = iVar7 + 4;
        } while ((int)uVar13 < iVar9);
      }
      iVar9 = *(int *)(param_1 + 0x6c);
      if (*(int *)(param_1 + 0x6c) < *(int *)(iVar12 + 0x14)) {
        iVar9 = *(int *)(iVar12 + 0x14);
      }
      uVar11 = uVar11 - 1;
      *(int *)(param_1 + 0x6c) = iVar9;
      lVar10 = lVar10 + -4;
    } while (-1 < (longlong)uVar11);
  }
  uVar11 = 0;
  if (0 < (int)uVar1) {
    iVar12 = 0;
    dVar14 = lbl_82005758;
    do {
      iVar9 = *(int *)(param_1 + 0x18);
      if ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(iVar9 + 4)) {
        piVar2 = (int *)(*(int *)(iVar9 + 8) + iVar12);
      }
      else {
        piVar2 = (int *)fn_82BC0088(iVar9,uVar11);
      }
      iVar9 = *piVar2;
      uVar13 = 0;
      iVar7 = *(int *)(*(int *)(iVar9 + 0x34) + 4);
      if (0 < iVar7) {
        iVar6 = 0;
        do {
          iVar8 = *(int *)(iVar9 + 0x34);
          if ((uVar13 & 0xffffffff) < (ulonglong)*(uint *)(iVar8 + 4)) {
            piVar2 = (int *)(*(int *)(iVar8 + 8) + iVar6);
          }
          else {
            piVar2 = (int *)fn_82BC0088(iVar8,uVar13);
          }
          if ((((int *)*piVar2)[2] == 0) && (iVar8 = *(int *)(*(int *)*piVar2 + 0x3c), 0 < iVar8)) {
            *(float *)(iVar9 + 0x10) =
                 (float)(dVar14 / (double)(longlong)iVar8) + *(float *)(iVar9 + 0x10);
          }
          uVar13 = uVar13 + 1;
          iVar6 = iVar6 + 4;
        } while ((int)uVar13 < iVar7);
      }
      if (0 < *(int *)(iVar9 + 0x3c)) {
        *(float *)(iVar9 + 0x10) = (float)((double)*(float *)(iVar9 + 0x10) - dVar14);
      }
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 4;
    } while ((int)uVar11 < (int)uVar1);
  }
  return;
}

