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
extern int fn_82359698();
extern int fn_823693A0();
extern int fn_8236C428();
extern int fn_823C4C88();
extern int fn_823CC298();
extern int fn_823D9D60();
extern int fn_823E84E0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_823CD8F8(int param_1,ulonglong param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  *(undefined1 *)(param_1 + 0x1520) = 0;
  *(undefined1 *)(param_1 + 0x152c) = 0;
  fVar5 = lbl_821CC160;
  dVar10 = (double)lbl_821CC160;
  *(float *)(param_1 + 0x1538) = lbl_821CC160;
  *(undefined1 *)(param_1 + 0x1540) = 0;
  *(float *)(param_1 + 0x1580) = fVar5;
  *(undefined1 *)(param_1 + 0x1560) = 0;
  *(float *)(param_1 + 0x15d0) = fVar5;
  *(undefined1 *)(param_1 + 0x1590) = 0;
  *(undefined1 *)(param_1 + 0x15b0) = 0;
  *(float *)(param_1 + 0x1670) = fVar5;
  *(undefined1 *)(param_1 + 0x1630) = 0;
  *(undefined1 *)(param_1 + 0x1650) = 0;
  *(float *)(param_1 + 0x1620) = fVar5;
  *(undefined1 *)(param_1 + 0x15e0) = 0;
  *(undefined1 *)(param_1 + 0x1600) = 0;
  *(undefined1 *)(param_1 + 0xd51) = 1;
  *(undefined1 *)(param_1 + 0xd52) = 0;
  *(undefined1 *)(param_1 + 0xd50) = 0;
  *(undefined1 *)(param_1 + 0xd84) = 1;
  if (*(int *)(param_1 + 0x4c0) == 0) {
    uVar6 = fn_823D9D60(param_1,0);
    lVar7 = fn_823D9D60(uVar6,1);
    fn_823E84E0(param_4,*(undefined4 *)(param_1 + 8),lVar7 + 0xc,lVar7 + 0x1090);
  }
  if ((param_3 != *(int *)(param_1 + 0xde0)) ||
     (bVar4 = true, (param_2 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0xde4))) {
    bVar4 = false;
  }
  if ((bVar4) && (iVar8 = *(int *)(param_1 + 0xdf0), iVar8 != 0)) {
    iVar2 = (iVar8 + 0x26e) * 8;
    iVar9 = *(int *)(iVar2 + param_1);
    *(float *)(iVar8 * 8 + param_1 + 0x1374) = (float)dVar10;
    *(int *)(iVar2 + param_1) = iVar9 + 1;
  }
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_3 * 4);
  iVar8 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),param_2);
  iVar9 = fn_823693A0(param_1,iVar8);
  if (iVar9 != 0) {
    *(float *)(param_1 + 0xef4) = (float)dVar10;
    fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),0x20);
    fn_823C4C88(param_1);
    iVar9 = *(int *)(param_1 + 0x41c);
    if ((((iVar9 == 1) || (iVar9 == 0xb)) || (iVar9 == 0xc)) &&
       (*(int *)(*(int *)(param_1 + 0x9a4) + 0x2c) == param_3)) {
      iVar9 = param_3 * 0x84 + *(int *)(param_1 + 0x4bc);
      *(int *)(iVar9 + 0x40) = *(int *)(iVar9 + 0x40) + 1;
    }
  }
  if ((*(int *)(param_1 + 0x41c) != 0) || (*(int *)(param_1 + 0x420) != -1)) {
    *(float *)(param_1 + 0x428) = (float)dVar10;
    *(undefined4 *)(param_1 + 0x41c) = 0;
    *(undefined4 *)(param_1 + 0x420) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x424) = 0xffffffff;
  }
  if (((bVar4) && (*(char *)(param_4 + 0x15) == '\0')) &&
     ((*(int *)(param_1 + 0xdd4) != 0 && (*(int *)(param_1 + 0x9a0) != 0)))) {
    puVar3 = (undefined4 *)(param_1 + 0xdc0U & 0xfffffff0);
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    uVar13 = puVar3[2];
    uVar14 = puVar3[3];
    *(undefined4 *)(param_1 + 0x9e4) = 1;
    puVar3 = (undefined4 *)(param_1 + 0x9d0U & 0xfffffff0);
    *puVar3 = uVar11;
    puVar3[1] = uVar12;
    puVar3[2] = uVar13;
    puVar3[3] = uVar14;
  }
  if (*(int *)(param_1 + 0x9a0) != 0) {
    puVar3 = (undefined4 *)(param_4 + 0x20U & 0xfffffff0);
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    uVar13 = puVar3[2];
    uVar14 = puVar3[3];
    *(undefined4 *)(param_1 + 0x9e0) = 1;
    puVar3 = (undefined4 *)(param_1 + 0x9c0U & 0xfffffff0);
    *puVar3 = uVar11;
    puVar3[1] = uVar12;
    puVar3[2] = uVar13;
    puVar3[3] = uVar14;
  }
  fn_8236C428(param_1);
  if ((*(int *)(iVar8 + 0x1ec) != 0) && (*(int *)(param_1 + 0x54) == 2)) {
    fn_82359698(param_1,6);
  }
  iVar8 = *(int *)(param_1 + 0xe10);
  *(undefined1 *)(iVar8 + 0xb98) = 0;
  *(undefined1 *)(iVar8 + 0xb99) = 0;
  *(undefined4 *)(iVar8 + 0xb90) = *(undefined4 *)(iVar8 + 0xb70);
  *(undefined4 *)(iVar8 + 0xb94) = *(undefined4 *)(iVar8 + 0xb74);
  iVar8 = *(int *)(param_1 + 0xe10);
  puVar3 = (undefined4 *)(iVar8 + 0xb60U & 0xfffffff0);
  uVar11 = *puVar3;
  uVar12 = puVar3[1];
  uVar13 = puVar3[2];
  uVar14 = puVar3[3];
  *(undefined1 *)(iVar8 + 0xbb0) = 0;
  puVar3 = (undefined4 *)(iVar8 + 0xba0U & 0xfffffff0);
  *puVar3 = uVar11;
  puVar3[1] = uVar12;
  puVar3[2] = uVar13;
  puVar3[3] = uVar14;
  *(undefined1 *)(iVar8 + 0xbb1) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xe10) + 0xc20) = lbl_821CA460;
  return;
}

