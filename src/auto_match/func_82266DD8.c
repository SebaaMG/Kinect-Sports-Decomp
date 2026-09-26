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
extern int fn_82266230();
extern int fn_82267218();
extern int fn_82267308();
extern int fn_82267460();
extern int fn_82267628();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82522D98();
extern int fn_8265C9E0();
extern int fn_82A1DD38();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_821A8C90;
extern unsigned int uStack00000034;


int fn_82266DD8(int param_1,uint *param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar5;
  longlong lVar9;
  uint *puVar10;
  int *piVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar16;
  longlong lVar15;
  uint uStack00000034;
  
  *(int *)(param_1 + 0x460) = (int)param_3;
  uStack00000034 = (uint)param_5;
  fn_82F68CC0(param_1 + 0x470,param_2,0x150);
  *(undefined ***)(param_1 + 0x5c4) = &lbl_821A8C90;
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  *(int *)(param_1 + 0x5c8) = param_1;
  *(code **)(param_1 + 0x5cc) = fn_82267308;
  *(code **)(param_1 + 0x5d0) = fn_82BA02A8;
  piVar7 = (int *)0x0;
  *(code **)(param_1 + 0x5d4) = fn_82BA02A8;
  piVar8 = (int *)0x0;
  uVar4 = fn_8265C9E0(0x78);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_82267460(uVar4,param_1 + 0x5c4,*(undefined4 *)(param_1 + 0x588),param_1 + 0x598
                              ,param_1 + 0x59c,param_3,param_4);
  }
  puVar10 = param_2 + 0x4c;
  *(undefined4 *)(param_1 + 0x5c0) = uVar6;
  if ((((puVar10 == (uint *)0x0) || (*puVar10 == 0)) ||
      (puVar16 = param_2 + 0x4d, puVar16 == (uint *)0x0)) ||
     (uVar4 = (ulonglong)*puVar16, uVar4 == (uVar4 - 1) + (ulonglong)(uVar4 == 0))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    piVar7 = (int *)fn_8251F720(puVar10,0);
    piVar8 = (int *)fn_8251F720(puVar16,0);
    for (piVar11 = piVar7; (piVar2 = piVar8, piVar11 != (int *)0x0 && (*piVar11 != 0));
        piVar11 = (int *)(-(uint)(piVar11[1] != 0) & (uint)(piVar11 + 1))) {
    }
    for (; (piVar2 != (int *)0x0 && (*piVar2 != 0));
        piVar2 = (int *)(-(uint)(piVar2[1] != 0) & (uint)(piVar2 + 1))) {
    }
  }
  lVar15 = 0;
  if (0 < (int)param_2[2]) {
    lVar14 = 0;
    pfVar12 = (float *)(param_2 + 0x3f);
    iVar13 = param_1;
    do {
      lVar9 = (ulonglong)*(uint *)(param_1 + 0x47c) + lVar15;
      pfVar12 = pfVar12 + 1;
      fn_82266230((double)*pfVar12,(double)(float)param_2[0x45],iVar13,
                        lVar14 + (ulonglong)*param_2,lVar9,lVar9,param_2 + 0x47,param_2 + 0x48);
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x48;
      iVar13 = iVar13 + 0xe0;
    } while ((int)lVar15 < (int)param_2[2]);
    param_5 = (ulonglong)uStack00000034;
  }
  if (bVar3) {
    fn_8251FA58(piVar7);
    fn_8251FA58(piVar8);
  }
  if ((param_5 & 0xffffffff) == 0) {
    *(undefined4 *)(param_1 + 0x5dc) = 0;
  }
  else {
    uVar5 = fn_82522D98((ulonglong)param_2[1] * 0x24);
    *(int *)(param_1 + 0x5dc) = (int)uVar5;
    fn_82A1DD38(uVar5,param_5,(ulonglong)param_2[1] * 0x24);
  }
  fn_82267218(param_1);
  if ((int)param_2[2] < (int)param_2[1]) {
    fn_82266230((double)(float)param_2[0x44],(double)(float)param_2[0x45],param_1 + 0x380,
                      0xffffffff821a7cd0,4,4,param_2 + 0x47,param_2 + 0x48);
    uVar1 = param_2[0x49];
    *(undefined4 *)(param_1 + 0x454) = 0;
    *(uint *)(param_1 + 0x450) = uVar1;
    fn_82267628(*(undefined4 *)(param_1 + 0x5c0),param_1 + 0x380);
  }
  return param_1;
}

