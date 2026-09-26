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
extern unsigned int INFINITY;
extern int fn_82AC6560();
extern int fn_82F6DFB0();
extern unsigned int lbl_82005710;


bool fn_82B82378(double param_1,double param_2,int param_3,ulonglong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  double dVar10;
  
  iVar3 = fn_82F6DFB0();
  if (iVar3 == 0) {
    param_1 = -INFINITY;
  }
  iVar3 = fn_82F6DFB0(param_2);
  if (iVar3 == 0) {
    param_2 = INFINITY;
  }
  uVar2 = *(ushort *)(param_3 + 0xe) >> ((uint)((param_4 & 0xffffffff) << 2) & 0x3c) & 0xf;
  uVar1 = (uint)((param_4 & 0xffffffff) << 2);
  if (uVar2 == 2) {
    param_1 = lbl_82005710;
    if (param_2 < lbl_82005710) {
      param_2 = lbl_82005710;
    }
  }
  else if ((uVar2 == 1) && (param_2 = lbl_82005710, lbl_82005710 < param_1)) {
    param_1 = lbl_82005710;
  }
  for (piVar4 = *(int **)(param_3 + 0x10); (piVar4 != (int *)0x0 && (*piVar4 != 1));
      piVar4 = (int *)piVar4[1]) {
  }
  dVar10 = lbl_82005710;
  if (piVar4 == (int *)0x0) {
    if ((param_1 == -INFINITY) && (param_2 == INFINITY)) {
      return false;
    }
    piVar4 = (int *)fn_82AC6560(param_7,0x48,0x17);
    piVar5 = piVar4 + 8;
    *piVar4 = 1;
    lVar9 = 4;
    do {
      piVar5[-0xffffffff00000006] = -0x100000;
      piVar5[-0xffffffff00000005] = 0;
      piVar5 = piVar5 + 2;
      piVar5[0] = 0x7ff00000;
      piVar5[1] = 0;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    piVar4[1] = *(int *)(param_3 + 0x10);
    *(int **)(param_3 + 0x10) = piVar4;
  }
  iVar3 = (int)((param_4 + 1 & 0xffffffff) << 3);
  bVar7 = *(double *)(iVar3 + (int)piVar4) != param_1;
  if (bVar7) {
    *(double *)(iVar3 + (int)piVar4) = param_1;
  }
  iVar3 = (int)((param_4 + 5 & 0xffffffff) << 3);
  bVar8 = *(double *)(iVar3 + (int)piVar4) != param_2;
  if (bVar8) {
    *(double *)(iVar3 + (int)piVar4) = param_2;
  }
  bVar8 = bVar8 || bVar7;
  uVar6 = 0;
  if (dVar10 <= param_1) {
    uVar6 = 2;
  }
  if (param_2 <= dVar10) {
    uVar6 = uVar6 | 1;
  }
  if (uVar2 != uVar6) {
    uVar6 = uVar6 << (uVar1 & 0x3c);
    uVar1 = 3 << (uVar1 & 0x3c);
    bVar7 = (*(uint *)(param_3 + 0xc) & uVar1 & 0xffff) != uVar6;
    if (bVar7) {
      *(ushort *)(param_3 + 0xe) = (ushort)*(uint *)(param_3 + 0xc) & ~(ushort)uVar1 | (ushort)uVar6
      ;
    }
    bVar8 = bVar7 || bVar8;
  }
  return bVar8;
}

