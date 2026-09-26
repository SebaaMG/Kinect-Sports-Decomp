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
extern unsigned int *auStack_60;
extern int fn_82293FE8();
extern int fn_82294070();
extern int fn_82294138();
extern int fn_82294200();
extern int fn_82299AC8();
extern int fn_8229A000();
extern int fn_8229F5A8();
extern int fn_8229F618();
extern int fn_8229F758();
extern int fn_8229FB68();
extern int fn_8229FC30();
extern int fn_8229FCE8();
extern int fn_82528EE0();
extern unsigned int lbl_82193B00;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821CC160;


void fn_82409400(int param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auStack_60 [96];
  
  piVar2 = *(int **)(param_1 + 0x14);
  iVar5 = (**(code **)(*piVar2 + 4))(piVar2);
  dVar11 = (double)(*(float *)(iVar5 + 0x4e8) / *(float *)(iVar5 + 0x4e0));
  iVar6 = (**(code **)(*piVar2 + 4))(piVar2);
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
  iVar6 = *(int *)(iVar6 + 0x2c) * 0x1c + iVar5;
  if ((double)*(float *)(iVar6 + 0x2c) != dVar11) {
    fn_8229FB68(dVar11,*(undefined4 *)(iVar5 + 0xc));
    *(float *)(iVar6 + 0x2c) = (float)dVar11;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  iVar5 = (**(code **)(*piVar2 + 4))(piVar2);
  iVar5 = *(int *)(iVar5 + 0x5c0);
  iVar7 = (**(code **)(*piVar2 + 4))(piVar2);
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
  iVar9 = *(int *)(iVar7 + 0x2c) * 0x1c + iVar6;
  if (*(int *)(iVar9 + 0x34) != iVar5) {
    fn_8229FC30(*(undefined4 *)(iVar6 + 0xc),*(int *)(iVar7 + 0x2c),iVar5);
    *(int *)(iVar9 + 0x34) = iVar5;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  iVar5 = (**(code **)(*piVar2 + 4))(piVar2);
  uVar3 = *(undefined4 *)(iVar5 + 0x7a0);
  iVar5 = (**(code **)(*piVar2 + 4))(piVar2);
  fn_82294070(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),
                  *(undefined4 *)(iVar5 + 0x2c),uVar3);
  piVar2 = *(int **)(param_1 + 0x14);
  iVar5 = (**(code **)(*piVar2 + 4))(piVar2);
  uVar3 = *(undefined4 *)(iVar5 + 0x7a4);
  iVar5 = (**(code **)(*piVar2 + 4))(piVar2);
  fn_82294200(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),
                  *(undefined4 *)(iVar5 + 0x2c),uVar3);
  iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  if (*(int *)(iVar5 + 0x5c0) == 0) {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    fn_82293FE8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),
                    *(undefined4 *)(iVar5 + 0x2c));
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  if (lbl_82193B00 < *(float *)(iVar5 + 0x4ec) / *(float *)(*(int *)(iVar5 + 0x504) + 0x10)) {
LAB_8240962c:
    uVar10 = 1;
  }
  else {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    uVar10 = 0;
    if (*(int *)(iVar5 + 0x7a4) != 0) goto LAB_8240962c;
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  fn_82294138(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),
                  *(undefined4 *)(iVar5 + 0x2c),uVar10);
  piVar2 = *(int **)(param_1 + 0x14);
  iVar5 = *piVar2;
  uVar10 = (**(code **)(iVar5 + 4))(piVar2);
  iVar5 = (**(code **)(iVar5 + 0xc))(piVar2,uVar10);
  iVar5 = *(int *)(iVar5 + 0x78c);
  iVar7 = (**(code **)(*piVar2 + 4))(piVar2);
  iVar9 = (*(int *)(iVar7 + 0x2c) + 2) * 0x1c;
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
  if (*(int *)(iVar9 + iVar6) != iVar5) {
    fn_8229FCE8(*(undefined4 *)(iVar6 + 0xc),*(int *)(iVar7 + 0x2c),iVar5);
    *(int *)(iVar9 + iVar6) = iVar5;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  iVar5 = (**(code **)(*piVar2 + 8))(piVar2);
  dVar11 = (double)(*(float *)(iVar5 + 0x4e8) / *(float *)(iVar5 + 0x4e0));
  iVar6 = (**(code **)(*piVar2 + 8))(piVar2);
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
  iVar6 = *(int *)(iVar6 + 0x2c) * 0x1c + iVar5;
  if ((double)*(float *)(iVar6 + 0x2c) != dVar11) {
    fn_8229FB68(dVar11,*(undefined4 *)(iVar5 + 0xc));
    *(float *)(iVar6 + 0x2c) = (float)dVar11;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  iVar5 = (**(code **)(*piVar2 + 8))(piVar2);
  iVar5 = *(int *)(iVar5 + 0x5c0);
  iVar7 = (**(code **)(*piVar2 + 8))(piVar2);
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
  iVar9 = *(int *)(iVar7 + 0x2c) * 0x1c + iVar6;
  if (*(int *)(iVar9 + 0x34) != iVar5) {
    fn_8229FC30(*(undefined4 *)(iVar6 + 0xc),*(int *)(iVar7 + 0x2c),iVar5);
    *(int *)(iVar9 + 0x34) = iVar5;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  iVar5 = (**(code **)(*piVar2 + 8))(piVar2);
  uVar3 = *(undefined4 *)(iVar5 + 0x7a0);
  iVar5 = (**(code **)(*piVar2 + 8))(piVar2);
  fn_82294070(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),
                  *(undefined4 *)(iVar5 + 0x2c),uVar3);
  piVar2 = *(int **)(param_1 + 0x14);
  iVar5 = (**(code **)(*piVar2 + 8))(piVar2);
  uVar3 = *(undefined4 *)(iVar5 + 0x7a4);
  iVar5 = (**(code **)(*piVar2 + 8))(piVar2);
  fn_82294200(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),
                  *(undefined4 *)(iVar5 + 0x2c),uVar3);
  iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  if (*(int *)(iVar5 + 0x5c0) == 0) {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
    fn_82293FE8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),
                    *(undefined4 *)(iVar5 + 0x2c));
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  if (lbl_82193B00 < *(float *)(iVar5 + 0x4ec) / *(float *)(*(int *)(iVar5 + 0x504) + 0x10)) {
LAB_824098e8:
    uVar10 = 1;
  }
  else {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
    uVar10 = 0;
    if (*(int *)(iVar5 + 0x7a4) != 0) goto LAB_824098e8;
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  fn_82294138(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),
                  *(undefined4 *)(iVar5 + 0x2c),uVar10);
  piVar2 = *(int **)(param_1 + 0x14);
  iVar5 = *piVar2;
  uVar10 = (**(code **)(iVar5 + 8))(piVar2);
  iVar5 = (**(code **)(iVar5 + 0xc))(piVar2,uVar10);
  iVar5 = *(int *)(iVar5 + 0x78c);
  iVar7 = (**(code **)(*piVar2 + 8))(piVar2);
  iVar9 = (*(int *)(iVar7 + 0x2c) + 2) * 0x1c;
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
  if (*(int *)(iVar9 + iVar6) != iVar5) {
    fn_8229FCE8(*(undefined4 *)(iVar6 + 0xc),*(int *)(iVar7 + 0x2c),iVar5);
    *(int *)(iVar9 + iVar6) = iVar5;
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  if (*(int *)(iVar5 + 0x7a0) == 0) {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
    bVar8 = false;
    if (*(int *)(iVar5 + 0x7a0) != 0) goto LAB_824099d8;
  }
  else {
LAB_824099d8:
    bVar8 = true;
  }
  if ((*(int *)(*(int *)(param_1 + 0x14) + 0x14) != 0) ||
     (bVar4 = false, *(int *)(*(int *)(param_1 + 0x14) + 0x2c) != 0)) {
    bVar4 = true;
  }
  if ((bVar8) || (bVar4)) {
    fn_8229F618(*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4) + 0xc)
                     );
  }
  else {
    fn_8229F5A8(*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4) + 0xc)
                     );
  }
  iVar5 = *(int *)(param_1 + 0x14);
  dVar11 = lbl_82195598;
  if (*(int *)(iVar5 + 0x14) == 0) {
    if (*(int *)(iVar5 + 0x2c) == 0) {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
      fn_8229A000(iVar5 + 0x129c);
      *(undefined4 *)(iVar5 + 0x24cc) = 0xffffffff;
      goto LAB_82409b08;
    }
    fVar1 = *(float *)(iVar5 + 0x28);
  }
  else {
    fVar1 = *(float *)(iVar5 + 0x10);
  }
  iVar5 = (int)(float)(longlong)((double)fVar1 - lbl_82195598);
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
  if (*(int *)(iVar6 + 0x24cc) != iVar5) {
    fn_82528EE0(auStack_60,0x10,0xffffffff821aa638,iVar5);
    fn_82299AC8(iVar6 + 0x129c,auStack_60);
    *(int *)(iVar6 + 0x24cc) = iVar5;
  }
LAB_82409b08:
  fn_8229F758((double)lbl_821CC160,
                    (double)(longlong)((double)*(float *)(param_1 + 0x18) + dVar11),
                    *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4) + 0xc));
  return;
}

