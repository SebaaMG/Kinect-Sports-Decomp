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
extern int fn_822315A0();
extern int fn_82398DA0();
extern int fn_8239A928();
extern int fn_8239AB20();
extern int fn_823ADF20();
extern int fn_823AE180();
extern int fn_824BD858();
extern int fn_82508078();
extern int fn_8265CA20();
extern int fn_82F63CA0();
extern unsigned int lbl_8218EC10;


void fn_8239A6B0(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  double dVar9;
  
  fn_8239A928();
  puVar1 = *(undefined4 **)(param_2 + 0x1a8);
  for (puVar6 = *(undefined4 **)(param_2 + 0x1a4); puVar6 != puVar1; puVar6 = puVar6 + 1) {
    fn_823AE180(param_1,*puVar6);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x1c8);
  for (puVar6 = *(undefined4 **)(param_2 + 0x1c4); puVar6 != puVar1; puVar6 = puVar6 + 1) {
    fn_823AE180(param_1,*puVar6);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x1b8);
  for (puVar6 = *(undefined4 **)(param_2 + 0x1b4); puVar6 != puVar1; puVar6 = puVar6 + 1) {
    fn_823AE180(param_1,*puVar6);
  }
  piVar8 = *(int **)(param_2 + 0x830);
  piVar5 = (int *)*piVar8;
  while (piVar5 != piVar8) {
    if ((*(int *)(piVar5[2] + 4) == 0) ||
       (bVar4 = false, *(int *)(*(int *)(piVar5[2] + 4) + 4) == 0)) {
      bVar4 = true;
    }
    piVar7 = piVar5;
    if ((bVar4) && (piVar7 = (int *)*piVar5, piVar5 != *(int **)(param_2 + 0x830))) {
      *(int **)piVar5[1] = piVar7;
      *(int *)(*piVar5 + 4) = piVar5[1];
      if (piVar5[3] != 0) {
        fn_822315A0();
      }
      fn_8265CA20(piVar5);
      *(int *)(param_2 + 0x834) = *(int *)(param_2 + 0x834) + -1;
    }
    piVar8 = *(int **)(param_2 + 0x830);
    piVar5 = (int *)*piVar7;
  }
  piVar8 = *(int **)(param_2 + 0x1a4);
  if (piVar8 != *(int **)(param_2 + 0x1a8)) {
    piVar5 = piVar8 + 1;
    dVar9 = (double)lbl_8218EC10;
    do {
      if (dVar9 < (double)*(float *)(*piVar8 + 0x13c)) {
        piVar8 = piVar8 + 1;
        piVar5 = piVar5 + 1;
      }
      else {
        fn_82398DA0(param_2);
        iVar2 = *piVar8;
        if (iVar2 != 0) {
          fn_823ADF20(iVar2);
          fn_8265CA20(iVar2);
        }
        fn_82F63CA0(piVar8,piVar5,(*(int *)(param_2 + 0x1a8) - (int)piVar5 >> 2) << 2);
        *(int *)(param_2 + 0x1a8) = *(int *)(param_2 + 0x1a8) + -4;
      }
    } while (piVar8 != *(int **)(param_2 + 0x1a8));
  }
  if (*(int *)(param_2 + 0x1e4) != 0) {
    fn_823AE180(param_1);
    iVar2 = *(int *)(param_2 + 0x178);
    if (iVar2 != 2) {
      iVar3 = *(int *)(param_2 + 0x1e4);
      if ((*(int *)(iVar3 + 0x1a0) == 0) || (*(int *)(iVar3 + 0x18c) == 0)) {
        if ((*(int *)(iVar3 + 0x11c) != 0) && (iVar2 == 0)) {
          fn_82508078(*(undefined4 *)(param_2 + 0xa4),0xffffffff821b4da8,0);
        }
      }
      else {
        if (iVar2 == 0) {
          fn_82508078(*(undefined4 *)(param_2 + 0xa4),0xffffffff821b4d98,0);
        }
        fn_824BD858((double)*(float *)(param_2 + 900),(double)*(float *)(param_2 + 0x388));
      }
    }
  }
  fn_8239AB20(param_2);
  return;
}

